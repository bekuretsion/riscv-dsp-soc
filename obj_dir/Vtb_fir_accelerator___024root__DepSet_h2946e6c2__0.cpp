// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fir_accelerator.h for the primary calling header

#include "Vtb_fir_accelerator__pch.h"
#include "Vtb_fir_accelerator___024root.h"

VlCoroutine Vtb_fir_accelerator___024root___eval_initial__TOP__Vtiming__0(Vtb_fir_accelerator___024root* vlSelf);
VlCoroutine Vtb_fir_accelerator___024root___eval_initial__TOP__Vtiming__1(Vtb_fir_accelerator___024root* vlSelf);

void Vtb_fir_accelerator___024root___eval_initial(Vtb_fir_accelerator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_fir_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir_accelerator___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_fir_accelerator___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_fir_accelerator___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_fir_accelerator__DOT__clk__0 
        = vlSelfRef.tb_fir_accelerator__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vtb_fir_accelerator___024root___eval_initial__TOP__Vtiming__0(Vtb_fir_accelerator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_fir_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir_accelerator___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fir_accelerator__DOT__clk = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/tb_fir_accelerator.sv", 
                                             37);
        vlSelfRef.tb_fir_accelerator__DOT__clk = (1U 
                                                  & (~ (IData)(vlSelfRef.tb_fir_accelerator__DOT__clk)));
    }
}

void Vtb_fir_accelerator___024root___act_comb__TOP__0(Vtb_fir_accelerator___024root* vlSelf);

