// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VCLB__Syms.h"


VL_ATTR_COLD void VCLB___024root__trace_init_sub__TOP__0(VCLB___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCLB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLB___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+75,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+76,"cfg_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+77,"cfg_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+78,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+79,"A",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+80,"B",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+81,"C",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+82,"D",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+83,"x",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+84,"y",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("CLB ");
    tracep->declBit(c+75,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+76,"cfg_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+77,"cfg_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+78,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+79,"A",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+80,"B",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+81,"C",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+82,"D",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+83,"x",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+84,"y",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+5,"configuration_word",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 26,0);
    tracep->declBus(c+6,"input_configuration_word",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+7,"lut_configuration_word",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBus(c+8,"flip_flop_configuration_word",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+9,"output_configuration_word",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+10,"ic_top",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+11,"ic_bot",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+12,"top_lut_inps",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+13,"bot_lut_inps",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBit(c+14,"f",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+15,"g",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+1+i*1,"inputs",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0));
    }
    tracep->declBus(c+38,"top_lut_mask",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+39,"bot_lut_mask",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->pushNamePrefix("bot_lut ");
    tracep->declBus(c+39,"mask",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+16,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+17,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+18,"c",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+15,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+19+i*1,"sel2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0));
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cc ");
    tracep->declBus(c+113,"SZ",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+75,"cfg_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+76,"cfg_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+77,"cfg_head",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+5,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 26,0);
    tracep->declBus(c+85,"chain",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 27,0);
    tracep->pushNamePrefix("g_cf1[0] ");
    tracep->pushNamePrefix("cf ");
    tracep->declBit(c+75,"cfg_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+76,"cfg_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+77,"D",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+40,"scan_q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+86,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_cf1[10] ");
    tracep->pushNamePrefix("cf ");
    tracep->declBit(c+75,"cfg_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+76,"cfg_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+41,"D",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+42,"scan_q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+87,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_cf1[11] ");
    tracep->pushNamePrefix("cf ");
    tracep->declBit(c+75,"cfg_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+76,"cfg_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+42,"D",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+43,"scan_q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+88,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_cf1[12] ");
    tracep->pushNamePrefix("cf ");
    tracep->declBit(c+75,"cfg_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+76,"cfg_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+43,"D",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+44,"scan_q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+89,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_cf1[13] ");
    tracep->pushNamePrefix("cf ");
    tracep->declBit(c+75,"cfg_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+76,"cfg_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+44,"D",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+45,"scan_q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+90,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_cf1[14] ");
    tracep->pushNamePrefix("cf ");
    tracep->declBit(c+75,"cfg_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+76,"cfg_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+45,"D",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+46,"scan_q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+91,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_cf1[15] ");
    tracep->pushNamePrefix("cf ");
    tracep->declBit(c+75,"cfg_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+76,"cfg_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+46,"D",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+47,"scan_q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+92,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_cf1[16] ");
    tracep->pushNamePrefix("cf ");
    tracep->declBit(c+75,"cfg_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+76,"cfg_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+47,"D",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+48,"scan_q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+93,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_cf1[17] ");
    tracep->pushNamePrefix("cf ");
    tracep->declBit(c+75,"cfg_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+76,"cfg_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+48,"D",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+49,"scan_q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+94,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_cf1[18] ");
    tracep->pushNamePrefix("cf ");
    tracep->declBit(c+75,"cfg_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+76,"cfg_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+49,"D",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+50,"scan_q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+95,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_cf1[19] ");
    tracep->pushNamePrefix("cf ");
    tracep->declBit(c+75,"cfg_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+76,"cfg_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+50,"D",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+51,"scan_q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+96,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_cf1[1] ");
    tracep->pushNamePrefix("cf ");
    tracep->declBit(c+75,"cfg_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+76,"cfg_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+40,"D",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+52,"scan_q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+97,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_cf1[20] ");
    tracep->pushNamePrefix("cf ");
    tracep->declBit(c+75,"cfg_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+76,"cfg_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+51,"D",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+53,"scan_q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+98,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_cf1[21] ");
    tracep->pushNamePrefix("cf ");
    tracep->declBit(c+75,"cfg_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+76,"cfg_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+53,"D",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+54,"scan_q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+99,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_cf1[22] ");
    tracep->pushNamePrefix("cf ");
    tracep->declBit(c+75,"cfg_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+76,"cfg_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+54,"D",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+55,"scan_q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+100,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_cf1[23] ");
    tracep->pushNamePrefix("cf ");
    tracep->declBit(c+75,"cfg_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+76,"cfg_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+55,"D",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+56,"scan_q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+101,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_cf1[24] ");
    tracep->pushNamePrefix("cf ");
    tracep->declBit(c+75,"cfg_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+76,"cfg_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+56,"D",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+57,"scan_q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+102,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_cf1[25] ");
    tracep->pushNamePrefix("cf ");
    tracep->declBit(c+75,"cfg_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+76,"cfg_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+57,"D",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+58,"scan_q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+103,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_cf1[26] ");
    tracep->pushNamePrefix("cf ");
    tracep->declBit(c+75,"cfg_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+76,"cfg_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+58,"D",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+59,"scan_q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+104,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_cf1[2] ");
    tracep->pushNamePrefix("cf ");
    tracep->declBit(c+75,"cfg_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+76,"cfg_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+52,"D",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+60,"scan_q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+105,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_cf1[3] ");
    tracep->pushNamePrefix("cf ");
    tracep->declBit(c+75,"cfg_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+76,"cfg_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+60,"D",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+61,"scan_q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+106,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_cf1[4] ");
    tracep->pushNamePrefix("cf ");
    tracep->declBit(c+75,"cfg_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+76,"cfg_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+61,"D",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+62,"scan_q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+107,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_cf1[5] ");
    tracep->pushNamePrefix("cf ");
    tracep->declBit(c+75,"cfg_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+76,"cfg_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+62,"D",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+63,"scan_q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+108,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_cf1[6] ");
    tracep->pushNamePrefix("cf ");
    tracep->declBit(c+75,"cfg_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+76,"cfg_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+63,"D",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+64,"scan_q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+109,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_cf1[7] ");
    tracep->pushNamePrefix("cf ");
    tracep->declBit(c+75,"cfg_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+76,"cfg_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+64,"D",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+65,"scan_q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+110,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_cf1[8] ");
    tracep->pushNamePrefix("cf ");
    tracep->declBit(c+75,"cfg_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+76,"cfg_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+65,"D",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+66,"scan_q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+111,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("g_cf1[9] ");
    tracep->pushNamePrefix("cf ");
    tracep->declBit(c+75,"cfg_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+76,"cfg_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+66,"D",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+41,"scan_q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+112,"q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("gen_p1[0] ");
    tracep->pushNamePrefix("p1 ");
    tracep->declBit(c+75,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+78,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+23,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+79,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+80,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+24,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+67,"sel_bit",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_p1[1] ");
    tracep->pushNamePrefix("p1 ");
    tracep->declBit(c+75,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+78,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+25,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+80,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+81,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+26,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+68,"sel_bit",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_p1[2] ");
    tracep->pushNamePrefix("p1 ");
    tracep->declBit(c+75,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+78,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+27,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+81,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+82,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+28,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+69,"sel_bit",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_p2[0] ");
    tracep->pushNamePrefix("p2 ");
    tracep->declBit(c+75,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+78,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+29,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+79,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+80,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+16,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+70,"sel_bit",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_p2[1] ");
    tracep->pushNamePrefix("p2 ");
    tracep->declBit(c+75,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+78,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+30,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+80,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+81,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+17,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+71,"sel_bit",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_p2[2] ");
    tracep->pushNamePrefix("p2 ");
    tracep->declBit(c+75,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+78,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+31,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+81,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+82,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+18,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+72,"sel_bit",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("p3 ");
    tracep->declBit(c+75,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+78,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+32,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+14,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+15,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+83,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+73,"sel_bit",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("p4 ");
    tracep->declBit(c+75,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+78,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+33,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+14,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+15,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+84,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+74,"sel_bit",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("top_lut ");
    tracep->declBus(c+38,"mask",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+24,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+26,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+28,"c",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+14,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+34+i*1,"sel2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0));
    }
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VCLB___024root__trace_init_top(VCLB___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCLB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLB___024root__trace_init_top\n"); );
    // Body
    VCLB___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VCLB___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void VCLB___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void VCLB___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void VCLB___024root__trace_register(VCLB___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCLB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLB___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VCLB___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VCLB___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VCLB___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VCLB___024root__trace_full_sub_0(VCLB___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void VCLB___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCLB___024root__trace_full_top_0\n"); );
    // Init
    VCLB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCLB___024root*>(voidSelf);
    VCLB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VCLB___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VCLB___024root__trace_full_sub_0(VCLB___024root* vlSelf, VerilatedFst::Buffer* bufp) {
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
    bufp->fullIData(oldp+5,(vlSelf->CLB__DOT__configuration_word),27);
    bufp->fullCData(oldp+6,((0x3fU & vlSelf->CLB__DOT__configuration_word)),6);
    bufp->fullSData(oldp+7,((0xffffU & (vlSelf->CLB__DOT__configuration_word 
                                        >> 6U))),16);
    bufp->fullCData(oldp+8,((7U & (vlSelf->CLB__DOT__configuration_word 
                                   >> 0x16U))),3);
    bufp->fullCData(oldp+9,((3U & (vlSelf->CLB__DOT__configuration_word 
                                   >> 0x19U))),2);
    bufp->fullCData(oldp+10,((7U & vlSelf->CLB__DOT__configuration_word)),3);
    bufp->fullCData(oldp+11,((7U & (vlSelf->CLB__DOT__configuration_word 
                                    >> 3U))),3);
    bufp->fullCData(oldp+12,((((IData)(vlSelf->CLB__DOT____Vcellout__gen_p1__BRA__2__KET____DOT__p1__out) 
                               << 2U) | (((IData)(vlSelf->CLB__DOT____Vcellout__gen_p1__BRA__1__KET____DOT__p1__out) 
                                          << 1U) | (IData)(vlSelf->CLB__DOT____Vcellout__gen_p1__BRA__0__KET____DOT__p1__out)))),3);
    bufp->fullCData(oldp+13,((((IData)(vlSelf->CLB__DOT____Vcellout__gen_p2__BRA__2__KET____DOT__p2__out) 
                               << 2U) | (((IData)(vlSelf->CLB__DOT____Vcellout__gen_p2__BRA__1__KET____DOT__p2__out) 
                                          << 1U) | (IData)(vlSelf->CLB__DOT____Vcellout__gen_p2__BRA__0__KET____DOT__p2__out)))),3);
    bufp->fullBit(oldp+14,(vlSelf->CLB__DOT__f));
    bufp->fullBit(oldp+15,(vlSelf->CLB__DOT__g));
    bufp->fullBit(oldp+16,(vlSelf->CLB__DOT____Vcellout__gen_p2__BRA__0__KET____DOT__p2__out));
    bufp->fullBit(oldp+17,(vlSelf->CLB__DOT____Vcellout__gen_p2__BRA__1__KET____DOT__p2__out));
    bufp->fullBit(oldp+18,(vlSelf->CLB__DOT____Vcellout__gen_p2__BRA__2__KET____DOT__p2__out));
    bufp->fullBit(oldp+19,(vlSelf->CLB__DOT__bot_lut__DOT__sel2[0]));
    bufp->fullBit(oldp+20,(vlSelf->CLB__DOT__bot_lut__DOT__sel2[1]));
    bufp->fullBit(oldp+21,(vlSelf->CLB__DOT__bot_lut__DOT__sel2[2]));
    bufp->fullBit(oldp+22,(vlSelf->CLB__DOT__bot_lut__DOT__sel2[3]));
    bufp->fullBit(oldp+23,((1U & vlSelf->CLB__DOT__configuration_word)));
    bufp->fullBit(oldp+24,(vlSelf->CLB__DOT____Vcellout__gen_p1__BRA__0__KET____DOT__p1__out));
    bufp->fullBit(oldp+25,((1U & (vlSelf->CLB__DOT__configuration_word 
                                  >> 1U))));
    bufp->fullBit(oldp+26,(vlSelf->CLB__DOT____Vcellout__gen_p1__BRA__1__KET____DOT__p1__out));
    bufp->fullBit(oldp+27,((1U & (vlSelf->CLB__DOT__configuration_word 
                                  >> 2U))));
    bufp->fullBit(oldp+28,(vlSelf->CLB__DOT____Vcellout__gen_p1__BRA__2__KET____DOT__p1__out));
    bufp->fullBit(oldp+29,((1U & (vlSelf->CLB__DOT__configuration_word 
                                  >> 3U))));
    bufp->fullBit(oldp+30,((1U & (vlSelf->CLB__DOT__configuration_word 
                                  >> 4U))));
    bufp->fullBit(oldp+31,((1U & (vlSelf->CLB__DOT__configuration_word 
                                  >> 5U))));
    bufp->fullBit(oldp+32,((1U & (vlSelf->CLB__DOT__configuration_word 
                                  >> 0x19U))));
    bufp->fullBit(oldp+33,((1U & (vlSelf->CLB__DOT__configuration_word 
                                  >> 0x1aU))));
    bufp->fullBit(oldp+34,(vlSelf->CLB__DOT__top_lut__DOT__sel2[0]));
    bufp->fullBit(oldp+35,(vlSelf->CLB__DOT__top_lut__DOT__sel2[1]));
    bufp->fullBit(oldp+36,(vlSelf->CLB__DOT__top_lut__DOT__sel2[2]));
    bufp->fullBit(oldp+37,(vlSelf->CLB__DOT__top_lut__DOT__sel2[3]));
    bufp->fullCData(oldp+38,(vlSelf->CLB__DOT__top_lut_mask),8);
    bufp->fullCData(oldp+39,(vlSelf->CLB__DOT__bot_lut_mask),8);
    bufp->fullBit(oldp+40,(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__0__KET____DOT__cf__scan_q));
    bufp->fullBit(oldp+41,(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__9__KET____DOT__cf__scan_q));
    bufp->fullBit(oldp+42,(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__10__KET____DOT__cf__scan_q));
    bufp->fullBit(oldp+43,(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__11__KET____DOT__cf__scan_q));
    bufp->fullBit(oldp+44,(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__12__KET____DOT__cf__scan_q));
    bufp->fullBit(oldp+45,(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__13__KET____DOT__cf__scan_q));
    bufp->fullBit(oldp+46,(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__14__KET____DOT__cf__scan_q));
    bufp->fullBit(oldp+47,(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__15__KET____DOT__cf__scan_q));
    bufp->fullBit(oldp+48,(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__16__KET____DOT__cf__scan_q));
    bufp->fullBit(oldp+49,(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__17__KET____DOT__cf__scan_q));
    bufp->fullBit(oldp+50,(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__18__KET____DOT__cf__scan_q));
    bufp->fullBit(oldp+51,(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__19__KET____DOT__cf__scan_q));
    bufp->fullBit(oldp+52,(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__1__KET____DOT__cf__scan_q));
    bufp->fullBit(oldp+53,(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__20__KET____DOT__cf__scan_q));
    bufp->fullBit(oldp+54,(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__21__KET____DOT__cf__scan_q));
    bufp->fullBit(oldp+55,(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__22__KET____DOT__cf__scan_q));
    bufp->fullBit(oldp+56,(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__23__KET____DOT__cf__scan_q));
    bufp->fullBit(oldp+57,(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__24__KET____DOT__cf__scan_q));
    bufp->fullBit(oldp+58,(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__25__KET____DOT__cf__scan_q));
    bufp->fullBit(oldp+59,(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__26__KET____DOT__cf__scan_q));
    bufp->fullBit(oldp+60,(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__2__KET____DOT__cf__scan_q));
    bufp->fullBit(oldp+61,(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__3__KET____DOT__cf__scan_q));
    bufp->fullBit(oldp+62,(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__4__KET____DOT__cf__scan_q));
    bufp->fullBit(oldp+63,(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__5__KET____DOT__cf__scan_q));
    bufp->fullBit(oldp+64,(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__6__KET____DOT__cf__scan_q));
    bufp->fullBit(oldp+65,(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__7__KET____DOT__cf__scan_q));
    bufp->fullBit(oldp+66,(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__8__KET____DOT__cf__scan_q));
    bufp->fullBit(oldp+67,(vlSelf->CLB__DOT__gen_p1__BRA__0__KET____DOT__p1__DOT__sel_bit));
    bufp->fullBit(oldp+68,(vlSelf->CLB__DOT__gen_p1__BRA__1__KET____DOT__p1__DOT__sel_bit));
    bufp->fullBit(oldp+69,(vlSelf->CLB__DOT__gen_p1__BRA__2__KET____DOT__p1__DOT__sel_bit));
    bufp->fullBit(oldp+70,(vlSelf->CLB__DOT__gen_p2__BRA__0__KET____DOT__p2__DOT__sel_bit));
    bufp->fullBit(oldp+71,(vlSelf->CLB__DOT__gen_p2__BRA__1__KET____DOT__p2__DOT__sel_bit));
    bufp->fullBit(oldp+72,(vlSelf->CLB__DOT__gen_p2__BRA__2__KET____DOT__p2__DOT__sel_bit));
    bufp->fullBit(oldp+73,(vlSelf->CLB__DOT__p3__DOT__sel_bit));
    bufp->fullBit(oldp+74,(vlSelf->CLB__DOT__p4__DOT__sel_bit));
    bufp->fullBit(oldp+75,(vlSelf->clk));
    bufp->fullBit(oldp+76,(vlSelf->cfg_en));
    bufp->fullBit(oldp+77,(vlSelf->cfg_in));
    bufp->fullBit(oldp+78,(vlSelf->reset));
    bufp->fullBit(oldp+79,(vlSelf->A));
    bufp->fullBit(oldp+80,(vlSelf->B));
    bufp->fullBit(oldp+81,(vlSelf->C));
    bufp->fullBit(oldp+82,(vlSelf->D));
    bufp->fullBit(oldp+83,(vlSelf->x));
    bufp->fullBit(oldp+84,(vlSelf->y));
    bufp->fullIData(oldp+85,((((IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__26__KET____DOT__cf__scan_q) 
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
    bufp->fullBit(oldp+86,(((~ (IData)(vlSelf->cfg_en)) 
                            & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__0__KET____DOT__cf__scan_q))));
    bufp->fullBit(oldp+87,(((~ (IData)(vlSelf->cfg_en)) 
                            & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__10__KET____DOT__cf__scan_q))));
    bufp->fullBit(oldp+88,(((~ (IData)(vlSelf->cfg_en)) 
                            & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__11__KET____DOT__cf__scan_q))));
    bufp->fullBit(oldp+89,(((~ (IData)(vlSelf->cfg_en)) 
                            & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__12__KET____DOT__cf__scan_q))));
    bufp->fullBit(oldp+90,(((~ (IData)(vlSelf->cfg_en)) 
                            & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__13__KET____DOT__cf__scan_q))));
    bufp->fullBit(oldp+91,(((~ (IData)(vlSelf->cfg_en)) 
                            & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__14__KET____DOT__cf__scan_q))));
    bufp->fullBit(oldp+92,(((~ (IData)(vlSelf->cfg_en)) 
                            & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__15__KET____DOT__cf__scan_q))));
    bufp->fullBit(oldp+93,(((~ (IData)(vlSelf->cfg_en)) 
                            & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__16__KET____DOT__cf__scan_q))));
    bufp->fullBit(oldp+94,(((~ (IData)(vlSelf->cfg_en)) 
                            & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__17__KET____DOT__cf__scan_q))));
    bufp->fullBit(oldp+95,(((~ (IData)(vlSelf->cfg_en)) 
                            & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__18__KET____DOT__cf__scan_q))));
    bufp->fullBit(oldp+96,(((~ (IData)(vlSelf->cfg_en)) 
                            & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__19__KET____DOT__cf__scan_q))));
    bufp->fullBit(oldp+97,(((~ (IData)(vlSelf->cfg_en)) 
                            & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__1__KET____DOT__cf__scan_q))));
    bufp->fullBit(oldp+98,(((~ (IData)(vlSelf->cfg_en)) 
                            & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__20__KET____DOT__cf__scan_q))));
    bufp->fullBit(oldp+99,(((~ (IData)(vlSelf->cfg_en)) 
                            & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__21__KET____DOT__cf__scan_q))));
    bufp->fullBit(oldp+100,(((~ (IData)(vlSelf->cfg_en)) 
                             & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__22__KET____DOT__cf__scan_q))));
    bufp->fullBit(oldp+101,(((~ (IData)(vlSelf->cfg_en)) 
                             & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__23__KET____DOT__cf__scan_q))));
    bufp->fullBit(oldp+102,(((~ (IData)(vlSelf->cfg_en)) 
                             & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__24__KET____DOT__cf__scan_q))));
    bufp->fullBit(oldp+103,(((~ (IData)(vlSelf->cfg_en)) 
                             & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__25__KET____DOT__cf__scan_q))));
    bufp->fullBit(oldp+104,(((~ (IData)(vlSelf->cfg_en)) 
                             & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__26__KET____DOT__cf__scan_q))));
    bufp->fullBit(oldp+105,(((~ (IData)(vlSelf->cfg_en)) 
                             & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__2__KET____DOT__cf__scan_q))));
    bufp->fullBit(oldp+106,(((~ (IData)(vlSelf->cfg_en)) 
                             & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__3__KET____DOT__cf__scan_q))));
    bufp->fullBit(oldp+107,(((~ (IData)(vlSelf->cfg_en)) 
                             & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__4__KET____DOT__cf__scan_q))));
    bufp->fullBit(oldp+108,(((~ (IData)(vlSelf->cfg_en)) 
                             & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__5__KET____DOT__cf__scan_q))));
    bufp->fullBit(oldp+109,(((~ (IData)(vlSelf->cfg_en)) 
                             & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__6__KET____DOT__cf__scan_q))));
    bufp->fullBit(oldp+110,(((~ (IData)(vlSelf->cfg_en)) 
                             & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__7__KET____DOT__cf__scan_q))));
    bufp->fullBit(oldp+111,(((~ (IData)(vlSelf->cfg_en)) 
                             & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__8__KET____DOT__cf__scan_q))));
    bufp->fullBit(oldp+112,(((~ (IData)(vlSelf->cfg_en)) 
                             & (IData)(vlSelf->CLB__DOT__cc__DOT____Vcellout__g_cf1__BRA__9__KET____DOT__cf__scan_q))));
    bufp->fullIData(oldp+113,(0x1bU),32);
}
