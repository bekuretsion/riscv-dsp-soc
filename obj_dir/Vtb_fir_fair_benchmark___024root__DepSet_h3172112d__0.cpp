// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fir_fair_benchmark.h for the primary calling header

#include "Vtb_fir_fair_benchmark__pch.h"
#include "Vtb_fir_fair_benchmark__Syms.h"
#include "Vtb_fir_fair_benchmark___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_fir_fair_benchmark___024root___eval_initial__TOP__Vtiming__1(Vtb_fir_fair_benchmark___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_fir_fair_benchmark__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir_fair_benchmark___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ tb_fir_fair_benchmark__DOT__cycle_count;
    tb_fir_fair_benchmark__DOT__cycle_count = 0;
    IData/*31:0*/ tb_fir_fair_benchmark__DOT__sw_start_cycle;
    tb_fir_fair_benchmark__DOT__sw_start_cycle = 0;
    IData/*31:0*/ tb_fir_fair_benchmark__DOT__sw_end_cycle;
    tb_fir_fair_benchmark__DOT__sw_end_cycle = 0;
    IData/*31:0*/ tb_fir_fair_benchmark__DOT__hw_start_cycle;
    tb_fir_fair_benchmark__DOT__hw_start_cycle = 0;
    IData/*31:0*/ tb_fir_fair_benchmark__DOT__hw_end_cycle;
    tb_fir_fair_benchmark__DOT__hw_end_cycle = 0;
    IData/*31:0*/ tb_fir_fair_benchmark__DOT__sw_cycles;
    tb_fir_fair_benchmark__DOT__sw_cycles = 0;
    IData/*31:0*/ tb_fir_fair_benchmark__DOT__hw_cycles;
    tb_fir_fair_benchmark__DOT__hw_cycles = 0;
    double tb_fir_fair_benchmark__DOT__speedup;
    tb_fir_fair_benchmark__DOT__speedup = 0;
    CData/*0:0*/ tb_fir_fair_benchmark__DOT__sw_started;
    tb_fir_fair_benchmark__DOT__sw_started = 0;
    CData/*0:0*/ tb_fir_fair_benchmark__DOT__sw_finished;
    tb_fir_fair_benchmark__DOT__sw_finished = 0;
    CData/*0:0*/ tb_fir_fair_benchmark__DOT__hw_started;
    tb_fir_fair_benchmark__DOT__hw_started = 0;
    CData/*0:0*/ tb_fir_fair_benchmark__DOT__hw_finished;
    tb_fir_fair_benchmark__DOT__hw_finished = 0;
    IData/*31:0*/ tb_fir_fair_benchmark__DOT__unnamedblk1_2__DOT____Vrepeat1;
    tb_fir_fair_benchmark__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    // Body
    VL_WRITEF_NX("==============================\n      FAIR FIR BENCHMARK\n==============================\n",0);
    vlSelfRef.tb_fir_fair_benchmark__DOT__reset = 1U;
    tb_fir_fair_benchmark__DOT__cycle_count = 0U;
    tb_fir_fair_benchmark__DOT__sw_start_cycle = 0U;
    tb_fir_fair_benchmark__DOT__sw_end_cycle = 0U;
    tb_fir_fair_benchmark__DOT__hw_start_cycle = 0U;
    tb_fir_fair_benchmark__DOT__hw_end_cycle = 0U;
    tb_fir_fair_benchmark__DOT__sw_cycles = 0U;
    tb_fir_fair_benchmark__DOT__hw_cycles = 0U;
    tb_fir_fair_benchmark__DOT__speedup = 0.0;
    tb_fir_fair_benchmark__DOT__sw_started = 0U;
    tb_fir_fair_benchmark__DOT__sw_finished = 0U;
    tb_fir_fair_benchmark__DOT__hw_started = 0U;
    tb_fir_fair_benchmark__DOT__hw_finished = 0U;
    co_await vlSelfRef.__VtrigSched_h7a50df54__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir_fair_benchmark.clk)", 
                                                         "tb/tb_fir_fair_benchmark.sv", 
                                                         81);
    co_await vlSelfRef.__VtrigSched_h7a50df54__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir_fair_benchmark.clk)", 
                                                         "tb/tb_fir_fair_benchmark.sv", 
                                                         81);
    vlSelfRef.tb_fir_fair_benchmark__DOT__reset = 0U;
    tb_fir_fair_benchmark__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0x12cU;
    while (VL_LTS_III(32, 0U, tb_fir_fair_benchmark__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        co_await vlSelfRef.__VtrigSched_h7a50df54__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fir_fair_benchmark.clk)", 
                                                             "tb/tb_fir_fair_benchmark.sv", 
                                                             88);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/tb_fir_fair_benchmark.sv", 
                                             89);
        tb_fir_fair_benchmark__DOT__cycle_count = ((IData)(1U) 
                                                   + tb_fir_fair_benchmark__DOT__cycle_count);
        if (VL_UNLIKELY(((~ (IData)(tb_fir_fair_benchmark__DOT__sw_started)) 
                         & (1U == vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                            [0x1eU])))) {
            tb_fir_fair_benchmark__DOT__sw_started = 1U;
            tb_fir_fair_benchmark__DOT__sw_start_cycle 
                = tb_fir_fair_benchmark__DOT__cycle_count;
            VL_WRITEF_NX("Software start cycle = %0d\n",0,
                         32,tb_fir_fair_benchmark__DOT__sw_start_cycle);
        }
        if (VL_UNLIKELY((((IData)(tb_fir_fair_benchmark__DOT__sw_started) 
                          & (~ (IData)(tb_fir_fair_benchmark__DOT__sw_finished))) 
                         & (2U == vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                            [0x1eU])))) {
            tb_fir_fair_benchmark__DOT__sw_finished = 1U;
            tb_fir_fair_benchmark__DOT__sw_end_cycle 
                = tb_fir_fair_benchmark__DOT__cycle_count;
            VL_WRITEF_NX("Software end cycle = %0d\n",0,
                         32,tb_fir_fair_benchmark__DOT__sw_end_cycle);
        }
        if (VL_UNLIKELY(((~ (IData)(tb_fir_fair_benchmark__DOT__hw_started)) 
                         & (1U == vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                            [0x1fU])))) {
            tb_fir_fair_benchmark__DOT__hw_started = 1U;
            tb_fir_fair_benchmark__DOT__hw_start_cycle 
                = tb_fir_fair_benchmark__DOT__cycle_count;
            VL_WRITEF_NX("Hardware start cycle = %0d\n",0,
                         32,tb_fir_fair_benchmark__DOT__hw_start_cycle);
        }
        if (VL_UNLIKELY((((IData)(tb_fir_fair_benchmark__DOT__hw_started) 
                          & (~ (IData)(tb_fir_fair_benchmark__DOT__hw_finished))) 
                         & (2U == vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                            [0x1fU])))) {
            tb_fir_fair_benchmark__DOT__hw_finished = 1U;
            tb_fir_fair_benchmark__DOT__hw_end_cycle 
                = tb_fir_fair_benchmark__DOT__cycle_count;
            VL_WRITEF_NX("Hardware end cycle = %0d\n",0,
                         32,tb_fir_fair_benchmark__DOT__hw_end_cycle);
        }
        tb_fir_fair_benchmark__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (tb_fir_fair_benchmark__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    if (VL_UNLIKELY((0x258U != vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                     [0x18U]))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_fir_fair_benchmark.sv:175: Assertion failed in %Ntb_fir_fair_benchmark: %10#\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                     32,vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                     [0x18U]);
        VL_STOP_MT("tb/tb_fir_fair_benchmark.sv", 175, "", false);
    }
    if (VL_UNLIKELY((0x258U != vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                     [0x19U]))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_fir_fair_benchmark.sv:186: Assertion failed in %Ntb_fir_fair_benchmark: %10#\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                     32,vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                     [0x19U]);
        VL_STOP_MT("tb/tb_fir_fair_benchmark.sv", 186, "", false);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(tb_fir_fair_benchmark__DOT__sw_finished))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_fir_fair_benchmark.sv:193: Assertion failed in %Ntb_fir_fair_benchmark\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("tb/tb_fir_fair_benchmark.sv", 193, "", false);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(tb_fir_fair_benchmark__DOT__hw_finished))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_fir_fair_benchmark.sv:199: Assertion failed in %Ntb_fir_fair_benchmark\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("tb/tb_fir_fair_benchmark.sv", 199, "", false);
    }
    tb_fir_fair_benchmark__DOT__sw_cycles = (tb_fir_fair_benchmark__DOT__sw_end_cycle 
                                             - tb_fir_fair_benchmark__DOT__sw_start_cycle);
    tb_fir_fair_benchmark__DOT__hw_cycles = (tb_fir_fair_benchmark__DOT__hw_end_cycle 
                                             - tb_fir_fair_benchmark__DOT__hw_start_cycle);
    tb_fir_fair_benchmark__DOT__speedup = (VL_ISTOR_D_I(32, tb_fir_fair_benchmark__DOT__sw_cycles) 
                                           / VL_ISTOR_D_I(32, tb_fir_fair_benchmark__DOT__hw_cycles));
    VL_WRITEF_NX("\n==============================\n          RESULTS\n==============================\nSamples processed : 8\nSoftware result   : %0#\nHardware result   : %0#\n\nSoftware cycles   : %0d\nHardware cycles   : %0d\nSW cycles/sample  : %0f\nHW cycles/sample  : %0f\n\nMeasured speedup  : %0.2fx\n==============================\n    FAIR FIR BENCHMARK PASS\n==============================\n",0,
                 32,vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                 [0x18U],32,vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                 [0x19U],32,tb_fir_fair_benchmark__DOT__sw_cycles,
                 32,tb_fir_fair_benchmark__DOT__hw_cycles,
                 64,(VL_ISTOR_D_I(32, tb_fir_fair_benchmark__DOT__sw_cycles) 
                     / 8.0),64,(VL_ISTOR_D_I(32, tb_fir_fair_benchmark__DOT__hw_cycles) 
                                / 8.0),64,tb_fir_fair_benchmark__DOT__speedup);
    VL_FINISH_MT("tb/tb_fir_fair_benchmark.sv", 273, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fir_fair_benchmark___024root___dump_triggers__act(Vtb_fir_fair_benchmark___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_fir_fair_benchmark___024root___eval_triggers__act(Vtb_fir_fair_benchmark___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_fir_fair_benchmark__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir_fair_benchmark___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.tb_fir_fair_benchmark__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_fir_fair_benchmark__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_fir_fair_benchmark__DOT__clk__0 
        = vlSelfRef.tb_fir_fair_benchmark__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_fir_fair_benchmark___024root___dump_triggers__act(vlSelf);
    }
#endif
}