void Vtb_fir_accelerator___024root___eval_act(Vtb_fir_accelerator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_fir_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir_accelerator___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((7ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_fir_accelerator___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_fir_accelerator___024root___act_comb__TOP__0(Vtb_fir_accelerator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_fir_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir_accelerator___024root___act_comb__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fir_accelerator__DOT__read_data = 0U;
    if (vlSelfRef.tb_fir_accelerator__DOT__read_en) {
        vlSelfRef.tb_fir_accelerator__DOT__read_data 
            = ((0x10U & (IData)(vlSelfRef.tb_fir_accelerator__DOT__address))
                ? ((8U & (IData)(vlSelfRef.tb_fir_accelerator__DOT__address))
                    ? ((4U & (IData)(vlSelfRef.tb_fir_accelerator__DOT__address))
                        ? ((2U & (IData)(vlSelfRef.tb_fir_accelerator__DOT__address))
                            ? 0U : ((1U & (IData)(vlSelfRef.tb_fir_accelerator__DOT__address))
                                     ? 0U : (IData)(vlSelfRef.tb_fir_accelerator__DOT__done)))
                        : ((2U & (IData)(vlSelfRef.tb_fir_accelerator__DOT__address))
                            ? 0U : ((1U & (IData)(vlSelfRef.tb_fir_accelerator__DOT__address))
                                     ? 0U : vlSelfRef.tb_fir_accelerator__DOT__dut__DOT__result)))
                    : ((4U & (IData)(vlSelfRef.tb_fir_accelerator__DOT__address))
                        ? 0U : ((2U & (IData)(vlSelfRef.tb_fir_accelerator__DOT__address))
                                 ? 0U : ((1U & (IData)(vlSelfRef.tb_fir_accelerator__DOT__address))
                                          ? 0U : vlSelfRef.tb_fir_accelerator__DOT__dut__DOT__coeff3))))
                : ((8U & (IData)(vlSelfRef.tb_fir_accelerator__DOT__address))
                    ? ((4U & (IData)(vlSelfRef.tb_fir_accelerator__DOT__address))
                        ? ((2U & (IData)(vlSelfRef.tb_fir_accelerator__DOT__address))
                            ? 0U : ((1U & (IData)(vlSelfRef.tb_fir_accelerator__DOT__address))
                                     ? 0U : vlSelfRef.tb_fir_accelerator__DOT__dut__DOT__coeff2))
                        : ((2U & (IData)(vlSelfRef.tb_fir_accelerator__DOT__address))
                            ? 0U : ((1U & (IData)(vlSelfRef.tb_fir_accelerator__DOT__address))
                                     ? 0U : vlSelfRef.tb_fir_accelerator__DOT__dut__DOT__coeff1)))
                    : ((4U & (IData)(vlSelfRef.tb_fir_accelerator__DOT__address))
                        ? ((2U & (IData)(vlSelfRef.tb_fir_accelerator__DOT__address))
                            ? 0U : ((1U & (IData)(vlSelfRef.tb_fir_accelerator__DOT__address))
                                     ? 0U : vlSelfRef.tb_fir_accelerator__DOT__dut__DOT__coeff0))
                        : ((2U & (IData)(vlSelfRef.tb_fir_accelerator__DOT__address))
                            ? 0U : ((1U & (IData)(vlSelfRef.tb_fir_accelerator__DOT__address))
                                     ? 0U : vlSelfRef.tb_fir_accelerator__DOT__dut__DOT__sample_in)))));
    }
}

void Vtb_fir_accelerator___024root___nba_sequent__TOP__0(Vtb_fir_accelerator___024root* vlSelf);

void Vtb_fir_accelerator___024root___eval_nba(Vtb_fir_accelerator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_fir_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir_accelerator___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_fir_accelerator___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_fir_accelerator___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_fir_accelerator___024root___nba_sequent__TOP__0(Vtb_fir_accelerator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_fir_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir_accelerator___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*63:0*/ tb_fir_accelerator__DOT__dut__DOT__product0;
    tb_fir_accelerator__DOT__dut__DOT__product0 = 0;
    QData/*63:0*/ tb_fir_accelerator__DOT__dut__DOT__product1;
    tb_fir_accelerator__DOT__dut__DOT__product1 = 0;
    QData/*63:0*/ tb_fir_accelerator__DOT__dut__DOT__product2;
    tb_fir_accelerator__DOT__dut__DOT__product2 = 0;
    QData/*63:0*/ tb_fir_accelerator__DOT__dut__DOT__product3;
    tb_fir_accelerator__DOT__dut__DOT__product3 = 0;
    // Body
    if (vlSelfRef.tb_fir_accelerator__DOT__reset) {
        vlSelfRef.tb_fir_accelerator__DOT__done = 0U;
        vlSelfRef.tb_fir_accelerator__DOT__dut__DOT__result = 0U;
        vlSelfRef.tb_fir_accelerator__DOT__dut__DOT__coeff0 = 0U;
        vlSelfRef.tb_fir_accelerator__DOT__dut__DOT__coeff1 = 0U;
        vlSelfRef.tb_fir_accelerator__DOT__dut__DOT__coeff2 = 0U;
        vlSelfRef.tb_fir_accelerator__DOT__dut__DOT__coeff3 = 0U;
        vlSelfRef.tb_fir_accelerator__DOT__dut__DOT__delay2 = 0U;
        vlSelfRef.tb_fir_accelerator__DOT__dut__DOT__delay1 = 0U;
        vlSelfRef.tb_fir_accelerator__DOT__dut__DOT__delay0 = 0U;
        vlSelfRef.tb_fir_accelerator__DOT__dut__DOT__sample_in = 0U;
    } else {
        vlSelfRef.tb_fir_accelerator__DOT__done = 0U;
        if (vlSelfRef.tb_fir_accelerator__DOT__write_en) {
            if ((0x10U & (IData)(vlSelfRef.tb_fir_accelerator__DOT__address))) {
                if ((1U & (~ ((IData)(vlSelfRef.tb_fir_accelerator__DOT__address) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelfRef.tb_fir_accelerator__DOT__address))) {
                        if ((1U & (~ ((IData)(vlSelfRef.tb_fir_accelerator__DOT__address) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelfRef.tb_fir_accelerator__DOT__address)))) {
                                if ((1U & vlSelfRef.tb_fir_accelerator__DOT__write_data)) {
                                    vlSelfRef.tb_fir_accelerator__DOT__done = 1U;
                                    vlSelfRef.tb_fir_accelerator__DOT__dut__DOT__result 
                                        = (IData)(vlSelfRef.tb_fir_accelerator__DOT__dut__DOT__accumulator);
                                    vlSelfRef.tb_fir_accelerator__DOT__dut__DOT__delay2 
                                        = vlSelfRef.tb_fir_accelerator__DOT__dut__DOT__delay1;
                                    vlSelfRef.tb_fir_accelerator__DOT__dut__DOT__delay1 
                                        = vlSelfRef.tb_fir_accelerator__DOT__dut__DOT__delay0;
                                    vlSelfRef.tb_fir_accelerator__DOT__dut__DOT__delay0 
                                        = vlSelfRef.tb_fir_accelerator__DOT__dut__DOT__sample_in;
                                }
                            }
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelfRef.tb_fir_accelerator__DOT__address) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.tb_fir_accelerator__DOT__address) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelfRef.tb_fir_accelerator__DOT__address)))) {
                                vlSelfRef.tb_fir_accelerator__DOT__dut__DOT__coeff3 
                                    = vlSelfRef.tb_fir_accelerator__DOT__write_data;
                            }
                        }
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelfRef.tb_fir_accelerator__DOT__address) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.tb_fir_accelerator__DOT__address) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelfRef.tb_fir_accelerator__DOT__address))) {
                        if ((1U & (~ ((IData)(vlSelfRef.tb_fir_accelerator__DOT__address) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelfRef.tb_fir_accelerator__DOT__address)))) {
                                vlSelfRef.tb_fir_accelerator__DOT__dut__DOT__coeff0 
                                    = vlSelfRef.tb_fir_accelerator__DOT__write_data;
                            }
                        }
                    }
                    if ((1U & (~ ((IData)(vlSelfRef.tb_fir_accelerator__DOT__address) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.tb_fir_accelerator__DOT__address) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelfRef.tb_fir_accelerator__DOT__address)))) {
                                vlSelfRef.tb_fir_accelerator__DOT__dut__DOT__sample_in 
                                    = vlSelfRef.tb_fir_accelerator__DOT__write_data;
                            }
                        }
                    }
                }
                if ((8U & (IData)(vlSelfRef.tb_fir_accelerator__DOT__address))) {
                    if ((1U & (~ ((IData)(vlSelfRef.tb_fir_accelerator__DOT__address) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.tb_fir_accelerator__DOT__address) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelfRef.tb_fir_accelerator__DOT__address)))) {
                                vlSelfRef.tb_fir_accelerator__DOT__dut__DOT__coeff1 
                                    = vlSelfRef.tb_fir_accelerator__DOT__write_data;
                            }
                        }
                    }
                    if ((4U & (IData)(vlSelfRef.tb_fir_accelerator__DOT__address))) {
                        if ((1U & (~ ((IData)(vlSelfRef.tb_fir_accelerator__DOT__address) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelfRef.tb_fir_accelerator__DOT__address)))) {
                                vlSelfRef.tb_fir_accelerator__DOT__dut__DOT__coeff2 
                                    = vlSelfRef.tb_fir_accelerator__DOT__write_data;
                            }
                        }
                    }
                }
            }
        }
    }
    tb_fir_accelerator__DOT__dut__DOT__product0 = VL_MULS_QQQ(64, 
                                                              VL_EXTENDS_QI(64,32, vlSelfRef.tb_fir_accelerator__DOT__dut__DOT__sample_in), 
                                                              VL_EXTENDS_QI(64,32, vlSelfRef.tb_fir_accelerator__DOT__dut__DOT__coeff0));
    tb_fir_accelerator__DOT__dut__DOT__product1 = VL_MULS_QQQ(64, 
                                                              VL_EXTENDS_QI(64,32, vlSelfRef.tb_fir_accelerator__DOT__dut__DOT__delay0), 
                                                              VL_EXTENDS_QI(64,32, vlSelfRef.tb_fir_accelerator__DOT__dut__DOT__coeff1));
    tb_fir_accelerator__DOT__dut__DOT__product2 = VL_MULS_QQQ(64, 
                                                              VL_EXTENDS_QI(64,32, vlSelfRef.tb_fir_accelerator__DOT__dut__DOT__delay1), 
                                                              VL_EXTENDS_QI(64,32, vlSelfRef.tb_fir_accelerator__DOT__dut__DOT__coeff2));
    tb_fir_accelerator__DOT__dut__DOT__product3 = VL_MULS_QQQ(64, 
                                                              VL_EXTENDS_QI(64,32, vlSelfRef.tb_fir_accelerator__DOT__dut__DOT__delay2), 
                                                              VL_EXTENDS_QI(64,32, vlSelfRef.tb_fir_accelerator__DOT__dut__DOT__coeff3));
    vlSelfRef.tb_fir_accelerator__DOT__dut__DOT__accumulator 
        = (((tb_fir_accelerator__DOT__dut__DOT__product0 
             + tb_fir_accelerator__DOT__dut__DOT__product1) 
            + tb_fir_accelerator__DOT__dut__DOT__product2) 
           + tb_fir_accelerator__DOT__dut__DOT__product3);
}

