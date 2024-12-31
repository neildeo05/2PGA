#include <stdlib.h>
#include <stdint.h>
#include <iostream>
#include <bitset>
#include "verilated.h"
#include "VCLB.h"
#include "uvm.hpp"

#define STARTUP_TIME 27
#define MAX_TIME 10000

using namespace std;

int main() {
  srand(time(NULL));
  TB<VCLB>* tb = new TB<VCLB>(MAX_TIME);
  int bitstream[27] = {0, 1, 0,0,0, 1,1,0,1,1,0,0,0,1,1,0,1,1,0,0,0,1,0,0,0,1,0};

  tb->start_trace("uvm_clb.fst");
  // Startup routine
  tb->dut->clk = 1;
  tb->tick();
  for(int i = 0; i < STARTUP_TIME; i++) {
    tb->dut->cfg_en = 1;
    tb->dut->cfg_in = bitstream[i];
    tb->tick();
  }
  // DUT time
  tb->dut->cfg_en = 0;
  tb->dut->reset = 0;
  while (tb->should_tick()) {
    tb->tick();
  }
  tb->close_trace();
  exit(0);
}
