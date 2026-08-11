// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_cpu_core.h for the primary calling header

#include "Vtb_cpu_core__pch.h"
#include "Vtb_cpu_core__Syms.h"
#include "Vtb_cpu_core___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_cpu_core___024root___eval_initial__TOP__Vtiming__1(Vtb_cpu_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_cpu_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu_core___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb_cpu_core__DOT__execute_instruction__1__instr;
    __Vtask_tb_cpu_core__DOT__execute_instruction__1__instr = 0;
    IData/*31:0*/ __Vtask_tb_cpu_core__DOT__execute_instruction__2__instr;
    __Vtask_tb_cpu_core__DOT__execute_instruction__2__instr = 0;
    // Body
    VL_WRITEF_NX("=============================\n       CPU CORE TEST\n=============================\n",0);
    vlSelfRef.tb_cpu_core__DOT__instruction = 0xa00293U;
    co_await vlSelfRef.__VtrigSched_h4b3a91cc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cpu_core.clk)", 
                                                         "tb/tb_cpu_core.sv", 
                                                         24);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_cpu_core.sv", 
                                         25);
    VL_WRITEF_NX("After ADDI: x5 = %0#\n",0,32,vlSelfRef.tb_cpu_core__DOT__dut__DOT__dp__DOT__rf__DOT__registers
                 [5U]);
    __Vtask_tb_cpu_core__DOT__execute_instruction__1__instr = 0x1400313U;
    vlSelfRef.tb_cpu_core__DOT__instruction = __Vtask_tb_cpu_core__DOT__execute_instruction__1__instr;
    co_await vlSelfRef.__VtrigSched_h4b3a91cc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cpu_core.clk)", 
                                                         "tb/tb_cpu_core.sv", 
                                                         24);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_cpu_core.sv", 
                                         25);
    VL_WRITEF_NX("After ADDI: x6 = %0#\n",0,32,vlSelfRef.tb_cpu_core__DOT__dut__DOT__dp__DOT__rf__DOT__registers
                 [6U]);
    __Vtask_tb_cpu_core__DOT__execute_instruction__2__instr = 0x6283b3U;
    vlSelfRef.tb_cpu_core__DOT__instruction = __Vtask_tb_cpu_core__DOT__execute_instruction__2__instr;
    co_await vlSelfRef.__VtrigSched_h4b3a91cc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_cpu_core.clk)", 
                                                         "tb/tb_cpu_core.sv", 
                                                         24);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_cpu_core.sv", 
                                         25);
    VL_WRITEF_NX("After ADD: x7 = %0#\n",0,32,vlSelfRef.tb_cpu_core__DOT__dut__DOT__dp__DOT__rf__DOT__registers
                 [7U]);
    if (VL_UNLIKELY((0xaU != vlSelfRef.tb_cpu_core__DOT__dut__DOT__dp__DOT__rf__DOT__registers
                     [5U]))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_cpu_core.sv:62: Assertion failed in %Ntb_cpu_core\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("tb/tb_cpu_core.sv", 62, "", false);
    }
    if (VL_UNLIKELY((0x14U != vlSelfRef.tb_cpu_core__DOT__dut__DOT__dp__DOT__rf__DOT__registers
                     [6U]))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_cpu_core.sv:65: Assertion failed in %Ntb_cpu_core\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("tb/tb_cpu_core.sv", 65, "", false);
    }
    if (VL_UNLIKELY((0x1eU != vlSelfRef.tb_cpu_core__DOT__dut__DOT__dp__DOT__rf__DOT__registers
                     [7U]))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_cpu_core.sv:68: Assertion failed in %Ntb_cpu_core\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("tb/tb_cpu_core.sv", 68, "", false);
    }
    VL_WRITEF_NX("\nPASS:\naddi x5, x0, 10\naddi x6, x0, 20\nadd  x7, x5, x6\n=============================\n       CPU CORE PASS\n=============================\n",0);
    VL_FINISH_MT("tb/tb_cpu_core.sv", 80, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cpu_core___024root___dump_triggers__act(Vtb_cpu_core___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_cpu_core___024root___eval_triggers__act(Vtb_cpu_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_cpu_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu_core___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.tb_cpu_core__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cpu_core__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cpu_core__DOT__clk__0 
        = vlSelfRef.tb_cpu_core__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_cpu_core___024root___dump_triggers__act(vlSelf);
    }
#endif
}
