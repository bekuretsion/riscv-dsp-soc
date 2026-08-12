// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_fir_fair_benchmark.h for the primary calling header

#ifndef VERILATED_VTB_FIR_FAIR_BENCHMARK___024ROOT_H_
#define VERILATED_VTB_FIR_FAIR_BENCHMARK___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_fir_fair_benchmark__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_fir_fair_benchmark___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_fir_fair_benchmark__DOT__clk;
    CData/*0:0*/ tb_fir_fair_benchmark__DOT__reset;
    CData/*0:0*/ tb_fir_fair_benchmark__DOT__fir_done;
    CData/*1:0*/ tb_fir_fair_benchmark__DOT__dut__DOT__branch_type;
    CData/*0:0*/ tb_fir_fair_benchmark__DOT__dut__DOT__jump;
    CData/*4:0*/ tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__rd_addr;
    CData/*0:0*/ tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__reg_write;
    CData/*0:0*/ tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__mem_write;
    CData/*0:0*/ tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__mem_to_reg;
    CData/*0:0*/ tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__lui;
    CData/*0:0*/ tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir_write_en;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_fir_fair_benchmark__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_fir_fair_benchmark__DOT__pc;
    IData/*31:0*/ tb_fir_fair_benchmark__DOT__alu_result;
    IData/*31:0*/ tb_fir_fair_benchmark__DOT__dut__DOT__immediate;
    IData/*31:0*/ tb_fir_fair_benchmark__DOT__dut__DOT__branch_target;
    IData/*31:0*/ tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__rs2_data;
    IData/*31:0*/ tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir_read_data;
    IData/*31:0*/ tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__sample_in;
    IData/*31:0*/ tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__coeff0;
    IData/*31:0*/ tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__coeff1;
    IData/*31:0*/ tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__coeff2;
    IData/*31:0*/ tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__coeff3;
    IData/*31:0*/ tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__delay0;
    IData/*31:0*/ tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__delay1;
    IData/*31:0*/ tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__delay2;
    IData/*31:0*/ tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__result;
    IData/*31:0*/ __VactIterCount;
    QData/*63:0*/ tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__accumulator;
    VlUnpacked<IData/*31:0*/, 256> tb_fir_fair_benchmark__DOT__dut__DOT__imem__DOT__memory;
    VlUnpacked<IData/*31:0*/, 32> tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers;
    VlUnpacked<IData/*31:0*/, 256> tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__ram__DOT__memory;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h7a50df54__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_fir_fair_benchmark__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_fir_fair_benchmark___024root(Vtb_fir_fair_benchmark__Syms* symsp, const char* v__name);
    ~Vtb_fir_fair_benchmark___024root();
    VL_UNCOPYABLE(Vtb_fir_fair_benchmark___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
