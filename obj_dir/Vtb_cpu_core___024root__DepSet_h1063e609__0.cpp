// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_cpu_core.h for the primary calling header

#include "Vtb_cpu_core__pch.h"
#include "Vtb_cpu_core___024root.h"

VlCoroutine Vtb_cpu_core___024root___eval_initial__TOP__Vtiming__0(Vtb_cpu_core___024root* vlSelf);
VlCoroutine Vtb_cpu_core___024root___eval_initial__TOP__Vtiming__1(Vtb_cpu_core___024root* vlSelf);

void Vtb_cpu_core___024root___eval_initial(Vtb_cpu_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_cpu_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu_core___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_cpu_core___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_cpu_core___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cpu_core__DOT__clk__0 
        = vlSelfRef.tb_cpu_core__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vtb_cpu_core___024root___eval_initial__TOP__Vtiming__0(Vtb_cpu_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_cpu_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu_core___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_cpu_core__DOT__clk = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/tb_cpu_core.sv", 
                                             15);
        vlSelfRef.tb_cpu_core__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_cpu_core__DOT__clk)));
    }
}

void Vtb_cpu_core___024root___act_comb__TOP__0(Vtb_cpu_core___024root* vlSelf);

void Vtb_cpu_core___024root___eval_act(Vtb_cpu_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_cpu_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu_core___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_cpu_core___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_cpu_core___024root___act_comb__TOP__0(Vtb_cpu_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_cpu_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu_core___024root___act_comb__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ tb_cpu_core__DOT__dut__DOT__immediate;
    tb_cpu_core__DOT__dut__DOT__immediate = 0;
    CData/*0:0*/ tb_cpu_core__DOT__dut__DOT__alu_src;
    tb_cpu_core__DOT__dut__DOT__alu_src = 0;
    CData/*3:0*/ tb_cpu_core__DOT__dut__DOT__alu_ctrl;
    tb_cpu_core__DOT__dut__DOT__alu_ctrl = 0;
    IData/*31:0*/ tb_cpu_core__DOT__dut__DOT__rs1_data;
    tb_cpu_core__DOT__dut__DOT__rs1_data = 0;
    IData/*31:0*/ tb_cpu_core__DOT__dut__DOT__dp__DOT__alu_b;
    tb_cpu_core__DOT__dut__DOT__dp__DOT__alu_b = 0;
    // Body
    vlSelfRef.tb_cpu_core__DOT__dut__DOT__reg_write 
        = ((0x33U == (0x7fU & vlSelfRef.tb_cpu_core__DOT__instruction)) 
           || (0x13U == (0x7fU & vlSelfRef.tb_cpu_core__DOT__instruction)));
    tb_cpu_core__DOT__dut__DOT__alu_ctrl = 0U;
    tb_cpu_core__DOT__dut__DOT__rs1_data = ((0U == 
                                             (0x1fU 
                                              & (vlSelfRef.tb_cpu_core__DOT__instruction 
                                                 >> 0xfU)))
                                             ? 0U : 
                                            vlSelfRef.tb_cpu_core__DOT__dut__DOT__dp__DOT__rf__DOT__registers
                                            [(0x1fU 
                                              & (vlSelfRef.tb_cpu_core__DOT__instruction 
                                                 >> 0xfU))]);
    tb_cpu_core__DOT__dut__DOT__immediate = 0U;
    if ((0x33U != (0x7fU & vlSelfRef.tb_cpu_core__DOT__instruction))) {
        if ((0x13U == (0x7fU & vlSelfRef.tb_cpu_core__DOT__instruction))) {
            tb_cpu_core__DOT__dut__DOT__immediate = 
                (((- (IData)((vlSelfRef.tb_cpu_core__DOT__instruction 
                              >> 0x1fU))) << 0xcU) 
                 | (vlSelfRef.tb_cpu_core__DOT__instruction 
                    >> 0x14U));
        }
    }
    tb_cpu_core__DOT__dut__DOT__alu_src = 0U;
    if ((0x33U == (0x7fU & vlSelfRef.tb_cpu_core__DOT__instruction))) {
        tb_cpu_core__DOT__dut__DOT__alu_ctrl = ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelfRef.tb_cpu_core__DOT__instruction 
                                                     >> 0xcU)))
                                                 ? 
                                                ((0x20U 
                                                  == 
                                                  (vlSelfRef.tb_cpu_core__DOT__instruction 
                                                   >> 0x19U))
                                                  ? 1U
                                                  : 0U)
                                                 : 0U);
        tb_cpu_core__DOT__dut__DOT__alu_src = 0U;
    } else if ((0x13U == (0x7fU & vlSelfRef.tb_cpu_core__DOT__instruction))) {
        tb_cpu_core__DOT__dut__DOT__alu_ctrl = 0U;
        tb_cpu_core__DOT__dut__DOT__alu_src = 1U;
    }
    tb_cpu_core__DOT__dut__DOT__dp__DOT__alu_b = ((IData)(tb_cpu_core__DOT__dut__DOT__alu_src)
                                                   ? tb_cpu_core__DOT__dut__DOT__immediate
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelfRef.tb_cpu_core__DOT__instruction 
                                                        >> 0x14U)))
                                                    ? 0U
                                                    : 
                                                   vlSelfRef.tb_cpu_core__DOT__dut__DOT__dp__DOT__rf__DOT__registers
                                                   [
                                                   (0x1fU 
                                                    & (vlSelfRef.tb_cpu_core__DOT__instruction 
                                                       >> 0x14U))]));
    vlSelfRef.tb_cpu_core__DOT__alu_result = ((8U & (IData)(tb_cpu_core__DOT__dut__DOT__alu_ctrl))
                                               ? ((4U 
                                                   & (IData)(tb_cpu_core__DOT__dut__DOT__alu_ctrl))
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & (IData)(tb_cpu_core__DOT__dut__DOT__alu_ctrl))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(tb_cpu_core__DOT__dut__DOT__alu_ctrl))
                                                     ? 
                                                    ((tb_cpu_core__DOT__dut__DOT__rs1_data 
                                                      < tb_cpu_core__DOT__dut__DOT__dp__DOT__alu_b)
                                                      ? 1U
                                                      : 0U)
                                                     : 
                                                    (VL_LTS_III(32, tb_cpu_core__DOT__dut__DOT__rs1_data, tb_cpu_core__DOT__dut__DOT__dp__DOT__alu_b)
                                                      ? 1U
                                                      : 0U))))
                                               : ((4U 
                                                   & (IData)(tb_cpu_core__DOT__dut__DOT__alu_ctrl))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(tb_cpu_core__DOT__dut__DOT__alu_ctrl))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(tb_cpu_core__DOT__dut__DOT__alu_ctrl))
                                                     ? 
                                                    VL_SHIFTRS_III(32,32,5, tb_cpu_core__DOT__dut__DOT__rs1_data, 
                                                                   (0x1fU 
                                                                    & tb_cpu_core__DOT__dut__DOT__dp__DOT__alu_b))
                                                     : 
                                                    (tb_cpu_core__DOT__dut__DOT__rs1_data 
                                                     >> 
                                                     (0x1fU 
                                                      & tb_cpu_core__DOT__dut__DOT__dp__DOT__alu_b)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(tb_cpu_core__DOT__dut__DOT__alu_ctrl))
                                                     ? 
                                                    (tb_cpu_core__DOT__dut__DOT__rs1_data 
                                                     << 
                                                     (0x1fU 
                                                      & tb_cpu_core__DOT__dut__DOT__dp__DOT__alu_b))
                                                     : 
                                                    (tb_cpu_core__DOT__dut__DOT__rs1_data 
                                                     ^ tb_cpu_core__DOT__dut__DOT__dp__DOT__alu_b)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(tb_cpu_core__DOT__dut__DOT__alu_ctrl))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(tb_cpu_core__DOT__dut__DOT__alu_ctrl))
                                                     ? 
                                                    (tb_cpu_core__DOT__dut__DOT__rs1_data 
                                                     | tb_cpu_core__DOT__dut__DOT__dp__DOT__alu_b)
                                                     : 
                                                    (tb_cpu_core__DOT__dut__DOT__rs1_data 
                                                     & tb_cpu_core__DOT__dut__DOT__dp__DOT__alu_b))
                                                    : 
                                                   ((1U 
                                                     & (IData)(tb_cpu_core__DOT__dut__DOT__alu_ctrl))
                                                     ? 
                                                    (tb_cpu_core__DOT__dut__DOT__rs1_data 
                                                     - tb_cpu_core__DOT__dut__DOT__dp__DOT__alu_b)
                                                     : 
                                                    (tb_cpu_core__DOT__dut__DOT__rs1_data 
                                                     + tb_cpu_core__DOT__dut__DOT__dp__DOT__alu_b)))));
}

