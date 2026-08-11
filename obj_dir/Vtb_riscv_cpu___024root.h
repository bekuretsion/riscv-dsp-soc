// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_riscv_cpu.h for the primary calling header

#ifndef VERILATED_VTB_RISCV_CPU___024ROOT_H_
#define VERILATED_VTB_RISCV_CPU___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_riscv_cpu__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_riscv_cpu___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_riscv_cpu__DOT__clk;
    CData/*0:0*/ tb_riscv_cpu__DOT__reset;
    CData/*4:0*/ tb_riscv_cpu__DOT__dut__DOT__core__DOT__rd_addr;
    CData/*0:0*/ tb_riscv_cpu__DOT__dut__DOT__core__DOT__reg_write;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_riscv_cpu__DOT__pc;
    IData/*31:0*/ tb_riscv_cpu__DOT__instruction;
    IData/*31:0*/ tb_riscv_cpu__DOT__alu_result;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 256> tb_riscv_cpu__DOT__dut__DOT__imem__DOT__memory;
    VlUnpacked<IData/*31:0*/, 32> tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h6588643f__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_riscv_cpu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_riscv_cpu___024root(Vtb_riscv_cpu__Syms* symsp, const char* v__name);
    ~Vtb_riscv_cpu___024root();
    VL_UNCOPYABLE(Vtb_riscv_cpu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
