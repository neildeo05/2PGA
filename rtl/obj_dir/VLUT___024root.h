// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VLUT.h for the primary calling header

#ifndef VERILATED_VLUT___024ROOT_H_
#define VERILATED_VLUT___024ROOT_H_  // guard

#include "verilated.h"


class VLUT__Syms;

class alignas(VL_CACHE_LINE_BYTES) VLUT___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(a,0,0);
    VL_IN8(b,0,0);
    VL_IN8(c,0,0);
    VL_OUT8(out,0,0);
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VL_IN8(mask[8],0,0);
    VlUnpacked<CData/*0:0*/, 4> LUT__DOT__sel2;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    VLUT__Syms* const vlSymsp;

    // CONSTRUCTORS
    VLUT___024root(VLUT__Syms* symsp, const char* v__name);
    ~VLUT___024root();
    VL_UNCOPYABLE(VLUT___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
