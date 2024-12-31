// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCLB.h for the primary calling header

#include "verilated.h"

#include "VCLB__Syms.h"
#include "VCLB___024root.h"

VL_INLINE_OPT void VCLB___024root___ico_sequent__TOP__0(VCLB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLB___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->CLB__DOT__inputs[0U] = vlSelf->A;
    vlSelf->CLB__DOT__inputs[1U] = vlSelf->B;
    vlSelf->CLB__DOT__inputs[2U] = vlSelf->C;
    vlSelf->CLB__DOT__inputs[3U] = vlSelf->D;
    vlSelf->CLB__DOT____Vcellout__gen_p1__BRA__0__KET____DOT__p1__out 
        = ((IData)(vlSelf->CLB__DOT__gen_p1__BRA__0__KET____DOT__p1__DOT__sel_bit)
            ? (IData)(vlSelf->B) : (IData)(vlSelf->A));
    vlSelf->CLB__DOT____Vcellout__gen_p1__BRA__1__KET____DOT__p1__out 
        = ((IData)(vlSelf->CLB__DOT__gen_p1__BRA__1__KET____DOT__p1__DOT__sel_bit)
            ? (IData)(vlSelf->C) : (IData)(vlSelf->B));
    vlSelf->CLB__DOT____Vcellout__gen_p2__BRA__0__KET____DOT__p2__out 
        = ((IData)(vlSelf->CLB__DOT__gen_p2__BRA__0__KET____DOT__p2__DOT__sel_bit)
            ? (IData)(vlSelf->B) : (IData)(vlSelf->A));
    vlSelf->CLB__DOT____Vcellout__gen_p2__BRA__1__KET____DOT__p2__out 
        = ((IData)(vlSelf->CLB__DOT__gen_p2__BRA__1__KET____DOT__p2__DOT__sel_bit)
            ? (IData)(vlSelf->C) : (IData)(vlSelf->B));
    vlSelf->CLB__DOT____Vcellout__gen_p1__BRA__2__KET____DOT__p1__out 
        = ((IData)(vlSelf->CLB__DOT__gen_p1__BRA__2__KET____DOT__p1__DOT__sel_bit)
            ? (IData)(vlSelf->D) : (IData)(vlSelf->C));
    vlSelf->CLB__DOT____Vcellout__gen_p2__BRA__2__KET____DOT__p2__out 
        = ((IData)(vlSelf->CLB__DOT__gen_p2__BRA__2__KET____DOT__p2__DOT__sel_bit)
            ? (IData)(vlSelf->D) : (IData)(vlSelf->C));
    vlSelf->CLB__DOT__configuration_word = ((((~ (IData)(vlSelf->cfg_en)) 
                                              & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__26__KET____DOT__cf__scan_q)) 
                                             << 0x1aU) 
                                            | ((((~ (IData)(vlSelf->cfg_en)) 
                                                 & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__25__KET____DOT__cf__scan_q)) 
                                                << 0x19U) 
                                               | ((((~ (IData)(vlSelf->cfg_en)) 
                                                    & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__24__KET____DOT__cf__scan_q)) 
                                                   << 0x18U) 
                                                  | ((((~ (IData)(vlSelf->cfg_en)) 
                                                       & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__23__KET____DOT__cf__scan_q)) 
                                                      << 0x17U) 
                                                     | ((((~ (IData)(vlSelf->cfg_en)) 
                                                          & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__22__KET____DOT__cf__scan_q)) 
                                                         << 0x16U) 
                                                        | ((((~ (IData)(vlSelf->cfg_en)) 
                                                             & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__21__KET____DOT__cf__scan_q)) 
                                                            << 0x15U) 
                                                           | ((((~ (IData)(vlSelf->cfg_en)) 
                                                                & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__20__KET____DOT__cf__scan_q)) 
                                                               << 0x14U) 
                                                              | ((((~ (IData)(vlSelf->cfg_en)) 
                                                                   & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__19__KET____DOT__cf__scan_q)) 
                                                                  << 0x13U) 
                                                                 | ((((~ (IData)(vlSelf->cfg_en)) 
                                                                      & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__18__KET____DOT__cf__scan_q)) 
                                                                     << 0x12U) 
                                                                    | ((((~ (IData)(vlSelf->cfg_en)) 
                                                                         & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__17__KET____DOT__cf__scan_q)) 
                                                                        << 0x11U) 
                                                                       | ((((~ (IData)(vlSelf->cfg_en)) 
                                                                            & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__16__KET____DOT__cf__scan_q)) 
                                                                           << 0x10U) 
                                                                          | ((((~ (IData)(vlSelf->cfg_en)) 
                                                                               & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__15__KET____DOT__cf__scan_q)) 
                                                                              << 0xfU) 
                                                                             | ((((~ (IData)(vlSelf->cfg_en)) 
                                                                                & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__14__KET____DOT__cf__scan_q)) 
                                                                                << 0xeU) 
                                                                                | ((((~ (IData)(vlSelf->cfg_en)) 
                                                                                & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__13__KET____DOT__cf__scan_q)) 
                                                                                << 0xdU) 
                                                                                | ((((~ (IData)(vlSelf->cfg_en)) 
                                                                                & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__12__KET____DOT__cf__scan_q)) 
                                                                                << 0xcU) 
                                                                                | ((((~ (IData)(vlSelf->cfg_en)) 
                                                                                & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__11__KET____DOT__cf__scan_q)) 
                                                                                << 0xbU) 
                                                                                | ((((~ (IData)(vlSelf->cfg_en)) 
                                                                                & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__10__KET____DOT__cf__scan_q)) 
                                                                                << 0xaU) 
                                                                                | ((((~ (IData)(vlSelf->cfg_en)) 
                                                                                & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__9__KET____DOT__cf__scan_q)) 
                                                                                << 9U) 
                                                                                | ((((~ (IData)(vlSelf->cfg_en)) 
                                                                                & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__8__KET____DOT__cf__scan_q)) 
                                                                                << 8U) 
                                                                                | ((((~ (IData)(vlSelf->cfg_en)) 
                                                                                & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__7__KET____DOT__cf__scan_q)) 
                                                                                << 7U) 
                                                                                | ((((~ (IData)(vlSelf->cfg_en)) 
                                                                                & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__6__KET____DOT__cf__scan_q)) 
                                                                                << 6U) 
                                                                                | ((((~ (IData)(vlSelf->cfg_en)) 
                                                                                & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__5__KET____DOT__cf__scan_q)) 
                                                                                << 5U) 
                                                                                | ((((~ (IData)(vlSelf->cfg_en)) 
                                                                                & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__4__KET____DOT__cf__scan_q)) 
                                                                                << 4U) 
                                                                                | ((((~ (IData)(vlSelf->cfg_en)) 
                                                                                & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__3__KET____DOT__cf__scan_q)) 
                                                                                << 3U) 
                                                                                | ((((~ (IData)(vlSelf->cfg_en)) 
                                                                                & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__2__KET____DOT__cf__scan_q)) 
                                                                                << 2U) 
                                                                                | ((((~ (IData)(vlSelf->cfg_en)) 
                                                                                & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__1__KET____DOT__cf__scan_q)) 
                                                                                << 1U) 
                                                                                | ((~ (IData)(vlSelf->cfg_en)) 
                                                                                & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__0__KET____DOT__cf__scan_q))))))))))))))))))))))))))));
    if (vlSelf->CLB__DOT____Vcellout__gen_p1__BRA__2__KET____DOT__p1__out) {
        vlSelf->CLB__DOT__top_lut__DOT__sel2[0U] = 
            (1U & ((IData)(vlSelf->CLB__DOT__top_lut_mask) 
                   >> 1U));
        vlSelf->CLB__DOT__top_lut__DOT__sel2[1U] = 
            (1U & ((IData)(vlSelf->CLB__DOT__top_lut_mask) 
                   >> 3U));
        vlSelf->CLB__DOT__top_lut__DOT__sel2[2U] = 
            (1U & ((IData)(vlSelf->CLB__DOT__top_lut_mask) 
                   >> 5U));
        vlSelf->CLB__DOT__top_lut__DOT__sel2[3U] = 
            (1U & ((IData)(vlSelf->CLB__DOT__top_lut_mask) 
                   >> 7U));
    } else {
        vlSelf->CLB__DOT__top_lut__DOT__sel2[0U] = 
            (1U & (IData)(vlSelf->CLB__DOT__top_lut_mask));
        vlSelf->CLB__DOT__top_lut__DOT__sel2[1U] = 
            (1U & ((IData)(vlSelf->CLB__DOT__top_lut_mask) 
                   >> 2U));
        vlSelf->CLB__DOT__top_lut__DOT__sel2[2U] = 
            (1U & ((IData)(vlSelf->CLB__DOT__top_lut_mask) 
                   >> 4U));
        vlSelf->CLB__DOT__top_lut__DOT__sel2[3U] = 
            (1U & ((IData)(vlSelf->CLB__DOT__top_lut_mask) 
                   >> 6U));
    }
    if (vlSelf->CLB__DOT____Vcellout__gen_p2__BRA__2__KET____DOT__p2__out) {
        vlSelf->CLB__DOT__bot_lut__DOT__sel2[0U] = 
            (1U & ((IData)(vlSelf->CLB__DOT__bot_lut_mask) 
                   >> 1U));
        vlSelf->CLB__DOT__bot_lut__DOT__sel2[1U] = 
            (1U & ((IData)(vlSelf->CLB__DOT__bot_lut_mask) 
                   >> 3U));
        vlSelf->CLB__DOT__bot_lut__DOT__sel2[2U] = 
            (1U & ((IData)(vlSelf->CLB__DOT__bot_lut_mask) 
                   >> 5U));
        vlSelf->CLB__DOT__bot_lut__DOT__sel2[3U] = 
            (1U & ((IData)(vlSelf->CLB__DOT__bot_lut_mask) 
                   >> 7U));
    } else {
        vlSelf->CLB__DOT__bot_lut__DOT__sel2[0U] = 
            (1U & (IData)(vlSelf->CLB__DOT__bot_lut_mask));
        vlSelf->CLB__DOT__bot_lut__DOT__sel2[1U] = 
            (1U & ((IData)(vlSelf->CLB__DOT__bot_lut_mask) 
                   >> 2U));
        vlSelf->CLB__DOT__bot_lut__DOT__sel2[2U] = 
            (1U & ((IData)(vlSelf->CLB__DOT__bot_lut_mask) 
                   >> 4U));
        vlSelf->CLB__DOT__bot_lut__DOT__sel2[3U] = 
            (1U & ((IData)(vlSelf->CLB__DOT__bot_lut_mask) 
                   >> 6U));
    }
    vlSelf->CLB__DOT__f = ((1U & ((~ (IData)(vlSelf->CLB__DOT____Vcellout__gen_p1__BRA__0__KET____DOT__p1__out)) 
                                  & (~ (IData)(vlSelf->CLB__DOT____Vcellout__gen_p1__BRA__1__KET____DOT__p1__out))))
                            ? vlSelf->CLB__DOT__top_lut__DOT__sel2
                           [0U] : (((~ (IData)(vlSelf->CLB__DOT____Vcellout__gen_p1__BRA__0__KET____DOT__p1__out)) 
                                    & (IData)(vlSelf->CLB__DOT____Vcellout__gen_p1__BRA__1__KET____DOT__p1__out))
                                    ? vlSelf->CLB__DOT__top_lut__DOT__sel2
                                   [1U] : (((IData)(vlSelf->CLB__DOT____Vcellout__gen_p1__BRA__0__KET____DOT__p1__out) 
                                            & (~ (IData)(vlSelf->CLB__DOT____Vcellout__gen_p1__BRA__1__KET____DOT__p1__out)))
                                            ? vlSelf->CLB__DOT__top_lut__DOT__sel2
                                           [2U] : vlSelf->CLB__DOT__top_lut__DOT__sel2
                                           [3U])));
    vlSelf->CLB__DOT__g = ((1U & ((~ (IData)(vlSelf->CLB__DOT____Vcellout__gen_p2__BRA__0__KET____DOT__p2__out)) 
                                  & (~ (IData)(vlSelf->CLB__DOT____Vcellout__gen_p2__BRA__1__KET____DOT__p2__out))))
                            ? vlSelf->CLB__DOT__bot_lut__DOT__sel2
                           [0U] : (((~ (IData)(vlSelf->CLB__DOT____Vcellout__gen_p2__BRA__0__KET____DOT__p2__out)) 
                                    & (IData)(vlSelf->CLB__DOT____Vcellout__gen_p2__BRA__1__KET____DOT__p2__out))
                                    ? vlSelf->CLB__DOT__bot_lut__DOT__sel2
                                   [1U] : (((IData)(vlSelf->CLB__DOT____Vcellout__gen_p2__BRA__0__KET____DOT__p2__out) 
                                            & (~ (IData)(vlSelf->CLB__DOT____Vcellout__gen_p2__BRA__1__KET____DOT__p2__out)))
                                            ? vlSelf->CLB__DOT__bot_lut__DOT__sel2
                                           [2U] : vlSelf->CLB__DOT__bot_lut__DOT__sel2
                                           [3U])));
    vlSelf->x = ((IData)(vlSelf->CLB__DOT__p3__DOT__sel_bit)
                  ? (IData)(vlSelf->CLB__DOT__g) : (IData)(vlSelf->CLB__DOT__f));
    vlSelf->y = ((IData)(vlSelf->CLB__DOT__p4__DOT__sel_bit)
                  ? (IData)(vlSelf->CLB__DOT__g) : (IData)(vlSelf->CLB__DOT__f));
}

