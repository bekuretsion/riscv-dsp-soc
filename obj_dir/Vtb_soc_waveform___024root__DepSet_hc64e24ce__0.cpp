// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_soc_waveform.h for the primary calling header

#include "Vtb_soc_waveform__pch.h"
#include "Vtb_soc_waveform__Syms.h"
#include "Vtb_soc_waveform___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_soc_waveform___024root___eval_initial__TOP__Vtiming__1(Vtb_soc_waveform___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_soc_waveform__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc_waveform___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x666f726dU;
    __Vtemp_1[2U] = 0x77617665U;
    __Vtemp_1[3U] = 0x736f635fU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelfRef.tb_soc_waveform__DOT__reset = 1U;
    co_await vlSelfRef.__VtrigSched_hd526dbe0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_soc_waveform.clk)", 
                                                         "tb/tb_soc_waveform.sv", 
                                                         40);
    co_await vlSelfRef.__VtrigSched_hd526dbe0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_soc_waveform.clk)", 
                                                         "tb/tb_soc_waveform.sv", 
                                                         40);
    vlSelfRef.tb_soc_waveform__DOT__reset = 0U;
    co_await vlSelfRef.__VtrigSched_hd526dbe0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_soc_waveform.clk)", 
                                                         "tb/tb_soc_waveform.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_hd526dbe0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_soc_waveform.clk)", 
                                                         "tb/tb_soc_waveform.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_hd526dbe0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_soc_waveform.clk)", 
                                                         "tb/tb_soc_waveform.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_hd526dbe0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_soc_waveform.clk)", 
                                                         "tb/tb_soc_waveform.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_hd526dbe0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_soc_waveform.clk)", 
                                                         "tb/tb_soc_waveform.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_hd526dbe0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_soc_waveform.clk)", 
                                                         "tb/tb_soc_waveform.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_hd526dbe0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_soc_waveform.clk)", 
                                                         "tb/tb_soc_waveform.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_hd526dbe0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_soc_waveform.clk)", 
                                                         "tb/tb_soc_waveform.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_hd526dbe0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_soc_waveform.clk)", 
                                                         "tb/tb_soc_waveform.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_hd526dbe0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_soc_waveform.clk)", 
                                                         "tb/tb_soc_waveform.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_hd526dbe0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_soc_waveform.clk)", 
                                                         "tb/tb_soc_waveform.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_hd526dbe0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_soc_waveform.clk)", 
                                                         "tb/tb_soc_waveform.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_hd526dbe0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_soc_waveform.clk)", 
                                                         "tb/tb_soc_waveform.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_hd526dbe0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_soc_waveform.clk)", 
                                                         "tb/tb_soc_waveform.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_hd526dbe0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_soc_waveform.clk)", 
                                                         "tb/tb_soc_waveform.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_hd526dbe0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_soc_waveform.clk)", 
                                                         "tb/tb_soc_waveform.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_hd526dbe0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_soc_waveform.clk)", 
                                                         "tb/tb_soc_waveform.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_hd526dbe0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_soc_waveform.clk)", 
                                                         "tb/tb_soc_waveform.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_hd526dbe0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_soc_waveform.clk)", 
                                                         "tb/tb_soc_waveform.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_hd526dbe0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_soc_waveform.clk)", 
                                                         "tb/tb_soc_waveform.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_hd526dbe0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_soc_waveform.clk)", 
                                                         "tb/tb_soc_waveform.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_hd526dbe0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_soc_waveform.clk)", 
                                                         "tb/tb_soc_waveform.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_hd526dbe0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_soc_waveform.clk)", 
                                                         "tb/tb_soc_waveform.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_hd526dbe0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_soc_waveform.clk)", 
                                                         "tb/tb_soc_waveform.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_hd526dbe0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_soc_waveform.clk)", 
                                                         "tb/tb_soc_waveform.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_hd526dbe0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_soc_waveform.clk)", 
                                                         "tb/tb_soc_waveform.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_hd526dbe0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_soc_waveform.clk)", 
                                                         "tb/tb_soc_waveform.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_hd526dbe0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_soc_waveform.clk)", 
                                                         "tb/tb_soc_waveform.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_hd526dbe0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_soc_waveform.clk)", 
                                                         "tb/tb_soc_waveform.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_hd526dbe0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_soc_waveform.clk)", 
                                                         "tb/tb_soc_waveform.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_hd526dbe0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_soc_waveform.clk)", 
                                                         "tb/tb_soc_waveform.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_hd526dbe0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_soc_waveform.clk)", 
                                                         "tb/tb_soc_waveform.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_hd526dbe0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_soc_waveform.clk)", 
                                                         "tb/tb_soc_waveform.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_hd526dbe0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_soc_waveform.clk)", 
                                                         "tb/tb_soc_waveform.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_hd526dbe0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_soc_waveform.clk)", 
                                                         "tb/tb_soc_waveform.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_hd526dbe0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_soc_waveform.clk)", 
                                                         "tb/tb_soc_waveform.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_hd526dbe0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_soc_waveform.clk)", 
                                                         "tb/tb_soc_waveform.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_hd526dbe0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_soc_waveform.clk)", 
                                                         "tb/tb_soc_waveform.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_hd526dbe0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_soc_waveform.clk)", 
                                                         "tb/tb_soc_waveform.sv", 
                                                         45);
    co_await vlSelfRef.__VtrigSched_hd526dbe0__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_soc_waveform.clk)", 
                                                         "tb/tb_soc_waveform.sv", 
                                                         45);
    VL_FINISH_MT("tb/tb_soc_waveform.sv", 47, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_soc_waveform___024root___dump_triggers__act(Vtb_soc_waveform___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_soc_waveform___024root___eval_triggers__act(Vtb_soc_waveform___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_soc_waveform__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc_waveform___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.tb_soc_waveform__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_soc_waveform__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_soc_waveform__DOT__clk__0 
        = vlSelfRef.tb_soc_waveform__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_soc_waveform___024root___dump_triggers__act(vlSelf);
    }
#endif
}
