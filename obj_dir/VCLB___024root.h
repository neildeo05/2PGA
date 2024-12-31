// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCLB.h for the primary calling header

#ifndef VERILATED_VCLB___024ROOT_H_
#define VERILATED_VCLB___024ROOT_H_  // guard

#include "verilated.h"


class VCLB__Syms;

class alignas(VL_CACHE_LINE_BYTES) VCLB___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(cfg_en,0,0);
        VL_IN8(cfg_in,0,0);
        VL_IN8(reset,0,0);
        VL_IN8(A,0,0);
        VL_IN8(B,0,0);
        VL_IN8(C,0,0);
        VL_IN8(D,0,0);
        VL_OUT8(x,0,0);
        VL_OUT8(y,0,0);
        CData/*0:0*/ CLB__DOT__f;
        CData/*0:0*/ CLB__DOT__g;
        CData/*7:0*/ CLB__DOT__top_lut_mask;
        CData/*7:0*/ CLB__DOT__bot_lut_mask;
        CData/*0:0*/ CLB__DOT____Vcellout__gen_p1__BRA__0__KET____DOT__p1__out;
        CData/*0:0*/ CLB__DOT____Vcellout__gen_p1__BRA__1__KET____DOT__p1__out;
        CData/*0:0*/ CLB__DOT____Vcellout__gen_p1__BRA__2__KET____DOT__p1__out;
        CData/*0:0*/ CLB__DOT____Vcellout__gen_p2__BRA__0__KET____DOT__p2__out;
        CData/*0:0*/ CLB__DOT____Vcellout__gen_p2__BRA__1__KET____DOT__p2__out;
        CData/*0:0*/ CLB__DOT____Vcellout__gen_p2__BRA__2__KET____DOT__p2__out;
        CData/*0:0*/ CLB__DOT__p3__DOT__sel_bit;
        CData/*0:0*/ CLB__DOT__p4__DOT__sel_bit;
        CData/*0:0*/ CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__0__KET____DOT__cf__scan_q;
        CData/*0:0*/ CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__1__KET____DOT__cf__scan_q;
        CData/*0:0*/ CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__2__KET____DOT__cf__scan_q;
        CData/*0:0*/ CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__3__KET____DOT__cf__scan_q;
        CData/*0:0*/ CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__4__KET____DOT__cf__scan_q;
        CData/*0:0*/ CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__5__KET____DOT__cf__scan_q;
        CData/*0:0*/ CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__6__KET____DOT__cf__scan_q;
        CData/*0:0*/ CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__7__KET____DOT__cf__scan_q;
        CData/*0:0*/ CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__8__KET____DOT__cf__scan_q;
        CData/*0:0*/ CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__9__KET____DOT__cf__scan_q;
        CData/*0:0*/ CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__10__KET____DOT__cf__scan_q;
        CData/*0:0*/ CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__11__KET____DOT__cf__scan_q;
        CData/*0:0*/ CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__12__KET____DOT__cf__scan_q;
        CData/*0:0*/ CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__13__KET____DOT__cf__scan_q;
        CData/*0:0*/ CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__14__KET____DOT__cf__scan_q;
        CData/*0:0*/ CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__15__KET____DOT__cf__scan_q;
        CData/*0:0*/ CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__16__KET____DOT__cf__scan_q;
        CData/*0:0*/ CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__17__KET____DOT__cf__scan_q;
        CData/*0:0*/ CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__18__KET____DOT__cf__scan_q;
        CData/*0:0*/ CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__19__KET____DOT__cf__scan_q;
        CData/*0:0*/ CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__20__KET____DOT__cf__scan_q;
        CData/*0:0*/ CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__21__KET____DOT__cf__scan_q;
        CData/*0:0*/ CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__22__KET____DOT__cf__scan_q;
        CData/*0:0*/ CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__23__KET____DOT__cf__scan_q;
        CData/*0:0*/ CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__24__KET____DOT__cf__scan_q;
        CData/*0:0*/ CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__25__KET____DOT__cf__scan_q;
        CData/*0:0*/ CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__26__KET____DOT__cf__scan_q;
        CData/*0:0*/ CLB__DOT__gen_p1__BRA__0__KET____DOT__p1__DOT__sel_bit;
        CData/*0:0*/ CLB__DOT__gen_p1__BRA__1__KET____DOT__p1__DOT__sel_bit;
        CData/*0:0*/ CLB__DOT__gen_p1__BRA__2__KET____DOT__p1__DOT__sel_bit;
        CData/*0:0*/ CLB__DOT__gen_p2__BRA__0__KET____DOT__p2__DOT__sel_bit;
        CData/*0:0*/ CLB__DOT__gen_p2__BRA__1__KET____DOT__p2__DOT__sel_bit;
        CData/*0:0*/ CLB__DOT__gen_p2__BRA__2__KET____DOT__p2__DOT__sel_bit;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __VactContinue;
        IData/*26:0*/ CLB__DOT__configuration_word;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*0:0*/, 4> CLB__DOT__inputs;
        VlUnpacked<CData/*0:0*/, 4> CLB__DOT__top_lut__DOT__sel2;
        VlUnpacked<CData/*0:0*/, 4> CLB__DOT__bot_lut__DOT__sel2;
    };
    struct {
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VCLB__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCLB___024root(VCLB__Syms* symsp, const char* v__name);
    ~VCLB___024root();
    VL_UNCOPYABLE(VCLB___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
