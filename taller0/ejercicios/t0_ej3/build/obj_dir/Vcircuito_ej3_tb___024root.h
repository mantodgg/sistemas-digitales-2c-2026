// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcircuito_ej3_tb.h for the primary calling header

#ifndef VERILATED_VCIRCUITO_EJ3_TB___024ROOT_H_
#define VERILATED_VCIRCUITO_EJ3_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vcircuito_ej3_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcircuito_ej3_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ circuito_ej3_tb__DOT__clk;
    CData/*0:0*/ circuito_ej3_tb__DOT__rst;
    CData/*1:0*/ circuito_ej3_tb__DOT__value;
    CData/*0:0*/ circuito_ej3_tb__DOT__done;
    CData/*0:0*/ circuito_ej3_tb__DOT__oracle__DOT__pass;
    CData/*0:0*/ circuito_ej3_tb__DOT__oracle__DOT__dv;
    CData/*0:0*/ circuito_ej3_tb__DOT__oracle__DOT__tests_passing;
    CData/*0:0*/ circuito_ej3_tb__DOT__oracle__DOT__first;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__circuito_ej3_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__circuito_ej3_tb__DOT__done__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_ha3330497__0;
    VlTriggerScheduler __VtrigSched_h9791c09b__0;

    // INTERNAL VARIABLES
    Vcircuito_ej3_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcircuito_ej3_tb___024root(Vcircuito_ej3_tb__Syms* symsp, const char* namep);
    ~Vcircuito_ej3_tb___024root();
    VL_UNCOPYABLE(Vcircuito_ej3_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
