// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCLB__Syms.h"


void VCLB___024root__trace_chg_sub_0(VCLB___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VCLB___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLB___024root__trace_chg_top_0\n"); );
    // Init
    VCLB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCLB___024root*>(voidSelf);
    VCLB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VCLB___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VCLB___024root__trace_chg_sub_0(VCLB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VCLB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLB___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->CLB__DOT__inputs[0]));
        bufp->chgBit(oldp+1,(vlSelf->CLB__DOT__inputs[1]));
        bufp->chgBit(oldp+2,(vlSelf->CLB__DOT__inputs[2]));
        bufp->chgBit(oldp+3,(vlSelf->CLB__DOT__inputs[3]));
        bufp->chgCData(oldp+4,((((IData)(vlSelf->CLB__DOT____Vcellout__gen_p1__BRA__2__KET____DOT__p1__out) 
                                 << 2U) | (((IData)(vlSelf->CLB__DOT____Vcellout__gen_p1__BRA__1__KET____DOT__p1__out) 
                                            << 1U) 
                                           | (IData)(vlSelf->CLB__DOT____Vcellout__gen_p1__BRA__0__KET____DOT__p1__out)))),3);
        bufp->chgCData(oldp+5,((((IData)(vlSelf->CLB__DOT____Vcellout__gen_p2__BRA__2__KET____DOT__p2__out) 
                                 << 2U) | (((IData)(vlSelf->CLB__DOT____Vcellout__gen_p2__BRA__1__KET____DOT__p2__out) 
                                            << 1U) 
                                           | (IData)(vlSelf->CLB__DOT____Vcellout__gen_p2__BRA__0__KET____DOT__p2__out)))),3);
        bufp->chgBit(oldp+6,(vlSelf->CLB__DOT__f));
        bufp->chgBit(oldp+7,(vlSelf->CLB__DOT__g));
        bufp->chgCData(oldp+8,(vlSelf->CLB__DOT__top_lut_mask),8);
        bufp->chgCData(oldp+9,(vlSelf->CLB__DOT__bot_lut_mask),8);
        bufp->chgBit(oldp+10,(vlSelf->CLB__DOT____Vcellout__gen_p2__BRA__0__KET____DOT__p2__out));
        bufp->chgBit(oldp+11,(vlSelf->CLB__DOT____Vcellout__gen_p2__BRA__1__KET____DOT__p2__out));
        bufp->chgBit(oldp+12,(vlSelf->CLB__DOT____Vcellout__gen_p2__BRA__2__KET____DOT__p2__out));
        bufp->chgBit(oldp+13,(vlSelf->CLB__DOT__bot_lut__DOT__sel2[0]));
        bufp->chgBit(oldp+14,(vlSelf->CLB__DOT__bot_lut__DOT__sel2[1]));
        bufp->chgBit(oldp+15,(vlSelf->CLB__DOT__bot_lut__DOT__sel2[2]));
        bufp->chgBit(oldp+16,(vlSelf->CLB__DOT__bot_lut__DOT__sel2[3]));
        bufp->chgBit(oldp+17,(vlSelf->CLB__DOT__inputs
                              [0U]));
        bufp->chgBit(oldp+18,(vlSelf->CLB__DOT__inputs
                              [1U]));
        bufp->chgBit(oldp+19,(vlSelf->CLB__DOT____Vcellout__gen_p1__BRA__0__KET____DOT__p1__out));
        bufp->chgBit(oldp+20,(vlSelf->CLB__DOT__gen_p1__BRA__0__KET____DOT__p1__DOT__sel_bit));
        bufp->chgBit(oldp+21,(vlSelf->CLB__DOT__inputs
                              [2U]));
        bufp->chgBit(oldp+22,(vlSelf->CLB__DOT____Vcellout__gen_p1__BRA__1__KET____DOT__p1__out));
        bufp->chgBit(oldp+23,(vlSelf->CLB__DOT__gen_p1__BRA__1__KET____DOT__p1__DOT__sel_bit));
        bufp->chgBit(oldp+24,(vlSelf->CLB__DOT__inputs
                              [3U]));
        bufp->chgBit(oldp+25,(vlSelf->CLB__DOT____Vcellout__gen_p1__BRA__2__KET____DOT__p1__out));
        bufp->chgBit(oldp+26,(vlSelf->CLB__DOT__gen_p1__BRA__2__KET____DOT__p1__DOT__sel_bit));
        bufp->chgBit(oldp+27,(vlSelf->CLB__DOT__gen_p2__BRA__0__KET____DOT__p2__DOT__sel_bit));
        bufp->chgBit(oldp+28,(vlSelf->CLB__DOT__gen_p2__BRA__1__KET____DOT__p2__DOT__sel_bit));
        bufp->chgBit(oldp+29,(vlSelf->CLB__DOT__gen_p2__BRA__2__KET____DOT__p2__DOT__sel_bit));
        bufp->chgBit(oldp+30,(vlSelf->CLB__DOT__p3__DOT__sel_bit));
        bufp->chgBit(oldp+31,(vlSelf->CLB__DOT__p4__DOT__sel_bit));
        bufp->chgBit(oldp+32,(vlSelf->CLB__DOT__top_lut__DOT__sel2[0]));
        bufp->chgBit(oldp+33,(vlSelf->CLB__DOT__top_lut__DOT__sel2[1]));
        bufp->chgBit(oldp+34,(vlSelf->CLB__DOT__top_lut__DOT__sel2[2]));
        bufp->chgBit(oldp+35,(vlSelf->CLB__DOT__top_lut__DOT__sel2[3]));
    }
    bufp->chgBit(oldp+36,(vlSelf->clk));
    bufp->chgBit(oldp+37,(vlSelf->reset));
    bufp->chgCData(oldp+38,(vlSelf->input_configuration_word),6);
    bufp->chgSData(oldp+39,(vlSelf->lut_configuration_word),16);
    bufp->chgCData(oldp+40,(vlSelf->flip_flop_configuration_word),3);
    bufp->chgCData(oldp+41,(vlSelf->output_configuration_word),2);
    bufp->chgBit(oldp+42,(vlSelf->A));
    bufp->chgBit(oldp+43,(vlSelf->B));
    bufp->chgBit(oldp+44,(vlSelf->C));
    bufp->chgBit(oldp+45,(vlSelf->D));
    bufp->chgBit(oldp+46,(vlSelf->x));
    bufp->chgBit(oldp+47,(vlSelf->y));
    bufp->chgCData(oldp+48,((7U & (IData)(vlSelf->input_configuration_word))),3);
    bufp->chgCData(oldp+49,((7U & ((IData)(vlSelf->input_configuration_word) 
                                   >> 3U))),3);
    bufp->chgBit(oldp+50,((1U & (IData)(vlSelf->input_configuration_word))));
    bufp->chgBit(oldp+51,((1U & ((IData)(vlSelf->input_configuration_word) 
                                 >> 1U))));
    bufp->chgBit(oldp+52,((1U & ((IData)(vlSelf->input_configuration_word) 
                                 >> 2U))));
    bufp->chgBit(oldp+53,((1U & ((IData)(vlSelf->input_configuration_word) 
                                 >> 3U))));
    bufp->chgBit(oldp+54,((1U & ((IData)(vlSelf->input_configuration_word) 
                                 >> 4U))));
    bufp->chgBit(oldp+55,((1U & ((IData)(vlSelf->input_configuration_word) 
                                 >> 5U))));
    bufp->chgBit(oldp+56,((1U & (IData)(vlSelf->output_configuration_word))));
    bufp->chgBit(oldp+57,((1U & ((IData)(vlSelf->output_configuration_word) 
                                 >> 1U))));
}

void VCLB___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLB___024root__trace_cleanup\n"); );
    // Init
    VCLB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCLB___024root*>(voidSelf);
    VCLB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
