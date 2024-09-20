// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VLUT__Syms.h"


VL_ATTR_COLD void VLUT___024root__trace_init_sub__TOP__0(VLUT___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VLUT__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLUT___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+5,"mask", false,-1, 7,0);
    tracep->declBit(c+6,"a", false,-1);
    tracep->declBit(c+7,"b", false,-1);
    tracep->declBit(c+8,"c", false,-1);
    tracep->declBit(c+9,"out", false,-1);
    tracep->pushNamePrefix("LUT ");
    tracep->declBus(c+5,"mask", false,-1, 7,0);
    tracep->declBit(c+6,"a", false,-1);
    tracep->declBit(c+7,"b", false,-1);
    tracep->declBit(c+8,"c", false,-1);
    tracep->declBit(c+9,"out", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+1+i*1,"sel2", true,(i+0));
    }
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VLUT___024root__trace_init_top(VLUT___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VLUT__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLUT___024root__trace_init_top\n"); );
    // Body
    VLUT___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VLUT___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VLUT___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VLUT___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VLUT___024root__trace_register(VLUT___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VLUT__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLUT___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VLUT___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VLUT___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VLUT___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VLUT___024root__trace_full_sub_0(VLUT___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VLUT___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLUT___024root__trace_full_top_0\n"); );
    // Init
    VLUT___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VLUT___024root*>(voidSelf);
    VLUT__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VLUT___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VLUT___024root__trace_full_sub_0(VLUT___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VLUT__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLUT___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->LUT__DOT__sel2[0]));
    bufp->fullBit(oldp+2,(vlSelf->LUT__DOT__sel2[1]));
    bufp->fullBit(oldp+3,(vlSelf->LUT__DOT__sel2[2]));
    bufp->fullBit(oldp+4,(vlSelf->LUT__DOT__sel2[3]));
    bufp->fullCData(oldp+5,(vlSelf->mask),8);
    bufp->fullBit(oldp+6,(vlSelf->a));
    bufp->fullBit(oldp+7,(vlSelf->b));
    bufp->fullBit(oldp+8,(vlSelf->c));
    bufp->fullBit(oldp+9,(vlSelf->out));
}
