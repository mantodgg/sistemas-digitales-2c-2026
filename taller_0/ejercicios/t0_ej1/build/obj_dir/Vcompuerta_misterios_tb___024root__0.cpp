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
        co_await vlSelfRef.__VtrigSched_hec0d6120__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge compuerta_misterios_tb.clk)", 
                                                             "compuerta_misterios_tb.sv", 
                                                             11);
        compuerta_misterios_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (compuerta_misterios_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.compuerta_misterios_tb__DOT__rst = 0U;
    co_return;}

VlCoroutine Vcompuerta_misterios_tb___024root___eval_initial__TOP__Vtiming__1(Vcompuerta_misterios_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompuerta_misterios_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vcompuerta_misterios_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile("build/sim.fst"s);
    vlSymsp->_traceDumpOpen();
    while ((1U & (~ (IData)(vlSelfRef.compuerta_misterios_tb__DOT__done)))) {
        co_await vlSelfRef.__VtrigSched_h5c9a9c0a__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( compuerta_misterios_tb.done)", 
                                                             "compuerta_misterios_tb.sv", 
                                                             48);
    }
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "compuerta_misterios_tb.sv", 
                                         50);
    VL_FINISH_MT("compuerta_misterios_tb.sv", 51, "");
    co_return;}

VlCoroutine Vcompuerta_misterios_tb___024root___eval_initial__TOP__Vtiming__2(Vcompuerta_misterios_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompuerta_misterios_tb___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vcompuerta_misterios_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while ((1U & (~ (IData)(vlSelfRef.compuerta_misterios_tb__DOT__done)))) {
        co_await vlSelfRef.__VtrigSched_h5c9a9c0a__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( compuerta_misterios_tb.done)", 
                                                             "/home/Estudiante/Descargas/hdl_studio_taller_zero/ejercicios/lib/oracle_tb.sv", 
                                                             44);
    }
    if (vlSelfRef.compuerta_misterios_tb__DOT__oracle__DOT__tests_passing) {
        VL_WRITEF_NX("\n\033[1;32m\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\n  \342\234\223  PASS: todos los tests pasaron\n\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\033[0m\n\n",0);
    } else {
        VL_WRITEF_NX("\n\033[1;31m\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\n  \342\234\227  FAIL: hubo tests que fallaron\n\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\342\224\201\033[0m\n\n",0);
    }
    co_return;}

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
    co_return;}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcompuerta_misterios_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vcompuerta_misterios_tb___024root___eval_triggers__act(Vcompuerta_misterios_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompuerta_misterios_tb___024root___eval_triggers__act\n"); );
    Vcompuerta_misterios_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered[0U] = (2ULL | vlSelfRef.__VactTriggered
                                         [0U]);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcompuerta_misterios_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
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

extern const VlUnpacked<CData/*4:0*/, 16> Vcompuerta_misterios_tb__ConstPool__TABLE_h5f1a6736_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vcompuerta_misterios_tb__ConstPool__TABLE_he4614b46_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vcompuerta_misterios_tb__ConstPool__TABLE_h003b04dc_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vcompuerta_misterios_tb__ConstPool__TABLE_h203707d0_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vcompuerta_misterios_tb__ConstPool__TABLE_hce92076c_0;

void Vcompuerta_misterios_tb___024root___nba_sequent__TOP__0(Vcompuerta_misterios_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompuerta_misterios_tb___024root___nba_sequent__TOP__0\n"); );
    Vcompuerta_misterios_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = ((((IData)(vlSelfRef.compuerta_misterios_tb__DOT__oracle__DOT__first) 
                      << 3U) | ((IData)(vlSelfRef.compuerta_misterios_tb__DOT__value) 
                                << 2U)) | (((IData)(vlSelfRef.compuerta_misterios_tb__DOT__done) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.compuerta_misterios_tb__DOT__rst)));
    if ((1U & Vcompuerta_misterios_tb__ConstPool__TABLE_h5f1a6736_0
         [__Vtableidx1])) {
        vlSelfRef.compuerta_misterios_tb__DOT__value 
            = Vcompuerta_misterios_tb__ConstPool__TABLE_he4614b46_0
            [__Vtableidx1];
    }
    if ((2U & Vcompuerta_misterios_tb__ConstPool__TABLE_h5f1a6736_0
         [__Vtableidx1])) {
        vlSelfRef.compuerta_misterios_tb__DOT__done 
            = Vcompuerta_misterios_tb__ConstPool__TABLE_h003b04dc_0
            [__Vtableidx1];
    }
    if ((4U & Vcompuerta_misterios_tb__ConstPool__TABLE_h5f1a6736_0
         [__Vtableidx1])) {
        vlSelfRef.compuerta_misterios_tb__DOT__oracle__DOT__dv 
            = Vcompuerta_misterios_tb__ConstPool__TABLE_h203707d0_0
            [__Vtableidx1];
    }
    if ((8U & Vcompuerta_misterios_tb__ConstPool__TABLE_h5f1a6736_0
         [__Vtableidx1])) {
        vlSelfRef.compuerta_misterios_tb__DOT__oracle__DOT__tests_passing 
            = Vcompuerta_misterios_tb__ConstPool__TABLE_hce92076c_0
            [__Vtableidx1];
    }
    if ((0x10U & Vcompuerta_misterios_tb__ConstPool__TABLE_h5f1a6736_0
         [__Vtableidx1])) {
        vlSelfRef.compuerta_misterios_tb__DOT__oracle__DOT__first 
            = Vcompuerta_misterios_tb__ConstPool__TABLE_hce92076c_0
            [__Vtableidx1];
    }
}

void Vcompuerta_misterios_tb___024root___eval_nba(Vcompuerta_misterios_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompuerta_misterios_tb___024root___eval_nba\n"); );
    Vcompuerta_misterios_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vcompuerta_misterios_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

void Vcompuerta_misterios_tb___024root___timing_commit(Vcompuerta_misterios_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompuerta_misterios_tb___024root___timing_commit\n"); );
    Vcompuerta_misterios_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered[0U]))) {
        vlSelfRef.__VtrigSched_hec0d6120__0.commit(
                                                   "@(posedge compuerta_misterios_tb.clk)");
    }
    if ((! (2ULL & vlSelfRef.__VactTriggered[0U]))) {
        vlSelfRef.__VtrigSched_h5c9a9c0a__0.commit(
                                                   "@( compuerta_misterios_tb.done)");
    }
}

