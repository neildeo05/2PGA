// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCLB.h for the primary calling header

#include "verilated.h"

#include "VCLB__Syms.h"
#include "VCLB___024root.h"

void VCLB___024root___eval_act(VCLB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLB___024root___eval_act\n"); );
}

VL_INLINE_OPT void VCLB___024root___nba_sequent__TOP__0(VCLB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLB___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdlyvval__CLB__DOT__inputs__v0;
    __Vdlyvval__CLB__DOT__inputs__v0 = 0;
    CData/*0:0*/ __Vdlyvval__CLB__DOT__inputs__v1;
    __Vdlyvval__CLB__DOT__inputs__v1 = 0;
    CData/*0:0*/ __Vdlyvval__CLB__DOT__inputs__v2;
    __Vdlyvval__CLB__DOT__inputs__v2 = 0;
    CData/*0:0*/ __Vdlyvval__CLB__DOT__inputs__v3;
    __Vdlyvval__CLB__DOT__inputs__v3 = 0;
    // Body
    __Vdlyvval__CLB__DOT__inputs__v0 = vlSelf->A;
    __Vdlyvval__CLB__DOT__inputs__v1 = vlSelf->B;
    __Vdlyvval__CLB__DOT__inputs__v2 = vlSelf->C;
    __Vdlyvval__CLB__DOT__inputs__v3 = vlSelf->D;
    vlSelf->CLB__DOT__p4__DOT__sel_bit = ((~ (IData)(vlSelf->reset)) 
                                          & ((IData)(vlSelf->output_configuration_word) 
                                             >> 1U));
    vlSelf->CLB__DOT__p3__DOT__sel_bit = (1U & ((~ (IData)(vlSelf->reset)) 
                                                & (IData)(vlSelf->output_configuration_word)));
    if (vlSelf->reset) {
        vlSelf->CLB__DOT__bot_lut_mask = 0U;
        vlSelf->CLB__DOT__top_lut_mask = 0U;
    } else {
        vlSelf->CLB__DOT__bot_lut_mask = (0xffU & ((IData)(vlSelf->lut_configuration_word) 
                                                   >> 8U));
        vlSelf->CLB__DOT__top_lut_mask = (0xffU & (IData)(vlSelf->lut_configuration_word));
    }
    vlSelf->CLB__DOT__gen_p2__BRA__1__KET____DOT__p2__DOT__sel_bit 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->input_configuration_word) 
                                               >> 4U)));
    vlSelf->CLB__DOT__gen_p2__BRA__0__KET____DOT__p2__DOT__sel_bit 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->input_configuration_word) 
                                               >> 3U)));
    vlSelf->CLB__DOT__gen_p1__BRA__1__KET____DOT__p1__DOT__sel_bit 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->input_configuration_word) 
                                               >> 1U)));
    vlSelf->CLB__DOT__gen_p1__BRA__0__KET____DOT__p1__DOT__sel_bit 
        = (1U & ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->input_configuration_word)));
    vlSelf->CLB__DOT__gen_p2__BRA__2__KET____DOT__p2__DOT__sel_bit 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->input_configuration_word) 
                                         >> 5U));
    vlSelf->CLB__DOT__gen_p1__BRA__2__KET____DOT__p1__DOT__sel_bit 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->input_configuration_word) 
                                               >> 2U)));
    vlSelf->CLB__DOT__inputs[0U] = __Vdlyvval__CLB__DOT__inputs__v0;
    vlSelf->CLB__DOT__inputs[1U] = __Vdlyvval__CLB__DOT__inputs__v1;
    vlSelf->CLB__DOT__inputs[2U] = __Vdlyvval__CLB__DOT__inputs__v2;
    vlSelf->CLB__DOT__inputs[3U] = __Vdlyvval__CLB__DOT__inputs__v3;
    vlSelf->CLB__DOT____Vcellout__gen_p2__BRA__1__KET____DOT__p2__out 
        = ((IData)(vlSelf->CLB__DOT__gen_p2__BRA__1__KET____DOT__p2__DOT__sel_bit)
            ? vlSelf->CLB__DOT__inputs[2U] : vlSelf->CLB__DOT__inputs
           [1U]);
    vlSelf->CLB__DOT____Vcellout__gen_p2__BRA__0__KET____DOT__p2__out 
        = ((IData)(vlSelf->CLB__DOT__gen_p2__BRA__0__KET____DOT__p2__DOT__sel_bit)
            ? vlSelf->CLB__DOT__inputs[1U] : vlSelf->CLB__DOT__inputs
           [0U]);
    vlSelf->CLB__DOT____Vcellout__gen_p1__BRA__1__KET____DOT__p1__out 
        = ((IData)(vlSelf->CLB__DOT__gen_p1__BRA__1__KET____DOT__p1__DOT__sel_bit)
            ? vlSelf->CLB__DOT__inputs[2U] : vlSelf->CLB__DOT__inputs
           [1U]);
    vlSelf->CLB__DOT____Vcellout__gen_p1__BRA__0__KET____DOT__p1__out 
        = ((IData)(vlSelf->CLB__DOT__gen_p1__BRA__0__KET____DOT__p1__DOT__sel_bit)
            ? vlSelf->CLB__DOT__inputs[1U] : vlSelf->CLB__DOT__inputs
           [0U]);
    vlSelf->CLB__DOT____Vcellout__gen_p2__BRA__2__KET____DOT__p2__out 
        = ((IData)(vlSelf->CLB__DOT__gen_p2__BRA__2__KET____DOT__p2__DOT__sel_bit)
            ? vlSelf->CLB__DOT__inputs[3U] : vlSelf->CLB__DOT__inputs
           [2U]);
    vlSelf->CLB__DOT____Vcellout__gen_p1__BRA__2__KET____DOT__p1__out 
        = ((IData)(vlSelf->CLB__DOT__gen_p1__BRA__2__KET____DOT__p1__DOT__sel_bit)
            ? vlSelf->CLB__DOT__inputs[3U] : vlSelf->CLB__DOT__inputs
           [2U]);
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
}

void VCLB___024root___eval_nba(VCLB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCLB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLB___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VCLB___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

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
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
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
                    VL_FATAL_MT("../CLB.sv", 1, "", "Active region did not converge.");
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
                VL_FATAL_MT("../CLB.sv", 1, "", "NBA region did not converge.");
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
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->input_configuration_word 
                     & 0xc0U))) {
        Verilated::overWidthError("input_configuration_word");}
    if (VL_UNLIKELY((vlSelf->flip_flop_configuration_word 
                     & 0xf8U))) {
        Verilated::overWidthError("flip_flop_configuration_word");}
    if (VL_UNLIKELY((vlSelf->output_configuration_word 
                     & 0xfcU))) {
        Verilated::overWidthError("output_configuration_word");}
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
