// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_MMIO_INTERCONNECT__SYMS_H_
#define VERILATED_VTB_MMIO_INTERCONNECT__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_mmio_interconnect.h"

// INCLUDE MODULE CLASSES
#include "Vtb_mmio_interconnect___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb_mmio_interconnect__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_mmio_interconnect* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_mmio_interconnect___024root TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_tb_mmio_interconnect;

    // CONSTRUCTORS
    Vtb_mmio_interconnect__Syms(VerilatedContext* contextp, const char* namep, Vtb_mmio_interconnect* modelp);
    ~Vtb_mmio_interconnect__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
