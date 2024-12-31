// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCLB.h for the primary calling header

#include "verilated.h"

#include "VCLB__Syms.h"
#include "VCLB___024root.h"

VL_ATTR_COLD void VCLB___024root___eval_static(VCLB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLB___024root___eval_static\n"); );
}

VL_ATTR_COLD void VCLB___024root___eval_initial(VCLB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLB___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

VL_ATTR_COLD void VCLB___024root___eval_final(VCLB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLB___024root___eval_final\n"); );
}

VL_ATTR_COLD void VCLB___024root___eval_triggers__stl(VCLB___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VCLB___024root___dump_triggers__stl(VCLB___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VCLB___024root___eval_stl(VCLB___024root* vlSelf);

VL_ATTR_COLD void VCLB___024root___eval_settle(VCLB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLB___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VCLB___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                VCLB___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("src/CLB.sv", 2, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VCLB___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCLB___024root___dump_triggers__stl(VCLB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLB___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void VCLB___024root___ico_sequent__TOP__0(VCLB___024root* vlSelf);

VL_ATTR_COLD void VCLB___024root___eval_stl(VCLB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLB___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VCLB___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VCLB___024root___dump_triggers__ico(VCLB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLB___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VCLB___024root___dump_triggers__act(VCLB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLB___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VCLB___024root___dump_triggers__nba(VCLB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLB___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VCLB___024root___ctor_var_reset(VCLB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLB___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->cfg_en = VL_RAND_RESET_I(1);
    vlSelf->cfg_in = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->A = VL_RAND_RESET_I(1);
    vlSelf->B = VL_RAND_RESET_I(1);
    vlSelf->C = VL_RAND_RESET_I(1);
    vlSelf->D = VL_RAND_RESET_I(1);
    vlSelf->x = VL_RAND_RESET_I(1);
    vlSelf->y = VL_RAND_RESET_I(1);
    vlSelf->CLB__DOT__configuration_word = VL_RAND_RESET_I(27);
    vlSelf->CLB__DOT__f = VL_RAND_RESET_I(1);
    vlSelf->CLB__DOT__g = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->CLB__DOT__inputs[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->CLB__DOT__top_lut_mask = VL_RAND_RESET_I(8);
    vlSelf->CLB__DOT__bot_lut_mask = VL_RAND_RESET_I(8);
    vlSelf->CLB__DOT____Vcellout__gen_p1__BRA__0__KET____DOT__p1__out = VL_RAND_RESET_I(1);
    vlSelf->CLB__DOT____Vcellout__gen_p1__BRA__1__KET____DOT__p1__out = VL_RAND_RESET_I(1);
    vlSelf->CLB__DOT____Vcellout__gen_p1__BRA__2__KET____DOT__p1__out = VL_RAND_RESET_I(1);
    vlSelf->CLB__DOT____Vcellout__gen_p2__BRA__0__KET____DOT__p2__out = VL_RAND_RESET_I(1);
    vlSelf->CLB__DOT____Vcellout__gen_p2__BRA__1__KET____DOT__p2__out = VL_RAND_RESET_I(1);
    vlSelf->CLB__DOT____Vcellout__gen_p2__BRA__2__KET____DOT__p2__out = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->CLB__DOT__top_lut__DOT__sel2[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->CLB__DOT__bot_lut__DOT__sel2[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->CLB__DOT__p3__DOT__sel_bit = VL_RAND_RESET_I(1);
    vlSelf->CLB__DOT__p4__DOT__sel_bit = VL_RAND_RESET_I(1);
    vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__0__KET____DOT__cf__scan_q = VL_RAND_RESET_I(1);
    vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__1__KET____DOT__cf__scan_q = VL_RAND_RESET_I(1);
    vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__2__KET____DOT__cf__scan_q = VL_RAND_RESET_I(1);
    vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__3__KET____DOT__cf__scan_q = VL_RAND_RESET_I(1);
    vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__4__KET____DOT__cf__scan_q = VL_RAND_RESET_I(1);
    vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__5__KET____DOT__cf__scan_q = VL_RAND_RESET_I(1);
    vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__6__KET____DOT__cf__scan_q = VL_RAND_RESET_I(1);
    vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__7__KET____DOT__cf__scan_q = VL_RAND_RESET_I(1);
    vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__8__KET____DOT__cf__scan_q = VL_RAND_RESET_I(1);
    vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__9__KET____DOT__cf__scan_q = VL_RAND_RESET_I(1);
    vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__10__KET____DOT__cf__scan_q = VL_RAND_RESET_I(1);
    vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__11__KET____DOT__cf__scan_q = VL_RAND_RESET_I(1);
    vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__12__KET____DOT__cf__scan_q = VL_RAND_RESET_I(1);
    vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__13__KET____DOT__cf__scan_q = VL_RAND_RESET_I(1);
    vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__14__KET____DOT__cf__scan_q = VL_RAND_RESET_I(1);
    vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__15__KET____DOT__cf__scan_q = VL_RAND_RESET_I(1);
    vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__16__KET____DOT__cf__scan_q = VL_RAND_RESET_I(1);
    vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__17__KET____DOT__cf__scan_q = VL_RAND_RESET_I(1);
    vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__18__KET____DOT__cf__scan_q = VL_RAND_RESET_I(1);
    vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__19__KET____DOT__cf__scan_q = VL_RAND_RESET_I(1);
    vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__20__KET____DOT__cf__scan_q = VL_RAND_RESET_I(1);
    vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__21__KET____DOT__cf__scan_q = VL_RAND_RESET_I(1);
    vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__22__KET____DOT__cf__scan_q = VL_RAND_RESET_I(1);
    vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__23__KET____DOT__cf__scan_q = VL_RAND_RESET_I(1);
    vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__24__KET____DOT__cf__scan_q = VL_RAND_RESET_I(1);
    vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__25__KET____DOT__cf__scan_q = VL_RAND_RESET_I(1);
    vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__26__KET____DOT__cf__scan_q = VL_RAND_RESET_I(1);
    vlSelf->CLB__DOT__gen_p1__BRA__0__KET____DOT__p1__DOT__sel_bit = VL_RAND_RESET_I(1);
    vlSelf->CLB__DOT__gen_p1__BRA__1__KET____DOT__p1__DOT__sel_bit = VL_RAND_RESET_I(1);
    vlSelf->CLB__DOT__gen_p1__BRA__2__KET____DOT__p1__DOT__sel_bit = VL_RAND_RESET_I(1);
    vlSelf->CLB__DOT__gen_p2__BRA__0__KET____DOT__p2__DOT__sel_bit = VL_RAND_RESET_I(1);
    vlSelf->CLB__DOT__gen_p2__BRA__1__KET____DOT__p2__DOT__sel_bit = VL_RAND_RESET_I(1);
    vlSelf->CLB__DOT__gen_p2__BRA__2__KET____DOT__p2__DOT__sel_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
