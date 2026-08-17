// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcompuerta_misterios_tb.h for the primary calling header

#include "Vcompuerta_misterios_tb__pch.h"

VlCoroutine Vcompuerta_misterios_tb___024root___eval_initial__TOP__Vtiming__0(Vcompuerta_misterios_tb___024root* vlSelf);
VlCoroutine Vcompuerta_misterios_tb___024root___eval_initial__TOP__Vtiming__1(Vcompuerta_misterios_tb___024root* vlSelf);
VlCoroutine Vcompuerta_misterios_tb___024root___eval_initial__TOP__Vtiming__2(Vcompuerta_misterios_tb___024root* vlSelf);
VlCoroutine Vcompuerta_misterios_tb___024root___eval_initial__TOP__Vtiming__3(Vcompuerta_misterios_tb___024root* vlSelf);

void Vcompuerta_misterios_tb___024root___eval_initial(Vcompuerta_misterios_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompuerta_misterios_tb___024root___eval_initial\n"); );
    Vcompuerta_misterios_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcompuerta_misterios_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vcompuerta_misterios_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vcompuerta_misterios_tb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    Vcompuerta_misterios_tb___024root___eval_initial__TOP__Vtiming__3(vlSelf);
}

void Vcompuerta_misterios_tb___024root____VbeforeTrig_hd12641fc__0(Vcompuerta_misterios_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vcompuerta_misterios_tb___024root___eval_initial__TOP__Vtiming__0(Vcompuerta_misterios_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompuerta_misterios_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vcompuerta_misterios_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ compuerta_misterios_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    compuerta_misterios_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    // Body
    compuerta_misterios_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 2U;
    while (VL_LTS_III(32, 0U, compuerta_misterios_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vcompuerta_misterios_tb___024root____VbeforeTrig_hd12641fc__0(vlSelf, 
                                                                      "@(posedge compuerta_misterios_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hd12641fc__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge compuerta_misterios_tb.clk)", 
                                                             "compuerta_misterios_tb.sv", 
                                                             11);
        compuerta_misterios_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (compuerta_misterios_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.compuerta_misterios_tb__DOT__rst = 0U;
    co_return;
}

void Vcompuerta_misterios_tb___024root____VbeforeTrig_h3623d704__0(Vcompuerta_misterios_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vcompuerta_misterios_tb___024root___eval_initial__TOP__Vtiming__1(Vcompuerta_misterios_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompuerta_misterios_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vcompuerta_misterios_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile("build/sim.fst"s);
    vlSymsp->_traceDumpOpen();
    while ((1U & (~ (IData)(vlSelfRef.compuerta_misterios_tb__DOT__done)))) {
        Vcompuerta_misterios_tb___024root____VbeforeTrig_h3623d704__0(vlSelf, 
                                                                      "@( compuerta_misterios_tb.done)");
        co_await vlSelfRef.__VtrigSched_h3623d704__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( compuerta_misterios_tb.done)", 
                                                             "compuerta_misterios_tb.sv", 
                                                             48);
    }
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "compuerta_misterios_tb.sv", 
                                         50);
    VL_FINISH_MT("compuerta_misterios_tb.sv", 51, "");
    co_return;
}

VlCoroutine Vcompuerta_misterios_tb___024root___eval_initial__TOP__Vtiming__2(Vcompuerta_misterios_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompuerta_misterios_tb___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vcompuerta_misterios_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while ((1U & (~ (IData)(vlSelfRef.compuerta_misterios_tb__DOT__done)))) {
        Vcompuerta_misterios_tb___024root____VbeforeTrig_h3623d704__0(vlSelf, 
                                                                      "@( compuerta_misterios_tb.done)");
        co_await vlSelfRef.__VtrigSched_h3623d704__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( compuerta_misterios_tb.done)", 
                                                             "/workspaces/sistemas-digitales-2c-2026/taller_0/ejercicios/lib/oracle_tb.sv", 
                                                             44);
    }
    if (vlSelfRef.compuerta_misterios_tb__DOT__oracle__DOT__tests_passing) {
        VL_WRITEF_NX("\n\033[1;32m\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\n  \342\234\223  PASS: todos los tests pasaron\n\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\033[0m\n\n",0);
    } else {
        VL_WRITEF_NX("\n\033[1;31m\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\n  \342\234\227  FAIL: hubo tests que fallaron\n\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\033[0m\n\n",0);
    }
    co_return;
}

VlCoroutine Vcompuerta_misterios_tb___024root___eval_initial__TOP__Vtiming__3(Vcompuerta_misterios_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompuerta_misterios_tb___024root___eval_initial__TOP__Vtiming__3\n"); );
    Vcompuerta_misterios_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "compuerta_misterios_tb.sv", 
                                             7);
        vlSelfRef.compuerta_misterios_tb__DOT__clk 
            = (1U & (~ (IData)(vlSelfRef.compuerta_misterios_tb__DOT__clk)));
    }
    co_return;
}

