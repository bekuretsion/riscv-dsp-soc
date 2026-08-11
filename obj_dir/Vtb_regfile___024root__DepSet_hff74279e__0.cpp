// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_regfile.h for the primary calling header

#include "Vtb_regfile__pch.h"
#include "Vtb_regfile__Syms.h"
#include "Vtb_regfile___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_regfile___024root___eval_initial__TOP__Vtiming__1(Vtb_regfile___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_regfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_regfile___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vtask_tb_regfile__DOT__write_reg__1__addr;
    __Vtask_tb_regfile__DOT__write_reg__1__addr = 0;
    IData/*31:0*/ __Vtask_tb_regfile__DOT__write_reg__1__data;
    __Vtask_tb_regfile__DOT__write_reg__1__data = 0;
    CData/*4:0*/ __Vtask_tb_regfile__DOT__write_reg__2__addr;
    __Vtask_tb_regfile__DOT__write_reg__2__addr = 0;
    IData/*31:0*/ __Vtask_tb_regfile__DOT__write_reg__2__data;
    __Vtask_tb_regfile__DOT__write_reg__2__data = 0;
    // Body
    VL_WRITEF_NX("============================\n    REGISTER FILE TEST\n============================\n",0);
    vlSelfRef.tb_regfile__DOT__rs1_addr = 0U;
    vlSelfRef.tb_regfile__DOT__rs2_addr = 0U;
    vlSelfRef.tb_regfile__DOT__rd_addr = 5U;
    vlSelfRef.tb_regfile__DOT__rd_data = 0x7bU;
    vlSelfRef.tb_regfile__DOT__we = 1U;
    co_await vlSelfRef.__VtrigSched_he07fa43c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_regfile.clk)", 
                                                         "tb/tb_regfile.sv", 
                                                         41);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_regfile.sv", 
                                         42);
    vlSelfRef.tb_regfile__DOT__we = 0U;
    vlSelfRef.tb_regfile__DOT__rs1_addr = 5U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_regfile.sv", 
                                         64);
    if (VL_UNLIKELY((0x7bU != vlSelfRef.tb_regfile__DOT__rs1_data))) {
        VL_WRITEF_NX("FAIL: x5 = %0#\n[%0t] %%Fatal: tb_regfile.sv:68: Assertion failed in %Ntb_regfile\n",0,
                     32,vlSelfRef.tb_regfile__DOT__rs1_data,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("tb/tb_regfile.sv", 68, "", false);
    }
    VL_WRITEF_NX("PASS: x5 = %0#\n",0,32,vlSelfRef.tb_regfile__DOT__rs1_data);
    __Vtask_tb_regfile__DOT__write_reg__1__data = 0x1c8U;
    __Vtask_tb_regfile__DOT__write_reg__1__addr = 0xaU;
    vlSelfRef.tb_regfile__DOT__rd_addr = __Vtask_tb_regfile__DOT__write_reg__1__addr;
    vlSelfRef.tb_regfile__DOT__rd_data = __Vtask_tb_regfile__DOT__write_reg__1__data;
    vlSelfRef.tb_regfile__DOT__we = 1U;
    co_await vlSelfRef.__VtrigSched_he07fa43c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_regfile.clk)", 
                                                         "tb/tb_regfile.sv", 
                                                         41);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_regfile.sv", 
                                         42);
    vlSelfRef.tb_regfile__DOT__we = 0U;
    vlSelfRef.tb_regfile__DOT__rs1_addr = 0xaU;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_regfile.sv", 
                                         77);
    if (VL_UNLIKELY((0x1c8U != vlSelfRef.tb_regfile__DOT__rs1_data))) {
        VL_WRITEF_NX("FAIL: x10 = %0#\n[%0t] %%Fatal: tb_regfile.sv:81: Assertion failed in %Ntb_regfile\n",0,
                     32,vlSelfRef.tb_regfile__DOT__rs1_data,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("tb/tb_regfile.sv", 81, "", false);
    }
    VL_WRITEF_NX("PASS: x10 = %0#\n",0,32,vlSelfRef.tb_regfile__DOT__rs1_data);
    vlSelfRef.tb_regfile__DOT__rs1_addr = 5U;
    vlSelfRef.tb_regfile__DOT__rs2_addr = 0xaU;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_regfile.sv", 
                                         89);
    if (VL_UNLIKELY(((0x7bU != vlSelfRef.tb_regfile__DOT__rs1_data) 
                     | (0x1c8U != vlSelfRef.tb_regfile__DOT__rs2_data)))) {
        VL_WRITEF_NX("FAIL: x5=%0# x10=%0#\n[%0t] %%Fatal: tb_regfile.sv:100: Assertion failed in %Ntb_regfile\n",0,
                     32,vlSelfRef.tb_regfile__DOT__rs1_data,
                     32,vlSelfRef.tb_regfile__DOT__rs2_data,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("tb/tb_regfile.sv", 100, "", false);
    }
    VL_WRITEF_NX("PASS: simultaneous read x5=%0# x10=%0#\n",0,
                 32,vlSelfRef.tb_regfile__DOT__rs1_data,
                 32,vlSelfRef.tb_regfile__DOT__rs2_data);
    __Vtask_tb_regfile__DOT__write_reg__2__data = 0x3e7U;
    __Vtask_tb_regfile__DOT__write_reg__2__addr = 0U;
    vlSelfRef.tb_regfile__DOT__rd_addr = __Vtask_tb_regfile__DOT__write_reg__2__addr;
    vlSelfRef.tb_regfile__DOT__rd_data = __Vtask_tb_regfile__DOT__write_reg__2__data;
    vlSelfRef.tb_regfile__DOT__we = 1U;
    co_await vlSelfRef.__VtrigSched_he07fa43c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_regfile.clk)", 
                                                         "tb/tb_regfile.sv", 
                                                         41);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_regfile.sv", 
                                         42);
    vlSelfRef.tb_regfile__DOT__we = 0U;
    vlSelfRef.tb_regfile__DOT__rs1_addr = 0U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_regfile.sv", 
                                         113);
    if (VL_UNLIKELY((0U != vlSelfRef.tb_regfile__DOT__rs1_data))) {
        VL_WRITEF_NX("FAIL: x0 changed to %0#\n[%0t] %%Fatal: tb_regfile.sv:117: Assertion failed in %Ntb_regfile\n",0,
                     32,vlSelfRef.tb_regfile__DOT__rs1_data,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("tb/tb_regfile.sv", 117, "", false);
    }
    VL_WRITEF_NX("PASS: x0 remains 0\n============================\n   ALL REGFILE TESTS PASS\n============================\n",0);
    VL_FINISH_MT("tb/tb_regfile.sv", 126, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_regfile___024root___dump_triggers__act(Vtb_regfile___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_regfile___024root___eval_triggers__act(Vtb_regfile___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_regfile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_regfile___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.tb_regfile__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_regfile__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_regfile__DOT__clk__0 
        = vlSelfRef.tb_regfile__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_regfile___024root___dump_triggers__act(vlSelf);
    }
#endif
}
