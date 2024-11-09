
#include <stdlib.h>
#include <stdint.h>
#include <iostream>
#include <bitset>
#include "verilated.h"
#include "VWiltonSwitch.h"
#include "tb.hpp"

#define MAX_TIME 20

using namespace std;

int main() {
  TB<VWiltonSwitch>* tb = new TB<VWiltonSwitch>(MAX_TIME);
  tb->start_trace("waveform_switch.vcd");
  // int configarr[4] = {1, 0, 0, 0};
  // for(int i = 0; i < 4; i++) tb->to->route[i] = configarr[i];
  // tb->to->port_designations[0] = 1;
  tb->to->side1 = 3;
  tb->to->side1_inp = 3;
  // tb->to->eval();

  tb->tick();
  tb->close_trace();

}
