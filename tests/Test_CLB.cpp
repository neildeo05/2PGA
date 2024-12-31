// Scan Chain Test
#include <stdlib.h>
#include <stdint.h>
#include <iostream>
#include <bitset>
#include "verilated.h"
#include "VCLB.h"
#include "tb.hpp"
#define DEBUG 1
#define PROG_TIME 27
#define TOT_TIME 50

#define debug(...) if(DEBUG) printf(__VA_ARGS__);
#define assertf(case, ...) assert(case); printf("\033[1;32mPASSED: \033[0m"); printf(__VA_ARGS__);
// #define assertf(case, ...) if (case == 1) printf("\033[1;32mPASSED: \033[0m"); else printf("\031[1;32mFAILED: \031[0m"); printf(__VA_ARGS__);

void check(int A, int B, int C, int D, int x, int y) {
  int input_configuration_word = 0b100010;
  int lut_configuration_word = 0b1101100011011000;
  int output_configuration_word = 0b01;
  int flip_flop_configuration_word = 0b000;
  std::bitset<6> bits_icw(input_configuration_word);
  std::bitset<16> bits_lcw(lut_configuration_word);
  std::bitset<3> bits_fcw(flip_flop_configuration_word);
  std::bitset<2> bits_ocw(output_configuration_word);
  int inps[] = {A, B, C, D};
  int lut_1_inps[3];
  int lut_2_inps[3];
  for(int i = 0; i < 3; i++) {
    if(bits_icw[i]) { lut_1_inps[i] = inps[i+1];debug("Input %d to first LUT is %d\n", i, inps[i+1]);}
    else {lut_1_inps[i] = inps[i]; debug("Input %d to first LUT is %d\n", i, inps[i]); }
  }
  printf("\n");
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
    assertf(x == lut_2_expected_out, "X (2nd CLB) output is as expected -> %d\n", x);
  }
  else {
    debug("X comes from the first CLB -> Output X = %d\n", lut_1_expected_out);
    assertf(x == lut_1_expected_out, "X (1st CLB) output is as expected -> %d\n", x);
  }

  if(bits_ocw[1]) {
    debug("Y comes from the second CLB -> Output Y = %d\n", lut_2_expected_out);
    assertf(y == lut_2_expected_out, "Y (2nd CLB) output is as expected -> %d\n", y);
  }
  else {
    debug("Y comes from the first CLB -> Output Y = %d\n", lut_1_expected_out);
    assertf(y == lut_1_expected_out, "Y (1st CLB) output is as expected -> %d\n", y);
  }
  printf("----------------------\n");

}



int main() {
  TB<VCLB>* tb = new TB<VCLB>(TOT_TIME);
  tb->start_trace("clb_out.fst");
  tb->to->cfg_en = 1;
  // Mux:
  // 000 -> 0: 0
  // 001 -> 0: 1
  // 010 -> 0: 2
  // 011 -> 1: 3
  // 100 -> 1: 4
  // 101 -> 0: 5
  // 110 -> 1: 6
  // 111 -> 1: 7


  // LUT Input 1 -> 11011000
  // LUT Input 2 -> 11011000
  // Currently the bitstream has 16 +  6 + 2 = 24 bits of configuration (+3 for flip-flop configuration)
  // int lut =  {1,1,0,1,1,0,0,0,1,1,0,1,1,0,0,0};
  /*
  a | b | c | out
  0   0   0    0
  0   0   1    0
  0   1   0    0
  0   1   1    1
  1   0   0    1
  1   0   1    0
  1   1   0    1
  1   1   1    1
   */



  // int inp = {1,0,0,0,1,0};
  // Y gets G, X gets F
  // int out = {0,1};

  // |--2---|----3-----|-16-|--6--|
  // [output][flip-flop][lut][input]
  int bitstream[27] = {0, 1, 0,0,0, 1,1,0,1,1,0,0,0,1,1,0,1,1,0,0,0,1,0,0,0,1,0};
  int counter = 0;
  while(tb->should_tick()) {
      if(counter >= PROG_TIME) {
        tb->to->cfg_en = 0;
        if(rand() % 4) {
          tb->to->A = (bool) (rand() % 2);
          tb->to->B = (bool) (rand() % 2);
          tb->to->C = (bool) (rand() % 2);
          tb->to->D = (bool) (rand() % 2);
        }
    
        // if(rand() % 4) {
          // tb->to->A = (bool) (rand() % 2);
          // tb->to->B = (bool) (rand() % 2);
          // tb->to->C = (bool) (rand() % 2);
          // tb->to->D = (bool) (rand() % 2);
        // }
      }
      else {
        tb->to->cfg_in = bitstream[counter];
      }
      tb->tick();
      check(tb->to->A, tb->to->B, tb->to->C, tb->to->D, tb->to->x, tb->to->y);
      counter += 1;
  }
  tb->close_trace();
}
