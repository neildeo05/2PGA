#include <stdlib.h>
#include <stdint.h>
#include <iostream>
#include <bitset>
#include "verilated.h"
#include "VLUT.h"
#include "tb.hpp"

#define MAX_TIME 20

using namespace std;

int main() {
  VLUT* to = new VLUT;
  // hack
  // Mux:
  // 000 -> 0: 0
  // 001 -> 0: 1
  // 010 -> 0: 2
  // 011 -> 1: 3
  // 100 -> 1: 4
  // 101 -> 0: 5
  // 110 -> 1: 6
  // 111 -> 1: 7
  int lut_mask = 0b11011000;
  to->mask = lut_mask;

  to->a = 1;
  to->b = 1;
  to->c = 0;
  to->eval();
  printf("%d\n",to->out);
}
