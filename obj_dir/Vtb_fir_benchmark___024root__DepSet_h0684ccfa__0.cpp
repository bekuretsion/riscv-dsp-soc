// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fir_benchmark.h for the primary calling header

#include "Vtb_fir_benchmark__pch.h"
#include "Vtb_fir_benchmark__Syms.h"
#include "Vtb_fir_benchmark___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_fir_benchmark___024root___eval_initial__TOP__Vtiming__1(Vtb_fir_benchmark___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_fir_benchmark__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir_benchmark___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ tb_fir_benchmark__DOT__total_cycles;
    tb_fir_benchmark__DOT__total_cycles = 0;
    IData/*31:0*/ tb_fir_benchmark__DOT__sw_done_cycle;
    tb_fir_benchmark__DOT__sw_done_cycle = 0;
    IData/*31:0*/ tb_fir_benchmark__DOT__hw_start_cycle;
    tb_fir_benchmark__DOT__hw_start_cycle = 0;
    IData/*31:0*/ tb_fir_benchmark__DOT__hw_done_cycle;
    tb_fir_benchmark__DOT__hw_done_cycle = 0;
    CData/*0:0*/ tb_fir_benchmark__DOT__sw_seen;
    tb_fir_benchmark__DOT__sw_seen = 0;
    CData/*0:0*/ tb_fir_benchmark__DOT__hw_started;
    tb_fir_benchmark__DOT__hw_started = 0;
    CData/*0:0*/ tb_fir_benchmark__DOT__hw_seen;
    tb_fir_benchmark__DOT__hw_seen = 0;
    IData/*31:0*/ tb_fir_benchmark__DOT__unnamedblk1_2__DOT____Vrepeat1;
    tb_fir_benchmark__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    // Body
    VL_WRITEF_NX("==============================\n        FIR BENCHMARK\n==============================\n",0);
    vlSelfRef.tb_fir_benchmark__DOT__reset = 1U;
    tb_fir_benchmark__DOT__total_cycles = 0U;
    tb_fir_benchmark__DOT__sw_done_cycle = 0U;
    tb_fir_benchmark__DOT__hw_start_cycle = 0U;
    tb_fir_benchmark__DOT__hw_done_cycle = 0U;
    tb_fir_benchmark__DOT__sw_seen = 0U;
    tb_fir_benchmark__DOT__hw_started = 0U;
    tb_fir_benchmark__DOT__hw_seen = 0U;
    co_await vlSelfRef.__VtrigSched_h2b81c571__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir_benchmark.clk)", 
                                                         "tb/tb_fir_benchmark.sv", 
                                                         62);
    co_await vlSelfRef.__VtrigSched_h2b81c571__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir_benchmark.clk)", 
                                                         "tb/tb_fir_benchmark.sv", 
                                                         62);
    vlSelfRef.tb_fir_benchmark__DOT__reset = 0U;
    tb_fir_benchmark__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0x50U;
    while (VL_LTS_III(32, 0U, tb_fir_benchmark__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        co_await vlSelfRef.__VtrigSched_h2b81c571__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fir_benchmark.clk)", 
                                                             "tb/tb_fir_benchmark.sv", 
                                                             69);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/tb_fir_benchmark.sv", 
                                             70);
        tb_fir_benchmark__DOT__total_cycles = ((IData)(1U) 
                                               + tb_fir_benchmark__DOT__total_cycles);
        if (VL_UNLIKELY(((~ (IData)(tb_fir_benchmark__DOT__sw_seen)) 
                         & (0xc8U == vlSelfRef.tb_fir_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                            [0x18U])))) {
            tb_fir_benchmark__DOT__sw_seen = 1U;
            tb_fir_benchmark__DOT__sw_done_cycle = tb_fir_benchmark__DOT__total_cycles;
            VL_WRITEF_NX("Software FIR done at cycle %0d\n",0,
                         32,tb_fir_benchmark__DOT__sw_done_cycle);
        }
        if (VL_UNLIKELY(((~ (IData)(tb_fir_benchmark__DOT__hw_started)) 
                         & (0x40000000U == vlSelfRef.tb_fir_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                            [0xaU])))) {
            tb_fir_benchmark__DOT__hw_started = 1U;
            tb_fir_benchmark__DOT__hw_start_cycle = tb_fir_benchmark__DOT__total_cycles;
            VL_WRITEF_NX("Hardware FIR section starts at cycle %0d\n",0,
                         32,tb_fir_benchmark__DOT__hw_start_cycle);
        }
        if (VL_UNLIKELY(((~ (IData)(tb_fir_benchmark__DOT__hw_seen)) 
                         & (0xc8U == vlSelfRef.tb_fir_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                            [0x19U])))) {
            tb_fir_benchmark__DOT__hw_seen = 1U;
            tb_fir_benchmark__DOT__hw_done_cycle = tb_fir_benchmark__DOT__total_cycles;
            VL_WRITEF_NX("Hardware FIR done at cycle %0d\n",0,
                         32,tb_fir_benchmark__DOT__hw_done_cycle);
        }
        tb_fir_benchmark__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (tb_fir_benchmark__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    if (VL_UNLIKELY((0xc8U != vlSelfRef.tb_fir_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                     [0x18U]))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_fir_benchmark.sv:141: Assertion failed in %Ntb_fir_benchmark: %10#\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                     32,vlSelfRef.tb_fir_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                     [0x18U]);
        VL_STOP_MT("tb/tb_fir_benchmark.sv", 141, "", false);
    }
    if (VL_UNLIKELY((0xc8U != vlSelfRef.tb_fir_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                     [0x19U]))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_fir_benchmark.sv:151: Assertion failed in %Ntb_fir_benchmark: %10#\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                     32,vlSelfRef.tb_fir_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                     [0x19U]);
        VL_STOP_MT("tb/tb_fir_benchmark.sv", 151, "", false);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(tb_fir_benchmark__DOT__sw_seen))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_fir_benchmark.sv:158: Assertion failed in %Ntb_fir_benchmark\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("tb/tb_fir_benchmark.sv", 158, "", false);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(tb_fir_benchmark__DOT__hw_started))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_fir_benchmark.sv:164: Assertion failed in %Ntb_fir_benchmark\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("tb/tb_fir_benchmark.sv", 164, "", false);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(tb_fir_benchmark__DOT__hw_seen))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_fir_benchmark.sv:170: Assertion failed in %Ntb_fir_benchmark\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("tb/tb_fir_benchmark.sv", 170, "", false);
    }
    VL_WRITEF_NX("\nSoftware result = %0#\nHardware result = %0#\n\nSoftware completion cycle = %0d\nHardware section cycles   = %0d\n\nNOTE: this is an initial architectural benchmark.\nHardware timing currently includes MMIO setup/data transfers.\n==============================\n       FIR BENCHMARK PASS\n==============================\n",0,
                 32,vlSelfRef.tb_fir_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                 [0x18U],32,vlSelfRef.tb_fir_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                 [0x19U],32,tb_fir_benchmark__DOT__sw_done_cycle,
                 32,(tb_fir_benchmark__DOT__hw_done_cycle 
                     - tb_fir_benchmark__DOT__hw_start_cycle));
    VL_FINISH_MT("tb/tb_fir_benchmark.sv", 213, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fir_benchmark___024root___dump_triggers__act(Vtb_fir_benchmark___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_fir_benchmark___024root___eval_triggers__act(Vtb_fir_benchmark___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_fir_benchmark__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir_benchmark___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.tb_fir_benchmark__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_fir_benchmark__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_fir_benchmark__DOT__clk__0 
        = vlSelfRef.tb_fir_benchmark__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_fir_benchmark___024root___dump_triggers__act(vlSelf);
    }
#endif
}
