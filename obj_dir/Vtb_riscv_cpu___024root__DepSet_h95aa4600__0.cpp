// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_riscv_cpu.h for the primary calling header

#include "Vtb_riscv_cpu__pch.h"
#include "Vtb_riscv_cpu___024root.h"

VL_ATTR_COLD void Vtb_riscv_cpu___024root___eval_initial__TOP(Vtb_riscv_cpu___024root* vlSelf);
VlCoroutine Vtb_riscv_cpu___024root___eval_initial__TOP__Vtiming__0(Vtb_riscv_cpu___024root* vlSelf);
VlCoroutine Vtb_riscv_cpu___024root___eval_initial__TOP__Vtiming__1(Vtb_riscv_cpu___024root* vlSelf);

void Vtb_riscv_cpu___024root___eval_initial(Vtb_riscv_cpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_riscv_cpu___024root___eval_initial__TOP(vlSelf);
    Vtb_riscv_cpu___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_riscv_cpu___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__clk__0 
        = vlSelfRef.tb_riscv_cpu__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vtb_riscv_cpu___024root___eval_initial__TOP__Vtiming__0(Vtb_riscv_cpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_riscv_cpu__DOT__clk = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/tb_riscv_cpu.sv", 
                                             20);
        vlSelfRef.tb_riscv_cpu__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_riscv_cpu__DOT__clk)));
    }
}

