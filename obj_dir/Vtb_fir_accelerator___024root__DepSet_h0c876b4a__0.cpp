// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fir_accelerator.h for the primary calling header

#include "Vtb_fir_accelerator__pch.h"
#include "Vtb_fir_accelerator__Syms.h"
#include "Vtb_fir_accelerator___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_fir_accelerator___024root___eval_initial__TOP__Vtiming__1(Vtb_fir_accelerator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_fir_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir_accelerator___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ tb_fir_accelerator__DOT__result_value;
    tb_fir_accelerator__DOT__result_value = 0;
    CData/*4:0*/ __Vtask_tb_fir_accelerator__DOT__write_reg__0__addr;
    __Vtask_tb_fir_accelerator__DOT__write_reg__0__addr = 0;
    IData/*31:0*/ __Vtask_tb_fir_accelerator__DOT__write_reg__0__data;
    __Vtask_tb_fir_accelerator__DOT__write_reg__0__data = 0;
    CData/*4:0*/ __Vtask_tb_fir_accelerator__DOT__write_reg__1__addr;
    __Vtask_tb_fir_accelerator__DOT__write_reg__1__addr = 0;
    IData/*31:0*/ __Vtask_tb_fir_accelerator__DOT__write_reg__1__data;
    __Vtask_tb_fir_accelerator__DOT__write_reg__1__data = 0;
    CData/*4:0*/ __Vtask_tb_fir_accelerator__DOT__write_reg__2__addr;
    __Vtask_tb_fir_accelerator__DOT__write_reg__2__addr = 0;
    IData/*31:0*/ __Vtask_tb_fir_accelerator__DOT__write_reg__2__data;
    __Vtask_tb_fir_accelerator__DOT__write_reg__2__data = 0;
    CData/*4:0*/ __Vtask_tb_fir_accelerator__DOT__write_reg__3__addr;
    __Vtask_tb_fir_accelerator__DOT__write_reg__3__addr = 0;
    IData/*31:0*/ __Vtask_tb_fir_accelerator__DOT__write_reg__3__data;
    __Vtask_tb_fir_accelerator__DOT__write_reg__3__data = 0;
    IData/*31:0*/ __Vtask_tb_fir_accelerator__DOT__process_sample__4__sample;
    __Vtask_tb_fir_accelerator__DOT__process_sample__4__sample = 0;
    CData/*4:0*/ __Vtask_tb_fir_accelerator__DOT__write_reg__5__addr;
    __Vtask_tb_fir_accelerator__DOT__write_reg__5__addr = 0;
    IData/*31:0*/ __Vtask_tb_fir_accelerator__DOT__write_reg__5__data;
    __Vtask_tb_fir_accelerator__DOT__write_reg__5__data = 0;
    CData/*4:0*/ __Vtask_tb_fir_accelerator__DOT__write_reg__6__addr;
    __Vtask_tb_fir_accelerator__DOT__write_reg__6__addr = 0;
    IData/*31:0*/ __Vtask_tb_fir_accelerator__DOT__write_reg__6__data;
    __Vtask_tb_fir_accelerator__DOT__write_reg__6__data = 0;
    CData/*4:0*/ __Vtask_tb_fir_accelerator__DOT__read_reg__7__addr;
    __Vtask_tb_fir_accelerator__DOT__read_reg__7__addr = 0;
    IData/*31:0*/ __Vtask_tb_fir_accelerator__DOT__read_reg__7__data;
    __Vtask_tb_fir_accelerator__DOT__read_reg__7__data = 0;
    IData/*31:0*/ __Vtask_tb_fir_accelerator__DOT__process_sample__8__sample;
    __Vtask_tb_fir_accelerator__DOT__process_sample__8__sample = 0;
    CData/*4:0*/ __Vtask_tb_fir_accelerator__DOT__write_reg__9__addr;
    __Vtask_tb_fir_accelerator__DOT__write_reg__9__addr = 0;
    IData/*31:0*/ __Vtask_tb_fir_accelerator__DOT__write_reg__9__data;
    __Vtask_tb_fir_accelerator__DOT__write_reg__9__data = 0;
    CData/*4:0*/ __Vtask_tb_fir_accelerator__DOT__write_reg__10__addr;
    __Vtask_tb_fir_accelerator__DOT__write_reg__10__addr = 0;
    IData/*31:0*/ __Vtask_tb_fir_accelerator__DOT__write_reg__10__data;
    __Vtask_tb_fir_accelerator__DOT__write_reg__10__data = 0;
    CData/*4:0*/ __Vtask_tb_fir_accelerator__DOT__read_reg__11__addr;
    __Vtask_tb_fir_accelerator__DOT__read_reg__11__addr = 0;
    IData/*31:0*/ __Vtask_tb_fir_accelerator__DOT__read_reg__11__data;
    __Vtask_tb_fir_accelerator__DOT__read_reg__11__data = 0;
    IData/*31:0*/ __Vtask_tb_fir_accelerator__DOT__process_sample__12__sample;
    __Vtask_tb_fir_accelerator__DOT__process_sample__12__sample = 0;
    CData/*4:0*/ __Vtask_tb_fir_accelerator__DOT__write_reg__13__addr;
    __Vtask_tb_fir_accelerator__DOT__write_reg__13__addr = 0;
    IData/*31:0*/ __Vtask_tb_fir_accelerator__DOT__write_reg__13__data;
    __Vtask_tb_fir_accelerator__DOT__write_reg__13__data = 0;
    CData/*4:0*/ __Vtask_tb_fir_accelerator__DOT__write_reg__14__addr;
    __Vtask_tb_fir_accelerator__DOT__write_reg__14__addr = 0;
    IData/*31:0*/ __Vtask_tb_fir_accelerator__DOT__write_reg__14__data;
    __Vtask_tb_fir_accelerator__DOT__write_reg__14__data = 0;
    CData/*4:0*/ __Vtask_tb_fir_accelerator__DOT__read_reg__15__addr;
    __Vtask_tb_fir_accelerator__DOT__read_reg__15__addr = 0;
    IData/*31:0*/ __Vtask_tb_fir_accelerator__DOT__read_reg__15__data;
    __Vtask_tb_fir_accelerator__DOT__read_reg__15__data = 0;
    IData/*31:0*/ __Vtask_tb_fir_accelerator__DOT__process_sample__16__sample;
    __Vtask_tb_fir_accelerator__DOT__process_sample__16__sample = 0;
    CData/*4:0*/ __Vtask_tb_fir_accelerator__DOT__write_reg__17__addr;
    __Vtask_tb_fir_accelerator__DOT__write_reg__17__addr = 0;
    IData/*31:0*/ __Vtask_tb_fir_accelerator__DOT__write_reg__17__data;
    __Vtask_tb_fir_accelerator__DOT__write_reg__17__data = 0;
    CData/*4:0*/ __Vtask_tb_fir_accelerator__DOT__write_reg__18__addr;
    __Vtask_tb_fir_accelerator__DOT__write_reg__18__addr = 0;
    IData/*31:0*/ __Vtask_tb_fir_accelerator__DOT__write_reg__18__data;
    __Vtask_tb_fir_accelerator__DOT__write_reg__18__data = 0;
    CData/*4:0*/ __Vtask_tb_fir_accelerator__DOT__read_reg__19__addr;
    __Vtask_tb_fir_accelerator__DOT__read_reg__19__addr = 0;
    IData/*31:0*/ __Vtask_tb_fir_accelerator__DOT__read_reg__19__data;
    __Vtask_tb_fir_accelerator__DOT__read_reg__19__data = 0;
    // Body
    vlSelfRef.tb_fir_accelerator__DOT__write_en = 0U;
    vlSelfRef.tb_fir_accelerator__DOT__read_en = 0U;
    vlSelfRef.tb_fir_accelerator__DOT__address = 0U;
    vlSelfRef.tb_fir_accelerator__DOT__write_data = 0U;
    vlSelfRef.tb_fir_accelerator__DOT__reset = 1U;
    VL_WRITEF_NX("==============================\n     FIR ACCELERATOR TEST\n==============================\n",0);
    co_await vlSelfRef.__VtrigSched_h243bddf6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir_accelerator.clk)", 
                                                         "tb/tb_fir_accelerator.sv", 
                                                         140);
    co_await vlSelfRef.__VtrigSched_h243bddf6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir_accelerator.clk)", 
                                                         "tb/tb_fir_accelerator.sv", 
                                                         140);
    vlSelfRef.tb_fir_accelerator__DOT__reset = 0U;
    __Vtask_tb_fir_accelerator__DOT__write_reg__0__data = 1U;
    __Vtask_tb_fir_accelerator__DOT__write_reg__0__addr = 4U;
    co_await vlSelfRef.__VtrigSched_h243bddb7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_fir_accelerator.clk)", 
                                                         "tb/tb_fir_accelerator.sv", 
                                                         52);
    vlSelfRef.tb_fir_accelerator__DOT__address = __Vtask_tb_fir_accelerator__DOT__write_reg__0__addr;
    vlSelfRef.tb_fir_accelerator__DOT__write_data = __Vtask_tb_fir_accelerator__DOT__write_reg__0__data;
    vlSelfRef.tb_fir_accelerator__DOT__write_en = 1U;
    co_await vlSelfRef.__VtrigSched_h243bddf6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir_accelerator.clk)", 
                                                         "tb/tb_fir_accelerator.sv", 
                                                         58);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_fir_accelerator.sv", 
                                         59);
    vlSelfRef.tb_fir_accelerator__DOT__write_en = 0U;
    __Vtask_tb_fir_accelerator__DOT__write_reg__1__data = 2U;
    __Vtask_tb_fir_accelerator__DOT__write_reg__1__addr = 8U;
    co_await vlSelfRef.__VtrigSched_h243bddb7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_fir_accelerator.clk)", 
                                                         "tb/tb_fir_accelerator.sv", 
                                                         52);
    vlSelfRef.tb_fir_accelerator__DOT__address = __Vtask_tb_fir_accelerator__DOT__write_reg__1__addr;
    vlSelfRef.tb_fir_accelerator__DOT__write_data = __Vtask_tb_fir_accelerator__DOT__write_reg__1__data;
    vlSelfRef.tb_fir_accelerator__DOT__write_en = 1U;
    co_await vlSelfRef.__VtrigSched_h243bddf6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir_accelerator.clk)", 
                                                         "tb/tb_fir_accelerator.sv", 
                                                         58);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_fir_accelerator.sv", 
                                         59);
    vlSelfRef.tb_fir_accelerator__DOT__write_en = 0U;
    __Vtask_tb_fir_accelerator__DOT__write_reg__2__data = 3U;
    __Vtask_tb_fir_accelerator__DOT__write_reg__2__addr = 0xcU;
    co_await vlSelfRef.__VtrigSched_h243bddb7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_fir_accelerator.clk)", 
                                                         "tb/tb_fir_accelerator.sv", 
                                                         52);
    vlSelfRef.tb_fir_accelerator__DOT__address = __Vtask_tb_fir_accelerator__DOT__write_reg__2__addr;
    vlSelfRef.tb_fir_accelerator__DOT__write_data = __Vtask_tb_fir_accelerator__DOT__write_reg__2__data;
    vlSelfRef.tb_fir_accelerator__DOT__write_en = 1U;
    co_await vlSelfRef.__VtrigSched_h243bddf6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir_accelerator.clk)", 
                                                         "tb/tb_fir_accelerator.sv", 
                                                         58);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_fir_accelerator.sv", 
                                         59);
    vlSelfRef.tb_fir_accelerator__DOT__write_en = 0U;
    __Vtask_tb_fir_accelerator__DOT__write_reg__3__data = 4U;
    __Vtask_tb_fir_accelerator__DOT__write_reg__3__addr = 0x10U;
    co_await vlSelfRef.__VtrigSched_h243bddb7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_fir_accelerator.clk)", 
                                                         "tb/tb_fir_accelerator.sv", 
                                                         52);
    vlSelfRef.tb_fir_accelerator__DOT__address = __Vtask_tb_fir_accelerator__DOT__write_reg__3__addr;
    vlSelfRef.tb_fir_accelerator__DOT__write_data = __Vtask_tb_fir_accelerator__DOT__write_reg__3__data;
    vlSelfRef.tb_fir_accelerator__DOT__write_en = 1U;
    co_await vlSelfRef.__VtrigSched_h243bddf6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir_accelerator.clk)", 
                                                         "tb/tb_fir_accelerator.sv", 
                                                         58);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_fir_accelerator.sv", 
                                         59);
    vlSelfRef.tb_fir_accelerator__DOT__write_en = 0U;
    VL_WRITEF_NX("\nCoefficients loaded:\nc0=1 c1=2 c2=3 c3=4\n\n",0);
    __Vtask_tb_fir_accelerator__DOT__process_sample__4__sample = 0xaU;
    __Vtask_tb_fir_accelerator__DOT__write_reg__5__data 
        = __Vtask_tb_fir_accelerator__DOT__process_sample__4__sample;
    __Vtask_tb_fir_accelerator__DOT__write_reg__5__addr = 0U;
    co_await vlSelfRef.__VtrigSched_h243bddb7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_fir_accelerator.clk)", 
                                                         "tb/tb_fir_accelerator.sv", 
                                                         52);
    vlSelfRef.tb_fir_accelerator__DOT__address = __Vtask_tb_fir_accelerator__DOT__write_reg__5__addr;
    vlSelfRef.tb_fir_accelerator__DOT__write_data = __Vtask_tb_fir_accelerator__DOT__write_reg__5__data;
    vlSelfRef.tb_fir_accelerator__DOT__write_en = 1U;
    co_await vlSelfRef.__VtrigSched_h243bddf6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir_accelerator.clk)", 
                                                         "tb/tb_fir_accelerator.sv", 
                                                         58);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_fir_accelerator.sv", 
                                         59);
    vlSelfRef.tb_fir_accelerator__DOT__write_en = 0U;
    __Vtask_tb_fir_accelerator__DOT__write_reg__6__data = 1U;
    __Vtask_tb_fir_accelerator__DOT__write_reg__6__addr = 0x14U;
    co_await vlSelfRef.__VtrigSched_h243bddb7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_fir_accelerator.clk)", 
                                                         "tb/tb_fir_accelerator.sv", 
                                                         52);
    vlSelfRef.tb_fir_accelerator__DOT__address = __Vtask_tb_fir_accelerator__DOT__write_reg__6__addr;
    vlSelfRef.tb_fir_accelerator__DOT__write_data = __Vtask_tb_fir_accelerator__DOT__write_reg__6__data;
    vlSelfRef.tb_fir_accelerator__DOT__write_en = 1U;
    co_await vlSelfRef.__VtrigSched_h243bddf6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir_accelerator.clk)", 
                                                         "tb/tb_fir_accelerator.sv", 
                                                         58);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_fir_accelerator.sv", 
                                         59);
    vlSelfRef.tb_fir_accelerator__DOT__write_en = 0U;
    __Vtask_tb_fir_accelerator__DOT__read_reg__7__addr = 0x18U;
    vlSelfRef.tb_fir_accelerator__DOT__address = __Vtask_tb_fir_accelerator__DOT__read_reg__7__addr;
    vlSelfRef.tb_fir_accelerator__DOT__read_en = 1U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_fir_accelerator.sv", 
                                         82);
    __Vtask_tb_fir_accelerator__DOT__read_reg__7__data 
        = vlSelfRef.tb_fir_accelerator__DOT__read_data;
    vlSelfRef.tb_fir_accelerator__DOT__read_en = 0U;
    tb_fir_accelerator__DOT__result_value = __Vtask_tb_fir_accelerator__DOT__read_reg__7__data;
    VL_WRITEF_NX("sample=10 result=%0d expected=10\n",0,
                 32,tb_fir_accelerator__DOT__result_value);
    if (VL_UNLIKELY((0xaU != tb_fir_accelerator__DOT__result_value))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_fir_accelerator.sv:193: Assertion failed in %Ntb_fir_accelerator\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("tb/tb_fir_accelerator.sv", 193, "", false);
    }
    __Vtask_tb_fir_accelerator__DOT__process_sample__8__sample = 0x14U;
    __Vtask_tb_fir_accelerator__DOT__write_reg__9__data 
        = __Vtask_tb_fir_accelerator__DOT__process_sample__8__sample;
    __Vtask_tb_fir_accelerator__DOT__write_reg__9__addr = 0U;
    co_await vlSelfRef.__VtrigSched_h243bddb7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_fir_accelerator.clk)", 
                                                         "tb/tb_fir_accelerator.sv", 
                                                         52);
    vlSelfRef.tb_fir_accelerator__DOT__address = __Vtask_tb_fir_accelerator__DOT__write_reg__9__addr;
    vlSelfRef.tb_fir_accelerator__DOT__write_data = __Vtask_tb_fir_accelerator__DOT__write_reg__9__data;
    vlSelfRef.tb_fir_accelerator__DOT__write_en = 1U;
    co_await vlSelfRef.__VtrigSched_h243bddf6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir_accelerator.clk)", 
                                                         "tb/tb_fir_accelerator.sv", 
                                                         58);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_fir_accelerator.sv", 
                                         59);
    vlSelfRef.tb_fir_accelerator__DOT__write_en = 0U;
    __Vtask_tb_fir_accelerator__DOT__write_reg__10__data = 1U;
    __Vtask_tb_fir_accelerator__DOT__write_reg__10__addr = 0x14U;
    co_await vlSelfRef.__VtrigSched_h243bddb7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_fir_accelerator.clk)", 
                                                         "tb/tb_fir_accelerator.sv", 
                                                         52);
    vlSelfRef.tb_fir_accelerator__DOT__address = __Vtask_tb_fir_accelerator__DOT__write_reg__10__addr;
    vlSelfRef.tb_fir_accelerator__DOT__write_data = __Vtask_tb_fir_accelerator__DOT__write_reg__10__data;
    vlSelfRef.tb_fir_accelerator__DOT__write_en = 1U;
    co_await vlSelfRef.__VtrigSched_h243bddf6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir_accelerator.clk)", 
                                                         "tb/tb_fir_accelerator.sv", 
                                                         58);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_fir_accelerator.sv", 
                                         59);
    vlSelfRef.tb_fir_accelerator__DOT__write_en = 0U;
    __Vtask_tb_fir_accelerator__DOT__read_reg__11__addr = 0x18U;
    vlSelfRef.tb_fir_accelerator__DOT__address = __Vtask_tb_fir_accelerator__DOT__read_reg__11__addr;
    vlSelfRef.tb_fir_accelerator__DOT__read_en = 1U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_fir_accelerator.sv", 
                                         82);
    __Vtask_tb_fir_accelerator__DOT__read_reg__11__data 
        = vlSelfRef.tb_fir_accelerator__DOT__read_data;
    vlSelfRef.tb_fir_accelerator__DOT__read_en = 0U;
    tb_fir_accelerator__DOT__result_value = __Vtask_tb_fir_accelerator__DOT__read_reg__11__data;
    VL_WRITEF_NX("sample=20 result=%0d expected=40\n",0,
                 32,tb_fir_accelerator__DOT__result_value);
    if (VL_UNLIKELY((0x28U != tb_fir_accelerator__DOT__result_value))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_fir_accelerator.sv:221: Assertion failed in %Ntb_fir_accelerator\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("tb/tb_fir_accelerator.sv", 221, "", false);
    }
    __Vtask_tb_fir_accelerator__DOT__process_sample__12__sample = 0x1eU;
    __Vtask_tb_fir_accelerator__DOT__write_reg__13__data 
        = __Vtask_tb_fir_accelerator__DOT__process_sample__12__sample;
    __Vtask_tb_fir_accelerator__DOT__write_reg__13__addr = 0U;
    co_await vlSelfRef.__VtrigSched_h243bddb7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_fir_accelerator.clk)", 
                                                         "tb/tb_fir_accelerator.sv", 
                                                         52);
    vlSelfRef.tb_fir_accelerator__DOT__address = __Vtask_tb_fir_accelerator__DOT__write_reg__13__addr;
    vlSelfRef.tb_fir_accelerator__DOT__write_data = __Vtask_tb_fir_accelerator__DOT__write_reg__13__data;
    vlSelfRef.tb_fir_accelerator__DOT__write_en = 1U;
    co_await vlSelfRef.__VtrigSched_h243bddf6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir_accelerator.clk)", 
                                                         "tb/tb_fir_accelerator.sv", 
                                                         58);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_fir_accelerator.sv", 
                                         59);
    vlSelfRef.tb_fir_accelerator__DOT__write_en = 0U;
    __Vtask_tb_fir_accelerator__DOT__write_reg__14__data = 1U;
    __Vtask_tb_fir_accelerator__DOT__write_reg__14__addr = 0x14U;
    co_await vlSelfRef.__VtrigSched_h243bddb7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_fir_accelerator.clk)", 
                                                         "tb/tb_fir_accelerator.sv", 
                                                         52);
    vlSelfRef.tb_fir_accelerator__DOT__address = __Vtask_tb_fir_accelerator__DOT__write_reg__14__addr;
    vlSelfRef.tb_fir_accelerator__DOT__write_data = __Vtask_tb_fir_accelerator__DOT__write_reg__14__data;
    vlSelfRef.tb_fir_accelerator__DOT__write_en = 1U;
    co_await vlSelfRef.__VtrigSched_h243bddf6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir_accelerator.clk)", 
                                                         "tb/tb_fir_accelerator.sv", 
                                                         58);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_fir_accelerator.sv", 
                                         59);
    vlSelfRef.tb_fir_accelerator__DOT__write_en = 0U;
    __Vtask_tb_fir_accelerator__DOT__read_reg__15__addr = 0x18U;
    vlSelfRef.tb_fir_accelerator__DOT__address = __Vtask_tb_fir_accelerator__DOT__read_reg__15__addr;
    vlSelfRef.tb_fir_accelerator__DOT__read_en = 1U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_fir_accelerator.sv", 
                                         82);
    __Vtask_tb_fir_accelerator__DOT__read_reg__15__data 
        = vlSelfRef.tb_fir_accelerator__DOT__read_data;
    vlSelfRef.tb_fir_accelerator__DOT__read_en = 0U;
    tb_fir_accelerator__DOT__result_value = __Vtask_tb_fir_accelerator__DOT__read_reg__15__data;
    VL_WRITEF_NX("sample=30 result=%0d expected=100\n",0,
                 32,tb_fir_accelerator__DOT__result_value);
    if (VL_UNLIKELY((0x64U != tb_fir_accelerator__DOT__result_value))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_fir_accelerator.sv:250: Assertion failed in %Ntb_fir_accelerator\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("tb/tb_fir_accelerator.sv", 250, "", false);
    }
    __Vtask_tb_fir_accelerator__DOT__process_sample__16__sample = 0x28U;
    __Vtask_tb_fir_accelerator__DOT__write_reg__17__data 
        = __Vtask_tb_fir_accelerator__DOT__process_sample__16__sample;
    __Vtask_tb_fir_accelerator__DOT__write_reg__17__addr = 0U;
    co_await vlSelfRef.__VtrigSched_h243bddb7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_fir_accelerator.clk)", 
                                                         "tb/tb_fir_accelerator.sv", 
                                                         52);
    vlSelfRef.tb_fir_accelerator__DOT__address = __Vtask_tb_fir_accelerator__DOT__write_reg__17__addr;
    vlSelfRef.tb_fir_accelerator__DOT__write_data = __Vtask_tb_fir_accelerator__DOT__write_reg__17__data;
    vlSelfRef.tb_fir_accelerator__DOT__write_en = 1U;
    co_await vlSelfRef.__VtrigSched_h243bddf6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir_accelerator.clk)", 
                                                         "tb/tb_fir_accelerator.sv", 
                                                         58);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_fir_accelerator.sv", 
                                         59);
    vlSelfRef.tb_fir_accelerator__DOT__write_en = 0U;
    __Vtask_tb_fir_accelerator__DOT__write_reg__18__data = 1U;
    __Vtask_tb_fir_accelerator__DOT__write_reg__18__addr = 0x14U;
    co_await vlSelfRef.__VtrigSched_h243bddb7__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_fir_accelerator.clk)", 
                                                         "tb/tb_fir_accelerator.sv", 
                                                         52);
    vlSelfRef.tb_fir_accelerator__DOT__address = __Vtask_tb_fir_accelerator__DOT__write_reg__18__addr;
    vlSelfRef.tb_fir_accelerator__DOT__write_data = __Vtask_tb_fir_accelerator__DOT__write_reg__18__data;
    vlSelfRef.tb_fir_accelerator__DOT__write_en = 1U;
    co_await vlSelfRef.__VtrigSched_h243bddf6__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fir_accelerator.clk)", 
                                                         "tb/tb_fir_accelerator.sv", 
                                                         58);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_fir_accelerator.sv", 
                                         59);
    vlSelfRef.tb_fir_accelerator__DOT__write_en = 0U;
    __Vtask_tb_fir_accelerator__DOT__read_reg__19__addr = 0x18U;
    vlSelfRef.tb_fir_accelerator__DOT__address = __Vtask_tb_fir_accelerator__DOT__read_reg__19__addr;
    vlSelfRef.tb_fir_accelerator__DOT__read_en = 1U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_fir_accelerator.sv", 
                                         82);
    __Vtask_tb_fir_accelerator__DOT__read_reg__19__data 
        = vlSelfRef.tb_fir_accelerator__DOT__read_data;
    vlSelfRef.tb_fir_accelerator__DOT__read_en = 0U;
    tb_fir_accelerator__DOT__result_value = __Vtask_tb_fir_accelerator__DOT__read_reg__19__data;
    VL_WRITEF_NX("sample=40 result=%0d expected=200\n",0,
                 32,tb_fir_accelerator__DOT__result_value);
    if (VL_UNLIKELY((0xc8U != tb_fir_accelerator__DOT__result_value))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_fir_accelerator.sv:280: Assertion failed in %Ntb_fir_accelerator\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("tb/tb_fir_accelerator.sv", 280, "", false);
    }
    VL_WRITEF_NX("\nPASS: coefficient registers\nPASS: sample input\nPASS: delay line\nPASS: multiply-accumulate\nPASS: result register\n==============================\n     FIR ACCELERATOR PASS\n==============================\n",0);
    VL_FINISH_MT("tb/tb_fir_accelerator.sv", 294, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fir_accelerator___024root___dump_triggers__act(Vtb_fir_accelerator___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_fir_accelerator___024root___eval_triggers__act(Vtb_fir_accelerator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_fir_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir_accelerator___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.tb_fir_accelerator__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_fir_accelerator__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.set(2U, ((~ (IData)(vlSelfRef.tb_fir_accelerator__DOT__clk)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_fir_accelerator__DOT__clk__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_fir_accelerator__DOT__clk__0 
        = vlSelfRef.tb_fir_accelerator__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_fir_accelerator___024root___dump_triggers__act(vlSelf);
    }
#endif
}
