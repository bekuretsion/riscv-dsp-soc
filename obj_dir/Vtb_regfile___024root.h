// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_regfile.h for the primary calling header

#ifndef VERILATED_VTB_REGFILE___024ROOT_H_
#define VERILATED_VTB_REGFILE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_regfile__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_regfile___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_regfile__DOT__clk;
    CData/*0:0*/ tb_regfile__DOT__we;
    CData/*4:0*/ tb_regfile__DOT__rs1_addr;
    CData/*4:0*/ tb_regfile__DOT__rs2_addr;
    CData/*4:0*/ tb_regfile__DOT__rd_addr;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_regfile__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_regfile__DOT__rd_data;
    IData/*31:0*/ tb_regfile__DOT__rs1_data;
    IData/*31:0*/ tb_regfile__DOT__rs2_data;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> tb_regfile__DOT__dut__DOT__registers;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_he07fa43c__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_regfile__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_regfile___024root(Vtb_regfile__Syms* symsp, const char* v__name);
    ~Vtb_regfile___024root();
    VL_UNCOPYABLE(Vtb_regfile___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
