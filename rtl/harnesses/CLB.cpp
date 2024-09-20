
#include <stdlib.h>
#include <stdint.h>
#include <iostream>
#include <bitset>
#include "verilated.h"
#include "VCLB.h"
#include "tb.hpp"

#define MAX_TIME 20

using namespace std;
using namespace std;

int main() {
  TB<VCLB>* tb = new TB<VCLB>(MAX_TIME);
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
  int lut =  0b1101100011011000;



  int inp = 0b100100;
  // Y gets G, X gets F
  int out = 0b01;
  tb->to->input_configuration_word = inp;
  tb->to->lut_configuration_word = lut;
  tb->to->output_configuration_word = out;
  tb->start_trace("waveform.vcd");
  // while(tb->should_tick()) {
  tb->to->A = 0;
  tb->to->B = 1;
  tb->to->C = 0;
  tb->to->D = 1;
  tb->tick();

  printf("X: %d, Y: %d\n", tb->to->x, tb->to->y);

  tb->to->A = 1;
  tb->to->B = 0;
  tb->to->C = 1;
  tb->to->D = 1;
  tb->tick();
  printf("X: %d, Y: %d\n", tb->to->x, tb->to->y);
  // }
  tb->close_trace();
}
