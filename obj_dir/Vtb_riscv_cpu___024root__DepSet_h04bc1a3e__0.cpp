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
    // Init
    IData/*31:0*/ tb_riscv_cpu__DOT__cycle_count;
    tb_riscv_cpu__DOT__cycle_count = 0;
    // Body
    VL_WRITEF_NX("==============================\n       BNE + JAL TEST\n==============================\n",0);
    vlSelfRef.tb_riscv_cpu__DOT__reset = 1U;
    tb_riscv_cpu__DOT__cycle_count = 0U;
    co_await vlSelfRef.__VtrigSched_h6588643f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_riscv_cpu.clk)", 
                                                         "tb/tb_riscv_cpu.sv", 
                                                         45);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_riscv_cpu.sv", 
                                         46);
    vlSelfRef.tb_riscv_cpu__DOT__reset = 0U;
    co_await vlSelfRef.__VtrigSched_h6588643f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_riscv_cpu.clk)", 
                                                         "tb/tb_riscv_cpu.sv", 
                                                         60);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_riscv_cpu.sv", 
                                         61);
    tb_riscv_cpu__DOT__cycle_count = ((IData)(1U) + tb_riscv_cpu__DOT__cycle_count);
    VL_WRITEF_NX("cycle=%0d PC=%0# INST=%x x5=%0# x6=%0# x7=%0#\n",0,
                 32,tb_riscv_cpu__DOT__cycle_count,
                 32,vlSelfRef.tb_riscv_cpu__DOT__pc,
                 32,vlSelfRef.tb_riscv_cpu__DOT__instruction,
                 32,vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                 [5U],32,vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                 [6U],32,vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                 [7U]);
    co_await vlSelfRef.__VtrigSched_h6588643f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_riscv_cpu.clk)", 
                                                         "tb/tb_riscv_cpu.sv", 
                                                         60);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_riscv_cpu.sv", 
                                         61);
    tb_riscv_cpu__DOT__cycle_count = ((IData)(1U) + tb_riscv_cpu__DOT__cycle_count);
    VL_WRITEF_NX("cycle=%0d PC=%0# INST=%x x5=%0# x6=%0# x7=%0#\n",0,
                 32,tb_riscv_cpu__DOT__cycle_count,
                 32,vlSelfRef.tb_riscv_cpu__DOT__pc,
                 32,vlSelfRef.tb_riscv_cpu__DOT__instruction,
                 32,vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                 [5U],32,vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                 [6U],32,vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                 [7U]);
    co_await vlSelfRef.__VtrigSched_h6588643f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_riscv_cpu.clk)", 
                                                         "tb/tb_riscv_cpu.sv", 
                                                         60);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_riscv_cpu.sv", 
                                         61);
    tb_riscv_cpu__DOT__cycle_count = ((IData)(1U) + tb_riscv_cpu__DOT__cycle_count);
    VL_WRITEF_NX("cycle=%0d PC=%0# INST=%x x5=%0# x6=%0# x7=%0#\n",0,
                 32,tb_riscv_cpu__DOT__cycle_count,
                 32,vlSelfRef.tb_riscv_cpu__DOT__pc,
                 32,vlSelfRef.tb_riscv_cpu__DOT__instruction,
                 32,vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                 [5U],32,vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                 [6U],32,vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                 [7U]);
    co_await vlSelfRef.__VtrigSched_h6588643f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_riscv_cpu.clk)", 
                                                         "tb/tb_riscv_cpu.sv", 
                                                         60);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_riscv_cpu.sv", 
                                         61);
    tb_riscv_cpu__DOT__cycle_count = ((IData)(1U) + tb_riscv_cpu__DOT__cycle_count);
    VL_WRITEF_NX("cycle=%0d PC=%0# INST=%x x5=%0# x6=%0# x7=%0#\n",0,
                 32,tb_riscv_cpu__DOT__cycle_count,
                 32,vlSelfRef.tb_riscv_cpu__DOT__pc,
                 32,vlSelfRef.tb_riscv_cpu__DOT__instruction,
                 32,vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                 [5U],32,vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                 [6U],32,vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                 [7U]);
    co_await vlSelfRef.__VtrigSched_h6588643f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_riscv_cpu.clk)", 
                                                         "tb/tb_riscv_cpu.sv", 
                                                         60);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_riscv_cpu.sv", 
                                         61);
    tb_riscv_cpu__DOT__cycle_count = ((IData)(1U) + tb_riscv_cpu__DOT__cycle_count);
    VL_WRITEF_NX("cycle=%0d PC=%0# INST=%x x5=%0# x6=%0# x7=%0#\n",0,
                 32,tb_riscv_cpu__DOT__cycle_count,
                 32,vlSelfRef.tb_riscv_cpu__DOT__pc,
                 32,vlSelfRef.tb_riscv_cpu__DOT__instruction,
                 32,vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                 [5U],32,vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                 [6U],32,vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                 [7U]);
    co_await vlSelfRef.__VtrigSched_h6588643f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_riscv_cpu.clk)", 
                                                         "tb/tb_riscv_cpu.sv", 
                                                         60);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_riscv_cpu.sv", 
                                         61);
    tb_riscv_cpu__DOT__cycle_count = ((IData)(1U) + tb_riscv_cpu__DOT__cycle_count);
    VL_WRITEF_NX("cycle=%0d PC=%0# INST=%x x5=%0# x6=%0# x7=%0#\n",0,
                 32,tb_riscv_cpu__DOT__cycle_count,
                 32,vlSelfRef.tb_riscv_cpu__DOT__pc,
                 32,vlSelfRef.tb_riscv_cpu__DOT__instruction,
                 32,vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                 [5U],32,vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                 [6U],32,vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                 [7U]);
    co_await vlSelfRef.__VtrigSched_h6588643f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_riscv_cpu.clk)", 
                                                         "tb/tb_riscv_cpu.sv", 
                                                         60);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_riscv_cpu.sv", 
                                         61);
    tb_riscv_cpu__DOT__cycle_count = ((IData)(1U) + tb_riscv_cpu__DOT__cycle_count);
    VL_WRITEF_NX("cycle=%0d PC=%0# INST=%x x5=%0# x6=%0# x7=%0#\n",0,
                 32,tb_riscv_cpu__DOT__cycle_count,
                 32,vlSelfRef.tb_riscv_cpu__DOT__pc,
                 32,vlSelfRef.tb_riscv_cpu__DOT__instruction,
                 32,vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                 [5U],32,vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                 [6U],32,vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                 [7U]);
    co_await vlSelfRef.__VtrigSched_h6588643f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_riscv_cpu.clk)", 
                                                         "tb/tb_riscv_cpu.sv", 
                                                         60);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_riscv_cpu.sv", 
                                         61);
    tb_riscv_cpu__DOT__cycle_count = ((IData)(1U) + tb_riscv_cpu__DOT__cycle_count);
    VL_WRITEF_NX("cycle=%0d PC=%0# INST=%x x5=%0# x6=%0# x7=%0#\n",0,
                 32,tb_riscv_cpu__DOT__cycle_count,
                 32,vlSelfRef.tb_riscv_cpu__DOT__pc,
                 32,vlSelfRef.tb_riscv_cpu__DOT__instruction,
                 32,vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                 [5U],32,vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                 [6U],32,vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                 [7U]);
    co_await vlSelfRef.__VtrigSched_h6588643f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_riscv_cpu.clk)", 
                                                         "tb/tb_riscv_cpu.sv", 
                                                         60);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_riscv_cpu.sv", 
                                         61);
    tb_riscv_cpu__DOT__cycle_count = ((IData)(1U) + tb_riscv_cpu__DOT__cycle_count);
    VL_WRITEF_NX("cycle=%0d PC=%0# INST=%x x5=%0# x6=%0# x7=%0#\n",0,
                 32,tb_riscv_cpu__DOT__cycle_count,
                 32,vlSelfRef.tb_riscv_cpu__DOT__pc,
                 32,vlSelfRef.tb_riscv_cpu__DOT__instruction,
                 32,vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                 [5U],32,vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                 [6U],32,vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                 [7U]);
    co_await vlSelfRef.__VtrigSched_h6588643f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_riscv_cpu.clk)", 
                                                         "tb/tb_riscv_cpu.sv", 
                                                         60);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_riscv_cpu.sv", 
                                         61);
    tb_riscv_cpu__DOT__cycle_count = ((IData)(1U) + tb_riscv_cpu__DOT__cycle_count);
    VL_WRITEF_NX("cycle=%0d PC=%0# INST=%x x5=%0# x6=%0# x7=%0#\n",0,
                 32,tb_riscv_cpu__DOT__cycle_count,
                 32,vlSelfRef.tb_riscv_cpu__DOT__pc,
                 32,vlSelfRef.tb_riscv_cpu__DOT__instruction,
                 32,vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                 [5U],32,vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                 [6U],32,vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                 [7U]);
    co_await vlSelfRef.__VtrigSched_h6588643f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_riscv_cpu.clk)", 
                                                         "tb/tb_riscv_cpu.sv", 
                                                         60);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_riscv_cpu.sv", 
                                         61);
    tb_riscv_cpu__DOT__cycle_count = ((IData)(1U) + tb_riscv_cpu__DOT__cycle_count);
    VL_WRITEF_NX("cycle=%0d PC=%0# INST=%x x5=%0# x6=%0# x7=%0#\n",0,
                 32,tb_riscv_cpu__DOT__cycle_count,
                 32,vlSelfRef.tb_riscv_cpu__DOT__pc,
                 32,vlSelfRef.tb_riscv_cpu__DOT__instruction,
                 32,vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                 [5U],32,vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                 [6U],32,vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                 [7U]);
    co_await vlSelfRef.__VtrigSched_h6588643f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_riscv_cpu.clk)", 
                                                         "tb/tb_riscv_cpu.sv", 
                                                         60);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_riscv_cpu.sv", 
                                         61);
    tb_riscv_cpu__DOT__cycle_count = ((IData)(1U) + tb_riscv_cpu__DOT__cycle_count);
    VL_WRITEF_NX("cycle=%0d PC=%0# INST=%x x5=%0# x6=%0# x7=%0#\n",0,
                 32,tb_riscv_cpu__DOT__cycle_count,
                 32,vlSelfRef.tb_riscv_cpu__DOT__pc,
                 32,vlSelfRef.tb_riscv_cpu__DOT__instruction,
                 32,vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                 [5U],32,vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                 [6U],32,vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                 [7U]);
    co_await vlSelfRef.__VtrigSched_h6588643f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_riscv_cpu.clk)", 
                                                         "tb/tb_riscv_cpu.sv", 
                                                         60);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_riscv_cpu.sv", 
                                         61);
    tb_riscv_cpu__DOT__cycle_count = ((IData)(1U) + tb_riscv_cpu__DOT__cycle_count);
    VL_WRITEF_NX("cycle=%0d PC=%0# INST=%x x5=%0# x6=%0# x7=%0#\n",0,
                 32,tb_riscv_cpu__DOT__cycle_count,
                 32,vlSelfRef.tb_riscv_cpu__DOT__pc,
                 32,vlSelfRef.tb_riscv_cpu__DOT__instruction,
                 32,vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                 [5U],32,vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                 [6U],32,vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                 [7U]);
    co_await vlSelfRef.__VtrigSched_h6588643f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_riscv_cpu.clk)", 
                                                         "tb/tb_riscv_cpu.sv", 
                                                         60);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_riscv_cpu.sv", 
                                         61);
    tb_riscv_cpu__DOT__cycle_count = ((IData)(1U) + tb_riscv_cpu__DOT__cycle_count);
    VL_WRITEF_NX("cycle=%0d PC=%0# INST=%x x5=%0# x6=%0# x7=%0#\n",0,
                 32,tb_riscv_cpu__DOT__cycle_count,
                 32,vlSelfRef.tb_riscv_cpu__DOT__pc,
                 32,vlSelfRef.tb_riscv_cpu__DOT__instruction,
                 32,vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                 [5U],32,vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                 [6U],32,vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                 [7U]);
    co_await vlSelfRef.__VtrigSched_h6588643f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_riscv_cpu.clk)", 
                                                         "tb/tb_riscv_cpu.sv", 
                                                         60);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_riscv_cpu.sv", 
                                         61);
    tb_riscv_cpu__DOT__cycle_count = ((IData)(1U) + tb_riscv_cpu__DOT__cycle_count);
    VL_WRITEF_NX("cycle=%0d PC=%0# INST=%x x5=%0# x6=%0# x7=%0#\n",0,
                 32,tb_riscv_cpu__DOT__cycle_count,
                 32,vlSelfRef.tb_riscv_cpu__DOT__pc,
                 32,vlSelfRef.tb_riscv_cpu__DOT__instruction,
                 32,vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                 [5U],32,vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                 [6U],32,vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                 [7U]);
    co_await vlSelfRef.__VtrigSched_h6588643f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_riscv_cpu.clk)", 
                                                         "tb/tb_riscv_cpu.sv", 
                                                         60);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_riscv_cpu.sv", 
                                         61);
    tb_riscv_cpu__DOT__cycle_count = ((IData)(1U) + tb_riscv_cpu__DOT__cycle_count);
    VL_WRITEF_NX("cycle=%0d PC=%0# INST=%x x5=%0# x6=%0# x7=%0#\n",0,
                 32,tb_riscv_cpu__DOT__cycle_count,
                 32,vlSelfRef.tb_riscv_cpu__DOT__pc,
                 32,vlSelfRef.tb_riscv_cpu__DOT__instruction,
                 32,vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                 [5U],32,vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                 [6U],32,vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                 [7U]);
    if (VL_UNLIKELY((5U != vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                     [5U]))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_riscv_cpu.sv:83: Assertion failed in %Ntb_riscv_cpu: %10#\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                     32,vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                     [5U]);
        VL_STOP_MT("tb/tb_riscv_cpu.sv", 83, "", false);
    }
    if (VL_UNLIKELY((5U != vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                     [6U]))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_riscv_cpu.sv:89: Assertion failed in %Ntb_riscv_cpu: %10#\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                     32,vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                     [6U]);
        VL_STOP_MT("tb/tb_riscv_cpu.sv", 89, "", false);
    }
    if (VL_UNLIKELY((0x63U != vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                     [7U]))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_riscv_cpu.sv:95: Assertion failed in %Ntb_riscv_cpu: %10#\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                     32,vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                     [7U]);
        VL_STOP_MT("tb/tb_riscv_cpu.sv", 95, "", false);
    }
    if (VL_UNLIKELY((0x14U != vlSelfRef.tb_riscv_cpu__DOT__pc))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_riscv_cpu.sv:111: Assertion failed in %Ntb_riscv_cpu: %10#\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                     32,vlSelfRef.tb_riscv_cpu__DOT__pc);
        VL_STOP_MT("tb/tb_riscv_cpu.sv", 111, "", false);
    }
    VL_WRITEF_NX("\nPASS: BNE loop executed correctly\nPASS: x5 = 5\nPASS: x6 = 5\nPASS: x7 = 99\nPASS: JAL keeps PC at 20\n==============================\n      BNE + JAL PASS\n==============================\n",0);
    VL_FINISH_MT("tb/tb_riscv_cpu.sv", 128, "");
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
