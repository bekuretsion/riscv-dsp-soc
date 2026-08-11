// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_datapath.h for the primary calling header

#include "Vtb_datapath__pch.h"
#include "Vtb_datapath__Syms.h"
#include "Vtb_datapath___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_datapath___024root___eval_initial__TOP__Vtiming__1(Vtb_datapath___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_datapath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_datapath___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vtask_tb_datapath__DOT__execute__1__src1;
    __Vtask_tb_datapath__DOT__execute__1__src1 = 0;
    CData/*4:0*/ __Vtask_tb_datapath__DOT__execute__1__src2;
    __Vtask_tb_datapath__DOT__execute__1__src2 = 0;
    CData/*4:0*/ __Vtask_tb_datapath__DOT__execute__1__dest;
    __Vtask_tb_datapath__DOT__execute__1__dest = 0;
    IData/*31:0*/ __Vtask_tb_datapath__DOT__execute__1__imm;
    __Vtask_tb_datapath__DOT__execute__1__imm = 0;
    CData/*0:0*/ __Vtask_tb_datapath__DOT__execute__1__use_imm;
    __Vtask_tb_datapath__DOT__execute__1__use_imm = 0;
    CData/*3:0*/ __Vtask_tb_datapath__DOT__execute__1__operation;
    __Vtask_tb_datapath__DOT__execute__1__operation = 0;
    CData/*4:0*/ __Vtask_tb_datapath__DOT__execute__2__src1;
    __Vtask_tb_datapath__DOT__execute__2__src1 = 0;
    CData/*4:0*/ __Vtask_tb_datapath__DOT__execute__2__src2;
    __Vtask_tb_datapath__DOT__execute__2__src2 = 0;
    CData/*4:0*/ __Vtask_tb_datapath__DOT__execute__2__dest;
    __Vtask_tb_datapath__DOT__execute__2__dest = 0;
    IData/*31:0*/ __Vtask_tb_datapath__DOT__execute__2__imm;
    __Vtask_tb_datapath__DOT__execute__2__imm = 0;
    CData/*0:0*/ __Vtask_tb_datapath__DOT__execute__2__use_imm;
    __Vtask_tb_datapath__DOT__execute__2__use_imm = 0;
    CData/*3:0*/ __Vtask_tb_datapath__DOT__execute__2__operation;
    __Vtask_tb_datapath__DOT__execute__2__operation = 0;
    // Body
    VL_WRITEF_NX("==============================\n   MINI RISC-V DATAPATH TEST\n==============================\n",0);
    vlSelfRef.tb_datapath__DOT__rs1_addr = 0U;
    vlSelfRef.tb_datapath__DOT__rs2_addr = 0U;
    vlSelfRef.tb_datapath__DOT__rd_addr = 5U;
    vlSelfRef.tb_datapath__DOT__immediate = 0xaU;
    vlSelfRef.tb_datapath__DOT__alu_src = 1U;
    vlSelfRef.tb_datapath__DOT__alu_ctrl = 0U;
    vlSelfRef.tb_datapath__DOT__we = 1U;
    co_await vlSelfRef.__VtrigSched_hf72ccbcf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_datapath.clk)", 
                                                         "tb/tb_datapath.sv", 
                                                         63);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_datapath.sv", 
                                         64);
    vlSelfRef.tb_datapath__DOT__we = 0U;
    VL_WRITEF_NX("x5 = %0#\n",0,32,vlSelfRef.tb_datapath__DOT__dut__DOT__rf__DOT__registers
                 [5U]);
    __Vtask_tb_datapath__DOT__execute__1__operation = 0U;
    __Vtask_tb_datapath__DOT__execute__1__use_imm = 1U;
    __Vtask_tb_datapath__DOT__execute__1__imm = 0x14U;
    __Vtask_tb_datapath__DOT__execute__1__dest = 6U;
    __Vtask_tb_datapath__DOT__execute__1__src2 = 0U;
    __Vtask_tb_datapath__DOT__execute__1__src1 = 0U;
    vlSelfRef.tb_datapath__DOT__rs1_addr = __Vtask_tb_datapath__DOT__execute__1__src1;
    vlSelfRef.tb_datapath__DOT__rs2_addr = __Vtask_tb_datapath__DOT__execute__1__src2;
    vlSelfRef.tb_datapath__DOT__rd_addr = __Vtask_tb_datapath__DOT__execute__1__dest;
    vlSelfRef.tb_datapath__DOT__immediate = __Vtask_tb_datapath__DOT__execute__1__imm;
    vlSelfRef.tb_datapath__DOT__alu_src = __Vtask_tb_datapath__DOT__execute__1__use_imm;
    vlSelfRef.tb_datapath__DOT__alu_ctrl = __Vtask_tb_datapath__DOT__execute__1__operation;
    vlSelfRef.tb_datapath__DOT__we = 1U;
    co_await vlSelfRef.__VtrigSched_hf72ccbcf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_datapath.clk)", 
                                                         "tb/tb_datapath.sv", 
                                                         63);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_datapath.sv", 
                                         64);
    vlSelfRef.tb_datapath__DOT__we = 0U;
    VL_WRITEF_NX("x6 = %0#\n",0,32,vlSelfRef.tb_datapath__DOT__dut__DOT__rf__DOT__registers
                 [6U]);
    __Vtask_tb_datapath__DOT__execute__2__operation = 0U;
    __Vtask_tb_datapath__DOT__execute__2__use_imm = 0U;
    __Vtask_tb_datapath__DOT__execute__2__imm = 0U;
    __Vtask_tb_datapath__DOT__execute__2__dest = 7U;
    __Vtask_tb_datapath__DOT__execute__2__src2 = 6U;
    __Vtask_tb_datapath__DOT__execute__2__src1 = 5U;
    vlSelfRef.tb_datapath__DOT__rs1_addr = __Vtask_tb_datapath__DOT__execute__2__src1;
    vlSelfRef.tb_datapath__DOT__rs2_addr = __Vtask_tb_datapath__DOT__execute__2__src2;
    vlSelfRef.tb_datapath__DOT__rd_addr = __Vtask_tb_datapath__DOT__execute__2__dest;
    vlSelfRef.tb_datapath__DOT__immediate = __Vtask_tb_datapath__DOT__execute__2__imm;
    vlSelfRef.tb_datapath__DOT__alu_src = __Vtask_tb_datapath__DOT__execute__2__use_imm;
    vlSelfRef.tb_datapath__DOT__alu_ctrl = __Vtask_tb_datapath__DOT__execute__2__operation;
    vlSelfRef.tb_datapath__DOT__we = 1U;
    co_await vlSelfRef.__VtrigSched_hf72ccbcf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_datapath.clk)", 
                                                         "tb/tb_datapath.sv", 
                                                         63);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_datapath.sv", 
                                         64);
    vlSelfRef.tb_datapath__DOT__we = 0U;
    VL_WRITEF_NX("x7 = %0#\n",0,32,vlSelfRef.tb_datapath__DOT__dut__DOT__rf__DOT__registers
                 [7U]);
    if (VL_UNLIKELY((0x1eU != vlSelfRef.tb_datapath__DOT__dut__DOT__rf__DOT__registers
                     [7U]))) {
        VL_WRITEF_NX("FAIL: expected x7 = 30\n[%0t] %%Fatal: tb_datapath.sv:141: Assertion failed in %Ntb_datapath\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("tb/tb_datapath.sv", 141, "", false);
    }
    VL_WRITEF_NX("\nPASS:\nx5 = 10\nx6 = 20\nx7 = x5 + x6 = 30\n==============================\n   MINI PROGRAM PASSED\n==============================\n",0);
    VL_FINISH_MT("tb/tb_datapath.sv", 156, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_datapath___024root___dump_triggers__act(Vtb_datapath___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_datapath___024root___eval_triggers__act(Vtb_datapath___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_datapath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_datapath___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.tb_datapath__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_datapath__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_datapath__DOT__clk__0 
        = vlSelfRef.tb_datapath__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_datapath___024root___dump_triggers__act(vlSelf);
    }
#endif
}
