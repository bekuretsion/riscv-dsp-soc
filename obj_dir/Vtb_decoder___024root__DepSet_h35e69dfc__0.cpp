// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_decoder.h for the primary calling header

#include "Vtb_decoder__pch.h"
#include "Vtb_decoder__Syms.h"
#include "Vtb_decoder___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_decoder___024root___eval_initial__TOP__Vtiming__0(Vtb_decoder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_decoder___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("============================\n      DECODER TEST\n============================\n",0);
    vlSelfRef.tb_decoder__DOT__instruction = 0xa00293U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_decoder.sv", 
                                         38);
    VL_WRITEF_NX("Testing: addi x5, x0, 10\n",0);
    if (VL_UNLIKELY((0U != (IData)(vlSelfRef.tb_decoder__DOT__rs1_addr)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_decoder.sv:43: Assertion failed in %Ntb_decoder\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("tb/tb_decoder.sv", 43, "", false);
    }
    if (VL_UNLIKELY((5U != (IData)(vlSelfRef.tb_decoder__DOT__rd_addr)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_decoder.sv:46: Assertion failed in %Ntb_decoder\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("tb/tb_decoder.sv", 46, "", false);
    }
    if (VL_UNLIKELY((0xaU != vlSelfRef.tb_decoder__DOT__immediate))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_decoder.sv:49: Assertion failed in %Ntb_decoder\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("tb/tb_decoder.sv", 49, "", false);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_decoder__DOT__alu_src))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_decoder.sv:52: Assertion failed in %Ntb_decoder\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("tb/tb_decoder.sv", 52, "", false);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_decoder__DOT__reg_write))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_decoder.sv:55: Assertion failed in %Ntb_decoder\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("tb/tb_decoder.sv", 55, "", false);
    }
    if (VL_UNLIKELY((0U != (IData)(vlSelfRef.tb_decoder__DOT__alu_ctrl)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_decoder.sv:58: Assertion failed in %Ntb_decoder\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("tb/tb_decoder.sv", 58, "", false);
    }
    VL_WRITEF_NX("PASS: ADDI decoded correctly\n",0);
    vlSelfRef.tb_decoder__DOT__instruction = 0x6283b3U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_decoder.sv", 
                                         68);
    VL_WRITEF_NX("Testing: add x7, x5, x6\n",0);
    if (VL_UNLIKELY((5U != (IData)(vlSelfRef.tb_decoder__DOT__rs1_addr)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_decoder.sv:73: Assertion failed in %Ntb_decoder\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("tb/tb_decoder.sv", 73, "", false);
    }
    if (VL_UNLIKELY((6U != (IData)(vlSelfRef.tb_decoder__DOT__rs2_addr)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_decoder.sv:76: Assertion failed in %Ntb_decoder\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("tb/tb_decoder.sv", 76, "", false);
    }
    if (VL_UNLIKELY((7U != (IData)(vlSelfRef.tb_decoder__DOT__rd_addr)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_decoder.sv:79: Assertion failed in %Ntb_decoder\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("tb/tb_decoder.sv", 79, "", false);
    }
    if (VL_UNLIKELY(vlSelfRef.tb_decoder__DOT__alu_src)) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_decoder.sv:82: Assertion failed in %Ntb_decoder\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("tb/tb_decoder.sv", 82, "", false);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_decoder__DOT__reg_write))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_decoder.sv:85: Assertion failed in %Ntb_decoder\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("tb/tb_decoder.sv", 85, "", false);
    }
    if (VL_UNLIKELY((0U != (IData)(vlSelfRef.tb_decoder__DOT__alu_ctrl)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_decoder.sv:88: Assertion failed in %Ntb_decoder\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("tb/tb_decoder.sv", 88, "", false);
    }
    VL_WRITEF_NX("PASS: ADD decoded correctly\n",0);
    vlSelfRef.tb_decoder__DOT__instruction = 0x406283b3U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_decoder.sv", 
                                         98);
    VL_WRITEF_NX("Testing: sub x7, x5, x6\n",0);
    if (VL_UNLIKELY((1U != (IData)(vlSelfRef.tb_decoder__DOT__alu_ctrl)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: tb_decoder.sv:103: Assertion failed in %Ntb_decoder\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("tb/tb_decoder.sv", 103, "", false);
    }
    VL_WRITEF_NX("PASS: SUB decoded correctly\n============================\n    ALL DECODER TESTS PASS\n============================\n",0);
    VL_FINISH_MT("tb/tb_decoder.sv", 112, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_decoder___024root___dump_triggers__act(Vtb_decoder___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_decoder___024root___eval_triggers__act(Vtb_decoder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_decoder___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, vlSelfRef.__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_decoder___024root___dump_triggers__act(vlSelf);
    }
#endif
}