void Vtb_cpu_core___024root___nba_sequent__TOP__0(Vtb_cpu_core___024root* vlSelf);
void Vtb_cpu_core___024root___nba_comb__TOP__0(Vtb_cpu_core___024root* vlSelf);

void Vtb_cpu_core___024root___eval_nba(Vtb_cpu_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_cpu_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu_core___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_cpu_core___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_cpu_core___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_cpu_core___024root___nba_sequent__TOP__0(Vtb_cpu_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_cpu_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu_core___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__tb_cpu_core__DOT__dut__DOT__dp__DOT__rf__DOT__registers__v0;
    __VdlyVal__tb_cpu_core__DOT__dut__DOT__dp__DOT__rf__DOT__registers__v0 = 0;
    CData/*4:0*/ __VdlyDim0__tb_cpu_core__DOT__dut__DOT__dp__DOT__rf__DOT__registers__v0;
    __VdlyDim0__tb_cpu_core__DOT__dut__DOT__dp__DOT__rf__DOT__registers__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_cpu_core__DOT__dut__DOT__dp__DOT__rf__DOT__registers__v0;
    __VdlySet__tb_cpu_core__DOT__dut__DOT__dp__DOT__rf__DOT__registers__v0 = 0;
    // Body
    __VdlySet__tb_cpu_core__DOT__dut__DOT__dp__DOT__rf__DOT__registers__v0 = 0U;
    if (((IData)(vlSelfRef.tb_cpu_core__DOT__dut__DOT__reg_write) 
         & (0U != (0x1fU & (vlSelfRef.tb_cpu_core__DOT__instruction 
                            >> 7U))))) {
        __VdlyVal__tb_cpu_core__DOT__dut__DOT__dp__DOT__rf__DOT__registers__v0 
            = vlSelfRef.tb_cpu_core__DOT__alu_result;
        __VdlyDim0__tb_cpu_core__DOT__dut__DOT__dp__DOT__rf__DOT__registers__v0 
            = (0x1fU & (vlSelfRef.tb_cpu_core__DOT__instruction 
                        >> 7U));
        __VdlySet__tb_cpu_core__DOT__dut__DOT__dp__DOT__rf__DOT__registers__v0 = 1U;
    }
    if (__VdlySet__tb_cpu_core__DOT__dut__DOT__dp__DOT__rf__DOT__registers__v0) {
        vlSelfRef.tb_cpu_core__DOT__dut__DOT__dp__DOT__rf__DOT__registers[__VdlyDim0__tb_cpu_core__DOT__dut__DOT__dp__DOT__rf__DOT__registers__v0] 
            = __VdlyVal__tb_cpu_core__DOT__dut__DOT__dp__DOT__rf__DOT__registers__v0;
    }
}

VL_INLINE_OPT void Vtb_cpu_core___024root___nba_comb__TOP__0(Vtb_cpu_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_cpu_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu_core___024root___nba_comb__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ tb_cpu_core__DOT__dut__DOT__immediate;
    tb_cpu_core__DOT__dut__DOT__immediate = 0;
    CData/*0:0*/ tb_cpu_core__DOT__dut__DOT__alu_src;
    tb_cpu_core__DOT__dut__DOT__alu_src = 0;
    CData/*3:0*/ tb_cpu_core__DOT__dut__DOT__alu_ctrl;
    tb_cpu_core__DOT__dut__DOT__alu_ctrl = 0;
    IData/*31:0*/ tb_cpu_core__DOT__dut__DOT__rs1_data;
    tb_cpu_core__DOT__dut__DOT__rs1_data = 0;
    IData/*31:0*/ tb_cpu_core__DOT__dut__DOT__dp__DOT__alu_b;
    tb_cpu_core__DOT__dut__DOT__dp__DOT__alu_b = 0;
    // Body
    tb_cpu_core__DOT__dut__DOT__alu_ctrl = 0U;
    tb_cpu_core__DOT__dut__DOT__immediate = 0U;
    if ((0x33U != (0x7fU & vlSelfRef.tb_cpu_core__DOT__instruction))) {
        if ((0x13U == (0x7fU & vlSelfRef.tb_cpu_core__DOT__instruction))) {
            tb_cpu_core__DOT__dut__DOT__immediate = 
                (((- (IData)((vlSelfRef.tb_cpu_core__DOT__instruction 
                              >> 0x1fU))) << 0xcU) 
                 | (vlSelfRef.tb_cpu_core__DOT__instruction 
                    >> 0x14U));
        }
    }
    tb_cpu_core__DOT__dut__DOT__alu_src = 0U;
    if ((0x33U == (0x7fU & vlSelfRef.tb_cpu_core__DOT__instruction))) {
        tb_cpu_core__DOT__dut__DOT__alu_ctrl = ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelfRef.tb_cpu_core__DOT__instruction 
                                                     >> 0xcU)))
                                                 ? 
                                                ((0x20U 
                                                  == 
                                                  (vlSelfRef.tb_cpu_core__DOT__instruction 
                                                   >> 0x19U))
                                                  ? 1U
                                                  : 0U)
                                                 : 0U);
        tb_cpu_core__DOT__dut__DOT__alu_src = 0U;
    } else if ((0x13U == (0x7fU & vlSelfRef.tb_cpu_core__DOT__instruction))) {
        tb_cpu_core__DOT__dut__DOT__alu_ctrl = 0U;
        tb_cpu_core__DOT__dut__DOT__alu_src = 1U;
    }
    vlSelfRef.tb_cpu_core__DOT__dut__DOT__reg_write 
        = ((0x33U == (0x7fU & vlSelfRef.tb_cpu_core__DOT__instruction)) 
           || (0x13U == (0x7fU & vlSelfRef.tb_cpu_core__DOT__instruction)));
    tb_cpu_core__DOT__dut__DOT__rs1_data = ((0U == 
                                             (0x1fU 
                                              & (vlSelfRef.tb_cpu_core__DOT__instruction 
                                                 >> 0xfU)))
                                             ? 0U : 
                                            vlSelfRef.tb_cpu_core__DOT__dut__DOT__dp__DOT__rf__DOT__registers
                                            [(0x1fU 
                                              & (vlSelfRef.tb_cpu_core__DOT__instruction 
                                                 >> 0xfU))]);
    tb_cpu_core__DOT__dut__DOT__dp__DOT__alu_b = ((IData)(tb_cpu_core__DOT__dut__DOT__alu_src)
                                                   ? tb_cpu_core__DOT__dut__DOT__immediate
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelfRef.tb_cpu_core__DOT__instruction 
                                                        >> 0x14U)))
                                                    ? 0U
                                                    : 
                                                   vlSelfRef.tb_cpu_core__DOT__dut__DOT__dp__DOT__rf__DOT__registers
                                                   [
                                                   (0x1fU 
                                                    & (vlSelfRef.tb_cpu_core__DOT__instruction 
                                                       >> 0x14U))]));
    vlSelfRef.tb_cpu_core__DOT__alu_result = ((8U & (IData)(tb_cpu_core__DOT__dut__DOT__alu_ctrl))
                                               ? ((4U 
                                                   & (IData)(tb_cpu_core__DOT__dut__DOT__alu_ctrl))
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & (IData)(tb_cpu_core__DOT__dut__DOT__alu_ctrl))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(tb_cpu_core__DOT__dut__DOT__alu_ctrl))
                                                     ? 
                                                    ((tb_cpu_core__DOT__dut__DOT__rs1_data 
                                                      < tb_cpu_core__DOT__dut__DOT__dp__DOT__alu_b)
                                                      ? 1U
                                                      : 0U)
                                                     : 
                                                    (VL_LTS_III(32, tb_cpu_core__DOT__dut__DOT__rs1_data, tb_cpu_core__DOT__dut__DOT__dp__DOT__alu_b)
                                                      ? 1U
                                                      : 0U))))
                                               : ((4U 
                                                   & (IData)(tb_cpu_core__DOT__dut__DOT__alu_ctrl))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(tb_cpu_core__DOT__dut__DOT__alu_ctrl))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(tb_cpu_core__DOT__dut__DOT__alu_ctrl))
                                                     ? 
                                                    VL_SHIFTRS_III(32,32,5, tb_cpu_core__DOT__dut__DOT__rs1_data, 
                                                                   (0x1fU 
                                                                    & tb_cpu_core__DOT__dut__DOT__dp__DOT__alu_b))
                                                     : 
                                                    (tb_cpu_core__DOT__dut__DOT__rs1_data 
                                                     >> 
                                                     (0x1fU 
                                                      & tb_cpu_core__DOT__dut__DOT__dp__DOT__alu_b)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(tb_cpu_core__DOT__dut__DOT__alu_ctrl))
                                                     ? 
                                                    (tb_cpu_core__DOT__dut__DOT__rs1_data 
                                                     << 
                                                     (0x1fU 
                                                      & tb_cpu_core__DOT__dut__DOT__dp__DOT__alu_b))
                                                     : 
                                                    (tb_cpu_core__DOT__dut__DOT__rs1_data 
                                                     ^ tb_cpu_core__DOT__dut__DOT__dp__DOT__alu_b)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(tb_cpu_core__DOT__dut__DOT__alu_ctrl))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(tb_cpu_core__DOT__dut__DOT__alu_ctrl))
                                                     ? 
                                                    (tb_cpu_core__DOT__dut__DOT__rs1_data 
                                                     | tb_cpu_core__DOT__dut__DOT__dp__DOT__alu_b)
                                                     : 
                                                    (tb_cpu_core__DOT__dut__DOT__rs1_data 
                                                     & tb_cpu_core__DOT__dut__DOT__dp__DOT__alu_b))
                                                    : 
                                                   ((1U 
                                                     & (IData)(tb_cpu_core__DOT__dut__DOT__alu_ctrl))
                                                     ? 
                                                    (tb_cpu_core__DOT__dut__DOT__rs1_data 
                                                     - tb_cpu_core__DOT__dut__DOT__dp__DOT__alu_b)
                                                     : 
                                                    (tb_cpu_core__DOT__dut__DOT__rs1_data 
                                                     + tb_cpu_core__DOT__dut__DOT__dp__DOT__alu_b)))));
}

