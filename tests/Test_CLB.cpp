#include <stdlib.h>
#include <stdint.h>
#include <iostream>
#include <string>
#include <bitset>
#include "verilated.h"
#include "VCLB.h"
#include "tb.hpp"
#define DEBUG 1
#define CONFIG_BITS 37
#define PROG_TIME 100
#define TOT_TIME 200

#define debug(...) if(DEBUG) printf(__VA_ARGS__);
// #define assertf(case, ...) \
//   printf("\033[1;32mPASSED: \033[0m"); \
//   printf(__VA_ARGS__); \
//   assert(case);

void assertf(bool cse, std::string fmt, bool should_exit) {
  if(cse) {
    printf("\033[1;32mPASSED: \033[0m");
    std::cout << fmt << std::endl;
  }
  else {
    printf("\033[1;31mFAILED: \033[0m");
    std::cout << fmt << std::endl;
    if(should_exit) exit(-1);
  }
}
// #define assertf(case, ...) if (case == 1) printf("\033[1;32mPASSED: \033[0m"); else printf("\031[1;32mFAILED: \031[0m"); printf(__VA_ARGS__);

void mux_check(int A, int B, int C, int D, int x, int y, bool fail) {
  int input_configuration_word = 0b100010;
  int lut_configuration_word = 0b1101100011011000;
  // routes f to x, and g to y
  int output_configuration_word = 0b10;
  int flip_flop_configuration_word = 0b0000;
  std::bitset<6> bits_icw(input_configuration_word);
  std::bitset<16> bits_lcw(lut_configuration_word);
  std::bitset<4> bits_fcw(flip_flop_configuration_word);
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
    assertf(x == lut_2_expected_out, "X (2nd CLB) output is as expected", fail);
  }
  else {
    debug("X comes from the first CLB -> Output X = %d\n", lut_1_expected_out);
    assertf(x == lut_1_expected_out, "X (1st CLB) output is as expected", fail);
  }

  if(bits_ocw[1]) {
    debug("Y comes from the second CLB -> Output Y = %d\n", lut_2_expected_out);
    assertf(y == lut_2_expected_out, "Y (2nd CLB) output is as expected", fail);
  }
  else {
    debug("Y comes from the first CLB -> Output Y = %d\n", lut_1_expected_out);
    assertf(y == lut_1_expected_out, "Y (1st CLB) output is as expected", fail);
  }
  printf("----------------------\n");

}



int main() {
  srand(1337);
  TB<VCLB>* tb = new TB<VCLB>(TOT_TIME);
  tb->start_trace("clb_out.fst");
  tb->to->cfg_en = 1;
  // |--4---|----4-----|-16-|--6--|
  // [output][flip-flop][lut][input]
  // LUT Input 1 -> 11011000
  // LUT Input 2 -> 11011000
  // int lut =  {1,1,0,1,1,0,0,0,1,1,0,1,1,0,0,0};
  // x <- g, that means that {output[1], output[0]} <- 01
  // y <- f, that means that {output[3], output[2]} <- 00

  // flip-flop configuration of 0000
  // this means that:
  //  - reset will get F
  //  - set will get G
  //  - 

  // Design simple mux that's next select bit is based on the previous output (feedback select mux)
  // D selects between A and B, which means that Q selects between A and B
  std::vector<int> icw = std::vector<int>({1,0,0,0,1,0,0});
  std::vector<int> lcw = std::vector<int>({1,1,0,1,1,0,0,0,1,1,0,1,1,0,0,0});
  std::vector<int> fcw = std::vector<int>({0,0,0,1,0,0,1,0,1,0});
  std::vector<int> ocw = std::vector<int>({0,1,0,0});
  std::vector<int> bitstream;
  bitstream.reserve(icw.size() + lcw.size() + fcw.size() + ocw.size());
  bitstream.insert(bitstream.end(), ocw.begin(), ocw.end());
  bitstream.insert(bitstream.end(), fcw.begin(), fcw.end());
  bitstream.insert(bitstream.end(), lcw.begin(), lcw.end());
  bitstream.insert(bitstream.end(), icw.begin(), icw.end());
  int counter = 0;
  while(tb->should_tick()) {
    if(counter >= CONFIG_BITS) tb->to->cfg_en = 0;
    // update bits on falling_edge
    if(tb->cfg_clk.falling_edge()) {
      if(counter < bitstream.size()) tb->to->cfg_in = bitstream[counter];
      counter++;
    }
    tb->tick();
  }
  //     if(counter >= PROG_TIME) {
  //       tb->to->cfg_en = 0;
  //       if(rand() % 3) {
  //         tb->to->A = (bool) (rand() % 2);
  //         tb->to->B = (bool) (rand() % 2);
  //         tb->to->C = (bool) (rand() % 2);
  //         tb->to->D = (bool) (rand() % 2);
  //       }
  //     }
  //     else {
  //       if(counter < bitstream.size()) {
  //         tb->to->cfg_in = bitstream[counter];
  //         printf("%d", bitstream[counter]);
  //       }
  //       else tb->to->cfg_en = 0;
  //     }
  //     // tb->tick_old();
  //     tb->tick();
  //     // if(counter >= PROG_TIME) {
  //     //   mux_check(tb->to->A, tb->to->B, tb->to->C, tb->to->D, tb->to->x, tb->to->y, 0);
  //     // }
  //     counter += 1;
  // }
  printf("\n");
  tb->close_trace();
}
