// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_riscv_cpu.h for the primary calling header

#include "Vtb_riscv_cpu__pch.h"
#include "Vtb_riscv_cpu__Syms.h"
#include "Vtb_riscv_cpu___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_riscv_cpu___024root___eval_initial__TOP__Vtiming__1(Vtb_riscv_cpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("==============================\n      LOAD / STORE TEST\n==============================\n",0);
    vlSelfRef.tb_riscv_cpu__DOT__reset = 1U;
    co_await vlSelfRef.__VtrigSched_h6588643f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_riscv_cpu.clk)", 
                                                         "tb/tb_riscv_cpu.sv", 
                                                         34);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_riscv_cpu.sv", 
                                         35);
    vlSelfRef.tb_riscv_cpu__DOT__reset = 0U;
    co_await vlSelfRef.__VtrigSched_h6588643f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_riscv_cpu.clk)", 
                                                         "tb/tb_riscv_cpu.sv", 
                                                         44);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_riscv_cpu.sv", 
                                         45);
    VL_WRITEF_NX("x5 = %0#\n",0,32,vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                 [5U]);
    co_await vlSelfRef.__VtrigSched_h6588643f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_riscv_cpu.clk)", 
                                                         "tb/tb_riscv_cpu.sv", 
                                                         57);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_riscv_cpu.sv", 
                                         58);
    VL_WRITEF_NX("RAM[0] = %0#\n",0,32,vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__dmem__DOT__memory
                 [0U]);
    co_await vlSelfRef.__VtrigSched_h6588643f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_riscv_cpu.clk)", 
                                                         "tb/tb_riscv_cpu.sv", 
                                                         70);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_riscv_cpu.sv", 
                                         71);
    VL_WRITEF_NX("x6 = %0#\n",0,32,vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                 [6U]);
    co_await vlSelfRef.__VtrigSched_h6588643f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_riscv_cpu.clk)", 
                                                         "tb/tb_riscv_cpu.sv", 
                                                         83);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_riscv_cpu.sv", 
                                         84);
    VL_WRITEF_NX("x7 = %0#\n",0,32,vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                 [7U]);
    if (VL_UNLIKELY((0x2aU != vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                     [5U]))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_riscv_cpu.sv:97: Assertion failed in %Ntb_riscv_cpu\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("tb/tb_riscv_cpu.sv", 97, "", false);
    }
    if (VL_UNLIKELY((0x2aU != vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__dmem__DOT__memory
                     [0U]))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_riscv_cpu.sv:100: Assertion failed in %Ntb_riscv_cpu\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("tb/tb_riscv_cpu.sv", 100, "", false);
    }
    if (VL_UNLIKELY((0x2aU != vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                     [6U]))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_riscv_cpu.sv:103: Assertion failed in %Ntb_riscv_cpu\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("tb/tb_riscv_cpu.sv", 103, "", false);
    }
    if (VL_UNLIKELY((0x32U != vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                     [7U]))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_riscv_cpu.sv:106: Assertion failed in %Ntb_riscv_cpu\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("tb/tb_riscv_cpu.sv", 106, "", false);
    }
    VL_WRITEF_NX("\nPASS:\nx5     = 42\nRAM[0] = 42\nx6     = 42\nx7     = 50\n==============================\n     LOAD / STORE PASS\n==============================\n",0);
    VL_FINISH_MT("tb/tb_riscv_cpu.sv", 120, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_riscv_cpu___024root___dump_triggers__act(Vtb_riscv_cpu___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_riscv_cpu___024root___eval_triggers__act(Vtb_riscv_cpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.tb_riscv_cpu__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__clk__0 
        = vlSelfRef.tb_riscv_cpu__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_riscv_cpu___024root___dump_triggers__act(vlSelf);
    }
#endif
}
