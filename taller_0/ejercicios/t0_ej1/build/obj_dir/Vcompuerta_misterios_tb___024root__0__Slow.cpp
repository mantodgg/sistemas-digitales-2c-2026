// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcompuerta_misterios_tb.h for the primary calling header

#include "Vcompuerta_misterios_tb__pch.h"

VL_ATTR_COLD void Vcompuerta_misterios_tb___024root___eval_static__TOP(Vcompuerta_misterios_tb___024root* vlSelf);

VL_ATTR_COLD void Vcompuerta_misterios_tb___024root___eval_static(Vcompuerta_misterios_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompuerta_misterios_tb___024root___eval_static\n"); );
    Vcompuerta_misterios_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcompuerta_misterios_tb___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__compuerta_misterios_tb__DOT__clk__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__compuerta_misterios_tb__DOT__done__0 
        = vlSelfRef.compuerta_misterios_tb__DOT__done;
}

VL_ATTR_COLD void Vcompuerta_misterios_tb___024root___eval_static__TOP(Vcompuerta_misterios_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompuerta_misterios_tb___024root___eval_static__TOP\n"); );
    Vcompuerta_misterios_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.compuerta_misterios_tb__DOT__clk = 0U;
    vlSelfRef.compuerta_misterios_tb__DOT__rst = 1U;
}

VL_ATTR_COLD void Vcompuerta_misterios_tb___024root___eval_final(Vcompuerta_misterios_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompuerta_misterios_tb___024root___eval_final\n"); );
    Vcompuerta_misterios_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vcompuerta_misterios_tb___024root___eval_settle(Vcompuerta_misterios_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompuerta_misterios_tb___024root___eval_settle\n"); );
    Vcompuerta_misterios_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

bool Vcompuerta_misterios_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcompuerta_misterios_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompuerta_misterios_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vcompuerta_misterios_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge compuerta_misterios_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @( compuerta_misterios_tb.done)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcompuerta_misterios_tb___024root___ctor_var_reset(Vcompuerta_misterios_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompuerta_misterios_tb___024root___ctor_var_reset\n"); );
    Vcompuerta_misterios_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->compuerta_misterios_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16469914780240573209ull);
    vlSelf->compuerta_misterios_tb__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16928157216057831507ull);
    vlSelf->compuerta_misterios_tb__DOT__value = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3657516166466474134ull);
    vlSelf->compuerta_misterios_tb__DOT__done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1758812550380053090ull);
    vlSelf->compuerta_misterios_tb__DOT__oracle__DOT__dv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5818243066475964610ull);
    vlSelf->compuerta_misterios_tb__DOT__oracle__DOT__tests_passing = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2606521879342138596ull);
    vlSelf->compuerta_misterios_tb__DOT__oracle__DOT__first = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 210654006148142351ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__compuerta_misterios_tb__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__compuerta_misterios_tb__DOT__done__0 = 0;
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
