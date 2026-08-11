// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_memory__pch.h"
#include "Vtb_memory.h"
#include "Vtb_memory___024root.h"

// FUNCTIONS
Vtb_memory__Syms::~Vtb_memory__Syms()
{
}

Vtb_memory__Syms::Vtb_memory__Syms(VerilatedContext* contextp, const char* namep, Vtb_memory* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(30);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_tb_memory.configure(this, name(), "tb_memory", "tb_memory", "<null>", -12, VerilatedScope::SCOPE_OTHER);
}