void Vtb_riscv_cpu___024root___eval_act(Vtb_riscv_cpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtb_riscv_cpu___024root___nba_sequent__TOP__0(Vtb_riscv_cpu___024root* vlSelf);

void Vtb_riscv_cpu___024root___eval_nba(Vtb_riscv_cpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_riscv_cpu___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_riscv_cpu___024root___nba_sequent__TOP__0(Vtb_riscv_cpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ tb_riscv_cpu__DOT__dut__DOT__core__DOT__rs1_addr;
    tb_riscv_cpu__DOT__dut__DOT__core__DOT__rs1_addr = 0;
    CData/*4:0*/ tb_riscv_cpu__DOT__dut__DOT__core__DOT__rs2_addr;
    tb_riscv_cpu__DOT__dut__DOT__core__DOT__rs2_addr = 0;
    IData/*31:0*/ tb_riscv_cpu__DOT__dut__DOT__core__DOT__immediate;
    tb_riscv_cpu__DOT__dut__DOT__core__DOT__immediate = 0;
    CData/*0:0*/ tb_riscv_cpu__DOT__dut__DOT__core__DOT__alu_src;
    tb_riscv_cpu__DOT__dut__DOT__core__DOT__alu_src = 0;
    CData/*3:0*/ tb_riscv_cpu__DOT__dut__DOT__core__DOT__alu_ctrl;
    tb_riscv_cpu__DOT__dut__DOT__core__DOT__alu_ctrl = 0;
    IData/*31:0*/ tb_riscv_cpu__DOT__dut__DOT__core__DOT__rs1_data;
    tb_riscv_cpu__DOT__dut__DOT__core__DOT__rs1_data = 0;
    CData/*6:0*/ tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode;
    tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode = 0;
    IData/*31:0*/ tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__alu_b;
    tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__alu_b = 0;
    IData/*31:0*/ __VdlyVal__tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers__v0;
    __VdlyVal__tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers__v0 = 0;
    CData/*4:0*/ __VdlyDim0__tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers__v0;
    __VdlyDim0__tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers__v0;
    __VdlySet__tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers__v0 = 0;
    // Body
    __VdlySet__tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers__v0 = 0U;
    if (((IData)(vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__reg_write) 
         & (0U != (IData)(vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__rd_addr)))) {
        __VdlyVal__tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers__v0 
            = vlSelfRef.tb_riscv_cpu__DOT__alu_result;
        __VdlyDim0__tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers__v0 
            = vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__rd_addr;
        __VdlySet__tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers__v0 = 1U;
    }
    vlSelfRef.tb_riscv_cpu__DOT__pc = ((IData)(vlSelfRef.tb_riscv_cpu__DOT__reset)
                                        ? 0U : ((IData)(4U) 
                                                + vlSelfRef.tb_riscv_cpu__DOT__pc));
    if (__VdlySet__tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers__v0) {
        vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers[__VdlyDim0__tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers__v0] 
            = __VdlyVal__tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers__v0;
    }
    vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__rd_addr 
        = (0x1fU & (vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__imem__DOT__memory
                    [(0xffU & (vlSelfRef.tb_riscv_cpu__DOT__pc 
                               >> 2U))] >> 7U));
    tb_riscv_cpu__DOT__dut__DOT__core__DOT__rs1_addr 
        = (0x1fU & (vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__imem__DOT__memory
                    [(0xffU & (vlSelfRef.tb_riscv_cpu__DOT__pc 
                               >> 2U))] >> 0xfU));
    tb_riscv_cpu__DOT__dut__DOT__core__DOT__rs2_addr 
        = (0x1fU & (vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__imem__DOT__memory
                    [(0xffU & (vlSelfRef.tb_riscv_cpu__DOT__pc 
                               >> 2U))] >> 0x14U));
    vlSelfRef.tb_riscv_cpu__DOT__instruction = vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__imem__DOT__memory
        [(0xffU & (vlSelfRef.tb_riscv_cpu__DOT__pc 
                   >> 2U))];
    tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode 
        = (0x7fU & vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__imem__DOT__memory
           [(0xffU & (vlSelfRef.tb_riscv_cpu__DOT__pc 
                      >> 2U))]);
    tb_riscv_cpu__DOT__dut__DOT__core__DOT__rs1_data 
        = ((0U == (IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__rs1_addr))
            ? 0U : vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
           [tb_riscv_cpu__DOT__dut__DOT__core__DOT__rs1_addr]);
    vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__reg_write 
        = ((0x33U == (IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode)) 
           || (0x13U == (IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode)));
    tb_riscv_cpu__DOT__dut__DOT__core__DOT__alu_ctrl = 0U;
    tb_riscv_cpu__DOT__dut__DOT__core__DOT__alu_src = 0U;
    if ((0x33U == (IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode))) {
        tb_riscv_cpu__DOT__dut__DOT__core__DOT__alu_ctrl 
            = ((0U == (7U & (vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__imem__DOT__memory
                             [(0xffU & (vlSelfRef.tb_riscv_cpu__DOT__pc 
                                        >> 2U))] >> 0xcU)))
                ? ((0x20U == (vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__imem__DOT__memory
                              [(0xffU & (vlSelfRef.tb_riscv_cpu__DOT__pc 
                                         >> 2U))] >> 0x19U))
                    ? 1U : 0U) : 0U);
        tb_riscv_cpu__DOT__dut__DOT__core__DOT__alu_src = 0U;
    } else if ((0x13U == (IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode))) {
        tb_riscv_cpu__DOT__dut__DOT__core__DOT__alu_ctrl = 0U;
        tb_riscv_cpu__DOT__dut__DOT__core__DOT__alu_src = 1U;
    }
    tb_riscv_cpu__DOT__dut__DOT__core__DOT__immediate = 0U;
    if ((0x33U != (IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode))) {
        if ((0x13U == (IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode))) {
            tb_riscv_cpu__DOT__dut__DOT__core__DOT__immediate 
                = (((- (IData)((vlSelfRef.tb_riscv_cpu__DOT__instruction 
                                >> 0x1fU))) << 0xcU) 
                   | (vlSelfRef.tb_riscv_cpu__DOT__instruction 
                      >> 0x14U));
        }
    }
    tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__alu_b 
        = ((IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__alu_src)
            ? tb_riscv_cpu__DOT__dut__DOT__core__DOT__immediate
            : ((0U == (IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__rs2_addr))
                ? 0U : vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
               [tb_riscv_cpu__DOT__dut__DOT__core__DOT__rs2_addr]));
    vlSelfRef.tb_riscv_cpu__DOT__alu_result = ((8U 
                                                & (IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__alu_ctrl))
                                                ? (
                                                   (4U 
                                                    & (IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__alu_ctrl))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & (IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__alu_ctrl))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__alu_ctrl))
                                                      ? 
                                                     ((tb_riscv_cpu__DOT__dut__DOT__core__DOT__rs1_data 
                                                       < tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__alu_b)
                                                       ? 1U
                                                       : 0U)
                                                      : 
                                                     (VL_LTS_III(32, tb_riscv_cpu__DOT__dut__DOT__core__DOT__rs1_data, tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__alu_b)
                                                       ? 1U
                                                       : 0U))))
                                                : (
                                                   (4U 
                                                    & (IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__alu_ctrl))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__alu_ctrl))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__alu_ctrl))
                                                      ? 
                                                     VL_SHIFTRS_III(32,32,5, tb_riscv_cpu__DOT__dut__DOT__core__DOT__rs1_data, 
                                                                    (0x1fU 
                                                                     & tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__alu_b))
                                                      : 
                                                     (tb_riscv_cpu__DOT__dut__DOT__core__DOT__rs1_data 
                                                      >> 
                                                      (0x1fU 
                                                       & tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__alu_b)))
                                                     : 
                                                    ((1U 
                                                      & (IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__alu_ctrl))
                                                      ? 
                                                     (tb_riscv_cpu__DOT__dut__DOT__core__DOT__rs1_data 
                                                      << 
                                                      (0x1fU 
                                                       & tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__alu_b))
                                                      : 
                                                     (tb_riscv_cpu__DOT__dut__DOT__core__DOT__rs1_data 
                                                      ^ tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__alu_b)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__alu_ctrl))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__alu_ctrl))
                                                      ? 
                                                     (tb_riscv_cpu__DOT__dut__DOT__core__DOT__rs1_data 
                                                      | tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__alu_b)
                                                      : 
                                                     (tb_riscv_cpu__DOT__dut__DOT__core__DOT__rs1_data 
                                                      & tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__alu_b))
                                                     : 
                                                    ((1U 
                                                      & (IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__alu_ctrl))
                                                      ? 
                                                     (tb_riscv_cpu__DOT__dut__DOT__core__DOT__rs1_data 
                                                      - tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__alu_b)
                                                      : 
                                                     (tb_riscv_cpu__DOT__dut__DOT__core__DOT__rs1_data 
                                                      + tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__alu_b)))));
}