void Vtb_cpu_core___024root___timing_resume(Vtb_cpu_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_cpu_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu_core___024root___timing_resume\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h4b3a91cc__0.resume(
                                                   "@(posedge tb_cpu_core.clk)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_cpu_core___024root___timing_commit(Vtb_cpu_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_cpu_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu_core___024root___timing_commit\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h4b3a91cc__0.commit(
                                                   "@(posedge tb_cpu_core.clk)");
    }
}

void Vtb_cpu_core___024root___eval_triggers__act(Vtb_cpu_core___024root* vlSelf);

bool Vtb_cpu_core___024root___eval_phase__act(Vtb_cpu_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_cpu_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu_core___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_cpu_core___024root___eval_triggers__act(vlSelf);
    Vtb_cpu_core___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_cpu_core___024root___timing_resume(vlSelf);
        Vtb_cpu_core___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_cpu_core___024root___eval_phase__nba(Vtb_cpu_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_cpu_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu_core___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_cpu_core___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cpu_core___024root___dump_triggers__nba(Vtb_cpu_core___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cpu_core___024root___dump_triggers__act(Vtb_cpu_core___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_cpu_core___024root___eval(Vtb_cpu_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_cpu_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu_core___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_cpu_core___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_cpu_core.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_cpu_core___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/tb_cpu_core.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_cpu_core___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_cpu_core___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_cpu_core___024root___eval_debug_assertions(Vtb_cpu_core___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_cpu_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cpu_core___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
