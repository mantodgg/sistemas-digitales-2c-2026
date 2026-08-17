// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcompuerta_misterios_tb__pch.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

Vcompuerta_misterios_tb::Vcompuerta_misterios_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vcompuerta_misterios_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vcompuerta_misterios_tb::Vcompuerta_misterios_tb(const char* _vcname__)
    : Vcompuerta_misterios_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vcompuerta_misterios_tb::~Vcompuerta_misterios_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vcompuerta_misterios_tb___024root___eval_debug_assertions(Vcompuerta_misterios_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vcompuerta_misterios_tb___024root___eval_static(Vcompuerta_misterios_tb___024root* vlSelf);
void Vcompuerta_misterios_tb___024root___eval_initial(Vcompuerta_misterios_tb___024root* vlSelf);
void Vcompuerta_misterios_tb___024root___eval_settle(Vcompuerta_misterios_tb___024root* vlSelf);
void Vcompuerta_misterios_tb___024root___eval(Vcompuerta_misterios_tb___024root* vlSelf);

void Vcompuerta_misterios_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcompuerta_misterios_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcompuerta_misterios_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vcompuerta_misterios_tb___024root___eval_static(&(vlSymsp->TOP));
        Vcompuerta_misterios_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vcompuerta_misterios_tb___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vcompuerta_misterios_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vcompuerta_misterios_tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vcompuerta_misterios_tb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vcompuerta_misterios_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vcompuerta_misterios_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vcompuerta_misterios_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vcompuerta_misterios_tb___024root___eval_final(Vcompuerta_misterios_tb___024root* vlSelf);

VL_ATTR_COLD void Vcompuerta_misterios_tb::final() {
    contextp()->executingFinal(true);
    Vcompuerta_misterios_tb___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vcompuerta_misterios_tb::hierName() const { return vlSymsp->name(); }
const char* Vcompuerta_misterios_tb::modelName() const { return "Vcompuerta_misterios_tb"; }
unsigned Vcompuerta_misterios_tb::threads() const { return 1; }
void Vcompuerta_misterios_tb::prepareClone() const { contextp()->prepareClone(); }
void Vcompuerta_misterios_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vcompuerta_misterios_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false}};
};

//============================================================
// Trace configuration

void Vcompuerta_misterios_tb___024root__trace_decl_types(VerilatedFst* tracep);

void Vcompuerta_misterios_tb___024root__trace_init_top(Vcompuerta_misterios_tb___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vcompuerta_misterios_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcompuerta_misterios_tb___024root*>(voidSelf);
    Vcompuerta_misterios_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vcompuerta_misterios_tb___024root__trace_decl_types(tracep);
    Vcompuerta_misterios_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vcompuerta_misterios_tb___024root__trace_register(Vcompuerta_misterios_tb___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vcompuerta_misterios_tb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedFstC* const stfp = dynamic_cast<VerilatedFstC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vcompuerta_misterios_tb::trace()' called on non-VerilatedFstC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 12);
    Vcompuerta_misterios_tb___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
