// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_decoder.h for the primary calling header

#include "Vtb_decoder__pch.h"
#include "Vtb_decoder___024root.h"

VlCoroutine Vtb_decoder___024root___eval_initial__TOP__Vtiming__0(Vtb_decoder___024root* vlSelf);

void Vtb_decoder___024root___eval_initial(Vtb_decoder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_decoder___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_decoder___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

void Vtb_decoder___024root___act_sequent__TOP__0(Vtb_decoder___024root* vlSelf);

void Vtb_decoder___024root___eval_act(Vtb_decoder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_decoder___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_decoder___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_decoder___024root___act_sequent__TOP__0(Vtb_decoder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_decoder___024root___act_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_decoder__DOT__immediate = 0U;
    if ((0x40U & vlSelfRef.tb_decoder__DOT__instruction)) {
        if ((0x20U & vlSelfRef.tb_decoder__DOT__instruction)) {
            if ((0x10U & vlSelfRef.tb_decoder__DOT__instruction)) {
                vlSelfRef.tb_decoder__DOT__immediate = 0U;
                vlSelfRef.tb_decoder__DOT__alu_ctrl = 0U;
            } else if ((8U & vlSelfRef.tb_decoder__DOT__instruction)) {
                vlSelfRef.tb_decoder__DOT__immediate = 0U;
                vlSelfRef.tb_decoder__DOT__alu_ctrl = 0U;
            } else if ((4U & vlSelfRef.tb_decoder__DOT__instruction)) {
                vlSelfRef.tb_decoder__DOT__immediate = 0U;
                vlSelfRef.tb_decoder__DOT__alu_ctrl = 0U;
            } else if ((2U & vlSelfRef.tb_decoder__DOT__instruction)) {
                if ((1U & vlSelfRef.tb_decoder__DOT__instruction)) {
                    vlSelfRef.tb_decoder__DOT__immediate 
                        = (((- (IData)((vlSelfRef.tb_decoder__DOT__instruction 
                                        >> 0x1fU))) 
                            << 0xdU) | (((0x1000U & 
                                          (vlSelfRef.tb_decoder__DOT__instruction 
                                           >> 0x13U)) 
                                         | (0x800U 
                                            & (vlSelfRef.tb_decoder__DOT__instruction 
                                               << 4U))) 
                                        | ((0x7e0U 
                                            & (vlSelfRef.tb_decoder__DOT__instruction 
                                               >> 0x14U)) 
                                           | (0x1eU 
                                              & (vlSelfRef.tb_decoder__DOT__instruction 
                                                 >> 7U)))));
                    vlSelfRef.tb_decoder__DOT__alu_ctrl = 1U;
                } else {
                    vlSelfRef.tb_decoder__DOT__immediate = 0U;
                    vlSelfRef.tb_decoder__DOT__alu_ctrl = 0U;
                }
            } else {
                vlSelfRef.tb_decoder__DOT__immediate = 0U;
                vlSelfRef.tb_decoder__DOT__alu_ctrl = 0U;
            }
        } else {
            vlSelfRef.tb_decoder__DOT__immediate = 0U;
            vlSelfRef.tb_decoder__DOT__alu_ctrl = 0U;
        }
    } else if ((0x20U & vlSelfRef.tb_decoder__DOT__instruction)) {
        if ((0x10U & vlSelfRef.tb_decoder__DOT__instruction)) {
            if ((8U & vlSelfRef.tb_decoder__DOT__instruction)) {
                vlSelfRef.tb_decoder__DOT__immediate = 0U;
                vlSelfRef.tb_decoder__DOT__alu_ctrl = 0U;
            } else if ((4U & vlSelfRef.tb_decoder__DOT__instruction)) {
                vlSelfRef.tb_decoder__DOT__immediate = 0U;
                vlSelfRef.tb_decoder__DOT__alu_ctrl = 0U;
            } else if ((2U & vlSelfRef.tb_decoder__DOT__instruction)) {
                if ((1U & (~ vlSelfRef.tb_decoder__DOT__instruction))) {
                    vlSelfRef.tb_decoder__DOT__immediate = 0U;
                }
                vlSelfRef.tb_decoder__DOT__alu_ctrl 
                    = ((1U & vlSelfRef.tb_decoder__DOT__instruction)
                        ? ((0x4000U & vlSelfRef.tb_decoder__DOT__instruction)
                            ? ((0x2000U & vlSelfRef.tb_decoder__DOT__instruction)
                                ? ((0x1000U & vlSelfRef.tb_decoder__DOT__instruction)
                                    ? 2U : 3U) : ((0x1000U 
                                                   & vlSelfRef.tb_decoder__DOT__instruction)
                                                   ? 
                                                  ((0x20U 
                                                    == 
                                                    (vlSelfRef.tb_decoder__DOT__instruction 
                                                     >> 0x19U))
                                                    ? 7U
                                                    : 6U)
                                                   : 4U))
                            : ((0x2000U & vlSelfRef.tb_decoder__DOT__instruction)
                                ? ((0x1000U & vlSelfRef.tb_decoder__DOT__instruction)
                                    ? 9U : 8U) : ((0x1000U 
                                                   & vlSelfRef.tb_decoder__DOT__instruction)
                                                   ? 5U
                                                   : 
                                                  ((0x20U 
                                                    == 
                                                    (vlSelfRef.tb_decoder__DOT__instruction 
                                                     >> 0x19U))
                                                    ? 1U
                                                    : 0U))))
                        : 0U);
            } else {
                vlSelfRef.tb_decoder__DOT__immediate = 0U;
                vlSelfRef.tb_decoder__DOT__alu_ctrl = 0U;
            }
        } else {
            vlSelfRef.tb_decoder__DOT__immediate = 
                ((8U & vlSelfRef.tb_decoder__DOT__instruction)
                  ? 0U : ((4U & vlSelfRef.tb_decoder__DOT__instruction)
                           ? 0U : ((2U & vlSelfRef.tb_decoder__DOT__instruction)
                                    ? ((1U & vlSelfRef.tb_decoder__DOT__instruction)
                                        ? (((- (IData)(
                                                       (vlSelfRef.tb_decoder__DOT__instruction 
                                                        >> 0x1fU))) 
                                            << 0xcU) 
                                           | ((0xfe0U 
                                               & (vlSelfRef.tb_decoder__DOT__instruction 
                                                  >> 0x14U)) 
                                              | (0x1fU 
                                                 & (vlSelfRef.tb_decoder__DOT__instruction 
                                                    >> 7U))))
                                        : 0U) : 0U)));
            vlSelfRef.tb_decoder__DOT__alu_ctrl = 0U;
        }
    } else {
        vlSelfRef.tb_decoder__DOT__immediate = ((0x10U 
                                                 & vlSelfRef.tb_decoder__DOT__instruction)
                                                 ? 
                                                ((8U 
                                                  & vlSelfRef.tb_decoder__DOT__instruction)
                                                  ? 0U
                                                  : 
                                                 ((4U 
                                                   & vlSelfRef.tb_decoder__DOT__instruction)
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & vlSelfRef.tb_decoder__DOT__instruction)
                                                    ? 
                                                   ((1U 
                                                     & vlSelfRef.tb_decoder__DOT__instruction)
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelfRef.tb_decoder__DOT__instruction 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | (vlSelfRef.tb_decoder__DOT__instruction 
                                                        >> 0x14U))
                                                     : 0U)
                                                    : 0U)))
                                                 : 
                                                ((8U 
                                                  & vlSelfRef.tb_decoder__DOT__instruction)
                                                  ? 0U
                                                  : 
                                                 ((4U 
                                                   & vlSelfRef.tb_decoder__DOT__instruction)
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & vlSelfRef.tb_decoder__DOT__instruction)
                                                    ? 
                                                   ((1U 
                                                     & vlSelfRef.tb_decoder__DOT__instruction)
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelfRef.tb_decoder__DOT__instruction 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | (vlSelfRef.tb_decoder__DOT__instruction 
                                                        >> 0x14U))
                                                     : 0U)
                                                    : 0U))));
        vlSelfRef.tb_decoder__DOT__alu_ctrl = 0U;
    }
    vlSelfRef.tb_decoder__DOT__alu_src = ((1U & (~ 
                                                 (vlSelfRef.tb_decoder__DOT__instruction 
                                                  >> 6U))) 
                                          && ((0x20U 
                                               & vlSelfRef.tb_decoder__DOT__instruction)
                                               ? ((1U 
                                                   & (~ 
                                                      (vlSelfRef.tb_decoder__DOT__instruction 
                                                       >> 4U))) 
                                                  && ((1U 
                                                       & (~ 
                                                          (vlSelfRef.tb_decoder__DOT__instruction 
                                                           >> 3U))) 
                                                      && ((1U 
                                                           & (~ 
                                                              (vlSelfRef.tb_decoder__DOT__instruction 
                                                               >> 2U))) 
                                                          && ((1U 
                                                               & (vlSelfRef.tb_decoder__DOT__instruction 
                                                                  >> 1U)) 
                                                              && (1U 
                                                                  & vlSelfRef.tb_decoder__DOT__instruction)))))
                                               : ((0x10U 
                                                   & vlSelfRef.tb_decoder__DOT__instruction)
                                                   ? 
                                                  ((1U 
                                                    & (~ 
                                                       (vlSelfRef.tb_decoder__DOT__instruction 
                                                        >> 3U))) 
                                                   && ((1U 
                                                        & (~ 
                                                           (vlSelfRef.tb_decoder__DOT__instruction 
                                                            >> 2U))) 
                                                       && ((1U 
                                                            & (vlSelfRef.tb_decoder__DOT__instruction 
                                                               >> 1U)) 
                                                           && (1U 
                                                               & vlSelfRef.tb_decoder__DOT__instruction))))
                                                   : 
                                                  ((1U 
                                                    & (~ 
                                                       (vlSelfRef.tb_decoder__DOT__instruction 
                                                        >> 3U))) 
                                                   && ((1U 
                                                        & (~ 
                                                           (vlSelfRef.tb_decoder__DOT__instruction 
                                                            >> 2U))) 
                                                       && ((1U 
                                                            & (vlSelfRef.tb_decoder__DOT__instruction 
                                                               >> 1U)) 
                                                           && (1U 
                                                               & vlSelfRef.tb_decoder__DOT__instruction)))))));
    vlSelfRef.tb_decoder__DOT__mem_write = ((1U & (~ 
                                                   (vlSelfRef.tb_decoder__DOT__instruction 
                                                    >> 6U))) 
                                            && ((1U 
                                                 & (vlSelfRef.tb_decoder__DOT__instruction 
                                                    >> 5U)) 
                                                && ((1U 
                                                     & (~ 
                                                        (vlSelfRef.tb_decoder__DOT__instruction 
                                                         >> 4U))) 
                                                    && ((1U 
                                                         & (~ 
                                                            (vlSelfRef.tb_decoder__DOT__instruction 
                                                             >> 3U))) 
                                                        && ((1U 
                                                             & (~ 
                                                                (vlSelfRef.tb_decoder__DOT__instruction 
                                                                 >> 2U))) 
                                                            && ((1U 
                                                                 & (vlSelfRef.tb_decoder__DOT__instruction 
                                                                    >> 1U)) 
                                                                && (1U 
                                                                    & vlSelfRef.tb_decoder__DOT__instruction)))))));
    vlSelfRef.tb_decoder__DOT__mem_to_reg = ((1U & 
                                              (~ (vlSelfRef.tb_decoder__DOT__instruction 
                                                  >> 6U))) 
                                             && ((1U 
                                                  & (~ 
                                                     (vlSelfRef.tb_decoder__DOT__instruction 
                                                      >> 5U))) 
                                                 && ((1U 
                                                      & (~ 
                                                         (vlSelfRef.tb_decoder__DOT__instruction 
                                                          >> 4U))) 
                                                     && ((1U 
                                                          & (~ 
                                                             (vlSelfRef.tb_decoder__DOT__instruction 
                                                              >> 3U))) 
                                                         && ((1U 
                                                              & (~ 
                                                                 (vlSelfRef.tb_decoder__DOT__instruction 
                                                                  >> 2U))) 
                                                             && ((1U 
                                                                  & (vlSelfRef.tb_decoder__DOT__instruction 
                                                                     >> 1U)) 
                                                                 && (1U 
                                                                     & vlSelfRef.tb_decoder__DOT__instruction)))))));
    vlSelfRef.tb_decoder__DOT__reg_write = ((1U & (~ 
                                                   (vlSelfRef.tb_decoder__DOT__instruction 
                                                    >> 6U))) 
                                            && ((0x20U 
                                                 & vlSelfRef.tb_decoder__DOT__instruction)
                                                 ? 
                                                ((1U 
                                                  & (vlSelfRef.tb_decoder__DOT__instruction 
                                                     >> 4U)) 
                                                 && ((1U 
                                                      & (~ 
                                                         (vlSelfRef.tb_decoder__DOT__instruction 
                                                          >> 3U))) 
                                                     && ((1U 
                                                          & (~ 
                                                             (vlSelfRef.tb_decoder__DOT__instruction 
                                                              >> 2U))) 
                                                         && ((1U 
                                                              & (vlSelfRef.tb_decoder__DOT__instruction 
                                                                 >> 1U)) 
                                                             && (1U 
                                                                 & vlSelfRef.tb_decoder__DOT__instruction)))))
                                                 : 
                                                ((0x10U 
                                                  & vlSelfRef.tb_decoder__DOT__instruction)
                                                  ? 
                                                 ((1U 
                                                   & (~ 
                                                      (vlSelfRef.tb_decoder__DOT__instruction 
                                                       >> 3U))) 
                                                  && ((1U 
                                                       & (~ 
                                                          (vlSelfRef.tb_decoder__DOT__instruction 
                                                           >> 2U))) 
                                                      && ((1U 
                                                           & (vlSelfRef.tb_decoder__DOT__instruction 
                                                              >> 1U)) 
                                                          && (1U 
                                                              & vlSelfRef.tb_decoder__DOT__instruction))))
                                                  : 
                                                 ((1U 
                                                   & (~ 
                                                      (vlSelfRef.tb_decoder__DOT__instruction 
                                                       >> 3U))) 
                                                  && ((1U 
                                                       & (~ 
                                                          (vlSelfRef.tb_decoder__DOT__instruction 
                                                           >> 2U))) 
                                                      && ((1U 
                                                           & (vlSelfRef.tb_decoder__DOT__instruction 
                                                              >> 1U)) 
                                                          && (1U 
                                                              & vlSelfRef.tb_decoder__DOT__instruction)))))));
    vlSelfRef.tb_decoder__DOT__rs1_addr = (0x1fU & 
                                           (vlSelfRef.tb_decoder__DOT__instruction 
                                            >> 0xfU));
    vlSelfRef.tb_decoder__DOT__rd_addr = (0x1fU & (vlSelfRef.tb_decoder__DOT__instruction 
                                                   >> 7U));
    vlSelfRef.tb_decoder__DOT__rs2_addr = (0x1fU & 
                                           (vlSelfRef.tb_decoder__DOT__instruction 
                                            >> 0x14U));
}

void Vtb_decoder___024root___eval_nba(Vtb_decoder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_decoder___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_decoder___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vtb_decoder___024root___timing_resume(Vtb_decoder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_decoder___024root___timing_resume\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_decoder___024root___eval_triggers__act(Vtb_decoder___024root* vlSelf);

bool Vtb_decoder___024root___eval_phase__act(Vtb_decoder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_decoder___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_decoder___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_decoder___024root___timing_resume(vlSelf);
        Vtb_decoder___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_decoder___024root___eval_phase__nba(Vtb_decoder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_decoder___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_decoder___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_decoder___024root___dump_triggers__nba(Vtb_decoder___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_decoder___024root___dump_triggers__act(Vtb_decoder___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_decoder___024root___eval(Vtb_decoder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_decoder___024root___eval\n"); );
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
            Vtb_decoder___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_decoder.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_decoder___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/tb_decoder.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_decoder___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_decoder___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_decoder___024root___eval_debug_assertions(Vtb_decoder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_decoder___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
