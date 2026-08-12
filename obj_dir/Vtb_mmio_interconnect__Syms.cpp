// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_mmio_interconnect__pch.h"
#include "Vtb_mmio_interconnect.h"
#include "Vtb_mmio_interconnect___024root.h"

// FUNCTIONS
Vtb_mmio_interconnect__Syms::~Vtb_mmio_interconnect__Syms()
{
}

Vtb_mmio_interconnect__Syms::Vtb_mmio_interconnect__Syms(VerilatedContext* contextp, const char* namep, Vtb_mmio_interconnect* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(266);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_tb_mmio_interconnect.configure(this, name(), "tb_mmio_interconnect", "tb_mmio_interconnect", "<null>", -12, VerilatedScope::SCOPE_OTHER);
}