void Vtb_fir_accelerator___024root___timing_resume(Vtb_fir_accelerator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_fir_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir_accelerator___024root___timing_resume\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h243bddf6__0.resume(
                                                   "@(posedge tb_fir_accelerator.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h243bddb7__0.resume(
                                                   "@(negedge tb_fir_accelerator.clk)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_fir_accelerator___024root___timing_commit(Vtb_fir_accelerator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_fir_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir_accelerator___024root___timing_commit\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h243bddf6__0.commit(
                                                   "@(posedge tb_fir_accelerator.clk)");
    }
    if ((! (4ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h243bddb7__0.commit(
                                                   "@(negedge tb_fir_accelerator.clk)");
    }
}

void Vtb_fir_accelerator___024root___eval_triggers__act(Vtb_fir_accelerator___024root* vlSelf);

bool Vtb_fir_accelerator___024root___eval_phase__act(Vtb_fir_accelerator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_fir_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir_accelerator___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_fir_accelerator___024root___eval_triggers__act(vlSelf);
    Vtb_fir_accelerator___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_fir_accelerator___024root___timing_resume(vlSelf);
        Vtb_fir_accelerator___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_fir_accelerator___024root___eval_phase__nba(Vtb_fir_accelerator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_fir_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir_accelerator___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_fir_accelerator___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fir_accelerator___024root___dump_triggers__nba(Vtb_fir_accelerator___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fir_accelerator___024root___dump_triggers__act(Vtb_fir_accelerator___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_fir_accelerator___024root___eval(Vtb_fir_accelerator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_fir_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir_accelerator___024root___eval\n"); );
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
            Vtb_fir_accelerator___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_fir_accelerator.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_fir_accelerator___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/tb_fir_accelerator.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_fir_accelerator___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_fir_accelerator___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_fir_accelerator___024root___eval_debug_assertions(Vtb_fir_accelerator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_fir_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir_accelerator___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
