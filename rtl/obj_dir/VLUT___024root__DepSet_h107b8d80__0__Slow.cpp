// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VLUT.h for the primary calling header

#include "verilated.h"

#include "VLUT__Syms.h"
#include "VLUT___024root.h"

VL_ATTR_COLD void VLUT___024root___eval_static(VLUT___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLUT__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLUT___024root___eval_static\n"); );
}

VL_ATTR_COLD void VLUT___024root___eval_initial(VLUT___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLUT__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLUT___024root___eval_initial\n"); );
}

VL_ATTR_COLD void VLUT___024root___eval_final(VLUT___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLUT__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLUT___024root___eval_final\n"); );
}

VL_ATTR_COLD void VLUT___024root___eval_triggers__stl(VLUT___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VLUT___024root___dump_triggers__stl(VLUT___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VLUT___024root___eval_stl(VLUT___024root* vlSelf);

VL_ATTR_COLD void VLUT___024root___eval_settle(VLUT___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLUT__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLUT___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VLUT___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                VLUT___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("LUT.sv", 2, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VLUT___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VLUT___024root___dump_triggers__stl(VLUT___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLUT__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLUT___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void VLUT___024root___ico_sequent__TOP__0(VLUT___024root* vlSelf);

VL_ATTR_COLD void VLUT___024root___eval_stl(VLUT___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLUT__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLUT___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VLUT___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VLUT___024root___dump_triggers__ico(VLUT___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLUT__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLUT___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void VLUT___024root___dump_triggers__act(VLUT___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLUT__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLUT___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VLUT___024root___dump_triggers__nba(VLUT___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLUT__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLUT___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VLUT___024root___ctor_var_reset(VLUT___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VLUT__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLUT___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->mask = VL_RAND_RESET_I(8);
    vlSelf->a = VL_RAND_RESET_I(1);
    vlSelf->b = VL_RAND_RESET_I(1);
    vlSelf->c = VL_RAND_RESET_I(1);
    vlSelf->out = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->LUT__DOT__sel2[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
