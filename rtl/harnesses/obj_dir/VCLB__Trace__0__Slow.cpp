// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCLB__Syms.h"


VL_ATTR_COLD void VCLB___024root__trace_init_sub__TOP__0(VCLB___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCLB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLB___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+37,"clk", false,-1);
    tracep->declBit(c+38,"reset", false,-1);
    tracep->declBus(c+39,"input_configuration_word", false,-1, 5,0);
    tracep->declBus(c+40,"lut_configuration_word", false,-1, 15,0);
    tracep->declBus(c+41,"flip_flop_configuration_word", false,-1, 2,0);
    tracep->declBus(c+42,"output_configuration_word", false,-1, 1,0);
    tracep->declBit(c+43,"A", false,-1);
    tracep->declBit(c+44,"B", false,-1);
    tracep->declBit(c+45,"C", false,-1);
    tracep->declBit(c+46,"D", false,-1);
    tracep->declBit(c+47,"x", false,-1);
    tracep->declBit(c+48,"y", false,-1);
    tracep->pushNamePrefix("CLB ");
    tracep->declBit(c+37,"clk", false,-1);
    tracep->declBit(c+38,"reset", false,-1);
    tracep->declBus(c+39,"input_configuration_word", false,-1, 5,0);
    tracep->declBus(c+40,"lut_configuration_word", false,-1, 15,0);
    tracep->declBus(c+41,"flip_flop_configuration_word", false,-1, 2,0);
    tracep->declBus(c+42,"output_configuration_word", false,-1, 1,0);
    tracep->declBit(c+43,"A", false,-1);
    tracep->declBit(c+44,"B", false,-1);
    tracep->declBit(c+45,"C", false,-1);
    tracep->declBit(c+46,"D", false,-1);
    tracep->declBit(c+47,"x", false,-1);
    tracep->declBit(c+48,"y", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+1+i*1,"inputs", true,(i+0));
    }
    tracep->declBus(c+49,"ic_top", false,-1, 2,0);
    tracep->declBus(c+50,"ic_bot", false,-1, 2,0);
    tracep->declBus(c+5,"top_lut_inps", false,-1, 2,0);
    tracep->declBus(c+6,"bot_lut_inps", false,-1, 2,0);
    tracep->declBit(c+7,"f", false,-1);
    tracep->declBit(c+8,"g", false,-1);
    tracep->declBus(c+9,"top_lut_mask", false,-1, 7,0);
    tracep->declBus(c+10,"bot_lut_mask", false,-1, 7,0);
    tracep->pushNamePrefix("bot_lut ");
    tracep->declBus(c+10,"mask", false,-1, 7,0);
    tracep->declBit(c+11,"a", false,-1);
    tracep->declBit(c+12,"b", false,-1);
    tracep->declBit(c+13,"c", false,-1);
    tracep->declBit(c+8,"out", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+14+i*1,"sel2", true,(i+0));
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gen_p1[0] ");
    tracep->pushNamePrefix("p1 ");
    tracep->declBit(c+37,"clk", false,-1);
    tracep->declBit(c+38,"reset", false,-1);
    tracep->declBit(c+51,"sel", false,-1);
    tracep->declBit(c+18,"a", false,-1);
    tracep->declBit(c+19,"b", false,-1);
    tracep->declBit(c+20,"out", false,-1);
    tracep->declBit(c+21,"sel_bit", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_p1[1] ");
    tracep->pushNamePrefix("p1 ");
    tracep->declBit(c+37,"clk", false,-1);
    tracep->declBit(c+38,"reset", false,-1);
    tracep->declBit(c+52,"sel", false,-1);
    tracep->declBit(c+19,"a", false,-1);
    tracep->declBit(c+22,"b", false,-1);
    tracep->declBit(c+23,"out", false,-1);
    tracep->declBit(c+24,"sel_bit", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_p1[2] ");
    tracep->pushNamePrefix("p1 ");
    tracep->declBit(c+37,"clk", false,-1);
    tracep->declBit(c+38,"reset", false,-1);
    tracep->declBit(c+53,"sel", false,-1);
    tracep->declBit(c+22,"a", false,-1);
    tracep->declBit(c+25,"b", false,-1);
    tracep->declBit(c+26,"out", false,-1);
    tracep->declBit(c+27,"sel_bit", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_p2[0] ");
    tracep->pushNamePrefix("p2 ");
    tracep->declBit(c+37,"clk", false,-1);
    tracep->declBit(c+38,"reset", false,-1);
    tracep->declBit(c+54,"sel", false,-1);
    tracep->declBit(c+18,"a", false,-1);
    tracep->declBit(c+19,"b", false,-1);
    tracep->declBit(c+11,"out", false,-1);
    tracep->declBit(c+28,"sel_bit", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_p2[1] ");
    tracep->pushNamePrefix("p2 ");
    tracep->declBit(c+37,"clk", false,-1);
    tracep->declBit(c+38,"reset", false,-1);
    tracep->declBit(c+55,"sel", false,-1);
    tracep->declBit(c+19,"a", false,-1);
    tracep->declBit(c+22,"b", false,-1);
    tracep->declBit(c+12,"out", false,-1);
    tracep->declBit(c+29,"sel_bit", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_p2[2] ");
    tracep->pushNamePrefix("p2 ");
    tracep->declBit(c+37,"clk", false,-1);
    tracep->declBit(c+38,"reset", false,-1);
    tracep->declBit(c+56,"sel", false,-1);
    tracep->declBit(c+22,"a", false,-1);
    tracep->declBit(c+25,"b", false,-1);
    tracep->declBit(c+13,"out", false,-1);
    tracep->declBit(c+30,"sel_bit", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("p3 ");
    tracep->declBit(c+37,"clk", false,-1);
    tracep->declBit(c+38,"reset", false,-1);
    tracep->declBit(c+57,"sel", false,-1);
    tracep->declBit(c+7,"a", false,-1);
    tracep->declBit(c+8,"b", false,-1);
    tracep->declBit(c+47,"out", false,-1);
    tracep->declBit(c+31,"sel_bit", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("p4 ");
    tracep->declBit(c+37,"clk", false,-1);
    tracep->declBit(c+38,"reset", false,-1);
    tracep->declBit(c+58,"sel", false,-1);
    tracep->declBit(c+7,"a", false,-1);
    tracep->declBit(c+8,"b", false,-1);
    tracep->declBit(c+48,"out", false,-1);
    tracep->declBit(c+32,"sel_bit", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("top_lut ");
    tracep->declBus(c+9,"mask", false,-1, 7,0);
    tracep->declBit(c+20,"a", false,-1);
    tracep->declBit(c+23,"b", false,-1);
    tracep->declBit(c+26,"c", false,-1);
    tracep->declBit(c+7,"out", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+33+i*1,"sel2", true,(i+0));
    }
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VCLB___024root__trace_init_top(VCLB___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCLB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLB___024root__trace_init_top\n"); );
    // Body
    VCLB___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VCLB___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VCLB___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VCLB___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VCLB___024root__trace_register(VCLB___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCLB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLB___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VCLB___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VCLB___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VCLB___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VCLB___024root__trace_full_sub_0(VCLB___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VCLB___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLB___024root__trace_full_top_0\n"); );
    // Init
    VCLB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCLB___024root*>(voidSelf);
    VCLB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VCLB___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VCLB___024root__trace_full_sub_0(VCLB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VCLB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLB___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->CLB__DOT__inputs[0]));
    bufp->fullBit(oldp+2,(vlSelf->CLB__DOT__inputs[1]));
    bufp->fullBit(oldp+3,(vlSelf->CLB__DOT__inputs[2]));
    bufp->fullBit(oldp+4,(vlSelf->CLB__DOT__inputs[3]));
    bufp->fullCData(oldp+5,((((IData)(vlSelf->CLB__DOT____Vcellout__gen_p1__BRA__2__KET____DOT__p1__out) 
                              << 2U) | (((IData)(vlSelf->CLB__DOT____Vcellout__gen_p1__BRA__1__KET____DOT__p1__out) 
                                         << 1U) | (IData)(vlSelf->CLB__DOT____Vcellout__gen_p1__BRA__0__KET____DOT__p1__out)))),3);
    bufp->fullCData(oldp+6,((((IData)(vlSelf->CLB__DOT____Vcellout__gen_p2__BRA__2__KET____DOT__p2__out) 
                              << 2U) | (((IData)(vlSelf->CLB__DOT____Vcellout__gen_p2__BRA__1__KET____DOT__p2__out) 
                                         << 1U) | (IData)(vlSelf->CLB__DOT____Vcellout__gen_p2__BRA__0__KET____DOT__p2__out)))),3);
    bufp->fullBit(oldp+7,(vlSelf->CLB__DOT__f));
    bufp->fullBit(oldp+8,(vlSelf->CLB__DOT__g));
    bufp->fullCData(oldp+9,(vlSelf->CLB__DOT__top_lut_mask),8);
    bufp->fullCData(oldp+10,(vlSelf->CLB__DOT__bot_lut_mask),8);
    bufp->fullBit(oldp+11,(vlSelf->CLB__DOT____Vcellout__gen_p2__BRA__0__KET____DOT__p2__out));
    bufp->fullBit(oldp+12,(vlSelf->CLB__DOT____Vcellout__gen_p2__BRA__1__KET____DOT__p2__out));
    bufp->fullBit(oldp+13,(vlSelf->CLB__DOT____Vcellout__gen_p2__BRA__2__KET____DOT__p2__out));
    bufp->fullBit(oldp+14,(vlSelf->CLB__DOT__bot_lut__DOT__sel2[0]));
    bufp->fullBit(oldp+15,(vlSelf->CLB__DOT__bot_lut__DOT__sel2[1]));
    bufp->fullBit(oldp+16,(vlSelf->CLB__DOT__bot_lut__DOT__sel2[2]));
    bufp->fullBit(oldp+17,(vlSelf->CLB__DOT__bot_lut__DOT__sel2[3]));
    bufp->fullBit(oldp+18,(vlSelf->CLB__DOT__inputs
                           [0U]));
    bufp->fullBit(oldp+19,(vlSelf->CLB__DOT__inputs
                           [1U]));
    bufp->fullBit(oldp+20,(vlSelf->CLB__DOT____Vcellout__gen_p1__BRA__0__KET____DOT__p1__out));
    bufp->fullBit(oldp+21,(vlSelf->CLB__DOT__gen_p1__BRA__0__KET____DOT__p1__DOT__sel_bit));
    bufp->fullBit(oldp+22,(vlSelf->CLB__DOT__inputs
                           [2U]));
    bufp->fullBit(oldp+23,(vlSelf->CLB__DOT____Vcellout__gen_p1__BRA__1__KET____DOT__p1__out));
    bufp->fullBit(oldp+24,(vlSelf->CLB__DOT__gen_p1__BRA__1__KET____DOT__p1__DOT__sel_bit));
    bufp->fullBit(oldp+25,(vlSelf->CLB__DOT__inputs
                           [3U]));
    bufp->fullBit(oldp+26,(vlSelf->CLB__DOT____Vcellout__gen_p1__BRA__2__KET____DOT__p1__out));
    bufp->fullBit(oldp+27,(vlSelf->CLB__DOT__gen_p1__BRA__2__KET____DOT__p1__DOT__sel_bit));
    bufp->fullBit(oldp+28,(vlSelf->CLB__DOT__gen_p2__BRA__0__KET____DOT__p2__DOT__sel_bit));
    bufp->fullBit(oldp+29,(vlSelf->CLB__DOT__gen_p2__BRA__1__KET____DOT__p2__DOT__sel_bit));
    bufp->fullBit(oldp+30,(vlSelf->CLB__DOT__gen_p2__BRA__2__KET____DOT__p2__DOT__sel_bit));
    bufp->fullBit(oldp+31,(vlSelf->CLB__DOT__p3__DOT__sel_bit));
    bufp->fullBit(oldp+32,(vlSelf->CLB__DOT__p4__DOT__sel_bit));
    bufp->fullBit(oldp+33,(vlSelf->CLB__DOT__top_lut__DOT__sel2[0]));
    bufp->fullBit(oldp+34,(vlSelf->CLB__DOT__top_lut__DOT__sel2[1]));
    bufp->fullBit(oldp+35,(vlSelf->CLB__DOT__top_lut__DOT__sel2[2]));
    bufp->fullBit(oldp+36,(vlSelf->CLB__DOT__top_lut__DOT__sel2[3]));
    bufp->fullBit(oldp+37,(vlSelf->clk));
    bufp->fullBit(oldp+38,(vlSelf->reset));
    bufp->fullCData(oldp+39,(vlSelf->input_configuration_word),6);
    bufp->fullSData(oldp+40,(vlSelf->lut_configuration_word),16);
    bufp->fullCData(oldp+41,(vlSelf->flip_flop_configuration_word),3);
    bufp->fullCData(oldp+42,(vlSelf->output_configuration_word),2);
    bufp->fullBit(oldp+43,(vlSelf->A));
    bufp->fullBit(oldp+44,(vlSelf->B));
    bufp->fullBit(oldp+45,(vlSelf->C));
    bufp->fullBit(oldp+46,(vlSelf->D));
    bufp->fullBit(oldp+47,(vlSelf->x));
    bufp->fullBit(oldp+48,(vlSelf->y));
    bufp->fullCData(oldp+49,((7U & (IData)(vlSelf->input_configuration_word))),3);
    bufp->fullCData(oldp+50,((7U & ((IData)(vlSelf->input_configuration_word) 
                                    >> 3U))),3);
    bufp->fullBit(oldp+51,((1U & (IData)(vlSelf->input_configuration_word))));
    bufp->fullBit(oldp+52,((1U & ((IData)(vlSelf->input_configuration_word) 
                                  >> 1U))));
    bufp->fullBit(oldp+53,((1U & ((IData)(vlSelf->input_configuration_word) 
                                  >> 2U))));
    bufp->fullBit(oldp+54,((1U & ((IData)(vlSelf->input_configuration_word) 
                                  >> 3U))));
    bufp->fullBit(oldp+55,((1U & ((IData)(vlSelf->input_configuration_word) 
                                  >> 4U))));
    bufp->fullBit(oldp+56,((1U & ((IData)(vlSelf->input_configuration_word) 
                                  >> 5U))));
    bufp->fullBit(oldp+57,((1U & (IData)(vlSelf->output_configuration_word))));
    bufp->fullBit(oldp+58,((1U & ((IData)(vlSelf->output_configuration_word) 
                                  >> 1U))));
}
