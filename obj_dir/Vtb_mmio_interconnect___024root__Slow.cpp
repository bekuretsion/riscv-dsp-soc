// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mmio_interconnect.h for the primary calling header

#include "Vtb_mmio_interconnect__pch.h"
#include "Vtb_mmio_interconnect__Syms.h"
#include "Vtb_mmio_interconnect___024root.h"

void Vtb_mmio_interconnect___024root___ctor_var_reset(Vtb_mmio_interconnect___024root* vlSelf);

Vtb_mmio_interconnect___024root::Vtb_mmio_interconnect___024root(Vtb_mmio_interconnect__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_mmio_interconnect___024root___ctor_var_reset(this);
}

void Vtb_mmio_interconnect___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_mmio_interconnect___024root::~Vtb_mmio_interconnect___024root() {
}