void Vcompuerta_misterios_tb___024root___timing_resume(Vcompuerta_misterios_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompuerta_misterios_tb___024root___timing_resume\n"); );
    Vcompuerta_misterios_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hec0d6120__0.resume(
                                                   "@(posedge compuerta_misterios_tb.clk)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h5c9a9c0a__0.resume(
                                                   "@( compuerta_misterios_tb.done)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vcompuerta_misterios_tb___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompuerta_misterios_tb___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vcompuerta_misterios_tb___024root___eval_phase__act(Vcompuerta_misterios_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompuerta_misterios_tb___024root___eval_phase__act\n"); );
    Vcompuerta_misterios_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vcompuerta_misterios_tb___024root___eval_triggers__act(vlSelf);
    Vcompuerta_misterios_tb___024root___timing_commit(vlSelf);
    Vcompuerta_misterios_tb___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vcompuerta_misterios_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Vcompuerta_misterios_tb___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
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
        Vcompuerta_misterios_tb___024root___eval_nba(vlSelf);
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
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vcompuerta_misterios_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("compuerta_misterios_tb.sv", 3, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vcompuerta_misterios_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("compuerta_misterios_tb.sv", 3, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vcompuerta_misterios_tb___024root___eval_phase__act(vlSelf));
    } while (Vcompuerta_misterios_tb___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vcompuerta_misterios_tb___024root___eval_debug_assertions(Vcompuerta_misterios_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompuerta_misterios_tb___024root___eval_debug_assertions\n"); );
    Vcompuerta_misterios_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
