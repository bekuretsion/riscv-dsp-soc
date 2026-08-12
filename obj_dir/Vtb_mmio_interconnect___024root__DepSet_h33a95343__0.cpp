// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mmio_interconnect.h for the primary calling header

#include "Vtb_mmio_interconnect__pch.h"
#include "Vtb_mmio_interconnect___024root.h"

VlCoroutine Vtb_mmio_interconnect___024root___eval_initial__TOP__Vtiming__0(Vtb_mmio_interconnect___024root* vlSelf);
VlCoroutine Vtb_mmio_interconnect___024root___eval_initial__TOP__Vtiming__1(Vtb_mmio_interconnect___024root* vlSelf);

void Vtb_mmio_interconnect___024root___eval_initial(Vtb_mmio_interconnect___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_mmio_interconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mmio_interconnect___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_mmio_interconnect___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_mmio_interconnect___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_mmio_interconnect__DOT__clk__0 
        = vlSelfRef.tb_mmio_interconnect__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vtb_mmio_interconnect___024root___eval_initial__TOP__Vtiming__0(Vtb_mmio_interconnect___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_mmio_interconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mmio_interconnect___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_mmio_interconnect__DOT__clk = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/tb_mmio_interconnect.sv", 
                                             41);
        vlSelfRef.tb_mmio_interconnect__DOT__clk = 
            (1U & (~ (IData)(vlSelfRef.tb_mmio_interconnect__DOT__clk)));
    }
}

void Vtb_mmio_interconnect___024root___act_comb__TOP__0(Vtb_mmio_interconnect___024root* vlSelf);