void VCLB___024root___eval_ico(VCLB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLB___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VCLB___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void VCLB___024root___eval_act(VCLB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLB___024root___eval_act\n"); );
}

VL_INLINE_OPT void VCLB___024root___nba_sequent__TOP__0(VCLB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLB___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->CLB__DOT__p4__DOT__sel_bit = ((~ (IData)(vlSelf->reset)) 
                                          & (vlSelf->CLB__DOT__configuration_word 
                                             >> 0x1aU));
    vlSelf->CLB__DOT__p3__DOT__sel_bit = (1U & ((~ (IData)(vlSelf->reset)) 
                                                & (vlSelf->CLB__DOT__configuration_word 
                                                   >> 0x19U)));
    if (vlSelf->reset) {
        vlSelf->CLB__DOT__bot_lut_mask = 0U;
        vlSelf->CLB__DOT__top_lut_mask = 0U;
    } else {
        vlSelf->CLB__DOT__bot_lut_mask = (0xffU & (vlSelf->CLB__DOT__configuration_word 
                                                   >> 0xeU));
        vlSelf->CLB__DOT__top_lut_mask = (0xffU & (vlSelf->CLB__DOT__configuration_word 
                                                   >> 6U));
    }
    vlSelf->CLB__DOT__gen_p2__BRA__1__KET____DOT__p2__DOT__sel_bit 
        = (1U & ((~ (IData)(vlSelf->reset)) & (vlSelf->CLB__DOT__configuration_word 
                                               >> 4U)));
    vlSelf->CLB__DOT__gen_p2__BRA__0__KET____DOT__p2__DOT__sel_bit 
        = (1U & ((~ (IData)(vlSelf->reset)) & (vlSelf->CLB__DOT__configuration_word 
                                               >> 3U)));
    vlSelf->CLB__DOT__gen_p1__BRA__1__KET____DOT__p1__DOT__sel_bit 
        = (1U & ((~ (IData)(vlSelf->reset)) & (vlSelf->CLB__DOT__configuration_word 
                                               >> 1U)));
    vlSelf->CLB__DOT__gen_p1__BRA__0__KET____DOT__p1__DOT__sel_bit 
        = (1U & ((~ (IData)(vlSelf->reset)) & vlSelf->CLB__DOT__configuration_word));
    vlSelf->CLB__DOT__gen_p2__BRA__2__KET____DOT__p2__DOT__sel_bit 
        = (1U & ((~ (IData)(vlSelf->reset)) & (vlSelf->CLB__DOT__configuration_word 
                                               >> 5U)));
    vlSelf->CLB__DOT__gen_p1__BRA__2__KET____DOT__p1__DOT__sel_bit 
        = (1U & ((~ (IData)(vlSelf->reset)) & (vlSelf->CLB__DOT__configuration_word 
                                               >> 2U)));
    if (vlSelf->cfg_en) {
        vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__26__KET____DOT__cf__scan_q 
            = vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__25__KET____DOT__cf__scan_q;
        vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__25__KET____DOT__cf__scan_q 
            = vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__24__KET____DOT__cf__scan_q;
        vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__24__KET____DOT__cf__scan_q 
            = vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__23__KET____DOT__cf__scan_q;
        vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__23__KET____DOT__cf__scan_q 
            = vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__22__KET____DOT__cf__scan_q;
        vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__22__KET____DOT__cf__scan_q 
            = vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__21__KET____DOT__cf__scan_q;
        vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__21__KET____DOT__cf__scan_q 
            = vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__20__KET____DOT__cf__scan_q;
        vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__20__KET____DOT__cf__scan_q 
            = vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__19__KET____DOT__cf__scan_q;
        vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__19__KET____DOT__cf__scan_q 
            = vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__18__KET____DOT__cf__scan_q;
        vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__18__KET____DOT__cf__scan_q 
            = vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__17__KET____DOT__cf__scan_q;
        vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__17__KET____DOT__cf__scan_q 
            = vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__16__KET____DOT__cf__scan_q;
        vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__16__KET____DOT__cf__scan_q 
            = vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__15__KET____DOT__cf__scan_q;
        vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__15__KET____DOT__cf__scan_q 
            = vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__14__KET____DOT__cf__scan_q;
        vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__14__KET____DOT__cf__scan_q 
            = vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__13__KET____DOT__cf__scan_q;
        vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__13__KET____DOT__cf__scan_q 
            = vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__12__KET____DOT__cf__scan_q;
        vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__12__KET____DOT__cf__scan_q 
            = vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__11__KET____DOT__cf__scan_q;
        vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__11__KET____DOT__cf__scan_q 
            = vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__10__KET____DOT__cf__scan_q;
        vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__10__KET____DOT__cf__scan_q 
            = vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__9__KET____DOT__cf__scan_q;
        vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__9__KET____DOT__cf__scan_q 
            = vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__8__KET____DOT__cf__scan_q;
        vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__8__KET____DOT__cf__scan_q 
            = vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__7__KET____DOT__cf__scan_q;
        vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__7__KET____DOT__cf__scan_q 
            = vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__6__KET____DOT__cf__scan_q;
        vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__6__KET____DOT__cf__scan_q 
            = vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__5__KET____DOT__cf__scan_q;
        vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__5__KET____DOT__cf__scan_q 
            = vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__4__KET____DOT__cf__scan_q;
        vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__4__KET____DOT__cf__scan_q 
            = vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__3__KET____DOT__cf__scan_q;
        vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__3__KET____DOT__cf__scan_q 
            = vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__2__KET____DOT__cf__scan_q;
        vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__2__KET____DOT__cf__scan_q 
            = vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__1__KET____DOT__cf__scan_q;
        vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__1__KET____DOT__cf__scan_q 
            = vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__0__KET____DOT__cf__scan_q;
        vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__0__KET____DOT__cf__scan_q 
            = vlSelf->cfg_in;
    }
    vlSelf->CLB__DOT____Vcellout__gen_p2__BRA__1__KET____DOT__p2__out 
        = ((IData)(vlSelf->CLB__DOT__gen_p2__BRA__1__KET____DOT__p2__DOT__sel_bit)
            ? (IData)(vlSelf->C) : (IData)(vlSelf->B));
    vlSelf->CLB__DOT____Vcellout__gen_p2__BRA__0__KET____DOT__p2__out 
        = ((IData)(vlSelf->CLB__DOT__gen_p2__BRA__0__KET____DOT__p2__DOT__sel_bit)
            ? (IData)(vlSelf->B) : (IData)(vlSelf->A));
    vlSelf->CLB__DOT____Vcellout__gen_p1__BRA__1__KET____DOT__p1__out 
        = ((IData)(vlSelf->CLB__DOT__gen_p1__BRA__1__KET____DOT__p1__DOT__sel_bit)
            ? (IData)(vlSelf->C) : (IData)(vlSelf->B));
    vlSelf->CLB__DOT____Vcellout__gen_p1__BRA__0__KET____DOT__p1__out 
        = ((IData)(vlSelf->CLB__DOT__gen_p1__BRA__0__KET____DOT__p1__DOT__sel_bit)
            ? (IData)(vlSelf->B) : (IData)(vlSelf->A));
    vlSelf->CLB__DOT____Vcellout__gen_p2__BRA__2__KET____DOT__p2__out 
        = ((IData)(vlSelf->CLB__DOT__gen_p2__BRA__2__KET____DOT__p2__DOT__sel_bit)
            ? (IData)(vlSelf->D) : (IData)(vlSelf->C));
    vlSelf->CLB__DOT____Vcellout__gen_p1__BRA__2__KET____DOT__p1__out 
        = ((IData)(vlSelf->CLB__DOT__gen_p1__BRA__2__KET____DOT__p1__DOT__sel_bit)
            ? (IData)(vlSelf->D) : (IData)(vlSelf->C));
    if (vlSelf->CLB__DOT____Vcellout__gen_p2__BRA__2__KET____DOT__p2__out) {
        vlSelf->CLB__DOT__bot_lut__DOT__sel2[0U] = 
            (1U & ((IData)(vlSelf->CLB__DOT__bot_lut_mask) 
                   >> 1U));
        vlSelf->CLB__DOT__bot_lut__DOT__sel2[1U] = 
            (1U & ((IData)(vlSelf->CLB__DOT__bot_lut_mask) 
                   >> 3U));
        vlSelf->CLB__DOT__bot_lut__DOT__sel2[2U] = 
            (1U & ((IData)(vlSelf->CLB__DOT__bot_lut_mask) 
                   >> 5U));
        vlSelf->CLB__DOT__bot_lut__DOT__sel2[3U] = 
            (1U & ((IData)(vlSelf->CLB__DOT__bot_lut_mask) 
                   >> 7U));
    } else {
        vlSelf->CLB__DOT__bot_lut__DOT__sel2[0U] = 
            (1U & (IData)(vlSelf->CLB__DOT__bot_lut_mask));
        vlSelf->CLB__DOT__bot_lut__DOT__sel2[1U] = 
            (1U & ((IData)(vlSelf->CLB__DOT__bot_lut_mask) 
                   >> 2U));
        vlSelf->CLB__DOT__bot_lut__DOT__sel2[2U] = 
            (1U & ((IData)(vlSelf->CLB__DOT__bot_lut_mask) 
                   >> 4U));
        vlSelf->CLB__DOT__bot_lut__DOT__sel2[3U] = 
            (1U & ((IData)(vlSelf->CLB__DOT__bot_lut_mask) 
                   >> 6U));
    }
    if (vlSelf->CLB__DOT____Vcellout__gen_p1__BRA__2__KET____DOT__p1__out) {
        vlSelf->CLB__DOT__top_lut__DOT__sel2[0U] = 
            (1U & ((IData)(vlSelf->CLB__DOT__top_lut_mask) 
                   >> 1U));
        vlSelf->CLB__DOT__top_lut__DOT__sel2[1U] = 
            (1U & ((IData)(vlSelf->CLB__DOT__top_lut_mask) 
                   >> 3U));
        vlSelf->CLB__DOT__top_lut__DOT__sel2[2U] = 
            (1U & ((IData)(vlSelf->CLB__DOT__top_lut_mask) 
                   >> 5U));
        vlSelf->CLB__DOT__top_lut__DOT__sel2[3U] = 
            (1U & ((IData)(vlSelf->CLB__DOT__top_lut_mask) 
                   >> 7U));
    } else {
        vlSelf->CLB__DOT__top_lut__DOT__sel2[0U] = 
            (1U & (IData)(vlSelf->CLB__DOT__top_lut_mask));
        vlSelf->CLB__DOT__top_lut__DOT__sel2[1U] = 
            (1U & ((IData)(vlSelf->CLB__DOT__top_lut_mask) 
                   >> 2U));
        vlSelf->CLB__DOT__top_lut__DOT__sel2[2U] = 
            (1U & ((IData)(vlSelf->CLB__DOT__top_lut_mask) 
                   >> 4U));
        vlSelf->CLB__DOT__top_lut__DOT__sel2[3U] = 
            (1U & ((IData)(vlSelf->CLB__DOT__top_lut_mask) 
                   >> 6U));
    }
    vlSelf->CLB__DOT__g = ((1U & ((~ (IData)(vlSelf->CLB__DOT____Vcellout__gen_p2__BRA__0__KET____DOT__p2__out)) 
                                  & (~ (IData)(vlSelf->CLB__DOT____Vcellout__gen_p2__BRA__1__KET____DOT__p2__out))))
                            ? vlSelf->CLB__DOT__bot_lut__DOT__sel2
                           [0U] : (((~ (IData)(vlSelf->CLB__DOT____Vcellout__gen_p2__BRA__0__KET____DOT__p2__out)) 
                                    & (IData)(vlSelf->CLB__DOT____Vcellout__gen_p2__BRA__1__KET____DOT__p2__out))
                                    ? vlSelf->CLB__DOT__bot_lut__DOT__sel2
                                   [1U] : (((IData)(vlSelf->CLB__DOT____Vcellout__gen_p2__BRA__0__KET____DOT__p2__out) 
                                            & (~ (IData)(vlSelf->CLB__DOT____Vcellout__gen_p2__BRA__1__KET____DOT__p2__out)))
                                            ? vlSelf->CLB__DOT__bot_lut__DOT__sel2
                                           [2U] : vlSelf->CLB__DOT__bot_lut__DOT__sel2
                                           [3U])));
    vlSelf->CLB__DOT__f = ((1U & ((~ (IData)(vlSelf->CLB__DOT____Vcellout__gen_p1__BRA__0__KET____DOT__p1__out)) 
                                  & (~ (IData)(vlSelf->CLB__DOT____Vcellout__gen_p1__BRA__1__KET____DOT__p1__out))))
                            ? vlSelf->CLB__DOT__top_lut__DOT__sel2
                           [0U] : (((~ (IData)(vlSelf->CLB__DOT____Vcellout__gen_p1__BRA__0__KET____DOT__p1__out)) 
                                    & (IData)(vlSelf->CLB__DOT____Vcellout__gen_p1__BRA__1__KET____DOT__p1__out))
                                    ? vlSelf->CLB__DOT__top_lut__DOT__sel2
                                   [1U] : (((IData)(vlSelf->CLB__DOT____Vcellout__gen_p1__BRA__0__KET____DOT__p1__out) 
                                            & (~ (IData)(vlSelf->CLB__DOT____Vcellout__gen_p1__BRA__1__KET____DOT__p1__out)))
                                            ? vlSelf->CLB__DOT__top_lut__DOT__sel2
                                           [2U] : vlSelf->CLB__DOT__top_lut__DOT__sel2
                                           [3U])));
    vlSelf->x = ((IData)(vlSelf->CLB__DOT__p3__DOT__sel_bit)
                  ? (IData)(vlSelf->CLB__DOT__g) : (IData)(vlSelf->CLB__DOT__f));
    vlSelf->y = ((IData)(vlSelf->CLB__DOT__p4__DOT__sel_bit)
                  ? (IData)(vlSelf->CLB__DOT__g) : (IData)(vlSelf->CLB__DOT__f));
    vlSelf->CLB__DOT__configuration_word = ((((~ (IData)(vlSelf->cfg_en)) 
                                              & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__26__KET____DOT__cf__scan_q)) 
                                             << 0x1aU) 
                                            | ((((~ (IData)(vlSelf->cfg_en)) 
                                                 & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__25__KET____DOT__cf__scan_q)) 
                                                << 0x19U) 
                                               | ((((~ (IData)(vlSelf->cfg_en)) 
                                                    & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__24__KET____DOT__cf__scan_q)) 
                                                   << 0x18U) 
                                                  | ((((~ (IData)(vlSelf->cfg_en)) 
                                                       & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__23__KET____DOT__cf__scan_q)) 
                                                      << 0x17U) 
                                                     | ((((~ (IData)(vlSelf->cfg_en)) 
                                                          & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__22__KET____DOT__cf__scan_q)) 
                                                         << 0x16U) 
                                                        | ((((~ (IData)(vlSelf->cfg_en)) 
                                                             & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__21__KET____DOT__cf__scan_q)) 
                                                            << 0x15U) 
                                                           | ((((~ (IData)(vlSelf->cfg_en)) 
                                                                & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__20__KET____DOT__cf__scan_q)) 
                                                               << 0x14U) 
                                                              | ((((~ (IData)(vlSelf->cfg_en)) 
                                                                   & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__19__KET____DOT__cf__scan_q)) 
                                                                  << 0x13U) 
                                                                 | ((((~ (IData)(vlSelf->cfg_en)) 
                                                                      & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__18__KET____DOT__cf__scan_q)) 
                                                                     << 0x12U) 
                                                                    | ((((~ (IData)(vlSelf->cfg_en)) 
                                                                         & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__17__KET____DOT__cf__scan_q)) 
                                                                        << 0x11U) 
                                                                       | ((((~ (IData)(vlSelf->cfg_en)) 
                                                                            & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__16__KET____DOT__cf__scan_q)) 
                                                                           << 0x10U) 
                                                                          | ((((~ (IData)(vlSelf->cfg_en)) 
                                                                               & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__15__KET____DOT__cf__scan_q)) 
                                                                              << 0xfU) 
                                                                             | ((((~ (IData)(vlSelf->cfg_en)) 
                                                                                & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__14__KET____DOT__cf__scan_q)) 
                                                                                << 0xeU) 
                                                                                | ((((~ (IData)(vlSelf->cfg_en)) 
                                                                                & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__13__KET____DOT__cf__scan_q)) 
                                                                                << 0xdU) 
                                                                                | ((((~ (IData)(vlSelf->cfg_en)) 
                                                                                & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__12__KET____DOT__cf__scan_q)) 
                                                                                << 0xcU) 
                                                                                | ((((~ (IData)(vlSelf->cfg_en)) 
                                                                                & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__11__KET____DOT__cf__scan_q)) 
                                                                                << 0xbU) 
                                                                                | ((((~ (IData)(vlSelf->cfg_en)) 
                                                                                & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__10__KET____DOT__cf__scan_q)) 
                                                                                << 0xaU) 
                                                                                | ((((~ (IData)(vlSelf->cfg_en)) 
                                                                                & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__9__KET____DOT__cf__scan_q)) 
                                                                                << 9U) 
                                                                                | ((((~ (IData)(vlSelf->cfg_en)) 
                                                                                & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__8__KET____DOT__cf__scan_q)) 
                                                                                << 8U) 
                                                                                | ((((~ (IData)(vlSelf->cfg_en)) 
                                                                                & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__7__KET____DOT__cf__scan_q)) 
                                                                                << 7U) 
                                                                                | ((((~ (IData)(vlSelf->cfg_en)) 
                                                                                & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__6__KET____DOT__cf__scan_q)) 
                                                                                << 6U) 
                                                                                | ((((~ (IData)(vlSelf->cfg_en)) 
                                                                                & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__5__KET____DOT__cf__scan_q)) 
                                                                                << 5U) 
                                                                                | ((((~ (IData)(vlSelf->cfg_en)) 
                                                                                & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__4__KET____DOT__cf__scan_q)) 
                                                                                << 4U) 
                                                                                | ((((~ (IData)(vlSelf->cfg_en)) 
                                                                                & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__3__KET____DOT__cf__scan_q)) 
                                                                                << 3U) 
                                                                                | ((((~ (IData)(vlSelf->cfg_en)) 
                                                                                & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__2__KET____DOT__cf__scan_q)) 
                                                                                << 2U) 
                                                                                | ((((~ (IData)(vlSelf->cfg_en)) 
                                                                                & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__1__KET____DOT__cf__scan_q)) 
                                                                                << 1U) 
                                                                                | ((~ (IData)(vlSelf->cfg_en)) 
                                                                                & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__0__KET____DOT__cf__scan_q))))))))))))))))))))))))))));
}