void Vtb_riscv_cpu___024root___timing_resume(Vtb_riscv_cpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root___timing_resume\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h6588643f__0.resume(
                                                   "@(posedge tb_riscv_cpu.clk)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_riscv_cpu___024root___timing_commit(Vtb_riscv_cpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root___timing_commit\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h6588643f__0.commit(
                                                   "@(posedge tb_riscv_cpu.clk)");
    }
}

void Vtb_riscv_cpu___024root___eval_triggers__act(Vtb_riscv_cpu___024root* vlSelf);

bool Vtb_riscv_cpu___024root___eval_phase__act(Vtb_riscv_cpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_riscv_cpu___024root___eval_triggers__act(vlSelf);
    Vtb_riscv_cpu___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_riscv_cpu___024root___timing_resume(vlSelf);
        Vtb_riscv_cpu___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_riscv_cpu___024root___eval_phase__nba(Vtb_riscv_cpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_riscv_cpu___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_riscv_cpu___024root___dump_triggers__nba(Vtb_riscv_cpu___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_riscv_cpu___024root___dump_triggers__act(Vtb_riscv_cpu___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_riscv_cpu___024root___eval(Vtb_riscv_cpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root___eval\n"); );
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
            Vtb_riscv_cpu___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_riscv_cpu.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_riscv_cpu___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/tb_riscv_cpu.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_riscv_cpu___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_riscv_cpu___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_riscv_cpu___024root___eval_debug_assertions(Vtb_riscv_cpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
