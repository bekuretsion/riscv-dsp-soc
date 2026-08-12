// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mmio_interconnect.h for the primary calling header

#include "Vtb_mmio_interconnect__pch.h"
#include "Vtb_mmio_interconnect___024root.h"

VL_ATTR_COLD void Vtb_mmio_interconnect___024root___eval_static(Vtb_mmio_interconnect___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_mmio_interconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mmio_interconnect___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_mmio_interconnect___024root___eval_final(Vtb_mmio_interconnect___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_mmio_interconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mmio_interconnect___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_mmio_interconnect___024root___dump_triggers__stl(Vtb_mmio_interconnect___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_mmio_interconnect___024root___eval_phase__stl(Vtb_mmio_interconnect___024root* vlSelf);

VL_ATTR_COLD void Vtb_mmio_interconnect___024root___eval_settle(Vtb_mmio_interconnect___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_mmio_interconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mmio_interconnect___024root___eval_settle\n"); );
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
            Vtb_mmio_interconnect___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_mmio_interconnect.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_mmio_interconnect___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_mmio_interconnect___024root___dump_triggers__stl(Vtb_mmio_interconnect___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_mmio_interconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mmio_interconnect___024root___dump_triggers__stl\n"); );
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

VL_ATTR_COLD void Vtb_mmio_interconnect___024root___stl_sequent__TOP__0(Vtb_mmio_interconnect___024root* vlSelf);

VL_ATTR_COLD void Vtb_mmio_interconnect___024root___eval_stl(Vtb_mmio_interconnect___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_mmio_interconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mmio_interconnect___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_mmio_interconnect___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_mmio_interconnect___024root___stl_sequent__TOP__0(Vtb_mmio_interconnect___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_mmio_interconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mmio_interconnect___024root___stl_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ tb_mmio_interconnect__DOT__dut__DOT__fir_read_data;
    tb_mmio_interconnect__DOT__dut__DOT__fir_read_data = 0;
    QData/*63:0*/ tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__product0;
    tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__product0 = 0;
    QData/*63:0*/ tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__product1;
    tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__product1 = 0;
    QData/*63:0*/ tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__product2;
    tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__product2 = 0;
    QData/*63:0*/ tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__product3;
    tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__product3 = 0;
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
    vlSelfRef.tb_mmio_interconnect__DOT__read_data 
        = ((0x4000U == (vlSelfRef.tb_mmio_interconnect__DOT__address 
                        >> 0x10U)) ? tb_mmio_interconnect__DOT__dut__DOT__fir_read_data
            : vlSelfRef.tb_mmio_interconnect__DOT__dut__DOT__ram__DOT__memory
           [(0xffU & (vlSelfRef.tb_mmio_interconnect__DOT__address 
                      >> 2U))]);
}

VL_ATTR_COLD void Vtb_mmio_interconnect___024root___eval_triggers__stl(Vtb_mmio_interconnect___024root* vlSelf);

VL_ATTR_COLD bool Vtb_mmio_interconnect___024root___eval_phase__stl(Vtb_mmio_interconnect___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_mmio_interconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mmio_interconnect___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_mmio_interconnect___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_mmio_interconnect___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_mmio_interconnect___024root___dump_triggers__act(Vtb_mmio_interconnect___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_mmio_interconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mmio_interconnect___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_mmio_interconnect.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge tb_mmio_interconnect.clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_mmio_interconnect___024root___dump_triggers__nba(Vtb_mmio_interconnect___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_mmio_interconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mmio_interconnect___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_mmio_interconnect.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge tb_mmio_interconnect.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_mmio_interconnect___024root___ctor_var_reset(Vtb_mmio_interconnect___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_mmio_interconnect__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mmio_interconnect___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_mmio_interconnect__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_mmio_interconnect__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->tb_mmio_interconnect__DOT__mem_write = VL_RAND_RESET_I(1);
    vlSelf->tb_mmio_interconnect__DOT__mem_read = VL_RAND_RESET_I(1);
    vlSelf->tb_mmio_interconnect__DOT__address = VL_RAND_RESET_I(32);
    vlSelf->tb_mmio_interconnect__DOT__write_data = VL_RAND_RESET_I(32);
    vlSelf->tb_mmio_interconnect__DOT__read_data = VL_RAND_RESET_I(32);
    vlSelf->tb_mmio_interconnect__DOT__fir_selected = VL_RAND_RESET_I(1);
    vlSelf->tb_mmio_interconnect__DOT__fir_done = VL_RAND_RESET_I(1);
    vlSelf->tb_mmio_interconnect__DOT__dut__DOT__fir_write_en = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_mmio_interconnect__DOT__dut__DOT__ram__DOT__memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__sample_in = VL_RAND_RESET_I(32);
    vlSelf->tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__coeff0 = VL_RAND_RESET_I(32);
    vlSelf->tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__coeff1 = VL_RAND_RESET_I(32);
    vlSelf->tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__coeff2 = VL_RAND_RESET_I(32);
    vlSelf->tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__coeff3 = VL_RAND_RESET_I(32);
    vlSelf->tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__delay0 = VL_RAND_RESET_I(32);
    vlSelf->tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__delay1 = VL_RAND_RESET_I(32);
    vlSelf->tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__delay2 = VL_RAND_RESET_I(32);
    vlSelf->tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__accumulator = VL_RAND_RESET_Q(64);
    vlSelf->tb_mmio_interconnect__DOT__dut__DOT__fir__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__tb_mmio_interconnect__DOT__clk__0 = VL_RAND_RESET_I(1);
}
