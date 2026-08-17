// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_fst_c.h"
#include "Vcompuerta_misterios_tb__Syms.h"


VL_ATTR_COLD void Vcompuerta_misterios_tb___024root__trace_init_sub__TOP__0(Vcompuerta_misterios_tb___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompuerta_misterios_tb___024root__trace_init_sub__TOP__0\n"); );
    Vcompuerta_misterios_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "compuerta_misterios_tb", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+7,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+8,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+2,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+9,0,"pass",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+3,0,"done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "dut", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+2,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "oracle", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+10,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+11,0,"FAST_FAIL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT);
    VL_TRACE_DECL_BIT(tracep,c+7,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+8,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+9,0,"pass",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+3,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"value",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 0,0);
    VL_TRACE_DECL_BIT(tracep,c+4,0,"dv",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+5,0,"tests_passing",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+6,0,"first",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vcompuerta_misterios_tb___024root__trace_init_top(Vcompuerta_misterios_tb___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompuerta_misterios_tb___024root__trace_init_top\n"); );
    Vcompuerta_misterios_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcompuerta_misterios_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcompuerta_misterios_tb___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vcompuerta_misterios_tb___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vcompuerta_misterios_tb___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vcompuerta_misterios_tb___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vcompuerta_misterios_tb___024root__trace_register(Vcompuerta_misterios_tb___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompuerta_misterios_tb___024root__trace_register\n"); );
    Vcompuerta_misterios_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vcompuerta_misterios_tb___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vcompuerta_misterios_tb___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vcompuerta_misterios_tb___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vcompuerta_misterios_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcompuerta_misterios_tb___024root__trace_const_0_sub_0(Vcompuerta_misterios_tb___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vcompuerta_misterios_tb___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompuerta_misterios_tb___024root__trace_const_0\n"); );
    // Body
    Vcompuerta_misterios_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcompuerta_misterios_tb___024root*>(voidSelf);
    Vcompuerta_misterios_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vcompuerta_misterios_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcompuerta_misterios_tb___024root__trace_const_0_sub_0(Vcompuerta_misterios_tb___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompuerta_misterios_tb___024root__trace_const_0_sub_0\n"); );
    Vcompuerta_misterios_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+9,(1U));
    bufp->fullIData(oldp+10,(1U),32);
    bufp->fullBit(oldp+11,(0U));
}

VL_ATTR_COLD void Vcompuerta_misterios_tb___024root__trace_full_0_sub_0(Vcompuerta_misterios_tb___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vcompuerta_misterios_tb___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompuerta_misterios_tb___024root__trace_full_0\n"); );
    // Body
    Vcompuerta_misterios_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcompuerta_misterios_tb___024root*>(voidSelf);
    Vcompuerta_misterios_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vcompuerta_misterios_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcompuerta_misterios_tb___024root__trace_full_0_sub_0(Vcompuerta_misterios_tb___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompuerta_misterios_tb___024root__trace_full_0_sub_0\n"); );
    Vcompuerta_misterios_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+0,(vlSelfRef.compuerta_misterios_tb__DOT__value));
    bufp->fullBit(oldp+1,(vlSelfRef.compuerta_misterios_tb__DOT__value));
    bufp->fullBit(oldp+2,((1U & (~ (IData)(vlSelfRef.compuerta_misterios_tb__DOT__value)))));
    bufp->fullBit(oldp+3,(vlSelfRef.compuerta_misterios_tb__DOT__done));
    bufp->fullBit(oldp+4,(vlSelfRef.compuerta_misterios_tb__DOT__oracle__DOT__dv));
    bufp->fullBit(oldp+5,(vlSelfRef.compuerta_misterios_tb__DOT__oracle__DOT__tests_passing));
    bufp->fullBit(oldp+6,(vlSelfRef.compuerta_misterios_tb__DOT__oracle__DOT__first));
    bufp->fullBit(oldp+7,(vlSelfRef.compuerta_misterios_tb__DOT__clk));
    bufp->fullBit(oldp+8,(vlSelfRef.compuerta_misterios_tb__DOT__rst));
}
