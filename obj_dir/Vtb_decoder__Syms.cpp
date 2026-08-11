// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_decoder__pch.h"
#include "Vtb_decoder.h"
#include "Vtb_decoder___024root.h"

// FUNCTIONS
Vtb_decoder__Syms::~Vtb_decoder__Syms()
{
}

Vtb_decoder__Syms::Vtb_decoder__Syms(VerilatedContext* contextp, const char* namep, Vtb_decoder* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(18);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_tb_decoder.configure(this, name(), "tb_decoder", "tb_decoder", "<null>", -12, VerilatedScope::SCOPE_OTHER);
}
