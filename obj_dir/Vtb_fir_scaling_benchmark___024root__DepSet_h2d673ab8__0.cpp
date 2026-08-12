// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fir_scaling_benchmark.h for the primary calling header

#include "Vtb_fir_scaling_benchmark__pch.h"
#include "Vtb_fir_scaling_benchmark__Syms.h"
#include "Vtb_fir_scaling_benchmark___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_fir_scaling_benchmark___024root___eval_initial__TOP__Vtiming__1(Vtb_fir_scaling_benchmark___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_fir_scaling_benchmark__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir_scaling_benchmark___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ tb_fir_scaling_benchmark__DOT__cycle_count;
    tb_fir_scaling_benchmark__DOT__cycle_count = 0;
    IData/*31:0*/ tb_fir_scaling_benchmark__DOT__sw_start;
    tb_fir_scaling_benchmark__DOT__sw_start = 0;
    IData/*31:0*/ tb_fir_scaling_benchmark__DOT__sw_8;
    tb_fir_scaling_benchmark__DOT__sw_8 = 0;
    IData/*31:0*/ tb_fir_scaling_benchmark__DOT__sw_16;
    tb_fir_scaling_benchmark__DOT__sw_16 = 0;
    IData/*31:0*/ tb_fir_scaling_benchmark__DOT__sw_32;
    tb_fir_scaling_benchmark__DOT__sw_32 = 0;
    IData/*31:0*/ tb_fir_scaling_benchmark__DOT__hw_start;
    tb_fir_scaling_benchmark__DOT__hw_start = 0;
    IData/*31:0*/ tb_fir_scaling_benchmark__DOT__hw_8;
    tb_fir_scaling_benchmark__DOT__hw_8 = 0;
    IData/*31:0*/ tb_fir_scaling_benchmark__DOT__hw_16;
    tb_fir_scaling_benchmark__DOT__hw_16 = 0;
    IData/*31:0*/ tb_fir_scaling_benchmark__DOT__hw_32;
    tb_fir_scaling_benchmark__DOT__hw_32 = 0;
    IData/*31:0*/ tb_fir_scaling_benchmark__DOT__sw_cycles_8;
    tb_fir_scaling_benchmark__DOT__sw_cycles_8 = 0;
    IData/*31:0*/ tb_fir_scaling_benchmark__DOT__sw_cycles_16;
    tb_fir_scaling_benchmark__DOT__sw_cycles_16 = 0;
    IData/*31:0*/ tb_fir_scaling_benchmark__DOT__sw_cycles_32;
    tb_fir_scaling_benchmark__DOT__sw_cycles_32 = 0;
    IData/*31:0*/ tb_fir_scaling_benchmark__DOT__hw_cycles_8;
    tb_fir_scaling_benchmark__DOT__hw_cycles_8 = 0;
    IData/*31:0*/ tb_fir_scaling_benchmark__DOT__hw_cycles_16;
    tb_fir_scaling_benchmark__DOT__hw_cycles_16 = 0;
    IData/*31:0*/ tb_fir_scaling_benchmark__DOT__hw_cycles_32;
    tb_fir_scaling_benchmark__DOT__hw_cycles_32 = 0;
    double tb_fir_scaling_benchmark__DOT__speedup_8;
    tb_fir_scaling_benchmark__DOT__speedup_8 = 0;
    double tb_fir_scaling_benchmark__DOT__speedup_16;
    tb_fir_scaling_benchmark__DOT__speedup_16 = 0;
    double tb_fir_scaling_benchmark__DOT__speedup_32;
    tb_fir_scaling_benchmark__DOT__speedup_32 = 0;
    CData/*0:0*/ tb_fir_scaling_benchmark__DOT__sw_started;
    tb_fir_scaling_benchmark__DOT__sw_started = 0;
    CData/*0:0*/ tb_fir_scaling_benchmark__DOT__hw_started;
    tb_fir_scaling_benchmark__DOT__hw_started = 0;
    CData/*0:0*/ tb_fir_scaling_benchmark__DOT__sw_seen_8;
    tb_fir_scaling_benchmark__DOT__sw_seen_8 = 0;
    CData/*0:0*/ tb_fir_scaling_benchmark__DOT__sw_seen_16;
    tb_fir_scaling_benchmark__DOT__sw_seen_16 = 0;
    CData/*0:0*/ tb_fir_scaling_benchmark__DOT__sw_seen_32;
    tb_fir_scaling_benchmark__DOT__sw_seen_32 = 0;
    CData/*0:0*/ tb_fir_scaling_benchmark__DOT__hw_seen_8;
    tb_fir_scaling_benchmark__DOT__hw_seen_8 = 0;
    CData/*0:0*/ tb_fir_scaling_benchmark__DOT__hw_seen_16;
    tb_fir_scaling_benchmark__DOT__hw_seen_16 = 0;
    CData/*0:0*/ tb_fir_scaling_benchmark__DOT__hw_seen_32;
    tb_fir_scaling_benchmark__DOT__hw_seen_32 = 0;
    IData/*31:0*/ tb_fir_scaling_benchmark__DOT__unnamedblk1_2__DOT____Vrepeat1;
    tb_fir_scaling_benchmark__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    // Body
    VL_WRITEF_NX("================================\n     FIR SCALING BENCHMARK\n================================\n",0);
    vlSelfRef.tb_fir_scaling_benchmark__DOT__reset = 1U;
    tb_fir_scaling_benchmark__DOT__cycle_count = 0U;
    tb_fir_scaling_benchmark__DOT__sw_start = 0U;
    tb_fir_scaling_benchmark__DOT__sw_8 = 0U;
    tb_fir_scaling_benchmark__DOT__sw_16 = 0U;
    tb_fir_scaling_benchmark__DOT__sw_32 = 0U;
    tb_fir_scaling_benchmark__DOT__hw_start = 0U;
    tb_fir_scaling_benchmark__DOT__hw_8 = 0U;
    tb_fir_scaling_benchmark__DOT__hw_16 = 0U;
    tb_fir_scaling_benchmark__DOT__hw_32 = 0U;
    tb_fir_scaling_benchmark__DOT__sw_started = 0U;
    tb_fir_scaling_benchmark__DOT__hw_started = 0U;
    tb_fir_scaling_benchmark__DOT__sw_seen_8 = 0U;
    tb_fir_scaling_benchmark__DOT__sw_seen_16 = 0U;
    tb_fir_scaling_benchmark__DOT__sw_seen_32 = 0U;
    tb_fir_scaling_benchmark__DOT__hw_seen_8 = 0U;
    tb_fir_scaling_benchmark__DOT__hw_seen_16 = 0U;
    tb_fir_scaling_benchmark__DOT__hw_seen_32 = 0U;
    co_await vlSelfRef.__VtrigSched_hdeddb81a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir_scaling_benchmark.clk)", 
                                                         "tb/tb_fir_scaling_benchmark.sv", 
                                                         155);
    co_await vlSelfRef.__VtrigSched_hdeddb81a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir_scaling_benchmark.clk)", 
                                                         "tb/tb_fir_scaling_benchmark.sv", 
                                                         155);
    vlSelfRef.tb_fir_scaling_benchmark__DOT__reset = 0U;
    tb_fir_scaling_benchmark__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0x4b0U;
    while (VL_LTS_III(32, 0U, tb_fir_scaling_benchmark__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        co_await vlSelfRef.__VtrigSched_hdeddb81a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_fir_scaling_benchmark.clk)", 
                                                             "tb/tb_fir_scaling_benchmark.sv", 
                                                             165);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/tb_fir_scaling_benchmark.sv", 
                                             166);
        tb_fir_scaling_benchmark__DOT__cycle_count 
            = ((IData)(1U) + tb_fir_scaling_benchmark__DOT__cycle_count);
        if (VL_UNLIKELY(((~ (IData)(tb_fir_scaling_benchmark__DOT__sw_started)) 
                         & (1U == vlSelfRef.tb_fir_scaling_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                            [0x1eU])))) {
            tb_fir_scaling_benchmark__DOT__sw_started = 1U;
            tb_fir_scaling_benchmark__DOT__sw_start 
                = tb_fir_scaling_benchmark__DOT__cycle_count;
            VL_WRITEF_NX("SW start cycle = %0d\n",0,
                         32,tb_fir_scaling_benchmark__DOT__sw_start);
        }
        if (VL_UNLIKELY((((IData)(tb_fir_scaling_benchmark__DOT__sw_started) 
                          & (~ (IData)(tb_fir_scaling_benchmark__DOT__sw_seen_8))) 
                         & (8U == vlSelfRef.tb_fir_scaling_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                            [0x1bU])))) {
            tb_fir_scaling_benchmark__DOT__sw_seen_8 = 1U;
            tb_fir_scaling_benchmark__DOT__sw_8 = tb_fir_scaling_benchmark__DOT__cycle_count;
            VL_WRITEF_NX("SW 8 samples: cycle=%0d result=%0#\n",0,
                         32,tb_fir_scaling_benchmark__DOT__sw_8,
                         32,vlSelfRef.tb_fir_scaling_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                         [0x18U]);
            if (VL_UNLIKELY((0x258U != vlSelfRef.tb_fir_scaling_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                             [0x18U]))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_fir_scaling_benchmark.sv:226: Assertion failed in %Ntb_fir_scaling_benchmark.unnamedblk1_2: %10#\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),32,
                             vlSelfRef.tb_fir_scaling_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                             [0x18U]);
                VL_STOP_MT("tb/tb_fir_scaling_benchmark.sv", 226, "", false);
            }
        }
        if (VL_UNLIKELY((((IData)(tb_fir_scaling_benchmark__DOT__sw_started) 
                          & (~ (IData)(tb_fir_scaling_benchmark__DOT__sw_seen_16))) 
                         & (0x10U == vlSelfRef.tb_fir_scaling_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                            [0x1bU])))) {
            tb_fir_scaling_benchmark__DOT__sw_seen_16 = 1U;
            tb_fir_scaling_benchmark__DOT__sw_16 = tb_fir_scaling_benchmark__DOT__cycle_count;
            VL_WRITEF_NX("SW 16 samples: cycle=%0d result=%0#\n",0,
                         32,tb_fir_scaling_benchmark__DOT__sw_16,
                         32,vlSelfRef.tb_fir_scaling_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                         [0x18U]);
            if (VL_UNLIKELY((0x578U != vlSelfRef.tb_fir_scaling_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                             [0x18U]))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_fir_scaling_benchmark.sv:262: Assertion failed in %Ntb_fir_scaling_benchmark.unnamedblk1_2: %10#\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),32,
                             vlSelfRef.tb_fir_scaling_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                             [0x18U]);
                VL_STOP_MT("tb/tb_fir_scaling_benchmark.sv", 262, "", false);
            }
        }
        if (VL_UNLIKELY((((IData)(tb_fir_scaling_benchmark__DOT__sw_started) 
                          & (~ (IData)(tb_fir_scaling_benchmark__DOT__sw_seen_32))) 
                         & (0x20U == vlSelfRef.tb_fir_scaling_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                            [0x1bU])))) {
            tb_fir_scaling_benchmark__DOT__sw_seen_32 = 1U;
            tb_fir_scaling_benchmark__DOT__sw_32 = tb_fir_scaling_benchmark__DOT__cycle_count;
            VL_WRITEF_NX("SW 32 samples: cycle=%0d result=%0#\n",0,
                         32,tb_fir_scaling_benchmark__DOT__sw_32,
                         32,vlSelfRef.tb_fir_scaling_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                         [0x18U]);
            if (VL_UNLIKELY((0xbb8U != vlSelfRef.tb_fir_scaling_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                             [0x18U]))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_fir_scaling_benchmark.sv:298: Assertion failed in %Ntb_fir_scaling_benchmark.unnamedblk1_2: %10#\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),32,
                             vlSelfRef.tb_fir_scaling_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                             [0x18U]);
                VL_STOP_MT("tb/tb_fir_scaling_benchmark.sv", 298, "", false);
            }
        }
        if (VL_UNLIKELY(((~ (IData)(tb_fir_scaling_benchmark__DOT__hw_started)) 
                         & (1U == vlSelfRef.tb_fir_scaling_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                            [0x1fU])))) {
            tb_fir_scaling_benchmark__DOT__hw_started = 1U;
            tb_fir_scaling_benchmark__DOT__hw_start 
                = tb_fir_scaling_benchmark__DOT__cycle_count;
            VL_WRITEF_NX("HW start cycle = %0d\n",0,
                         32,tb_fir_scaling_benchmark__DOT__hw_start);
        }
        if (VL_UNLIKELY((((IData)(tb_fir_scaling_benchmark__DOT__hw_started) 
                          & (~ (IData)(tb_fir_scaling_benchmark__DOT__hw_seen_8))) 
                         & (8U == vlSelfRef.tb_fir_scaling_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                            [0x1cU])))) {
            tb_fir_scaling_benchmark__DOT__hw_seen_8 = 1U;
            tb_fir_scaling_benchmark__DOT__hw_8 = tb_fir_scaling_benchmark__DOT__cycle_count;
            VL_WRITEF_NX("HW 8 samples: cycle=%0d result=%0#\n",0,
                         32,tb_fir_scaling_benchmark__DOT__hw_8,
                         32,vlSelfRef.tb_fir_scaling_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                         [0x19U]);
            if (VL_UNLIKELY((0x258U != vlSelfRef.tb_fir_scaling_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                             [0x19U]))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_fir_scaling_benchmark.sv:360: Assertion failed in %Ntb_fir_scaling_benchmark.unnamedblk1_2: %10#\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),32,
                             vlSelfRef.tb_fir_scaling_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                             [0x19U]);
                VL_STOP_MT("tb/tb_fir_scaling_benchmark.sv", 360, "", false);
            }
        }
        if (VL_UNLIKELY((((IData)(tb_fir_scaling_benchmark__DOT__hw_started) 
                          & (~ (IData)(tb_fir_scaling_benchmark__DOT__hw_seen_16))) 
                         & (0x10U == vlSelfRef.tb_fir_scaling_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                            [0x1cU])))) {
            tb_fir_scaling_benchmark__DOT__hw_seen_16 = 1U;
            tb_fir_scaling_benchmark__DOT__hw_16 = tb_fir_scaling_benchmark__DOT__cycle_count;
            VL_WRITEF_NX("HW 16 samples: cycle=%0d result=%0#\n",0,
                         32,tb_fir_scaling_benchmark__DOT__hw_16,
                         32,vlSelfRef.tb_fir_scaling_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                         [0x19U]);
            if (VL_UNLIKELY((0x578U != vlSelfRef.tb_fir_scaling_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                             [0x19U]))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_fir_scaling_benchmark.sv:396: Assertion failed in %Ntb_fir_scaling_benchmark.unnamedblk1_2: %10#\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),32,
                             vlSelfRef.tb_fir_scaling_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                             [0x19U]);
                VL_STOP_MT("tb/tb_fir_scaling_benchmark.sv", 396, "", false);
            }
        }
        if (VL_UNLIKELY((((IData)(tb_fir_scaling_benchmark__DOT__hw_started) 
                          & (~ (IData)(tb_fir_scaling_benchmark__DOT__hw_seen_32))) 
                         & (0x20U == vlSelfRef.tb_fir_scaling_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                            [0x1cU])))) {
            tb_fir_scaling_benchmark__DOT__hw_seen_32 = 1U;
            tb_fir_scaling_benchmark__DOT__hw_32 = tb_fir_scaling_benchmark__DOT__cycle_count;
            VL_WRITEF_NX("HW 32 samples: cycle=%0d result=%0#\n",0,
                         32,tb_fir_scaling_benchmark__DOT__hw_32,
                         32,vlSelfRef.tb_fir_scaling_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                         [0x19U]);
            if (VL_UNLIKELY((0xbb8U != vlSelfRef.tb_fir_scaling_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                             [0x19U]))) {
                VL_WRITEF_NX("[%0t] %%Fatal: tb_fir_scaling_benchmark.sv:432: Assertion failed in %Ntb_fir_scaling_benchmark.unnamedblk1_2: %10#\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),32,
                             vlSelfRef.tb_fir_scaling_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
                             [0x19U]);
                VL_STOP_MT("tb/tb_fir_scaling_benchmark.sv", 432, "", false);
            }
        }
        tb_fir_scaling_benchmark__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (tb_fir_scaling_benchmark__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    if (VL_UNLIKELY((1U & (~ (IData)(tb_fir_scaling_benchmark__DOT__sw_seen_8))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_fir_scaling_benchmark.sv:447: Assertion failed in %Ntb_fir_scaling_benchmark\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("tb/tb_fir_scaling_benchmark.sv", 447, "", false);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(tb_fir_scaling_benchmark__DOT__sw_seen_16))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_fir_scaling_benchmark.sv:450: Assertion failed in %Ntb_fir_scaling_benchmark\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("tb/tb_fir_scaling_benchmark.sv", 450, "", false);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(tb_fir_scaling_benchmark__DOT__sw_seen_32))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_fir_scaling_benchmark.sv:453: Assertion failed in %Ntb_fir_scaling_benchmark\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("tb/tb_fir_scaling_benchmark.sv", 453, "", false);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(tb_fir_scaling_benchmark__DOT__hw_seen_8))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_fir_scaling_benchmark.sv:457: Assertion failed in %Ntb_fir_scaling_benchmark\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("tb/tb_fir_scaling_benchmark.sv", 457, "", false);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(tb_fir_scaling_benchmark__DOT__hw_seen_16))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_fir_scaling_benchmark.sv:460: Assertion failed in %Ntb_fir_scaling_benchmark\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("tb/tb_fir_scaling_benchmark.sv", 460, "", false);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(tb_fir_scaling_benchmark__DOT__hw_seen_32))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_fir_scaling_benchmark.sv:463: Assertion failed in %Ntb_fir_scaling_benchmark\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("tb/tb_fir_scaling_benchmark.sv", 463, "", false);
    }
    tb_fir_scaling_benchmark__DOT__sw_cycles_8 = (tb_fir_scaling_benchmark__DOT__sw_8 
                                                  - tb_fir_scaling_benchmark__DOT__sw_start);
    tb_fir_scaling_benchmark__DOT__sw_cycles_16 = (tb_fir_scaling_benchmark__DOT__sw_16 
                                                   - tb_fir_scaling_benchmark__DOT__sw_start);
    tb_fir_scaling_benchmark__DOT__sw_cycles_32 = (tb_fir_scaling_benchmark__DOT__sw_32 
                                                   - tb_fir_scaling_benchmark__DOT__sw_start);
    tb_fir_scaling_benchmark__DOT__hw_cycles_8 = (tb_fir_scaling_benchmark__DOT__hw_8 
                                                  - tb_fir_scaling_benchmark__DOT__hw_start);
    tb_fir_scaling_benchmark__DOT__hw_cycles_16 = (tb_fir_scaling_benchmark__DOT__hw_16 
                                                   - tb_fir_scaling_benchmark__DOT__hw_start);
    tb_fir_scaling_benchmark__DOT__hw_cycles_32 = (tb_fir_scaling_benchmark__DOT__hw_32 
                                                   - tb_fir_scaling_benchmark__DOT__hw_start);
    tb_fir_scaling_benchmark__DOT__speedup_8 = (VL_ISTOR_D_I(32, tb_fir_scaling_benchmark__DOT__sw_cycles_8) 
                                                / VL_ISTOR_D_I(32, tb_fir_scaling_benchmark__DOT__hw_cycles_8));
    tb_fir_scaling_benchmark__DOT__speedup_16 = (VL_ISTOR_D_I(32, tb_fir_scaling_benchmark__DOT__sw_cycles_16) 
                                                 / 
                                                 VL_ISTOR_D_I(32, tb_fir_scaling_benchmark__DOT__hw_cycles_16));
    tb_fir_scaling_benchmark__DOT__speedup_32 = (VL_ISTOR_D_I(32, tb_fir_scaling_benchmark__DOT__sw_cycles_32) 
                                                 / 
                                                 VL_ISTOR_D_I(32, tb_fir_scaling_benchmark__DOT__hw_cycles_32));
    VL_WRITEF_NX("\n==============================================\n              SCALING RESULTS\n==============================================\nSamples | SW cycles | HW cycles | Speedup\n----------------------------------------------\n8       | %0d        | %0d        | %0.2fx\n16      | %0d        | %0d        | %0.2fx\n32      | %0d        | %0d        | %0.2fx\n\nSW cycles/sample @32 = %0f\nHW cycles/sample @32 = %0f\n",0,
                 32,tb_fir_scaling_benchmark__DOT__sw_cycles_8,
                 32,tb_fir_scaling_benchmark__DOT__hw_cycles_8,
                 64,tb_fir_scaling_benchmark__DOT__speedup_8,
                 32,tb_fir_scaling_benchmark__DOT__sw_cycles_16,
                 32,tb_fir_scaling_benchmark__DOT__hw_cycles_16,
                 64,tb_fir_scaling_benchmark__DOT__speedup_16,
                 32,tb_fir_scaling_benchmark__DOT__sw_cycles_32,
                 32,tb_fir_scaling_benchmark__DOT__hw_cycles_32,
                 64,tb_fir_scaling_benchmark__DOT__speedup_32,
                 64,(VL_ISTOR_D_I(32, tb_fir_scaling_benchmark__DOT__sw_cycles_32) 
                     / 32.0),64,(VL_ISTOR_D_I(32, tb_fir_scaling_benchmark__DOT__hw_cycles_32) 
                                 / 32.0));
    VL_WRITEF_NX("==============================================\n      FIR SCALING BENCHMARK PASS\n==============================================\n",0);
    VL_FINISH_MT("tb/tb_fir_scaling_benchmark.sv", 584, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fir_scaling_benchmark___024root___dump_triggers__act(Vtb_fir_scaling_benchmark___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_fir_scaling_benchmark___024root___eval_triggers__act(Vtb_fir_scaling_benchmark___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_fir_scaling_benchmark__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir_scaling_benchmark___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.tb_fir_scaling_benchmark__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_fir_scaling_benchmark__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_fir_scaling_benchmark__DOT__clk__0 
        = vlSelfRef.tb_fir_scaling_benchmark__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_fir_scaling_benchmark___024root___dump_triggers__act(vlSelf);
    }
#endif
}
