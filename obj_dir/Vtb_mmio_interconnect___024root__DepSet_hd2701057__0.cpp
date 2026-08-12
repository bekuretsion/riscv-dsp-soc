// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mmio_interconnect.h for the primary calling header

#include "Vtb_mmio_interconnect__pch.h"
#include "Vtb_mmio_interconnect__Syms.h"
#include "Vtb_mmio_interconnect___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_mmio_interconnect___024root___eval_initial__TOP__Vtiming__1(Vtb_mmio_interconnect___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_mmio_interconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mmio_interconnect___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ tb_mmio_interconnect__DOT__value;
    tb_mmio_interconnect__DOT__value = 0;
    IData/*31:0*/ __Vtask_tb_mmio_interconnect__DOT__write_address__0__addr;
    __Vtask_tb_mmio_interconnect__DOT__write_address__0__addr = 0;
    IData/*31:0*/ __Vtask_tb_mmio_interconnect__DOT__write_address__0__data;
    __Vtask_tb_mmio_interconnect__DOT__write_address__0__data = 0;
    IData/*31:0*/ __Vtask_tb_mmio_interconnect__DOT__read_address__1__addr;
    __Vtask_tb_mmio_interconnect__DOT__read_address__1__addr = 0;
    IData/*31:0*/ __Vtask_tb_mmio_interconnect__DOT__read_address__1__data;
    __Vtask_tb_mmio_interconnect__DOT__read_address__1__data = 0;
    IData/*31:0*/ __Vtask_tb_mmio_interconnect__DOT__write_address__2__addr;
    __Vtask_tb_mmio_interconnect__DOT__write_address__2__addr = 0;
    IData/*31:0*/ __Vtask_tb_mmio_interconnect__DOT__write_address__2__data;
    __Vtask_tb_mmio_interconnect__DOT__write_address__2__data = 0;
    IData/*31:0*/ __Vtask_tb_mmio_interconnect__DOT__write_address__3__addr;
    __Vtask_tb_mmio_interconnect__DOT__write_address__3__addr = 0;
    IData/*31:0*/ __Vtask_tb_mmio_interconnect__DOT__write_address__3__data;
    __Vtask_tb_mmio_interconnect__DOT__write_address__3__data = 0;
    IData/*31:0*/ __Vtask_tb_mmio_interconnect__DOT__write_address__4__addr;
    __Vtask_tb_mmio_interconnect__DOT__write_address__4__addr = 0;
    IData/*31:0*/ __Vtask_tb_mmio_interconnect__DOT__write_address__4__data;
    __Vtask_tb_mmio_interconnect__DOT__write_address__4__data = 0;
    IData/*31:0*/ __Vtask_tb_mmio_interconnect__DOT__write_address__5__addr;
    __Vtask_tb_mmio_interconnect__DOT__write_address__5__addr = 0;
    IData/*31:0*/ __Vtask_tb_mmio_interconnect__DOT__write_address__5__data;
    __Vtask_tb_mmio_interconnect__DOT__write_address__5__data = 0;
    IData/*31:0*/ __Vtask_tb_mmio_interconnect__DOT__write_address__6__addr;
    __Vtask_tb_mmio_interconnect__DOT__write_address__6__addr = 0;
    IData/*31:0*/ __Vtask_tb_mmio_interconnect__DOT__write_address__6__data;
    __Vtask_tb_mmio_interconnect__DOT__write_address__6__data = 0;
    IData/*31:0*/ __Vtask_tb_mmio_interconnect__DOT__write_address__7__addr;
    __Vtask_tb_mmio_interconnect__DOT__write_address__7__addr = 0;
    IData/*31:0*/ __Vtask_tb_mmio_interconnect__DOT__write_address__7__data;
    __Vtask_tb_mmio_interconnect__DOT__write_address__7__data = 0;
    IData/*31:0*/ __Vtask_tb_mmio_interconnect__DOT__read_address__8__addr;
    __Vtask_tb_mmio_interconnect__DOT__read_address__8__addr = 0;
    IData/*31:0*/ __Vtask_tb_mmio_interconnect__DOT__read_address__8__data;
    __Vtask_tb_mmio_interconnect__DOT__read_address__8__data = 0;
    IData/*31:0*/ __Vtask_tb_mmio_interconnect__DOT__read_address__9__addr;
    __Vtask_tb_mmio_interconnect__DOT__read_address__9__addr = 0;
    IData/*31:0*/ __Vtask_tb_mmio_interconnect__DOT__read_address__9__data;
    __Vtask_tb_mmio_interconnect__DOT__read_address__9__data = 0;
    // Body
    vlSelfRef.tb_mmio_interconnect__DOT__reset = 1U;
    vlSelfRef.tb_mmio_interconnect__DOT__mem_write = 0U;
    vlSelfRef.tb_mmio_interconnect__DOT__mem_read = 0U;
    vlSelfRef.tb_mmio_interconnect__DOT__address = 0U;
    vlSelfRef.tb_mmio_interconnect__DOT__write_data = 0U;
    VL_WRITEF_NX("==============================\n       MMIO SOC TEST\n==============================\n",0);
    co_await vlSelfRef.__VtrigSched_h39df3347__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_mmio_interconnect.clk)", 
                                                         "tb/tb_mmio_interconnect.sv", 
                                                         124);
    co_await vlSelfRef.__VtrigSched_h39df3347__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_mmio_interconnect.clk)", 
                                                         "tb/tb_mmio_interconnect.sv", 
                                                         124);
    vlSelfRef.tb_mmio_interconnect__DOT__reset = 0U;
    VL_WRITEF_NX("\nTesting normal RAM...\n",0);
    __Vtask_tb_mmio_interconnect__DOT__write_address__0__data = 0x7bU;
    __Vtask_tb_mmio_interconnect__DOT__write_address__0__addr = 0U;
    co_await vlSelfRef.__VtrigSched_h39df3306__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_mmio_interconnect.clk)", 
                                                         "tb/tb_mmio_interconnect.sv", 
                                                         56);
    vlSelfRef.tb_mmio_interconnect__DOT__address = __Vtask_tb_mmio_interconnect__DOT__write_address__0__addr;
    vlSelfRef.tb_mmio_interconnect__DOT__write_data 
        = __Vtask_tb_mmio_interconnect__DOT__write_address__0__data;
    vlSelfRef.tb_mmio_interconnect__DOT__mem_write = 1U;
    vlSelfRef.tb_mmio_interconnect__DOT__mem_read = 0U;
    co_await vlSelfRef.__VtrigSched_h39df3347__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_mmio_interconnect.clk)", 
                                                         "tb/tb_mmio_interconnect.sv", 
                                                         64);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_mmio_interconnect.sv", 
                                         65);
    vlSelfRef.tb_mmio_interconnect__DOT__mem_write = 0U;
    __Vtask_tb_mmio_interconnect__DOT__read_address__1__addr = 0U;
    vlSelfRef.tb_mmio_interconnect__DOT__address = __Vtask_tb_mmio_interconnect__DOT__read_address__1__addr;
    vlSelfRef.tb_mmio_interconnect__DOT__mem_write = 0U;
    vlSelfRef.tb_mmio_interconnect__DOT__mem_read = 1U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_mmio_interconnect.sv", 
                                         90);
    __Vtask_tb_mmio_interconnect__DOT__read_address__1__data 
        = vlSelfRef.tb_mmio_interconnect__DOT__read_data;
    vlSelfRef.tb_mmio_interconnect__DOT__mem_read = 0U;
    tb_mmio_interconnect__DOT__value = __Vtask_tb_mmio_interconnect__DOT__read_address__1__data;
    VL_WRITEF_NX("RAM value=%0# expected=123\n",0,32,
                 tb_mmio_interconnect__DOT__value);
    if (VL_UNLIKELY((0x7bU != tb_mmio_interconnect__DOT__value))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_mmio_interconnect.sv:152: Assertion failed in %Ntb_mmio_interconnect\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("tb/tb_mmio_interconnect.sv", 152, "", false);
    }
    if (VL_UNLIKELY(vlSelfRef.tb_mmio_interconnect__DOT__fir_selected)) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_mmio_interconnect.sv:156: Assertion failed in %Ntb_mmio_interconnect\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("tb/tb_mmio_interconnect.sv", 156, "", false);
    }
    VL_WRITEF_NX("PASS: normal RAM\n\nLoading FIR coefficients...\n",0);
    __Vtask_tb_mmio_interconnect__DOT__write_address__2__data = 1U;
    __Vtask_tb_mmio_interconnect__DOT__write_address__2__addr = 0x40000004U;
    co_await vlSelfRef.__VtrigSched_h39df3306__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_mmio_interconnect.clk)", 
                                                         "tb/tb_mmio_interconnect.sv", 
                                                         56);
    vlSelfRef.tb_mmio_interconnect__DOT__address = __Vtask_tb_mmio_interconnect__DOT__write_address__2__addr;
    vlSelfRef.tb_mmio_interconnect__DOT__write_data 
        = __Vtask_tb_mmio_interconnect__DOT__write_address__2__data;
    vlSelfRef.tb_mmio_interconnect__DOT__mem_write = 1U;
    vlSelfRef.tb_mmio_interconnect__DOT__mem_read = 0U;
    co_await vlSelfRef.__VtrigSched_h39df3347__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_mmio_interconnect.clk)", 
                                                         "tb/tb_mmio_interconnect.sv", 
                                                         64);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_mmio_interconnect.sv", 
                                         65);
    vlSelfRef.tb_mmio_interconnect__DOT__mem_write = 0U;
    __Vtask_tb_mmio_interconnect__DOT__write_address__3__data = 2U;
    __Vtask_tb_mmio_interconnect__DOT__write_address__3__addr = 0x40000008U;
    co_await vlSelfRef.__VtrigSched_h39df3306__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_mmio_interconnect.clk)", 
                                                         "tb/tb_mmio_interconnect.sv", 
                                                         56);
    vlSelfRef.tb_mmio_interconnect__DOT__address = __Vtask_tb_mmio_interconnect__DOT__write_address__3__addr;
    vlSelfRef.tb_mmio_interconnect__DOT__write_data 
        = __Vtask_tb_mmio_interconnect__DOT__write_address__3__data;
    vlSelfRef.tb_mmio_interconnect__DOT__mem_write = 1U;
    vlSelfRef.tb_mmio_interconnect__DOT__mem_read = 0U;
    co_await vlSelfRef.__VtrigSched_h39df3347__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_mmio_interconnect.clk)", 
                                                         "tb/tb_mmio_interconnect.sv", 
                                                         64);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_mmio_interconnect.sv", 
                                         65);
    vlSelfRef.tb_mmio_interconnect__DOT__mem_write = 0U;
    __Vtask_tb_mmio_interconnect__DOT__write_address__4__data = 3U;
    __Vtask_tb_mmio_interconnect__DOT__write_address__4__addr = 0x4000000cU;
    co_await vlSelfRef.__VtrigSched_h39df3306__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_mmio_interconnect.clk)", 
                                                         "tb/tb_mmio_interconnect.sv", 
                                                         56);
    vlSelfRef.tb_mmio_interconnect__DOT__address = __Vtask_tb_mmio_interconnect__DOT__write_address__4__addr;
    vlSelfRef.tb_mmio_interconnect__DOT__write_data 
        = __Vtask_tb_mmio_interconnect__DOT__write_address__4__data;
    vlSelfRef.tb_mmio_interconnect__DOT__mem_write = 1U;
    vlSelfRef.tb_mmio_interconnect__DOT__mem_read = 0U;
    co_await vlSelfRef.__VtrigSched_h39df3347__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_mmio_interconnect.clk)", 
                                                         "tb/tb_mmio_interconnect.sv", 
                                                         64);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_mmio_interconnect.sv", 
                                         65);
    vlSelfRef.tb_mmio_interconnect__DOT__mem_write = 0U;
    __Vtask_tb_mmio_interconnect__DOT__write_address__5__data = 4U;
    __Vtask_tb_mmio_interconnect__DOT__write_address__5__addr = 0x40000010U;
    co_await vlSelfRef.__VtrigSched_h39df3306__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_mmio_interconnect.clk)", 
                                                         "tb/tb_mmio_interconnect.sv", 
                                                         56);
    vlSelfRef.tb_mmio_interconnect__DOT__address = __Vtask_tb_mmio_interconnect__DOT__write_address__5__addr;
    vlSelfRef.tb_mmio_interconnect__DOT__write_data 
        = __Vtask_tb_mmio_interconnect__DOT__write_address__5__data;
    vlSelfRef.tb_mmio_interconnect__DOT__mem_write = 1U;
    vlSelfRef.tb_mmio_interconnect__DOT__mem_read = 0U;
    co_await vlSelfRef.__VtrigSched_h39df3347__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_mmio_interconnect.clk)", 
                                                         "tb/tb_mmio_interconnect.sv", 
                                                         64);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_mmio_interconnect.sv", 
                                         65);
    vlSelfRef.tb_mmio_interconnect__DOT__mem_write = 0U;
    __Vtask_tb_mmio_interconnect__DOT__write_address__6__data = 0xaU;
    __Vtask_tb_mmio_interconnect__DOT__write_address__6__addr = 0x40000000U;
    co_await vlSelfRef.__VtrigSched_h39df3306__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_mmio_interconnect.clk)", 
                                                         "tb/tb_mmio_interconnect.sv", 
                                                         56);
    vlSelfRef.tb_mmio_interconnect__DOT__address = __Vtask_tb_mmio_interconnect__DOT__write_address__6__addr;
    vlSelfRef.tb_mmio_interconnect__DOT__write_data 
        = __Vtask_tb_mmio_interconnect__DOT__write_address__6__data;
    vlSelfRef.tb_mmio_interconnect__DOT__mem_write = 1U;
    vlSelfRef.tb_mmio_interconnect__DOT__mem_read = 0U;
    co_await vlSelfRef.__VtrigSched_h39df3347__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_mmio_interconnect.clk)", 
                                                         "tb/tb_mmio_interconnect.sv", 
                                                         64);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_mmio_interconnect.sv", 
                                         65);
    vlSelfRef.tb_mmio_interconnect__DOT__mem_write = 0U;
    __Vtask_tb_mmio_interconnect__DOT__write_address__7__data = 1U;
    __Vtask_tb_mmio_interconnect__DOT__write_address__7__addr = 0x40000014U;
    co_await vlSelfRef.__VtrigSched_h39df3306__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_mmio_interconnect.clk)", 
                                                         "tb/tb_mmio_interconnect.sv", 
                                                         56);
    vlSelfRef.tb_mmio_interconnect__DOT__address = __Vtask_tb_mmio_interconnect__DOT__write_address__7__addr;
    vlSelfRef.tb_mmio_interconnect__DOT__write_data 
        = __Vtask_tb_mmio_interconnect__DOT__write_address__7__data;
    vlSelfRef.tb_mmio_interconnect__DOT__mem_write = 1U;
    vlSelfRef.tb_mmio_interconnect__DOT__mem_read = 0U;
    co_await vlSelfRef.__VtrigSched_h39df3347__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_mmio_interconnect.clk)", 
                                                         "tb/tb_mmio_interconnect.sv", 
                                                         64);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_mmio_interconnect.sv", 
                                         65);
    vlSelfRef.tb_mmio_interconnect__DOT__mem_write = 0U;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_mmio_interconnect__DOT__fir_done))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_mmio_interconnect.sv:211: Assertion failed in %Ntb_mmio_interconnect\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("tb/tb_mmio_interconnect.sv", 211, "", false);
    }
    __Vtask_tb_mmio_interconnect__DOT__read_address__8__addr = 0x40000018U;
    vlSelfRef.tb_mmio_interconnect__DOT__address = __Vtask_tb_mmio_interconnect__DOT__read_address__8__addr;
    vlSelfRef.tb_mmio_interconnect__DOT__mem_write = 0U;
    vlSelfRef.tb_mmio_interconnect__DOT__mem_read = 1U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_mmio_interconnect.sv", 
                                         90);
    __Vtask_tb_mmio_interconnect__DOT__read_address__8__data 
        = vlSelfRef.tb_mmio_interconnect__DOT__read_data;
    vlSelfRef.tb_mmio_interconnect__DOT__mem_read = 0U;
    tb_mmio_interconnect__DOT__value = __Vtask_tb_mmio_interconnect__DOT__read_address__8__data;
    VL_WRITEF_NX("FIR result=%0# expected=10\n",0,32,
                 tb_mmio_interconnect__DOT__value);
    if (VL_UNLIKELY((0xaU != tb_mmio_interconnect__DOT__value))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_mmio_interconnect.sv:231: Assertion failed in %Ntb_mmio_interconnect\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("tb/tb_mmio_interconnect.sv", 231, "", false);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_mmio_interconnect__DOT__fir_selected))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_mmio_interconnect.sv:235: Assertion failed in %Ntb_mmio_interconnect\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("tb/tb_mmio_interconnect.sv", 235, "", false);
    }
    VL_WRITEF_NX("PASS: FIR MMIO access\n",0);
    __Vtask_tb_mmio_interconnect__DOT__read_address__9__addr = 0U;
    vlSelfRef.tb_mmio_interconnect__DOT__address = __Vtask_tb_mmio_interconnect__DOT__read_address__9__addr;
    vlSelfRef.tb_mmio_interconnect__DOT__mem_write = 0U;
    vlSelfRef.tb_mmio_interconnect__DOT__mem_read = 1U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_mmio_interconnect.sv", 
                                         90);
    __Vtask_tb_mmio_interconnect__DOT__read_address__9__data 
        = vlSelfRef.tb_mmio_interconnect__DOT__read_data;
    vlSelfRef.tb_mmio_interconnect__DOT__mem_read = 0U;
    tb_mmio_interconnect__DOT__value = __Vtask_tb_mmio_interconnect__DOT__read_address__9__data;
    if (VL_UNLIKELY((0x7bU != tb_mmio_interconnect__DOT__value))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_mmio_interconnect.sv:252: Assertion failed in %Ntb_mmio_interconnect\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("tb/tb_mmio_interconnect.sv", 252, "", false);
    }
    VL_WRITEF_NX("PASS: RAM remains independent\n\nPASS: RAM address decoding\nPASS: FIR address decoding\nPASS: FIR register writes\nPASS: FIR result reads\n==============================\n       MMIO SOC PASS\n==============================\n",0);
    VL_FINISH_MT("tb/tb_mmio_interconnect.sv", 270, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_mmio_interconnect___024root___dump_triggers__act(Vtb_mmio_interconnect___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_mmio_interconnect___024root___eval_triggers__act(Vtb_mmio_interconnect___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_mmio_interconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mmio_interconnect___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.tb_mmio_interconnect__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_mmio_interconnect__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.set(2U, ((~ (IData)(vlSelfRef.tb_mmio_interconnect__DOT__clk)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_mmio_interconnect__DOT__clk__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_mmio_interconnect__DOT__clk__0 
        = vlSelfRef.tb_mmio_interconnect__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_mmio_interconnect___024root___dump_triggers__act(vlSelf);
    }
#endif
}
