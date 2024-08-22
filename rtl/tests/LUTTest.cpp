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
  int cnt = 0;
  // hack
  int lut_mask[] = {0,1,1,0,1,0,0,1};
  for(int a = 0; a <= 1; a++) {
    for(int b = 0; b <= 1; b++) {
      for(int c = 0; c <= 1; c++) {
        to->mask[cnt] = lut_mask[cnt];
        cnt++;
      }
    }
  }

  to->a = 1;
  to->b = 1;
  to->c = 1;
  to->eval();
  printf("%d\n", to->out);
}
