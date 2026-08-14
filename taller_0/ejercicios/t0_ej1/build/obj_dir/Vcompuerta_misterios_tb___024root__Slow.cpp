// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcompuerta_misterios_tb.h for the primary calling header

#include "Vcompuerta_misterios_tb__pch.h"

void Vcompuerta_misterios_tb___024root___ctor_var_reset(Vcompuerta_misterios_tb___024root* vlSelf);

Vcompuerta_misterios_tb___024root::Vcompuerta_misterios_tb___024root(Vcompuerta_misterios_tb__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vcompuerta_misterios_tb___024root___ctor_var_reset(this);
}

void Vcompuerta_misterios_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcompuerta_misterios_tb___024root::~Vcompuerta_misterios_tb___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
