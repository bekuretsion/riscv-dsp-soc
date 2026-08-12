// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fir_benchmark.h for the primary calling header

#include "Vtb_fir_benchmark__pch.h"
#include "Vtb_fir_benchmark__Syms.h"
#include "Vtb_fir_benchmark___024root.h"

void Vtb_fir_benchmark___024root___ctor_var_reset(Vtb_fir_benchmark___024root* vlSelf);

Vtb_fir_benchmark___024root::Vtb_fir_benchmark___024root(Vtb_fir_benchmark__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_fir_benchmark___024root___ctor_var_reset(this);
}

void Vtb_fir_benchmark___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_fir_benchmark___024root::~Vtb_fir_benchmark___024root() {
}
