// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VLUT.h for the primary calling header

#include "verilated.h"

#include "VLUT__Syms.h"
#include "VLUT___024root.h"

VL_INLINE_OPT void VLUT___024root___ico_sequent__TOP__0(VLUT___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLUT__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLUT___024root___ico_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->c) {
        vlSelf->LUT__DOT__sel2[0U] = vlSelf->mask[1U];
        vlSelf->LUT__DOT__sel2[1U] = vlSelf->mask[3U];
        vlSelf->LUT__DOT__sel2[2U] = vlSelf->mask[5U];
        vlSelf->LUT__DOT__sel2[3U] = vlSelf->mask[7U];
    } else {
        vlSelf->LUT__DOT__sel2[0U] = vlSelf->mask[0U];
        vlSelf->LUT__DOT__sel2[1U] = vlSelf->mask[2U];
        vlSelf->LUT__DOT__sel2[2U] = vlSelf->mask[4U];
        vlSelf->LUT__DOT__sel2[3U] = vlSelf->mask[6U];
    }
    vlSelf->out = ((1U & ((~ (IData)(vlSelf->a)) & 
                          (~ (IData)(vlSelf->b)))) ? 
                   vlSelf->LUT__DOT__sel2[0U] : (((~ (IData)(vlSelf->a)) 
                                                  & (IData)(vlSelf->b))
                                                  ? 
                                                 vlSelf->LUT__DOT__sel2
                                                 [1U]
                                                  : 
                                                 (((IData)(vlSelf->a) 
                                                   & (~ (IData)(vlSelf->b)))
                                                   ? 
                                                  vlSelf->LUT__DOT__sel2
                                                  [2U]
                                                   : 
                                                  vlSelf->LUT__DOT__sel2
                                                  [3U])));
}

void VLUT___024root___eval_ico(VLUT___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLUT__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLUT___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VLUT___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void VLUT___024root___eval_act(VLUT___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLUT__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLUT___024root___eval_act\n"); );
}

void VLUT___024root___eval_nba(VLUT___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLUT__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLUT___024root___eval_nba\n"); );
}

void VLUT___024root___eval_triggers__ico(VLUT___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VLUT___024root___dump_triggers__ico(VLUT___024root* vlSelf);
#endif  // VL_DEBUG
void VLUT___024root___eval_triggers__act(VLUT___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VLUT___024root___dump_triggers__act(VLUT___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VLUT___024root___dump_triggers__nba(VLUT___024root* vlSelf);
#endif  // VL_DEBUG

void VLUT___024root___eval(VLUT___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLUT__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLUT___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<0> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        VLUT___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                VLUT___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("LUT.sv", 2, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            VLUT___024root___eval_ico(vlSelf);
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
            VLUT___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VLUT___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("LUT.sv", 2, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                VLUT___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VLUT___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("LUT.sv", 2, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VLUT___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VLUT___024root___eval_debug_assertions(VLUT___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLUT__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLUT___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->a & 0xfeU))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((vlSelf->b & 0xfeU))) {
        Verilated::overWidthError("b");}
    if (VL_UNLIKELY((vlSelf->c & 0xfeU))) {
        Verilated::overWidthError("c");}
}
#endif  // VL_DEBUG
