// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_memory.h for the primary calling header

#include "Vtb_memory__pch.h"
#include "Vtb_memory__Syms.h"
#include "Vtb_memory___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_memory___024root___eval_initial__TOP__Vtiming__1(Vtb_memory___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("============================\n      DATA MEMORY TEST\n============================\n",0);
    vlSelfRef.tb_memory__DOT__address = 0U;
    vlSelfRef.tb_memory__DOT__write_data = 0x2aU;
    vlSelfRef.tb_memory__DOT__mem_write = 1U;
    co_await vlSelfRef.__VtrigSched_h0d52ee00__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_memory.clk)", 
                                                         "tb/tb_memory.sv", 
                                                         40);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_memory.sv", 
                                         41);
    vlSelfRef.tb_memory__DOT__mem_write = 0U;
    if (VL_UNLIKELY((0x2aU != vlSelfRef.tb_memory__DOT__read_data))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_memory.sv:46: Assertion failed in %Ntb_memory\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("tb/tb_memory.sv", 46, "", false);
    }
    VL_WRITEF_NX("PASS: memory[0] = %0#\n",0,32,vlSelfRef.tb_memory__DOT__read_data);
    vlSelfRef.tb_memory__DOT__address = 4U;
    vlSelfRef.tb_memory__DOT__write_data = 0x7bU;
    vlSelfRef.tb_memory__DOT__mem_write = 1U;
    co_await vlSelfRef.__VtrigSched_h0d52ee00__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_memory.clk)", 
                                                         "tb/tb_memory.sv", 
                                                         62);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_memory.sv", 
                                         63);
    vlSelfRef.tb_memory__DOT__mem_write = 0U;
    if (VL_UNLIKELY((0x7bU != vlSelfRef.tb_memory__DOT__read_data))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_memory.sv:68: Assertion failed in %Ntb_memory\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("tb/tb_memory.sv", 68, "", false);
    }
    VL_WRITEF_NX("PASS: memory[1] = %0#\n",0,32,vlSelfRef.tb_memory__DOT__read_data);
    vlSelfRef.tb_memory__DOT__address = 0U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_memory.sv", 
                                         81);
    if (VL_UNLIKELY((0x2aU != vlSelfRef.tb_memory__DOT__read_data))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_memory.sv:84: Assertion failed in %Ntb_memory\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("tb/tb_memory.sv", 84, "", false);
    }
    VL_WRITEF_NX("PASS: memory[0] still = %0#\n============================\n   ALL MEMORY TESTS PASS\n============================\n",0,
                 32,vlSelfRef.tb_memory__DOT__read_data);
    VL_FINISH_MT("tb/tb_memory.sv", 96, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_memory___024root___dump_triggers__act(Vtb_memory___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_memory___024root___eval_triggers__act(Vtb_memory___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.tb_memory__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_memory__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_memory__DOT__clk__0 
        = vlSelfRef.tb_memory__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_memory___024root___dump_triggers__act(vlSelf);
    }
#endif
}
