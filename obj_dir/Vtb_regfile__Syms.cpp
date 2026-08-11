// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_regfile__pch.h"
#include "Vtb_regfile.h"
#include "Vtb_regfile___024root.h"

// FUNCTIONS
Vtb_regfile__Syms::~Vtb_regfile__Syms()
{
}

Vtb_regfile__Syms::Vtb_regfile__Syms(VerilatedContext* contextp, const char* namep, Vtb_regfile* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(40);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_tb_regfile.configure(this, name(), "tb_regfile", "tb_regfile", "<null>", -12, VerilatedScope::SCOPE_OTHER);
}
