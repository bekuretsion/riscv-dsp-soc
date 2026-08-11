// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_DATAPATH__SYMS_H_
#define VERILATED_VTB_DATAPATH__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_datapath.h"

// INCLUDE MODULE CLASSES
#include "Vtb_datapath___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb_datapath__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_datapath* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_datapath___024root         TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_tb_datapath;

    // CONSTRUCTORS
    Vtb_datapath__Syms(VerilatedContext* contextp, const char* namep, Vtb_datapath* modelp);
    ~Vtb_datapath__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
