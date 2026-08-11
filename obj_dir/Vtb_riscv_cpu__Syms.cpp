// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_riscv_cpu__pch.h"
#include "Vtb_riscv_cpu.h"
#include "Vtb_riscv_cpu___024root.h"

// FUNCTIONS
Vtb_riscv_cpu__Syms::~Vtb_riscv_cpu__Syms()
{
}

Vtb_riscv_cpu__Syms::Vtb_riscv_cpu__Syms(VerilatedContext* contextp, const char* namep, Vtb_riscv_cpu* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(98);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_tb_riscv_cpu.configure(this, name(), "tb_riscv_cpu", "tb_riscv_cpu", "<null>", -12, VerilatedScope::SCOPE_OTHER);
}
