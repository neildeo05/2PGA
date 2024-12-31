// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VCLB__Syms.h"


void VCLB___024root__trace_chg_sub_0(VCLB___024root* vlSelf, VerilatedFst::Buffer* bufp);

void VCLB___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLB___024root__trace_chg_top_0\n"); );
    // Init
    VCLB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCLB___024root*>(voidSelf);
    VCLB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VCLB___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VCLB___024root__trace_chg_sub_0(VCLB___024root* vlSelf, VerilatedFst::Buffer* bufp) {
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
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+4,(vlSelf->CLB__DOT__configuration_word),27);
        bufp->chgCData(oldp+5,((0x3fU & vlSelf->CLB__DOT__configuration_word)),6);
        bufp->chgSData(oldp+6,((0xffffU & (vlSelf->CLB__DOT__configuration_word 
                                           >> 6U))),16);
        bufp->chgCData(oldp+7,((7U & (vlSelf->CLB__DOT__configuration_word 
                                      >> 0x16U))),3);
        bufp->chgCData(oldp+8,((3U & (vlSelf->CLB__DOT__configuration_word 
                                      >> 0x19U))),2);
        bufp->chgCData(oldp+9,((7U & vlSelf->CLB__DOT__configuration_word)),3);
        bufp->chgCData(oldp+10,((7U & (vlSelf->CLB__DOT__configuration_word 
                                       >> 3U))),3);
        bufp->chgCData(oldp+11,((((IData)(vlSelf->CLB__DOT____Vcellout__gen_p1__BRA__2__KET____DOT__p1__out) 
                                  << 2U) | (((IData)(vlSelf->CLB__DOT____Vcellout__gen_p1__BRA__1__KET____DOT__p1__out) 
                                             << 1U) 
                                            | (IData)(vlSelf->CLB__DOT____Vcellout__gen_p1__BRA__0__KET____DOT__p1__out)))),3);
        bufp->chgCData(oldp+12,((((IData)(vlSelf->CLB__DOT____Vcellout__gen_p2__BRA__2__KET____DOT__p2__out) 
                                  << 2U) | (((IData)(vlSelf->CLB__DOT____Vcellout__gen_p2__BRA__1__KET____DOT__p2__out) 
                                             << 1U) 
                                            | (IData)(vlSelf->CLB__DOT____Vcellout__gen_p2__BRA__0__KET____DOT__p2__out)))),3);
        bufp->chgBit(oldp+13,(vlSelf->CLB__DOT__f));
        bufp->chgBit(oldp+14,(vlSelf->CLB__DOT__g));
        bufp->chgBit(oldp+15,(vlSelf->CLB__DOT____Vcellout__gen_p2__BRA__0__KET____DOT__p2__out));
        bufp->chgBit(oldp+16,(vlSelf->CLB__DOT____Vcellout__gen_p2__BRA__1__KET____DOT__p2__out));
        bufp->chgBit(oldp+17,(vlSelf->CLB__DOT____Vcellout__gen_p2__BRA__2__KET____DOT__p2__out));
        bufp->chgBit(oldp+18,(vlSelf->CLB__DOT__bot_lut__DOT__sel2[0]));
        bufp->chgBit(oldp+19,(vlSelf->CLB__DOT__bot_lut__DOT__sel2[1]));
        bufp->chgBit(oldp+20,(vlSelf->CLB__DOT__bot_lut__DOT__sel2[2]));
        bufp->chgBit(oldp+21,(vlSelf->CLB__DOT__bot_lut__DOT__sel2[3]));
        bufp->chgBit(oldp+22,((1U & vlSelf->CLB__DOT__configuration_word)));
        bufp->chgBit(oldp+23,(vlSelf->CLB__DOT____Vcellout__gen_p1__BRA__0__KET____DOT__p1__out));
        bufp->chgBit(oldp+24,((1U & (vlSelf->CLB__DOT__configuration_word 
                                     >> 1U))));
        bufp->chgBit(oldp+25,(vlSelf->CLB__DOT____Vcellout__gen_p1__BRA__1__KET____DOT__p1__out));
        bufp->chgBit(oldp+26,((1U & (vlSelf->CLB__DOT__configuration_word 
                                     >> 2U))));
        bufp->chgBit(oldp+27,(vlSelf->CLB__DOT____Vcellout__gen_p1__BRA__2__KET____DOT__p1__out));
        bufp->chgBit(oldp+28,((1U & (vlSelf->CLB__DOT__configuration_word 
                                     >> 3U))));
        bufp->chgBit(oldp+29,((1U & (vlSelf->CLB__DOT__configuration_word 
                                     >> 4U))));
        bufp->chgBit(oldp+30,((1U & (vlSelf->CLB__DOT__configuration_word 
                                     >> 5U))));
        bufp->chgBit(oldp+31,((1U & (vlSelf->CLB__DOT__configuration_word 
                                     >> 0x19U))));
        bufp->chgBit(oldp+32,((1U & (vlSelf->CLB__DOT__configuration_word 
                                     >> 0x1aU))));
        bufp->chgBit(oldp+33,(vlSelf->CLB__DOT__top_lut__DOT__sel2[0]));
        bufp->chgBit(oldp+34,(vlSelf->CLB__DOT__top_lut__DOT__sel2[1]));
        bufp->chgBit(oldp+35,(vlSelf->CLB__DOT__top_lut__DOT__sel2[2]));
        bufp->chgBit(oldp+36,(vlSelf->CLB__DOT__top_lut__DOT__sel2[3]));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgCData(oldp+37,(vlSelf->CLB__DOT__top_lut_mask),8);
        bufp->chgCData(oldp+38,(vlSelf->CLB__DOT__bot_lut_mask),8);
        bufp->chgBit(oldp+39,(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__0__KET____DOT__cf__scan_q));
        bufp->chgBit(oldp+40,(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__9__KET____DOT__cf__scan_q));
        bufp->chgBit(oldp+41,(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__10__KET____DOT__cf__scan_q));
        bufp->chgBit(oldp+42,(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__11__KET____DOT__cf__scan_q));
        bufp->chgBit(oldp+43,(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__12__KET____DOT__cf__scan_q));
        bufp->chgBit(oldp+44,(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__13__KET____DOT__cf__scan_q));
        bufp->chgBit(oldp+45,(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__14__KET____DOT__cf__scan_q));
        bufp->chgBit(oldp+46,(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__15__KET____DOT__cf__scan_q));
        bufp->chgBit(oldp+47,(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__16__KET____DOT__cf__scan_q));
        bufp->chgBit(oldp+48,(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__17__KET____DOT__cf__scan_q));
        bufp->chgBit(oldp+49,(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__18__KET____DOT__cf__scan_q));
        bufp->chgBit(oldp+50,(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__19__KET____DOT__cf__scan_q));
        bufp->chgBit(oldp+51,(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__1__KET____DOT__cf__scan_q));
        bufp->chgBit(oldp+52,(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__20__KET____DOT__cf__scan_q));
        bufp->chgBit(oldp+53,(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__21__KET____DOT__cf__scan_q));
        bufp->chgBit(oldp+54,(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__22__KET____DOT__cf__scan_q));
        bufp->chgBit(oldp+55,(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__23__KET____DOT__cf__scan_q));
        bufp->chgBit(oldp+56,(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__24__KET____DOT__cf__scan_q));
        bufp->chgBit(oldp+57,(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__25__KET____DOT__cf__scan_q));
        bufp->chgBit(oldp+58,(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__26__KET____DOT__cf__scan_q));
        bufp->chgBit(oldp+59,(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__2__KET____DOT__cf__scan_q));
        bufp->chgBit(oldp+60,(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__3__KET____DOT__cf__scan_q));
        bufp->chgBit(oldp+61,(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__4__KET____DOT__cf__scan_q));
        bufp->chgBit(oldp+62,(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__5__KET____DOT__cf__scan_q));
        bufp->chgBit(oldp+63,(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__6__KET____DOT__cf__scan_q));
        bufp->chgBit(oldp+64,(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__7__KET____DOT__cf__scan_q));
        bufp->chgBit(oldp+65,(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__8__KET____DOT__cf__scan_q));
        bufp->chgBit(oldp+66,(vlSelf->CLB__DOT__gen_p1__BRA__0__KET____DOT__p1__DOT__sel_bit));
        bufp->chgBit(oldp+67,(vlSelf->CLB__DOT__gen_p1__BRA__1__KET____DOT__p1__DOT__sel_bit));
        bufp->chgBit(oldp+68,(vlSelf->CLB__DOT__gen_p1__BRA__2__KET____DOT__p1__DOT__sel_bit));
        bufp->chgBit(oldp+69,(vlSelf->CLB__DOT__gen_p2__BRA__0__KET____DOT__p2__DOT__sel_bit));
        bufp->chgBit(oldp+70,(vlSelf->CLB__DOT__gen_p2__BRA__1__KET____DOT__p2__DOT__sel_bit));
        bufp->chgBit(oldp+71,(vlSelf->CLB__DOT__gen_p2__BRA__2__KET____DOT__p2__DOT__sel_bit));
        bufp->chgBit(oldp+72,(vlSelf->CLB__DOT__p3__DOT__sel_bit));
        bufp->chgBit(oldp+73,(vlSelf->CLB__DOT__p4__DOT__sel_bit));
    }
    bufp->chgBit(oldp+74,(vlSelf->clk));
    bufp->chgBit(oldp+75,(vlSelf->cfg_en));
    bufp->chgBit(oldp+76,(vlSelf->cfg_in));
    bufp->chgBit(oldp+77,(vlSelf->reset));
    bufp->chgBit(oldp+78,(vlSelf->A));
    bufp->chgBit(oldp+79,(vlSelf->B));
    bufp->chgBit(oldp+80,(vlSelf->C));
    bufp->chgBit(oldp+81,(vlSelf->D));
    bufp->chgBit(oldp+82,(vlSelf->x));
    bufp->chgBit(oldp+83,(vlSelf->y));
    bufp->chgIData(oldp+84,((((IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__26__KET____DOT__cf__scan_q) 
                              << 0x1bU) | (((IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__25__KET____DOT__cf__scan_q) 
                                            << 0x1aU) 
                                           | (((IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__24__KET____DOT__cf__scan_q) 
                                               << 0x19U) 
                                              | (((IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__23__KET____DOT__cf__scan_q) 
                                                  << 0x18U) 
                                                 | (((IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__22__KET____DOT__cf__scan_q) 
                                                     << 0x17U) 
                                                    | (((IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__21__KET____DOT__cf__scan_q) 
                                                        << 0x16U) 
                                                       | (((IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__20__KET____DOT__cf__scan_q) 
                                                           << 0x15U) 
                                                          | (((IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__19__KET____DOT__cf__scan_q) 
                                                              << 0x14U) 
                                                             | (((IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__18__KET____DOT__cf__scan_q) 
                                                                 << 0x13U) 
                                                                | (((IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__17__KET____DOT__cf__scan_q) 
                                                                    << 0x12U) 
                                                                   | (((IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__16__KET____DOT__cf__scan_q) 
                                                                       << 0x11U) 
                                                                      | (((IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__15__KET____DOT__cf__scan_q) 
                                                                          << 0x10U) 
                                                                         | (((IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__14__KET____DOT__cf__scan_q) 
                                                                             << 0xfU) 
                                                                            | (((IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__13__KET____DOT__cf__scan_q) 
                                                                                << 0xeU) 
                                                                               | (((IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__12__KET____DOT__cf__scan_q) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__11__KET____DOT__cf__scan_q) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__10__KET____DOT__cf__scan_q) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__9__KET____DOT__cf__scan_q) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__8__KET____DOT__cf__scan_q) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__7__KET____DOT__cf__scan_q) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__6__KET____DOT__cf__scan_q) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__5__KET____DOT__cf__scan_q) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__4__KET____DOT__cf__scan_q) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__3__KET____DOT__cf__scan_q) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__2__KET____DOT__cf__scan_q) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__1__KET____DOT__cf__scan_q) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__0__KET____DOT__cf__scan_q) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->cfg_in))))))))))))))))))))))))))))),28);
    bufp->chgBit(oldp+85,(((~ (IData)(vlSelf->cfg_en)) 
                           & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__0__KET____DOT__cf__scan_q))));
    bufp->chgBit(oldp+86,(((~ (IData)(vlSelf->cfg_en)) 
                           & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__10__KET____DOT__cf__scan_q))));
    bufp->chgBit(oldp+87,(((~ (IData)(vlSelf->cfg_en)) 
                           & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__11__KET____DOT__cf__scan_q))));
    bufp->chgBit(oldp+88,(((~ (IData)(vlSelf->cfg_en)) 
                           & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__12__KET____DOT__cf__scan_q))));
    bufp->chgBit(oldp+89,(((~ (IData)(vlSelf->cfg_en)) 
                           & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__13__KET____DOT__cf__scan_q))));
    bufp->chgBit(oldp+90,(((~ (IData)(vlSelf->cfg_en)) 
                           & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__14__KET____DOT__cf__scan_q))));
    bufp->chgBit(oldp+91,(((~ (IData)(vlSelf->cfg_en)) 
                           & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__15__KET____DOT__cf__scan_q))));
    bufp->chgBit(oldp+92,(((~ (IData)(vlSelf->cfg_en)) 
                           & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__16__KET____DOT__cf__scan_q))));
    bufp->chgBit(oldp+93,(((~ (IData)(vlSelf->cfg_en)) 
                           & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__17__KET____DOT__cf__scan_q))));
    bufp->chgBit(oldp+94,(((~ (IData)(vlSelf->cfg_en)) 
                           & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__18__KET____DOT__cf__scan_q))));
    bufp->chgBit(oldp+95,(((~ (IData)(vlSelf->cfg_en)) 
                           & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__19__KET____DOT__cf__scan_q))));
    bufp->chgBit(oldp+96,(((~ (IData)(vlSelf->cfg_en)) 
                           & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__1__KET____DOT__cf__scan_q))));
    bufp->chgBit(oldp+97,(((~ (IData)(vlSelf->cfg_en)) 
                           & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__20__KET____DOT__cf__scan_q))));
    bufp->chgBit(oldp+98,(((~ (IData)(vlSelf->cfg_en)) 
                           & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__21__KET____DOT__cf__scan_q))));
    bufp->chgBit(oldp+99,(((~ (IData)(vlSelf->cfg_en)) 
                           & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__22__KET____DOT__cf__scan_q))));
    bufp->chgBit(oldp+100,(((~ (IData)(vlSelf->cfg_en)) 
                            & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__23__KET____DOT__cf__scan_q))));
    bufp->chgBit(oldp+101,(((~ (IData)(vlSelf->cfg_en)) 
                            & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__24__KET____DOT__cf__scan_q))));
    bufp->chgBit(oldp+102,(((~ (IData)(vlSelf->cfg_en)) 
                            & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__25__KET____DOT__cf__scan_q))));
    bufp->chgBit(oldp+103,(((~ (IData)(vlSelf->cfg_en)) 
                            & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__26__KET____DOT__cf__scan_q))));
    bufp->chgBit(oldp+104,(((~ (IData)(vlSelf->cfg_en)) 
                            & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__2__KET____DOT__cf__scan_q))));
    bufp->chgBit(oldp+105,(((~ (IData)(vlSelf->cfg_en)) 
                            & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__3__KET____DOT__cf__scan_q))));
    bufp->chgBit(oldp+106,(((~ (IData)(vlSelf->cfg_en)) 
                            & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__4__KET____DOT__cf__scan_q))));
    bufp->chgBit(oldp+107,(((~ (IData)(vlSelf->cfg_en)) 
                            & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__5__KET____DOT__cf__scan_q))));
    bufp->chgBit(oldp+108,(((~ (IData)(vlSelf->cfg_en)) 
                            & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__6__KET____DOT__cf__scan_q))));
    bufp->chgBit(oldp+109,(((~ (IData)(vlSelf->cfg_en)) 
                            & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__7__KET____DOT__cf__scan_q))));
    bufp->chgBit(oldp+110,(((~ (IData)(vlSelf->cfg_en)) 
                            & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__8__KET____DOT__cf__scan_q))));
    bufp->chgBit(oldp+111,(((~ (IData)(vlSelf->cfg_en)) 
                            & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__9__KET____DOT__cf__scan_q))));
}

void VCLB___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLB___024root__trace_cleanup\n"); );
    // Init
    VCLB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCLB___024root*>(voidSelf);
    VCLB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
