// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VLUT.h for the primary calling header

#include "verilated.h"

#include "VLUT__Syms.h"
#include "VLUT__Syms.h"
#include "VLUT___024root.h"

void VLUT___024root___ctor_var_reset(VLUT___024root* vlSelf);

VLUT___024root::VLUT___024root(VLUT__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VLUT___024root___ctor_var_reset(this);
}

void VLUT___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VLUT___024root::~VLUT___024root() {
}
