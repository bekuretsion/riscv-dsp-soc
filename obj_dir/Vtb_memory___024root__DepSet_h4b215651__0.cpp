// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_memory.h for the primary calling header

#include "Vtb_memory__pch.h"
#include "Vtb_memory___024root.h"

VlCoroutine Vtb_memory___024root___eval_initial__TOP__Vtiming__0(Vtb_memory___024root* vlSelf);
VlCoroutine Vtb_memory___024root___eval_initial__TOP__Vtiming__1(Vtb_memory___024root* vlSelf);

void Vtb_memory___024root___eval_initial(Vtb_memory___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_memory___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_memory___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_memory__DOT__clk__0 
        = vlSelfRef.tb_memory__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vtb_memory___024root___eval_initial__TOP__Vtiming__0(Vtb_memory___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_memory__DOT__clk = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/tb_memory.sv", 
                                             19);
        vlSelfRef.tb_memory__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_memory__DOT__clk)));
    }
}

void Vtb_memory___024root___act_comb__TOP__0(Vtb_memory___024root* vlSelf);

void Vtb_memory___024root___eval_act(Vtb_memory___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_memory___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_memory___024root___act_comb__TOP__0(Vtb_memory___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory___024root___act_comb__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_memory__DOT__read_data = vlSelfRef.tb_memory__DOT__dut__DOT__memory
        [(0xffU & (vlSelfRef.tb_memory__DOT__address 
                   >> 2U))];
}

void Vtb_memory___024root___nba_sequent__TOP__0(Vtb_memory___024root* vlSelf);

void Vtb_memory___024root___eval_nba(Vtb_memory___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_memory___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_memory___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_memory___024root___nba_sequent__TOP__0(Vtb_memory___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__tb_memory__DOT__dut__DOT__memory__v0;
    __VdlyVal__tb_memory__DOT__dut__DOT__memory__v0 = 0;
    CData/*7:0*/ __VdlyDim0__tb_memory__DOT__dut__DOT__memory__v0;
    __VdlyDim0__tb_memory__DOT__dut__DOT__memory__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_memory__DOT__dut__DOT__memory__v0;
    __VdlySet__tb_memory__DOT__dut__DOT__memory__v0 = 0;
    // Body
    __VdlySet__tb_memory__DOT__dut__DOT__memory__v0 = 0U;
    if (vlSelfRef.tb_memory__DOT__mem_write) {
        __VdlyVal__tb_memory__DOT__dut__DOT__memory__v0 
            = vlSelfRef.tb_memory__DOT__write_data;
        __VdlyDim0__tb_memory__DOT__dut__DOT__memory__v0 
            = (0xffU & (vlSelfRef.tb_memory__DOT__address 
                        >> 2U));
        __VdlySet__tb_memory__DOT__dut__DOT__memory__v0 = 1U;
    }
    if (__VdlySet__tb_memory__DOT__dut__DOT__memory__v0) {
        vlSelfRef.tb_memory__DOT__dut__DOT__memory[__VdlyDim0__tb_memory__DOT__dut__DOT__memory__v0] 
            = __VdlyVal__tb_memory__DOT__dut__DOT__memory__v0;
    }
}

void Vtb_memory___024root___timing_resume(Vtb_memory___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory___024root___timing_resume\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h0d52ee00__0.resume(
                                                   "@(posedge tb_memory.clk)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_memory___024root___timing_commit(Vtb_memory___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory___024root___timing_commit\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h0d52ee00__0.commit(
                                                   "@(posedge tb_memory.clk)");
    }
}

void Vtb_memory___024root___eval_triggers__act(Vtb_memory___024root* vlSelf);

bool Vtb_memory___024root___eval_phase__act(Vtb_memory___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_memory___024root___eval_triggers__act(vlSelf);
    Vtb_memory___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_memory___024root___timing_resume(vlSelf);
        Vtb_memory___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_memory___024root___eval_phase__nba(Vtb_memory___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_memory___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_memory___024root___dump_triggers__nba(Vtb_memory___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_memory___024root___dump_triggers__act(Vtb_memory___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_memory___024root___eval(Vtb_memory___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory___024root___eval\n"); );
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
            Vtb_memory___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_memory.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_memory___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/tb_memory.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_memory___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_memory___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_memory___024root___eval_debug_assertions(Vtb_memory___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