void VCLB___024root___eval_nba(VCLB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLB___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VCLB___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
}

void VCLB___024root___eval_triggers__ico(VCLB___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VCLB___024root___dump_triggers__ico(VCLB___024root* vlSelf);
#endif  // VL_DEBUG
void VCLB___024root___eval_triggers__act(VCLB___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VCLB___024root___dump_triggers__act(VCLB___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VCLB___024root___dump_triggers__nba(VCLB___024root* vlSelf);
#endif  // VL_DEBUG

void VCLB___024root___eval(VCLB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLB___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        VCLB___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                VCLB___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("src/CLB.sv", 2, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            VCLB___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VCLB___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VCLB___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("src/CLB.sv", 2, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                VCLB___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VCLB___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("src/CLB.sv", 2, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VCLB___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VCLB___024root___eval_debug_assertions(VCLB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLB___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->cfg_en & 0xfeU))) {
        Verilated::overWidthError("cfg_en");}
    if (VL_UNLIKELY((vlSelf->cfg_in & 0xfeU))) {
        Verilated::overWidthError("cfg_in");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->A & 0xfeU))) {
        Verilated::overWidthError("A");}
    if (VL_UNLIKELY((vlSelf->B & 0xfeU))) {
        Verilated::overWidthError("B");}
    if (VL_UNLIKELY((vlSelf->C & 0xfeU))) {
        Verilated::overWidthError("C");}
    if (VL_UNLIKELY((vlSelf->D & 0xfeU))) {
        Verilated::overWidthError("D");}
}
#endif  // VL_DEBUG