void Vtb_mmio_interconnect___024root___eval_act(Vtb_mmio_interconnect___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_mmio_interconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mmio_interconnect___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((7ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_mmio_interconnect___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_mmio_interconnect___024root___act_comb__TOP__0(Vtb_mmio_interconnect___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_mmio_interconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mmio_interconnect___024root___act_comb__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ tb_mmio_interconnect__DOT__dut__DOT__fir_read_data;
    tb_mmio_interconnect__DOT__dut__DOT__fir_read_data = 0;
    // Body
    vlSelfRef.tb_mmio_interconnect__DOT__fir_selected 
        = (0x4000U == (vlSelfRef.tb_mmio_interconnect__DOT__address 
                       >> 0x10U));
    vlSelfRef.tb_mmio_interconnect__DOT__dut__DOT__fir_write_en 
        = ((IData)(vlSelfRef.tb_mmio_interconnect__DOT__mem_write) 
           & (0x4000U == (vlSelfRef.tb_mmio_interconnect__DOT__address 
                          >> 0x10U)));
    tb_mmio_interconnect__DOT__dut__DOT__fir_read_data = 0U;
    if (((IData)(vlSelfRef.tb_mmio_interconnect__DOT__mem_read) 
         & (0x4000U == (vlSelfRef.tb_mmio_interconnect__DOT__address 
                        >> 0x10U)))) {
        tb_mmio_interconnect__DOT__dut__DOT__fir_read_data 
            = ((0x10U & vlSelfRef.tb_mmio_interconnect__DOT__address)
                ? ((8U & vlSelfRef.tb_mmio_interconnect__DOT__address)
                    ? ((4U & vlSelfRef.tb_mmio_interconnect__DOT__address)
                        ? ((2U & vlSelfRef.tb_mmio_interconnect__DOT__address)
                            ? 0U : ((1U & vlSelfRef.tb_mmio_interconnect__DOT__address)
                                     ? 0U : (IData)(vlSelfRef.tb_mmio_interconnect__DOT__fir_done)))
                        : ((2U & vlSelfRef.tb_mmio_interconnect__DOT__address)
                            ? 0U : ((1U & vlSelfRef.tb_mmio_interconnect__DOT__address)
                                     ? 0U : vlSelfRef.tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__result)))
                    : ((4U & vlSelfRef.tb_mmio_interconnect__DOT__address)
                        ? 0U : ((2U & vlSelfRef.tb_mmio_interconnect__DOT__address)
                                 ? 0U : ((1U & vlSelfRef.tb_mmio_interconnect__DOT__address)
                                          ? 0U : vlSelfRef.tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__coeff3))))
                : ((8U & vlSelfRef.tb_mmio_interconnect__DOT__address)
                    ? ((4U & vlSelfRef.tb_mmio_interconnect__DOT__address)
                        ? ((2U & vlSelfRef.tb_mmio_interconnect__DOT__address)
                            ? 0U : ((1U & vlSelfRef.tb_mmio_interconnect__DOT__address)
                                     ? 0U : vlSelfRef.tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__coeff2))
                        : ((2U & vlSelfRef.tb_mmio_interconnect__DOT__address)
                            ? 0U : ((1U & vlSelfRef.tb_mmio_interconnect__DOT__address)
                                     ? 0U : vlSelfRef.tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__coeff1)))
                    : ((4U & vlSelfRef.tb_mmio_interconnect__DOT__address)
                        ? ((2U & vlSelfRef.tb_mmio_interconnect__DOT__address)
                            ? 0U : ((1U & vlSelfRef.tb_mmio_interconnect__DOT__address)
                                     ? 0U : vlSelfRef.tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__coeff0))
                        : ((2U & vlSelfRef.tb_mmio_interconnect__DOT__address)
                            ? 0U : ((1U & vlSelfRef.tb_mmio_interconnect__DOT__address)
                                     ? 0U : vlSelfRef.tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__sample_in)))));
    }
    vlSelfRef.tb_mmio_interconnect__DOT__read_data 
        = ((0x4000U == (vlSelfRef.tb_mmio_interconnect__DOT__address 
                        >> 0x10U)) ? tb_mmio_interconnect__DOT__dut__DOT__fir_read_data
            : vlSelfRef.tb_mmio_interconnect__DOT__dut__DOT__ram__DOT__memory
           [(0xffU & (vlSelfRef.tb_mmio_interconnect__DOT__address 
                      >> 2U))]);
}

void Vtb_mmio_interconnect___024root___nba_sequent__TOP__0(Vtb_mmio_interconnect___024root* vlSelf);

void Vtb_mmio_interconnect___024root___eval_nba(Vtb_mmio_interconnect___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_mmio_interconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mmio_interconnect___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_mmio_interconnect___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_mmio_interconnect___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_mmio_interconnect___024root___nba_sequent__TOP__0(Vtb_mmio_interconnect___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_mmio_interconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mmio_interconnect___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*63:0*/ tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__product0;
    tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__product0 = 0;
    QData/*63:0*/ tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__product1;
    tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__product1 = 0;
    QData/*63:0*/ tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__product2;
    tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__product2 = 0;
    QData/*63:0*/ tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__product3;
    tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__product3 = 0;
    IData/*31:0*/ __VdlyVal__tb_mmio_interconnect__DOT__dut__DOT__ram__DOT__memory__v0;
    __VdlyVal__tb_mmio_interconnect__DOT__dut__DOT__ram__DOT__memory__v0 = 0;
    CData/*7:0*/ __VdlyDim0__tb_mmio_interconnect__DOT__dut__DOT__ram__DOT__memory__v0;
    __VdlyDim0__tb_mmio_interconnect__DOT__dut__DOT__ram__DOT__memory__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_mmio_interconnect__DOT__dut__DOT__ram__DOT__memory__v0;
    __VdlySet__tb_mmio_interconnect__DOT__dut__DOT__ram__DOT__memory__v0 = 0;
    // Body
    __VdlySet__tb_mmio_interconnect__DOT__dut__DOT__ram__DOT__memory__v0 = 0U;
    if (((0x4000U != (vlSelfRef.tb_mmio_interconnect__DOT__address 
                      >> 0x10U)) & (IData)(vlSelfRef.tb_mmio_interconnect__DOT__mem_write))) {
        __VdlyVal__tb_mmio_interconnect__DOT__dut__DOT__ram__DOT__memory__v0 
            = vlSelfRef.tb_mmio_interconnect__DOT__write_data;
        __VdlyDim0__tb_mmio_interconnect__DOT__dut__DOT__ram__DOT__memory__v0 
            = (0xffU & (vlSelfRef.tb_mmio_interconnect__DOT__address 
                        >> 2U));
        __VdlySet__tb_mmio_interconnect__DOT__dut__DOT__ram__DOT__memory__v0 = 1U;
    }
    if (vlSelfRef.tb_mmio_interconnect__DOT__reset) {
        vlSelfRef.tb_mmio_interconnect__DOT__fir_done = 0U;
        vlSelfRef.tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__result = 0U;
        vlSelfRef.tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__coeff0 = 0U;
        vlSelfRef.tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__coeff1 = 0U;
        vlSelfRef.tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__coeff2 = 0U;
        vlSelfRef.tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__coeff3 = 0U;
        vlSelfRef.tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__delay2 = 0U;
        vlSelfRef.tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__delay1 = 0U;
        vlSelfRef.tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__delay0 = 0U;
        vlSelfRef.tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__sample_in = 0U;
    } else {
        vlSelfRef.tb_mmio_interconnect__DOT__fir_done = 0U;
        if (vlSelfRef.tb_mmio_interconnect__DOT__dut__DOT__fir_write_en) {
            if ((0x10U & vlSelfRef.tb_mmio_interconnect__DOT__address)) {
                if ((1U & (~ (vlSelfRef.tb_mmio_interconnect__DOT__address 
                              >> 3U)))) {
                    if ((4U & vlSelfRef.tb_mmio_interconnect__DOT__address)) {
                        if ((1U & (~ (vlSelfRef.tb_mmio_interconnect__DOT__address 
                                      >> 1U)))) {
                            if ((1U & (~ vlSelfRef.tb_mmio_interconnect__DOT__address))) {
                                if ((1U & vlSelfRef.tb_mmio_interconnect__DOT__write_data)) {
                                    vlSelfRef.tb_mmio_interconnect__DOT__fir_done = 1U;
                                    vlSelfRef.tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__result 
                                        = (IData)(vlSelfRef.tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__accumulator);
                                    vlSelfRef.tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__delay2 
                                        = vlSelfRef.tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__delay1;
                                    vlSelfRef.tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__delay1 
                                        = vlSelfRef.tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__delay0;
                                    vlSelfRef.tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__delay0 
                                        = vlSelfRef.tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__sample_in;
                                }
                            }
                        }
                    }
                    if ((1U & (~ (vlSelfRef.tb_mmio_interconnect__DOT__address 
                                  >> 2U)))) {
                        if ((1U & (~ (vlSelfRef.tb_mmio_interconnect__DOT__address 
                                      >> 1U)))) {
                            if ((1U & (~ vlSelfRef.tb_mmio_interconnect__DOT__address))) {
                                vlSelfRef.tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__coeff3 
                                    = vlSelfRef.tb_mmio_interconnect__DOT__write_data;
                            }
                        }
                    }
                }
            }
            if ((1U & (~ (vlSelfRef.tb_mmio_interconnect__DOT__address 
                          >> 4U)))) {
                if ((1U & (~ (vlSelfRef.tb_mmio_interconnect__DOT__address 
                              >> 3U)))) {
                    if ((4U & vlSelfRef.tb_mmio_interconnect__DOT__address)) {
                        if ((1U & (~ (vlSelfRef.tb_mmio_interconnect__DOT__address 
                                      >> 1U)))) {
                            if ((1U & (~ vlSelfRef.tb_mmio_interconnect__DOT__address))) {
                                vlSelfRef.tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__coeff0 
                                    = vlSelfRef.tb_mmio_interconnect__DOT__write_data;
                            }
                        }
                    }
                    if ((1U & (~ (vlSelfRef.tb_mmio_interconnect__DOT__address 
                                  >> 2U)))) {
                        if ((1U & (~ (vlSelfRef.tb_mmio_interconnect__DOT__address 
                                      >> 1U)))) {
                            if ((1U & (~ vlSelfRef.tb_mmio_interconnect__DOT__address))) {
                                vlSelfRef.tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__sample_in 
                                    = vlSelfRef.tb_mmio_interconnect__DOT__write_data;
                            }
                        }
                    }
                }
                if ((8U & vlSelfRef.tb_mmio_interconnect__DOT__address)) {
                    if ((1U & (~ (vlSelfRef.tb_mmio_interconnect__DOT__address 
                                  >> 2U)))) {
                        if ((1U & (~ (vlSelfRef.tb_mmio_interconnect__DOT__address 
                                      >> 1U)))) {
                            if ((1U & (~ vlSelfRef.tb_mmio_interconnect__DOT__address))) {
                                vlSelfRef.tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__coeff1 
                                    = vlSelfRef.tb_mmio_interconnect__DOT__write_data;
                            }
                        }
                    }
                    if ((4U & vlSelfRef.tb_mmio_interconnect__DOT__address)) {
                        if ((1U & (~ (vlSelfRef.tb_mmio_interconnect__DOT__address 
                                      >> 1U)))) {
                            if ((1U & (~ vlSelfRef.tb_mmio_interconnect__DOT__address))) {
                                vlSelfRef.tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__coeff2 
                                    = vlSelfRef.tb_mmio_interconnect__DOT__write_data;
                            }
                        }
                    }
                }
            }
        }
    }
    if (__VdlySet__tb_mmio_interconnect__DOT__dut__DOT__ram__DOT__memory__v0) {
        vlSelfRef.tb_mmio_interconnect__DOT__dut__DOT__ram__DOT__memory[__VdlyDim0__tb_mmio_interconnect__DOT__dut__DOT__ram__DOT__memory__v0] 
            = __VdlyVal__tb_mmio_interconnect__DOT__dut__DOT__ram__DOT__memory__v0;
    }
    tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__product0 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelfRef.tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__sample_in), 
                      VL_EXTENDS_QI(64,32, vlSelfRef.tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__coeff0));
    tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__product1 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelfRef.tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__delay0), 
                      VL_EXTENDS_QI(64,32, vlSelfRef.tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__coeff1));
    tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__product2 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelfRef.tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__delay1), 
                      VL_EXTENDS_QI(64,32, vlSelfRef.tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__coeff2));
    tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__product3 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelfRef.tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__delay2), 
                      VL_EXTENDS_QI(64,32, vlSelfRef.tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__coeff3));
    vlSelfRef.tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__accumulator 
        = (((tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__product0 
             + tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__product1) 
            + tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__product2) 
           + tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__product3);
}

