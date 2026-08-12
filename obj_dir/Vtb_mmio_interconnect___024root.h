// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_mmio_interconnect.h for the primary calling header

#ifndef VERILATED_VTB_MMIO_INTERCONNECT___024ROOT_H_
#define VERILATED_VTB_MMIO_INTERCONNECT___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_mmio_interconnect__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_mmio_interconnect___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_mmio_interconnect__DOT__clk;
    CData/*0:0*/ tb_mmio_interconnect__DOT__reset;
    CData/*0:0*/ tb_mmio_interconnect__DOT__mem_write;
    CData/*0:0*/ tb_mmio_interconnect__DOT__mem_read;
    CData/*0:0*/ tb_mmio_interconnect__DOT__fir_selected;
    CData/*0:0*/ tb_mmio_interconnect__DOT__fir_done;
    CData/*0:0*/ tb_mmio_interconnect__DOT__dut__DOT__fir_write_en;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_mmio_interconnect__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_mmio_interconnect__DOT__address;
    IData/*31:0*/ tb_mmio_interconnect__DOT__write_data;
    IData/*31:0*/ tb_mmio_interconnect__DOT__read_data;
    IData/*31:0*/ tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__sample_in;
    IData/*31:0*/ tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__coeff0;
    IData/*31:0*/ tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__coeff1;
    IData/*31:0*/ tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__coeff2;
    IData/*31:0*/ tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__coeff3;
    IData/*31:0*/ tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__delay0;
    IData/*31:0*/ tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__delay1;
    IData/*31:0*/ tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__delay2;
    IData/*31:0*/ tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__result;
    IData/*31:0*/ __VactIterCount;
    QData/*63:0*/ tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__accumulator;
    VlUnpacked<IData/*31:0*/, 256> tb_mmio_interconnect__DOT__dut__DOT__ram__DOT__memory;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h39df3347__0;
    VlTriggerScheduler __VtrigSched_h39df3306__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_mmio_interconnect__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_mmio_interconnect___024root(Vtb_mmio_interconnect__Syms* symsp, const char* v__name);
    ~Vtb_mmio_interconnect___024root();
    VL_UNCOPYABLE(Vtb_mmio_interconnect___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
