// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_decoder.h for the primary calling header

#ifndef VERILATED_VTB_DECODER___024ROOT_H_
#define VERILATED_VTB_DECODER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_decoder__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_decoder___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*4:0*/ tb_decoder__DOT__rs1_addr;
    CData/*4:0*/ tb_decoder__DOT__rs2_addr;
    CData/*4:0*/ tb_decoder__DOT__rd_addr;
    CData/*0:0*/ tb_decoder__DOT__alu_src;
    CData/*0:0*/ tb_decoder__DOT__reg_write;
    CData/*0:0*/ tb_decoder__DOT__mem_write;
    CData/*0:0*/ tb_decoder__DOT__mem_to_reg;
    CData/*3:0*/ tb_decoder__DOT__alu_ctrl;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_decoder__DOT__instruction;
    IData/*31:0*/ tb_decoder__DOT__immediate;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_decoder__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_decoder___024root(Vtb_decoder__Syms* symsp, const char* v__name);
    ~Vtb_decoder___024root();
    VL_UNCOPYABLE(Vtb_decoder___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