void Vtb_mmio_interconnect___024root___timing_resume(Vtb_mmio_interconnect___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_mmio_interconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mmio_interconnect___024root___timing_resume\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h39df3347__0.resume(
                                                   "@(posedge tb_mmio_interconnect.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h39df3306__0.resume(
                                                   "@(negedge tb_mmio_interconnect.clk)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_mmio_interconnect___024root___timing_commit(Vtb_mmio_interconnect___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_mmio_interconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mmio_interconnect___024root___timing_commit\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h39df3347__0.commit(
                                                   "@(posedge tb_mmio_interconnect.clk)");
    }
    if ((! (4ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h39df3306__0.commit(
                                                   "@(negedge tb_mmio_interconnect.clk)");
    }
}

void Vtb_mmio_interconnect___024root___eval_triggers__act(Vtb_mmio_interconnect___024root* vlSelf);

bool Vtb_mmio_interconnect___024root___eval_phase__act(Vtb_mmio_interconnect___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_mmio_interconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mmio_interconnect___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_mmio_interconnect___024root___eval_triggers__act(vlSelf);
    Vtb_mmio_interconnect___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_mmio_interconnect___024root___timing_resume(vlSelf);
        Vtb_mmio_interconnect___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_mmio_interconnect___024root___eval_phase__nba(Vtb_mmio_interconnect___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_mmio_interconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mmio_interconnect___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_mmio_interconnect___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_mmio_interconnect___024root___dump_triggers__nba(Vtb_mmio_interconnect___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_mmio_interconnect___024root___dump_triggers__act(Vtb_mmio_interconnect___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_mmio_interconnect___024root___eval(Vtb_mmio_interconnect___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_mmio_interconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mmio_interconnect___024root___eval\n"); );
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
            Vtb_mmio_interconnect___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_mmio_interconnect.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_mmio_interconnect___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/tb_mmio_interconnect.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_mmio_interconnect___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_mmio_interconnect___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_mmio_interconnect___024root___eval_debug_assertions(Vtb_mmio_interconnect___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_mmio_interconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mmio_interconnect___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
