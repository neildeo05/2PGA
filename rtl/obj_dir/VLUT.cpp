// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VLUT.h"
#include "VLUT__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VLUT::VLUT(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VLUT__Syms(contextp(), _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , c{vlSymsp->TOP.c}
    , out{vlSymsp->TOP.out}
    , mask{vlSymsp->TOP.mask}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VLUT::VLUT(const char* _vcname__)
    : VLUT(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VLUT::~VLUT() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VLUT___024root___eval_debug_assertions(VLUT___024root* vlSelf);
#endif  // VL_DEBUG
void VLUT___024root___eval_static(VLUT___024root* vlSelf);
void VLUT___024root___eval_initial(VLUT___024root* vlSelf);
void VLUT___024root___eval_settle(VLUT___024root* vlSelf);
void VLUT___024root___eval(VLUT___024root* vlSelf);

void VLUT::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VLUT::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VLUT___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VLUT___024root___eval_static(&(vlSymsp->TOP));
        VLUT___024root___eval_initial(&(vlSymsp->TOP));
        VLUT___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VLUT___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VLUT::eventsPending() { return false; }

uint64_t VLUT::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VLUT::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VLUT___024root___eval_final(VLUT___024root* vlSelf);

VL_ATTR_COLD void VLUT::final() {
    VLUT___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VLUT::hierName() const { return vlSymsp->name(); }
const char* VLUT::modelName() const { return "VLUT"; }
unsigned VLUT::threads() const { return 1; }
void VLUT::prepareClone() const { contextp()->prepareClone(); }
void VLUT::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VLUT::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VLUT___024root__trace_init_top(VLUT___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VLUT___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VLUT___024root*>(voidSelf);
    VLUT__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VLUT___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VLUT___024root__trace_register(VLUT___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VLUT::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VLUT::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VLUT___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
