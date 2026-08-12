// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fir_accelerator.h for the primary calling header

#include "Vtb_fir_accelerator__pch.h"
#include "Vtb_fir_accelerator___024root.h"

VL_ATTR_COLD void Vtb_fir_accelerator___024root___eval_static(Vtb_fir_accelerator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_fir_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir_accelerator___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_fir_accelerator___024root___eval_final(Vtb_fir_accelerator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_fir_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir_accelerator___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fir_accelerator___024root___dump_triggers__stl(Vtb_fir_accelerator___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_fir_accelerator___024root___eval_phase__stl(Vtb_fir_accelerator___024root* vlSelf);

VL_ATTR_COLD void Vtb_fir_accelerator___024root___eval_settle(Vtb_fir_accelerator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_fir_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir_accelerator___024root___eval_settle\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtb_fir_accelerator___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_fir_accelerator.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_fir_accelerator___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fir_accelerator___024root___dump_triggers__stl(Vtb_fir_accelerator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_fir_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir_accelerator___024root___dump_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_fir_accelerator___024root___stl_sequent__TOP__0(Vtb_fir_accelerator___024root* vlSelf);

VL_ATTR_COLD void Vtb_fir_accelerator___024root___eval_stl(Vtb_fir_accelerator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_fir_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir_accelerator___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_fir_accelerator___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_fir_accelerator___024root___stl_sequent__TOP__0(Vtb_fir_accelerator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_fir_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir_accelerator___024root___stl_sequent__TOP__0\n"); );
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

VL_ATTR_COLD void Vtb_fir_accelerator___024root___eval_triggers__stl(Vtb_fir_accelerator___024root* vlSelf);

VL_ATTR_COLD bool Vtb_fir_accelerator___024root___eval_phase__stl(Vtb_fir_accelerator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_fir_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir_accelerator___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_fir_accelerator___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_fir_accelerator___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fir_accelerator___024root___dump_triggers__act(Vtb_fir_accelerator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_fir_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir_accelerator___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_fir_accelerator.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge tb_fir_accelerator.clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fir_accelerator___024root___dump_triggers__nba(Vtb_fir_accelerator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_fir_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir_accelerator___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_fir_accelerator.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge tb_fir_accelerator.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_fir_accelerator___024root___ctor_var_reset(Vtb_fir_accelerator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_fir_accelerator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir_accelerator___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_fir_accelerator__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_fir_accelerator__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->tb_fir_accelerator__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->tb_fir_accelerator__DOT__read_en = VL_RAND_RESET_I(1);
    vlSelf->tb_fir_accelerator__DOT__address = VL_RAND_RESET_I(5);
    vlSelf->tb_fir_accelerator__DOT__write_data = VL_RAND_RESET_I(32);
    vlSelf->tb_fir_accelerator__DOT__read_data = VL_RAND_RESET_I(32);
    vlSelf->tb_fir_accelerator__DOT__done = VL_RAND_RESET_I(1);
    vlSelf->tb_fir_accelerator__DOT__dut__DOT__sample_in = VL_RAND_RESET_I(32);
    vlSelf->tb_fir_accelerator__DOT__dut__DOT__coeff0 = VL_RAND_RESET_I(32);
    vlSelf->tb_fir_accelerator__DOT__dut__DOT__coeff1 = VL_RAND_RESET_I(32);
    vlSelf->tb_fir_accelerator__DOT__dut__DOT__coeff2 = VL_RAND_RESET_I(32);
    vlSelf->tb_fir_accelerator__DOT__dut__DOT__coeff3 = VL_RAND_RESET_I(32);
    vlSelf->tb_fir_accelerator__DOT__dut__DOT__delay0 = VL_RAND_RESET_I(32);
    vlSelf->tb_fir_accelerator__DOT__dut__DOT__delay1 = VL_RAND_RESET_I(32);
    vlSelf->tb_fir_accelerator__DOT__dut__DOT__delay2 = VL_RAND_RESET_I(32);
    vlSelf->tb_fir_accelerator__DOT__dut__DOT__accumulator = VL_RAND_RESET_Q(64);
    vlSelf->tb_fir_accelerator__DOT__dut__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__tb_fir_accelerator__DOT__clk__0 = VL_RAND_RESET_I(1);
}
