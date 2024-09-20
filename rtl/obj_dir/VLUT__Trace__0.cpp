// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VLUT__Syms.h"


void VLUT___024root__trace_chg_sub_0(VLUT___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VLUT___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLUT___024root__trace_chg_top_0\n"); );
    // Init
    VLUT___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VLUT___024root*>(voidSelf);
    VLUT__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VLUT___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VLUT___024root__trace_chg_sub_0(VLUT___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VLUT__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLUT___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->LUT__DOT__sel2[0]));
        bufp->chgBit(oldp+1,(vlSelf->LUT__DOT__sel2[1]));
        bufp->chgBit(oldp+2,(vlSelf->LUT__DOT__sel2[2]));
        bufp->chgBit(oldp+3,(vlSelf->LUT__DOT__sel2[3]));
    }
    bufp->chgCData(oldp+4,(vlSelf->mask),8);
    bufp->chgBit(oldp+5,(vlSelf->a));
    bufp->chgBit(oldp+6,(vlSelf->b));
    bufp->chgBit(oldp+7,(vlSelf->c));
    bufp->chgBit(oldp+8,(vlSelf->out));
}

void VLUT___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLUT___024root__trace_cleanup\n"); );
    // Init
    VLUT___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VLUT___024root*>(voidSelf);
    VLUT__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
