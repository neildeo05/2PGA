// Borrowed from <https://zipcpu.com/blog/2017/06/21/looking-at-verilator.html> and <https://itsembedded.com/dhd/verilator_4/>
#include <verilated_vcd_c.h>
#include <deque>
#include <stdio.h>
#include <cstdlib>
#include <ctime>
#include <cassert>
#include <cinttypes>
#include <bitset>
// #include "coverage.hpp"
#define PCT_GEN 4
#define SEED 1337
#define DEBUG 0
#define COVER 0

struct InputTx {
  // Define Inputs to module
  // 6 bits
  unsigned int input_configuration_word;
  unsigned int lut_configuration_word;
  // 3 bits
  unsigned int flip_flop_configuration_word;
  // 2 bits
  unsigned int output_configuration_word;
  bool A;
  bool B;
  bool C;
  bool D;

};

struct OutputTx {
  // Define Outputs of module
  bool x;
  bool y;
};



InputTx* create_input_tx() {
  // Create transaction item 25% of the time, instead of 20% of the time, so we can drive it more often
  int rando = rand() % PCT_GEN;
  if(rando) {
    InputTx* tx = new InputTx;
    // Set input tx based on random values
    tx->input_configuration_word = rand() % 64;
    // MUX
    tx->lut_configuration_word = 0b1101100011011000;
    tx->flip_flop_configuration_word = rand() % 8;
    tx->output_configuration_word = rand() % 4;
    tx->A = rand() % 2;
    tx->B = rand() % 2;
    tx->C = rand() % 2;
    tx->D = rand() % 2;
    return tx;
  }
  else return NULL;
}

#define debug(...) if(DEBUG) printf(__VA_ARGS__);
#define TEST(case, string) assert(case); printf("\033[1;32mPASSED:\033[0m %s\n", string);

