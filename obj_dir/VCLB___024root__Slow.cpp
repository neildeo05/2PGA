// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCLB.h for the primary calling header

#include "verilated.h"

#include "VCLB__Syms.h"
#include "VCLB__Syms.h"
#include "VCLB___024root.h"

void VCLB___024root___ctor_var_reset(VCLB___024root* vlSelf);

VCLB___024root::VCLB___024root(VCLB__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VCLB___024root___ctor_var_reset(this);
}

void VCLB___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VCLB___024root::~VCLB___024root() {
}
