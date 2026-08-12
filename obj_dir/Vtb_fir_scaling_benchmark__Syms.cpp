// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_fir_scaling_benchmark__pch.h"
#include "Vtb_fir_scaling_benchmark.h"
#include "Vtb_fir_scaling_benchmark___024root.h"

// FUNCTIONS
Vtb_fir_scaling_benchmark__Syms::~Vtb_fir_scaling_benchmark__Syms()
{
}

Vtb_fir_scaling_benchmark__Syms::Vtb_fir_scaling_benchmark__Syms(VerilatedContext* contextp, const char* namep, Vtb_fir_scaling_benchmark* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(362);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_tb_fir_scaling_benchmark.configure(this, name(), "tb_fir_scaling_benchmark", "tb_fir_scaling_benchmark", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_fir_scaling_benchmark__unnamedblk1_2.configure(this, name(), "tb_fir_scaling_benchmark.unnamedblk1_2", "unnamedblk1_2", "<null>", -12, VerilatedScope::SCOPE_OTHER);
}