bool Vcompuerta_misterios_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompuerta_misterios_tb___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vcompuerta_misterios_tb___024root___timing_ready(Vcompuerta_misterios_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompuerta_misterios_tb___024root___timing_ready\n"); );
    Vcompuerta_misterios_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hd12641fc__0.ready("@(posedge compuerta_misterios_tb.clk)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h3623d704__0.ready("@( compuerta_misterios_tb.done)");
    }
}

void Vcompuerta_misterios_tb___024root___timing_resume(Vcompuerta_misterios_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompuerta_misterios_tb___024root___timing_resume\n"); );
    Vcompuerta_misterios_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_hd12641fc__0.moveToResumeQueue(
                                                          "@(posedge compuerta_misterios_tb.clk)");
    vlSelfRef.__VtrigSched_h3623d704__0.moveToResumeQueue(
                                                          "@( compuerta_misterios_tb.done)");
    vlSelfRef.__VtrigSched_hd12641fc__0.resume("@(posedge compuerta_misterios_tb.clk)");
    vlSelfRef.__VtrigSched_h3623d704__0.resume("@( compuerta_misterios_tb.done)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vcompuerta_misterios_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompuerta_misterios_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcompuerta_misterios_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vcompuerta_misterios_tb___024root___eval_phase__act(Vcompuerta_misterios_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompuerta_misterios_tb___024root___eval_phase__act\n"); );
    Vcompuerta_misterios_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 2U) 
                                                         | ((((IData)(vlSelfRef.compuerta_misterios_tb__DOT__done) 
                                                              != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__compuerta_misterios_tb__DOT__done__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.compuerta_misterios_tb__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__compuerta_misterios_tb__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__compuerta_misterios_tb__DOT__clk__0 
            = vlSelfRef.compuerta_misterios_tb__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__compuerta_misterios_tb__DOT__done__0 
            = vlSelfRef.compuerta_misterios_tb__DOT__done;
    }
    Vcompuerta_misterios_tb___024root___timing_ready(vlSelf);
    Vcompuerta_misterios_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcompuerta_misterios_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vcompuerta_misterios_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vcompuerta_misterios_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vcompuerta_misterios_tb___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

bool Vcompuerta_misterios_tb___024root___eval_phase__inact(Vcompuerta_misterios_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompuerta_misterios_tb___024root___eval_phase__inact\n"); );
    Vcompuerta_misterios_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("compuerta_misterios_tb.sv", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vcompuerta_misterios_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompuerta_misterios_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vcompuerta_misterios_tb___024root___eval_phase__nba(Vcompuerta_misterios_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompuerta_misterios_tb___024root___eval_phase__nba\n"); );
    Vcompuerta_misterios_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vcompuerta_misterios_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__0
                    CData/*0:0*/ __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__compuerta_misterios_tb__DOT__value;
                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__compuerta_misterios_tb__DOT__value = 0;
                    CData/*0:0*/ __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__compuerta_misterios_tb__DOT__done;
                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__compuerta_misterios_tb__DOT__done = 0;
                    CData/*0:0*/ __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__compuerta_misterios_tb__DOT__oracle__DOT__first;
                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__compuerta_misterios_tb__DOT__oracle__DOT__first = 0;
                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__compuerta_misterios_tb__DOT__value 
                        = vlSelfRef.compuerta_misterios_tb__DOT__value;
                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__compuerta_misterios_tb__DOT__done 
                        = vlSelfRef.compuerta_misterios_tb__DOT__done;
                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__compuerta_misterios_tb__DOT__oracle__DOT__first 
                        = vlSelfRef.compuerta_misterios_tb__DOT__oracle__DOT__first;
                    if (vlSelfRef.compuerta_misterios_tb__DOT__rst) {
                        __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__compuerta_misterios_tb__DOT__value = 1U;
                        __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__compuerta_misterios_tb__DOT__done = 0U;
                        vlSelfRef.compuerta_misterios_tb__DOT__oracle__DOT__dv = 0U;
                        vlSelfRef.compuerta_misterios_tb__DOT__oracle__DOT__tests_passing = 1U;
                        __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__compuerta_misterios_tb__DOT__oracle__DOT__first = 1U;
                    } else if ((1U & (~ (IData)(vlSelfRef.compuerta_misterios_tb__DOT__done)))) {
                        __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__compuerta_misterios_tb__DOT__value 
                            = (1U & ((IData)(1U) + (IData)(vlSelfRef.compuerta_misterios_tb__DOT__value)));
                        vlSelfRef.compuerta_misterios_tb__DOT__oracle__DOT__dv = 1U;
                        if ((1U & (~ (IData)(vlSelfRef.compuerta_misterios_tb__DOT__oracle__DOT__first)))) {
                            if (vlSelfRef.compuerta_misterios_tb__DOT__value) {
                                __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__compuerta_misterios_tb__DOT__done = 1U;
                                vlSelfRef.compuerta_misterios_tb__DOT__oracle__DOT__dv = 0U;
                            }
                        }
                        __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__compuerta_misterios_tb__DOT__oracle__DOT__first = 0U;
                    }
                    vlSelfRef.compuerta_misterios_tb__DOT__value 
                        = __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__compuerta_misterios_tb__DOT__value;
                    vlSelfRef.compuerta_misterios_tb__DOT__done 
                        = __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__compuerta_misterios_tb__DOT__done;
                    vlSelfRef.compuerta_misterios_tb__DOT__oracle__DOT__first 
                        = __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__compuerta_misterios_tb__DOT__oracle__DOT__first;
                }
                vlSelfRef.__Vm_traceActivity[1U] = 1U;
            }
        }
        Vcompuerta_misterios_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vcompuerta_misterios_tb___024root___eval(Vcompuerta_misterios_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompuerta_misterios_tb___024root___eval\n"); );
    Vcompuerta_misterios_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vcompuerta_misterios_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("compuerta_misterios_tb.sv", 3, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("compuerta_misterios_tb.sv", 3, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vcompuerta_misterios_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("compuerta_misterios_tb.sv", 3, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vcompuerta_misterios_tb___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vcompuerta_misterios_tb___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vcompuerta_misterios_tb___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vcompuerta_misterios_tb___024root____VbeforeTrig_hd12641fc__0(Vcompuerta_misterios_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompuerta_misterios_tb___024root____VbeforeTrig_hd12641fc__0\n"); );
    Vcompuerta_misterios_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((IData)(vlSelfRef.compuerta_misterios_tb__DOT__clk) 
                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__compuerta_misterios_tb__DOT__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__compuerta_misterios_tb__DOT__clk__0 
        = vlSelfRef.compuerta_misterios_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hd12641fc__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vcompuerta_misterios_tb___024root____VbeforeTrig_h3623d704__0(Vcompuerta_misterios_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompuerta_misterios_tb___024root____VbeforeTrig_h3623d704__0\n"); );
    Vcompuerta_misterios_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((IData)(vlSelfRef.compuerta_misterios_tb__DOT__done) 
                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__compuerta_misterios_tb__DOT__done__0)) 
                                  << 1U)));
    vlSelfRef.__Vtrigprevexpr___TOP__compuerta_misterios_tb__DOT__done__0 
        = vlSelfRef.compuerta_misterios_tb__DOT__done;
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h3623d704__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h3623d704__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vcompuerta_misterios_tb___024root___eval_debug_assertions(Vcompuerta_misterios_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompuerta_misterios_tb___024root___eval_debug_assertions\n"); );
    Vcompuerta_misterios_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
