#include <stdlib.h>
#include <stdint.h>
#include <iostream>
#include <bitset>
#include "verilated.h"
#include "VCLB.h"
#include "tb.hpp"

#define STARTUP_TIME 10
#define MAX_TIME 10000

using namespace std;

int main() {
  srand(time(NULL));
  TB<VCLB>* tb = new TB<VCLB>(MAX_TIME);

  tb->start_trace("waveform.vcd");
  // Startup routine
  tb->dut->clk = 1;
  tb->tick();
  for(int i = 0; i < STARTUP_TIME; i++) {
    tb->dut->reset = 1;
    tb->tick();
  }
  // DUT time
  tb->dut->reset = 0;
  while (tb->should_tick()) {
    tb->tick();
  }

 tb->close_trace();
  exit(0);
}
