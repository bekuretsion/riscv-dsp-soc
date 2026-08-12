// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_fir_accelerator.h for the primary calling header

#ifndef VERILATED_VTB_FIR_ACCELERATOR___024ROOT_H_
#define VERILATED_VTB_FIR_ACCELERATOR___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_fir_accelerator__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_fir_accelerator___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_fir_accelerator__DOT__clk;
    CData/*0:0*/ tb_fir_accelerator__DOT__reset;
    CData/*0:0*/ tb_fir_accelerator__DOT__write_en;
    CData/*0:0*/ tb_fir_accelerator__DOT__read_en;
    CData/*4:0*/ tb_fir_accelerator__DOT__address;
    CData/*0:0*/ tb_fir_accelerator__DOT__done;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_fir_accelerator__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_fir_accelerator__DOT__write_data;
    IData/*31:0*/ tb_fir_accelerator__DOT__read_data;
    IData/*31:0*/ tb_fir_accelerator__DOT__dut__DOT__sample_in;
    IData/*31:0*/ tb_fir_accelerator__DOT__dut__DOT__coeff0;
    IData/*31:0*/ tb_fir_accelerator__DOT__dut__DOT__coeff1;
    IData/*31:0*/ tb_fir_accelerator__DOT__dut__DOT__coeff2;
    IData/*31:0*/ tb_fir_accelerator__DOT__dut__DOT__coeff3;
    IData/*31:0*/ tb_fir_accelerator__DOT__dut__DOT__delay0;
    IData/*31:0*/ tb_fir_accelerator__DOT__dut__DOT__delay1;
    IData/*31:0*/ tb_fir_accelerator__DOT__dut__DOT__delay2;
    IData/*31:0*/ tb_fir_accelerator__DOT__dut__DOT__result;
    IData/*31:0*/ __VactIterCount;
    QData/*63:0*/ tb_fir_accelerator__DOT__dut__DOT__accumulator;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h243bddf6__0;
    VlTriggerScheduler __VtrigSched_h243bddb7__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_fir_accelerator__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_fir_accelerator___024root(Vtb_fir_accelerator__Syms* symsp, const char* v__name);
    ~Vtb_fir_accelerator___024root();
    VL_UNCOPYABLE(Vtb_fir_accelerator___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
