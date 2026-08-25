// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcircuito_ej2_tb.h for the primary calling header

#include "Vcircuito_ej2_tb__pch.h"

void Vcircuito_ej2_tb___024root___timing_ready(Vcircuito_ej2_tb___024root* vlSelf);

VL_ATTR_COLD void Vcircuito_ej2_tb___024root___eval_static(Vcircuito_ej2_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcircuito_ej2_tb___024root___eval_static\n"); );
    Vcircuito_ej2_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        vlSelfRef.circuito_ej2_tb__DOT__clk = 0U;
        vlSelfRef.circuito_ej2_tb__DOT__rst = 1U;
    }
    vlSelfRef.__VactTriggered[0U] = (2ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__Vtrigprevexpr___TOP__circuito_ej2_tb__DOT__clk__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__circuito_ej2_tb__DOT__done__0 
        = vlSelfRef.circuito_ej2_tb__DOT__done;
    Vcircuito_ej2_tb___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vcircuito_ej2_tb___024root___eval_final(Vcircuito_ej2_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcircuito_ej2_tb___024root___eval_final\n"); );
    Vcircuito_ej2_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vcircuito_ej2_tb___024root___eval_settle(Vcircuito_ej2_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcircuito_ej2_tb___024root___eval_settle\n"); );
    Vcircuito_ej2_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

bool Vcircuito_ej2_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcircuito_ej2_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcircuito_ej2_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vcircuito_ej2_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge circuito_ej2_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @( circuito_ej2_tb.done)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcircuito_ej2_tb___024root___ctor_var_reset(Vcircuito_ej2_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcircuito_ej2_tb___024root___ctor_var_reset\n"); );
    Vcircuito_ej2_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->circuito_ej2_tb__DOT__value = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4732610149610060865ull);
    vlSelf->circuito_ej2_tb__DOT__done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13460786390137038857ull);
    vlSelf->circuito_ej2_tb__DOT__oracle__DOT__dv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11992453180761471239ull);
    vlSelf->circuito_ej2_tb__DOT__oracle__DOT__tests_passing = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10023198968839588019ull);
    vlSelf->circuito_ej2_tb__DOT__oracle__DOT__first = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 243576623197448624ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__circuito_ej2_tb__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__circuito_ej2_tb__DOT__done__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
