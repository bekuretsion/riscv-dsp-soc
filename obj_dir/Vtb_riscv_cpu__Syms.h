// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_RISCV_CPU__SYMS_H_
#define VERILATED_VTB_RISCV_CPU__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_riscv_cpu.h"

// INCLUDE MODULE CLASSES
#include "Vtb_riscv_cpu___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb_riscv_cpu__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_riscv_cpu* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_riscv_cpu___024root        TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_tb_riscv_cpu;

    // CONSTRUCTORS
    Vtb_riscv_cpu__Syms(VerilatedContext* contextp, const char* namep, Vtb_riscv_cpu* modelp);
    ~Vtb_riscv_cpu__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