struct Scoreboard {
  std::deque<InputTx*> inputs;
  // To get Inputs to match up with their corresponding outputs
  bool delay_flag;
  void input_write(InputTx* input_value) {
    inputs.push_back(input_value);
  }
  void output_write(OutputTx* output_value) {
    assert(!inputs.empty());
    InputTx* in = inputs.front();
    // Since the inputs are delivered per rising edge, we expect output to show up on the next rising edge, thats why we need to delay the first input
    // until actual outputs are being received.
    if(!delay_flag) {
      delay_flag = 1;
      delete output_value;
    } else {
      printf("========== PACKET PRINTOUT START ==========\n");
      std::bitset<6> bits_icw(in->input_configuration_word);
      std::bitset<16> bits_lcw(in->lut_configuration_word);
      std::bitset<3> bits_fcw(in->flip_flop_configuration_word);
      std::bitset<2> bits_ocw(in->output_configuration_word);
      // debug("Input Configuration -> %d\n", in->input_configuration_word);
      // debug("LUT Mask -> %d\n", in->lut_configuration_word);
      // debug("Flip Flop Configuration -> %d\n", in->flip_flop_configuration_word);
      // debug("Output Configuration -> %d\n", in->output_configuration_word);
      std::cout << "Input Configuration -> " << bits_icw << std::endl;
      std::cout << "Lut Configuration -> " << bits_lcw << std::endl;
      std::cout << "FF Configuration -> " << bits_fcw << std::endl;
      std::cout << "Output Configuration -> " << bits_ocw << std::endl;
      printf("A -> %d\n", in->A);
      printf("B -> %d\n", in->B);
      printf("C -> %d\n", in->C);
      printf("D -> %d\n", in->D);
      printf("x -> %d\n", output_value->x);
      printf("y -> %d\n", output_value->y);
      // debug("\n");
      printf("========== PACKET PRINTOUT  END  ==========\n");
      printf("\n\n\n");
      printf("========== PACKET EVALUATION BEGIN  ==========\n");
      // This is the space to evaluate whether the packets are correct or not

      unsigned int inps[] = {in->A, in->B, in->C, in->D};
      unsigned int lut_1_inps[3];
      unsigned int lut_2_inps[3];
      for(int i = 0; i < 3; i++) {
        if(bits_icw[i]) { lut_1_inps[i] = inps[i+1];debug("Input %d to first LUT is %d\n", i, inps[i+1]);}
        else {lut_1_inps[i] = inps[i]; debug("Input %d to first LUT is %d\n", i, inps[i]); }
      }
      for(int i = 0; i < 3; i++) {
        if(bits_icw[i+3]) { lut_2_inps[i] = inps[i+1]; debug("Input %d to second LUT is %d\n", i, inps[i+1]); }
        else { lut_2_inps[i] = inps[i]; debug("Input %d to second LUT is %d\n",i, inps[i]);}
      }

      auto mux = [](int inp1, int inp2, int inp3) {
        return (inp3) ? inp2 : inp1;
      };


      int lut_2_expected_out = mux(lut_2_inps[0], lut_2_inps[1], lut_2_inps[2]);
      int lut_1_expected_out = mux(lut_1_inps[0], lut_1_inps[1], lut_1_inps[2]);

      if(bits_ocw[0]) {
        debug("X comes from the second CLB -> Output X = %d\n", lut_2_expected_out);
        TEST(output_value->x == lut_2_expected_out, "X (2nd CLB) output is as expected");
      }
      else {
        debug("X comes from the first CLB -> Output X = %d\n", lut_1_expected_out);
        TEST(output_value->x == lut_1_expected_out, "X (1st CLB) output is as expected");
      }

      if(bits_ocw[1]) {
        debug("Y comes from the second CLB -> Output Y = %d\n", lut_2_expected_out);
        TEST(output_value->y == lut_2_expected_out, "Y (2nd CLB) output is as expected");
      }
      else {
        debug("Y comes from the first CLB -> Output Y = %d\n", lut_1_expected_out);
        TEST(output_value->y == lut_1_expected_out, "Y (1st CLB) output is as expected");
      }

      printf("========== PACKET EVALUATION END  ==========\n");
      printf("\n\n\n");
      inputs.pop_front();
      delete in;
      delete output_value;
    }
  }
};
template<class Module> class TB {
public:
  unsigned long long cnt;
  unsigned long long max_cnt;
  Module* dut;
  VerilatedVcdC *trace;
  Scoreboard* scb;

  TB(unsigned long long _max_cnt) {
    max_cnt = _max_cnt;
    scb = new Scoreboard;
    dut = new Module;
    cnt = 0;
    Verilated::traceEverOn(true);
  }
  ~TB() {
    delete scb;
    delete dut;
  }
  virtual int should_tick() {
    return cnt != max_cnt;
  }
  virtual void start_trace (const char* fname) {
    trace = new VerilatedVcdC;
    dut->trace(trace, 99);
    trace->open(fname);
  }
  virtual void close_trace() {
    trace->close();
  }
  virtual void drive(InputTx* in_tx) {
    if(in_tx != NULL) {
      // any other conditions to not set test

      dut->input_configuration_word = in_tx->input_configuration_word;
      dut->lut_configuration_word = in_tx->lut_configuration_word;
      dut->flip_flop_configuration_word = in_tx->flip_flop_configuration_word;
      dut->output_configuration_word = in_tx->output_configuration_word;
      dut->A = in_tx->A;
      dut->B = in_tx->B;
      dut->C = in_tx->C;
      dut->D = in_tx->D;
      // dut->val = in_tx->val
      // make sure to delete the transaction
      delete in_tx;
    }
  }
  virtual void in_monitor() {
    InputTx* in_tx = new InputTx;
    //move dut values into tx values
    in_tx->input_configuration_word = dut->input_configuration_word;
    in_tx->lut_configuration_word = dut->lut_configuration_word;
    in_tx->flip_flop_configuration_word = dut->flip_flop_configuration_word;
    in_tx->output_configuration_word = dut->output_configuration_word;
    in_tx->A = dut->A;
    in_tx->B = dut->B;
    in_tx->C = dut->C;
    in_tx->D = dut->D;
    scb->input_write(in_tx);
  }
  virtual void out_monitor() {
    OutputTx* tx = new OutputTx;
    // move dut values into tx values
    tx->x = dut->x;
    tx->y = dut->y;
    scb->output_write(tx);
  }
  virtual void tick() {
    // evaluate falling edge
    // All that matters is the position of the evaluation. Either after driving it, or not at all.
    dut->clk ^= 1;
    dut->eval();
    if(!dut->reset && dut->clk) {
      InputTx* tx = create_input_tx();
      drive(tx);
      in_monitor();
      out_monitor();
    }
    trace->dump((int)cnt);
    cnt++;
    trace->flush();
  }
};
