// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_datapath__pch.h"
#include "Vtb_datapath.h"
#include "Vtb_datapath___024root.h"

// FUNCTIONS
Vtb_datapath__Syms::~Vtb_datapath__Syms()
{
}

Vtb_datapath__Syms::Vtb_datapath__Syms(VerilatedContext* contextp, const char* namep, Vtb_datapath* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(96);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_tb_datapath.configure(this, name(), "tb_datapath", "tb_datapath", "<null>", -12, VerilatedScope::SCOPE_OTHER);
}
