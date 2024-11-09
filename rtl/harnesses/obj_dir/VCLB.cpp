// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VCLB.h"
#include "VCLB__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VCLB::VCLB(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VCLB__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , input_configuration_word{vlSymsp->TOP.input_configuration_word}
    , flip_flop_configuration_word{vlSymsp->TOP.flip_flop_configuration_word}
    , output_configuration_word{vlSymsp->TOP.output_configuration_word}
    , A{vlSymsp->TOP.A}
    , B{vlSymsp->TOP.B}
    , C{vlSymsp->TOP.C}
    , D{vlSymsp->TOP.D}
    , x{vlSymsp->TOP.x}
    , y{vlSymsp->TOP.y}
    , lut_configuration_word{vlSymsp->TOP.lut_configuration_word}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VCLB::VCLB(const char* _vcname__)
    : VCLB(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VCLB::~VCLB() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VCLB___024root___eval_debug_assertions(VCLB___024root* vlSelf);
#endif  // VL_DEBUG
void VCLB___024root___eval_static(VCLB___024root* vlSelf);
void VCLB___024root___eval_initial(VCLB___024root* vlSelf);
void VCLB___024root___eval_settle(VCLB___024root* vlSelf);
void VCLB___024root___eval(VCLB___024root* vlSelf);

void VCLB::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VCLB::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VCLB___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VCLB___024root___eval_static(&(vlSymsp->TOP));
        VCLB___024root___eval_initial(&(vlSymsp->TOP));
        VCLB___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VCLB___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VCLB::eventsPending() { return false; }

uint64_t VCLB::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VCLB::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VCLB___024root___eval_final(VCLB___024root* vlSelf);

VL_ATTR_COLD void VCLB::final() {
    VCLB___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VCLB::hierName() const { return vlSymsp->name(); }
const char* VCLB::modelName() const { return "VCLB"; }
unsigned VCLB::threads() const { return 1; }
void VCLB::prepareClone() const { contextp()->prepareClone(); }
void VCLB::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VCLB::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VCLB___024root__trace_init_top(VCLB___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VCLB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCLB___024root*>(voidSelf);
    VCLB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VCLB___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VCLB___024root__trace_register(VCLB___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VCLB::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VCLB::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VCLB___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
