// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_riscv_cpu.h for the primary calling header

#include "Vtb_riscv_cpu__pch.h"
#include "Vtb_riscv_cpu__Syms.h"
#include "Vtb_riscv_cpu___024root.h"

void Vtb_riscv_cpu___024root___ctor_var_reset(Vtb_riscv_cpu___024root* vlSelf);

Vtb_riscv_cpu___024root::Vtb_riscv_cpu___024root(Vtb_riscv_cpu__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_riscv_cpu___024root___ctor_var_reset(this);
}

void Vtb_riscv_cpu___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_riscv_cpu___024root::~Vtb_riscv_cpu___024root() {
}
