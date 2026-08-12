// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fir_fair_benchmark.h for the primary calling header

#include "Vtb_fir_fair_benchmark__pch.h"
#include "Vtb_fir_fair_benchmark___024root.h"

VL_ATTR_COLD void Vtb_fir_fair_benchmark___024root___eval_initial__TOP(Vtb_fir_fair_benchmark___024root* vlSelf);
VlCoroutine Vtb_fir_fair_benchmark___024root___eval_initial__TOP__Vtiming__0(Vtb_fir_fair_benchmark___024root* vlSelf);
VlCoroutine Vtb_fir_fair_benchmark___024root___eval_initial__TOP__Vtiming__1(Vtb_fir_fair_benchmark___024root* vlSelf);

void Vtb_fir_fair_benchmark___024root___eval_initial(Vtb_fir_fair_benchmark___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_fir_fair_benchmark__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir_fair_benchmark___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_fir_fair_benchmark___024root___eval_initial__TOP(vlSelf);
    Vtb_fir_fair_benchmark___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_fir_fair_benchmark___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_fir_fair_benchmark__DOT__clk__0 
        = vlSelfRef.tb_fir_fair_benchmark__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vtb_fir_fair_benchmark___024root___eval_initial__TOP__Vtiming__0(Vtb_fir_fair_benchmark___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_fir_fair_benchmark__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir_fair_benchmark___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fir_fair_benchmark__DOT__clk = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/tb_fir_fair_benchmark.sv", 
                                             48);
        vlSelfRef.tb_fir_fair_benchmark__DOT__clk = 
            (1U & (~ (IData)(vlSelfRef.tb_fir_fair_benchmark__DOT__clk)));
    }
}

void Vtb_fir_fair_benchmark___024root___eval_act(Vtb_fir_fair_benchmark___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_fir_fair_benchmark__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir_fair_benchmark___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtb_fir_fair_benchmark___024root___nba_sequent__TOP__0(Vtb_fir_fair_benchmark___024root* vlSelf);

void Vtb_fir_fair_benchmark___024root___eval_nba(Vtb_fir_fair_benchmark___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_fir_fair_benchmark__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir_fair_benchmark___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_fir_fair_benchmark___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_fir_fair_benchmark___024root___nba_sequent__TOP__0(Vtb_fir_fair_benchmark___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_fir_fair_benchmark__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir_fair_benchmark___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ tb_fir_fair_benchmark__DOT__instruction;
    tb_fir_fair_benchmark__DOT__instruction = 0;
    CData/*4:0*/ tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__rs1_addr;
    tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__rs1_addr = 0;
    CData/*4:0*/ tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__rs2_addr;
    tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__rs2_addr = 0;
    CData/*0:0*/ tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__alu_src;
    tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__alu_src = 0;
    CData/*3:0*/ tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__alu_ctrl;
    tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__alu_ctrl = 0;
    IData/*31:0*/ tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__rs1_data;
    tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__rs1_data = 0;
    CData/*6:0*/ tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode;
    tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode = 0;
    CData/*2:0*/ tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__funct3;
    tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__funct3 = 0;
    CData/*0:0*/ tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT____VdfgRegularize_h662e6b9b_0_0;
    tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT____VdfgRegularize_h662e6b9b_0_0 = 0;
    IData/*31:0*/ tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__alu_b;
    tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__alu_b = 0;
    QData/*63:0*/ tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__product0;
    tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__product0 = 0;
    QData/*63:0*/ tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__product1;
    tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__product1 = 0;
    QData/*63:0*/ tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__product2;
    tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__product2 = 0;
    QData/*63:0*/ tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__product3;
    tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__product3 = 0;
    IData/*31:0*/ __VdlyVal__tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers__v0;
    __VdlyVal__tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers__v0 = 0;
    CData/*4:0*/ __VdlyDim0__tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers__v0;
    __VdlyDim0__tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers__v0;
    __VdlySet__tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__ram__DOT__memory__v0;
    __VdlyVal__tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__ram__DOT__memory__v0 = 0;
    CData/*7:0*/ __VdlyDim0__tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__ram__DOT__memory__v0;
    __VdlyDim0__tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__ram__DOT__memory__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__ram__DOT__memory__v0;
    __VdlySet__tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__ram__DOT__memory__v0 = 0;
    // Body
    __VdlySet__tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__ram__DOT__memory__v0 = 0U;
    __VdlySet__tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers__v0 = 0U;
    if (((0x4000U != (vlSelfRef.tb_fir_fair_benchmark__DOT__alu_result 
                      >> 0x10U)) & (IData)(vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__mem_write))) {
        __VdlyVal__tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__ram__DOT__memory__v0 
            = vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__rs2_data;
        __VdlyDim0__tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__ram__DOT__memory__v0 
            = (0xffU & (vlSelfRef.tb_fir_fair_benchmark__DOT__alu_result 
                        >> 2U));
        __VdlySet__tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__ram__DOT__memory__v0 = 1U;
    }
    if (((IData)(vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__reg_write) 
         & (0U != (IData)(vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__rd_addr)))) {
        __VdlyVal__tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers__v0 
            = ((IData)(vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__jump)
                ? ((IData)(4U) + vlSelfRef.tb_fir_fair_benchmark__DOT__pc)
                : ((IData)(vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__lui)
                    ? vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__immediate
                    : ((IData)(vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__mem_to_reg)
                        ? ((0x4000U == (vlSelfRef.tb_fir_fair_benchmark__DOT__alu_result 
                                        >> 0x10U)) ? vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir_read_data
                            : vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__ram__DOT__memory
                           [(0xffU & (vlSelfRef.tb_fir_fair_benchmark__DOT__alu_result 
                                      >> 2U))]) : vlSelfRef.tb_fir_fair_benchmark__DOT__alu_result)));
        __VdlyDim0__tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers__v0 
            = vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__rd_addr;
        __VdlySet__tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers__v0 = 1U;
    }
    if (vlSelfRef.tb_fir_fair_benchmark__DOT__reset) {
        vlSelfRef.tb_fir_fair_benchmark__DOT__pc = 0U;
        vlSelfRef.tb_fir_fair_benchmark__DOT__fir_done = 0U;
        vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__result = 0U;
        vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__coeff0 = 0U;
        vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__coeff1 = 0U;
        vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__coeff2 = 0U;
        vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__coeff3 = 0U;
        vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__delay2 = 0U;
        vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__delay1 = 0U;
        vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__delay0 = 0U;
        vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__sample_in = 0U;
    } else {
        vlSelfRef.tb_fir_fair_benchmark__DOT__pc = 
            ((IData)(vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__jump)
              ? vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__branch_target
              : (((1U == (IData)(vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__branch_type))
                   ? (0U == vlSelfRef.tb_fir_fair_benchmark__DOT__alu_result)
                   : ((2U == (IData)(vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__branch_type)) 
                      && (0U != vlSelfRef.tb_fir_fair_benchmark__DOT__alu_result)))
                  ? vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__branch_target
                  : ((IData)(4U) + vlSelfRef.tb_fir_fair_benchmark__DOT__pc)));
        vlSelfRef.tb_fir_fair_benchmark__DOT__fir_done = 0U;
        if (vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir_write_en) {
            if ((0x10U & vlSelfRef.tb_fir_fair_benchmark__DOT__alu_result)) {
                if ((1U & (~ (vlSelfRef.tb_fir_fair_benchmark__DOT__alu_result 
                              >> 3U)))) {
                    if ((4U & vlSelfRef.tb_fir_fair_benchmark__DOT__alu_result)) {
                        if ((1U & (~ (vlSelfRef.tb_fir_fair_benchmark__DOT__alu_result 
                                      >> 1U)))) {
                            if ((1U & (~ vlSelfRef.tb_fir_fair_benchmark__DOT__alu_result))) {
                                if ((1U & vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__rs2_data)) {
                                    vlSelfRef.tb_fir_fair_benchmark__DOT__fir_done = 1U;
                                    vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__result 
                                        = (IData)(vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__accumulator);
                                    vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__delay2 
                                        = vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__delay1;
                                    vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__delay1 
                                        = vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__delay0;
                                    vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__delay0 
                                        = vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__sample_in;
                                }
                            }
                        }
                    }
                    if ((1U & (~ (vlSelfRef.tb_fir_fair_benchmark__DOT__alu_result 
                                  >> 2U)))) {
                        if ((1U & (~ (vlSelfRef.tb_fir_fair_benchmark__DOT__alu_result 
                                      >> 1U)))) {
                            if ((1U & (~ vlSelfRef.tb_fir_fair_benchmark__DOT__alu_result))) {
                                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__coeff3 
                                    = vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__rs2_data;
                            }
                        }
                    }
                }
            }
            if ((1U & (~ (vlSelfRef.tb_fir_fair_benchmark__DOT__alu_result 
                          >> 4U)))) {
                if ((1U & (~ (vlSelfRef.tb_fir_fair_benchmark__DOT__alu_result 
                              >> 3U)))) {
                    if ((4U & vlSelfRef.tb_fir_fair_benchmark__DOT__alu_result)) {
                        if ((1U & (~ (vlSelfRef.tb_fir_fair_benchmark__DOT__alu_result 
                                      >> 1U)))) {
                            if ((1U & (~ vlSelfRef.tb_fir_fair_benchmark__DOT__alu_result))) {
                                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__coeff0 
                                    = vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__rs2_data;
                            }
                        }
                    }
                    if ((1U & (~ (vlSelfRef.tb_fir_fair_benchmark__DOT__alu_result 
                                  >> 2U)))) {
                        if ((1U & (~ (vlSelfRef.tb_fir_fair_benchmark__DOT__alu_result 
                                      >> 1U)))) {
                            if ((1U & (~ vlSelfRef.tb_fir_fair_benchmark__DOT__alu_result))) {
                                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__sample_in 
                                    = vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__rs2_data;
                            }
                        }
                    }
                }
                if ((8U & vlSelfRef.tb_fir_fair_benchmark__DOT__alu_result)) {
                    if ((1U & (~ (vlSelfRef.tb_fir_fair_benchmark__DOT__alu_result 
                                  >> 2U)))) {
                        if ((1U & (~ (vlSelfRef.tb_fir_fair_benchmark__DOT__alu_result 
                                      >> 1U)))) {
                            if ((1U & (~ vlSelfRef.tb_fir_fair_benchmark__DOT__alu_result))) {
                                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__coeff1 
                                    = vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__rs2_data;
                            }
                        }
                    }
                    if ((4U & vlSelfRef.tb_fir_fair_benchmark__DOT__alu_result)) {
                        if ((1U & (~ (vlSelfRef.tb_fir_fair_benchmark__DOT__alu_result 
                                      >> 1U)))) {
                            if ((1U & (~ vlSelfRef.tb_fir_fair_benchmark__DOT__alu_result))) {
                                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__coeff2 
                                    = vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__rs2_data;
                            }
                        }
                    }
                }
            }
        }
    }
    if (__VdlySet__tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__ram__DOT__memory__v0) {
        vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__ram__DOT__memory[__VdlyDim0__tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__ram__DOT__memory__v0] 
            = __VdlyVal__tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__ram__DOT__memory__v0;
    }
    if (__VdlySet__tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers__v0) {
        vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers[__VdlyDim0__tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers__v0] 
            = __VdlyVal__tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers__v0;
    }
    vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__rd_addr 
        = (0x1fU & (vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__imem__DOT__memory
                    [(0xffU & (vlSelfRef.tb_fir_fair_benchmark__DOT__pc 
                               >> 2U))] >> 7U));
    tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__rs1_addr 
        = (0x1fU & (vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__imem__DOT__memory
                    [(0xffU & (vlSelfRef.tb_fir_fair_benchmark__DOT__pc 
                               >> 2U))] >> 0xfU));
    tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT____VdfgRegularize_h662e6b9b_0_0 
        = (0x20U == (vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__imem__DOT__memory
                     [(0xffU & (vlSelfRef.tb_fir_fair_benchmark__DOT__pc 
                                >> 2U))] >> 0x19U));
    tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__rs2_addr 
        = (0x1fU & (vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__imem__DOT__memory
                    [(0xffU & (vlSelfRef.tb_fir_fair_benchmark__DOT__pc 
                               >> 2U))] >> 0x14U));
    tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__funct3 
        = (7U & (vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__imem__DOT__memory
                 [(0xffU & (vlSelfRef.tb_fir_fair_benchmark__DOT__pc 
                            >> 2U))] >> 0xcU));
    tb_fir_fair_benchmark__DOT__instruction = vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__imem__DOT__memory
        [(0xffU & (vlSelfRef.tb_fir_fair_benchmark__DOT__pc 
                   >> 2U))];
    tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode 
        = (0x7fU & vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__imem__DOT__memory
           [(0xffU & (vlSelfRef.tb_fir_fair_benchmark__DOT__pc 
                      >> 2U))]);
    tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__rs1_data 
        = ((0U == (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__rs1_addr))
            ? 0U : vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
           [tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__rs1_addr]);
    vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__reg_write = 0U;
    vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__jump = 0U;
    vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__lui = 0U;
    vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__branch_type = 0U;
    vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__mem_write = 0U;
    vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__mem_to_reg = 0U;
    tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__alu_ctrl = 0U;
    tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__alu_src = 0U;
    vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__immediate = 0U;
    if ((0x40U & (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode))) {
        if ((0x20U & (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode))) {
            if ((0x10U & (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode))) {
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__reg_write = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__jump = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__lui = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__branch_type = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__mem_write = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__mem_to_reg = 0U;
                tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__alu_ctrl = 0U;
                tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__alu_src = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__immediate = 0U;
            } else if ((8U & (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode))) {
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__reg_write 
                    = ((1U & ((IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode) 
                              >> 2U)) && ((1U & ((IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode) 
                                                 >> 1U)) 
                                          && (1U & (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode))));
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__jump 
                    = ((1U & ((IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode) 
                              >> 2U)) && ((1U & ((IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode) 
                                                 >> 1U)) 
                                          && (1U & (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode))));
                if ((4U & (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode))) {
                    if ((2U & (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode))) {
                        if ((1U & (~ (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode)))) {
                            vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__lui = 0U;
                            vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__branch_type = 0U;
                            vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__mem_write = 0U;
                            vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__mem_to_reg = 0U;
                            tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__alu_ctrl = 0U;
                            tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__alu_src = 0U;
                        }
                        vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__immediate 
                            = ((1U & (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode))
                                ? ((((- (IData)((tb_fir_fair_benchmark__DOT__instruction 
                                                 >> 0x1fU))) 
                                     << 0x15U) | (0x100000U 
                                                  & (tb_fir_fair_benchmark__DOT__instruction 
                                                     >> 0xbU))) 
                                   | (((0xff000U & tb_fir_fair_benchmark__DOT__instruction) 
                                       | (0x800U & 
                                          (tb_fir_fair_benchmark__DOT__instruction 
                                           >> 9U))) 
                                      | (0x7feU & (tb_fir_fair_benchmark__DOT__instruction 
                                                   >> 0x14U))))
                                : 0U);
                    } else {
                        vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__lui = 0U;
                        vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__branch_type = 0U;
                        vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__mem_write = 0U;
                        vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__mem_to_reg = 0U;
                        tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__alu_ctrl = 0U;
                        tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__alu_src = 0U;
                        vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__immediate = 0U;
                    }
                } else {
                    vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__lui = 0U;
                    vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__branch_type = 0U;
                    vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__mem_write = 0U;
                    vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__mem_to_reg = 0U;
                    tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__alu_ctrl = 0U;
                    tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__alu_src = 0U;
                    vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__immediate = 0U;
                }
            } else if ((4U & (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode))) {
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__reg_write = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__jump = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__lui = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__branch_type = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__mem_write = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__mem_to_reg = 0U;
                tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__alu_ctrl = 0U;
                tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__alu_src = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__immediate = 0U;
            } else if ((2U & (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode))) {
                if ((1U & (~ (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode)))) {
                    vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__reg_write = 0U;
                    vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__jump = 0U;
                    vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__lui = 0U;
                    vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__mem_write = 0U;
                    vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__mem_to_reg = 0U;
                    tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__alu_src = 0U;
                }
                if ((1U & (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode))) {
                    vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__branch_type 
                        = ((0U == (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__funct3))
                            ? 1U : ((1U == (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__funct3))
                                     ? 2U : 0U));
                    tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__alu_ctrl = 1U;
                    vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__immediate 
                        = (((- (IData)((tb_fir_fair_benchmark__DOT__instruction 
                                        >> 0x1fU))) 
                            << 0xdU) | (((0x1000U & 
                                          (tb_fir_fair_benchmark__DOT__instruction 
                                           >> 0x13U)) 
                                         | (0x800U 
                                            & (tb_fir_fair_benchmark__DOT__instruction 
                                               << 4U))) 
                                        | ((0x7e0U 
                                            & (tb_fir_fair_benchmark__DOT__instruction 
                                               >> 0x14U)) 
                                           | (0x1eU 
                                              & (tb_fir_fair_benchmark__DOT__instruction 
                                                 >> 7U)))));
                } else {
                    vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__branch_type = 0U;
                    tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__alu_ctrl = 0U;
                    vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__immediate = 0U;
                }
            } else {
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__reg_write = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__jump = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__lui = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__branch_type = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__mem_write = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__mem_to_reg = 0U;
                tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__alu_ctrl = 0U;
                tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__alu_src = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__immediate = 0U;
            }
        } else {
            vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__reg_write = 0U;
            vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__jump = 0U;
            vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__lui = 0U;
            vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__branch_type = 0U;
            vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__mem_write = 0U;
            vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__mem_to_reg = 0U;
            tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__alu_ctrl = 0U;
            tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__alu_src = 0U;
            vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__immediate = 0U;
        }
    } else if ((0x20U & (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode))) {
        if ((0x10U & (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode))) {
            vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__reg_write 
                = ((1U & (~ ((IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode) 
                             >> 3U))) && ((4U & (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode))
                                           ? ((1U & 
                                               ((IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode) 
                                                >> 1U)) 
                                              && (1U 
                                                  & (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode)))
                                           : ((1U & 
                                               ((IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode) 
                                                >> 1U)) 
                                              && (1U 
                                                  & (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode)))));
            if ((8U & (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode))) {
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__jump = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__lui = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__branch_type = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__mem_write = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__mem_to_reg = 0U;
                tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__alu_ctrl = 0U;
                tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__alu_src = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__immediate = 0U;
            } else if ((4U & (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode))) {
                if ((2U & (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode))) {
                    if ((1U & (~ (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode)))) {
                        vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__jump = 0U;
                        vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__branch_type = 0U;
                        vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__mem_write = 0U;
                        vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__mem_to_reg = 0U;
                        tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__alu_ctrl = 0U;
                        tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__alu_src = 0U;
                    }
                    vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__immediate 
                        = ((1U & (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode))
                            ? (0xfffff000U & tb_fir_fair_benchmark__DOT__instruction)
                            : 0U);
                } else {
                    vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__jump = 0U;
                    vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__branch_type = 0U;
                    vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__mem_write = 0U;
                    vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__mem_to_reg = 0U;
                    tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__alu_ctrl = 0U;
                    tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__alu_src = 0U;
                    vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__immediate = 0U;
                }
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__lui 
                    = ((1U & ((IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode) 
                              >> 1U)) && (1U & (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode)));
            } else if ((2U & (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode))) {
                if ((1U & (~ (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode)))) {
                    vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__jump = 0U;
                    vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__lui = 0U;
                    vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__branch_type = 0U;
                    vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__mem_write = 0U;
                    vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__mem_to_reg = 0U;
                    tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__alu_src = 0U;
                    vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__immediate = 0U;
                }
                tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__alu_ctrl 
                    = ((1U & (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode))
                        ? ((4U & (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__funct3))
                            ? ((2U & (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__funct3))
                                ? ((1U & (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__funct3))
                                    ? 2U : 3U) : ((1U 
                                                   & (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__funct3))
                                                   ? 
                                                  ((IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT____VdfgRegularize_h662e6b9b_0_0)
                                                    ? 7U
                                                    : 6U)
                                                   : 4U))
                            : ((2U & (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__funct3))
                                ? ((1U & (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__funct3))
                                    ? 9U : 8U) : ((1U 
                                                   & (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__funct3))
                                                   ? 5U
                                                   : 
                                                  ((IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT____VdfgRegularize_h662e6b9b_0_0)
                                                    ? 1U
                                                    : 0U))))
                        : 0U);
            } else {
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__jump = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__lui = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__branch_type = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__mem_write = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__mem_to_reg = 0U;
                tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__alu_ctrl = 0U;
                tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__alu_src = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__immediate = 0U;
            }
        } else {
            if ((8U & (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode))) {
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__reg_write = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__jump = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__lui = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__branch_type = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__mem_to_reg = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__immediate = 0U;
            } else if ((4U & (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode))) {
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__reg_write = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__jump = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__lui = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__branch_type = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__mem_to_reg = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__immediate = 0U;
            } else if ((2U & (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode))) {
                if ((1U & (~ (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode)))) {
                    vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__reg_write = 0U;
                    vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__jump = 0U;
                    vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__lui = 0U;
                    vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__branch_type = 0U;
                    vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__mem_to_reg = 0U;
                }
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__immediate 
                    = ((1U & (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode))
                        ? (((- (IData)((tb_fir_fair_benchmark__DOT__instruction 
                                        >> 0x1fU))) 
                            << 0xcU) | ((0xfe0U & (tb_fir_fair_benchmark__DOT__instruction 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (tb_fir_fair_benchmark__DOT__instruction 
                                            >> 7U))))
                        : 0U);
            } else {
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__reg_write = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__jump = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__lui = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__branch_type = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__mem_to_reg = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__immediate = 0U;
            }
            vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__mem_write 
                = ((1U & (~ ((IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode) 
                             >> 3U))) && ((1U & (~ 
                                                 ((IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode) 
                                                  >> 2U))) 
                                          && ((1U & 
                                               ((IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode) 
                                                >> 1U)) 
                                              && (1U 
                                                  & (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode)))));
            tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__alu_ctrl = 0U;
            tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__alu_src 
                = ((1U & (~ ((IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode) 
                             >> 3U))) && ((1U & (~ 
                                                 ((IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode) 
                                                  >> 2U))) 
                                          && ((1U & 
                                               ((IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode) 
                                                >> 1U)) 
                                              && (1U 
                                                  & (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode)))));
        }
    } else {
        if ((0x10U & (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode))) {
            vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__reg_write 
                = ((1U & (~ ((IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode) 
                             >> 3U))) && ((1U & (~ 
                                                 ((IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode) 
                                                  >> 2U))) 
                                          && ((1U & 
                                               ((IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode) 
                                                >> 1U)) 
                                              && (1U 
                                                  & (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode)))));
            if ((8U & (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode))) {
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__jump = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__lui = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__branch_type = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__mem_write = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__mem_to_reg = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__immediate = 0U;
            } else if ((4U & (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode))) {
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__jump = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__lui = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__branch_type = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__mem_write = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__mem_to_reg = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__immediate = 0U;
            } else if ((2U & (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode))) {
                if ((1U & (~ (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode)))) {
                    vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__jump = 0U;
                    vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__lui = 0U;
                    vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__branch_type = 0U;
                    vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__mem_write = 0U;
                    vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__mem_to_reg = 0U;
                }
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__immediate 
                    = ((1U & (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode))
                        ? (((- (IData)((tb_fir_fair_benchmark__DOT__instruction 
                                        >> 0x1fU))) 
                            << 0xcU) | (tb_fir_fair_benchmark__DOT__instruction 
                                        >> 0x14U)) : 0U);
            } else {
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__jump = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__lui = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__branch_type = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__mem_write = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__mem_to_reg = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__immediate = 0U;
            }
            tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__alu_src 
                = ((1U & (~ ((IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode) 
                             >> 3U))) && ((1U & (~ 
                                                 ((IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode) 
                                                  >> 2U))) 
                                          && ((1U & 
                                               ((IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode) 
                                                >> 1U)) 
                                              && (1U 
                                                  & (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode)))));
        } else {
            vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__reg_write 
                = ((1U & (~ ((IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode) 
                             >> 3U))) && ((1U & (~ 
                                                 ((IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode) 
                                                  >> 2U))) 
                                          && ((1U & 
                                               ((IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode) 
                                                >> 1U)) 
                                              && (1U 
                                                  & (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode)))));
            if ((8U & (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode))) {
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__jump = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__lui = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__branch_type = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__mem_write = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__immediate = 0U;
            } else if ((4U & (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode))) {
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__jump = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__lui = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__branch_type = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__mem_write = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__immediate = 0U;
            } else if ((2U & (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode))) {
                if ((1U & (~ (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode)))) {
                    vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__jump = 0U;
                    vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__lui = 0U;
                    vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__branch_type = 0U;
                    vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__mem_write = 0U;
                }
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__immediate 
                    = ((1U & (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode))
                        ? (((- (IData)((tb_fir_fair_benchmark__DOT__instruction 
                                        >> 0x1fU))) 
                            << 0xcU) | (tb_fir_fair_benchmark__DOT__instruction 
                                        >> 0x14U)) : 0U);
            } else {
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__jump = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__lui = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__branch_type = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__mem_write = 0U;
                vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__immediate = 0U;
            }
            vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__mem_to_reg 
                = ((1U & (~ ((IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode) 
                             >> 3U))) && ((1U & (~ 
                                                 ((IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode) 
                                                  >> 2U))) 
                                          && ((1U & 
                                               ((IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode) 
                                                >> 1U)) 
                                              && (1U 
                                                  & (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode)))));
            tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__alu_src 
                = ((1U & (~ ((IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode) 
                             >> 3U))) && ((1U & (~ 
                                                 ((IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode) 
                                                  >> 2U))) 
                                          && ((1U & 
                                               ((IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode) 
                                                >> 1U)) 
                                              && (1U 
                                                  & (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dec__DOT__opcode)))));
        }
        tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__alu_ctrl = 0U;
    }
    vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__branch_target 
        = (vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__immediate 
           + vlSelfRef.tb_fir_fair_benchmark__DOT__pc);
    vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__rs2_data 
        = ((0U == (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__rs2_addr))
            ? 0U : vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
           [tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__rs2_addr]);
    tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__product0 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__sample_in), 
                      VL_EXTENDS_QI(64,32, vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__coeff0));
    tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__product1 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__delay0), 
                      VL_EXTENDS_QI(64,32, vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__coeff1));
    tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__product2 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__delay1), 
                      VL_EXTENDS_QI(64,32, vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__coeff2));
    tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__product3 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__delay2), 
                      VL_EXTENDS_QI(64,32, vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__coeff3));
    vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__accumulator 
        = (((tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__product0 
             + tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__product1) 
            + tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__product2) 
           + tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__product3);
    tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__alu_b 
        = ((IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__alu_src)
            ? vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__immediate
            : vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__rs2_data);
    vlSelfRef.tb_fir_fair_benchmark__DOT__alu_result 
        = ((8U & (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__alu_ctrl))
            ? ((4U & (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__alu_ctrl))
                ? 0U : ((2U & (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__alu_ctrl))
                         ? 0U : ((1U & (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__alu_ctrl))
                                  ? ((tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__rs1_data 
                                      < tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__alu_b)
                                      ? 1U : 0U) : 
                                 (VL_LTS_III(32, tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__rs1_data, tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__alu_b)
                                   ? 1U : 0U)))) : 
           ((4U & (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__alu_ctrl))
             ? ((2U & (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__alu_ctrl))
                 ? ((1U & (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__alu_ctrl))
                     ? VL_SHIFTRS_III(32,32,5, tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__rs1_data, 
                                      (0x1fU & tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__alu_b))
                     : (tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__rs1_data 
                        >> (0x1fU & tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__alu_b)))
                 : ((1U & (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__alu_ctrl))
                     ? (tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__rs1_data 
                        << (0x1fU & tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__alu_b))
                     : (tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__rs1_data 
                        ^ tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__alu_b)))
             : ((2U & (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__alu_ctrl))
                 ? ((1U & (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__alu_ctrl))
                     ? (tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__rs1_data 
                        | tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__alu_b)
                     : (tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__rs1_data 
                        & tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__alu_b))
                 : ((1U & (IData)(tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__alu_ctrl))
                     ? (tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__rs1_data 
                        - tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__alu_b)
                     : (tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__rs1_data 
                        + tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__alu_b)))));
    vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir_write_en 
        = ((IData)(vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__mem_write) 
           & (0x4000U == (vlSelfRef.tb_fir_fair_benchmark__DOT__alu_result 
                          >> 0x10U)));
    vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir_read_data = 0U;
    if (((IData)(vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__mem_to_reg) 
         & (0x4000U == (vlSelfRef.tb_fir_fair_benchmark__DOT__alu_result 
                        >> 0x10U)))) {
        vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir_read_data 
            = ((0x10U & vlSelfRef.tb_fir_fair_benchmark__DOT__alu_result)
                ? ((8U & vlSelfRef.tb_fir_fair_benchmark__DOT__alu_result)
                    ? ((4U & vlSelfRef.tb_fir_fair_benchmark__DOT__alu_result)
                        ? ((2U & vlSelfRef.tb_fir_fair_benchmark__DOT__alu_result)
                            ? 0U : ((1U & vlSelfRef.tb_fir_fair_benchmark__DOT__alu_result)
                                     ? 0U : (IData)(vlSelfRef.tb_fir_fair_benchmark__DOT__fir_done)))
                        : ((2U & vlSelfRef.tb_fir_fair_benchmark__DOT__alu_result)
                            ? 0U : ((1U & vlSelfRef.tb_fir_fair_benchmark__DOT__alu_result)
                                     ? 0U : vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__result)))
                    : ((4U & vlSelfRef.tb_fir_fair_benchmark__DOT__alu_result)
                        ? 0U : ((2U & vlSelfRef.tb_fir_fair_benchmark__DOT__alu_result)
                                 ? 0U : ((1U & vlSelfRef.tb_fir_fair_benchmark__DOT__alu_result)
                                          ? 0U : vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__coeff3))))
                : ((8U & vlSelfRef.tb_fir_fair_benchmark__DOT__alu_result)
                    ? ((4U & vlSelfRef.tb_fir_fair_benchmark__DOT__alu_result)
                        ? ((2U & vlSelfRef.tb_fir_fair_benchmark__DOT__alu_result)
                            ? 0U : ((1U & vlSelfRef.tb_fir_fair_benchmark__DOT__alu_result)
                                     ? 0U : vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__coeff2))
                        : ((2U & vlSelfRef.tb_fir_fair_benchmark__DOT__alu_result)
                            ? 0U : ((1U & vlSelfRef.tb_fir_fair_benchmark__DOT__alu_result)
                                     ? 0U : vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__coeff1)))
                    : ((4U & vlSelfRef.tb_fir_fair_benchmark__DOT__alu_result)
                        ? ((2U & vlSelfRef.tb_fir_fair_benchmark__DOT__alu_result)
                            ? 0U : ((1U & vlSelfRef.tb_fir_fair_benchmark__DOT__alu_result)
                                     ? 0U : vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__coeff0))
                        : ((2U & vlSelfRef.tb_fir_fair_benchmark__DOT__alu_result)
                            ? 0U : ((1U & vlSelfRef.tb_fir_fair_benchmark__DOT__alu_result)
                                     ? 0U : vlSelfRef.tb_fir_fair_benchmark__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__sample_in)))));
    }
}

void Vtb_fir_fair_benchmark___024root___timing_resume(Vtb_fir_fair_benchmark___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_fir_fair_benchmark__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir_fair_benchmark___024root___timing_resume\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h7a50df54__0.resume(
                                                   "@(posedge tb_fir_fair_benchmark.clk)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_fir_fair_benchmark___024root___timing_commit(Vtb_fir_fair_benchmark___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_fir_fair_benchmark__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir_fair_benchmark___024root___timing_commit\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h7a50df54__0.commit(
                                                   "@(posedge tb_fir_fair_benchmark.clk)");
    }
}

void Vtb_fir_fair_benchmark___024root___eval_triggers__act(Vtb_fir_fair_benchmark___024root* vlSelf);

bool Vtb_fir_fair_benchmark___024root___eval_phase__act(Vtb_fir_fair_benchmark___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_fir_fair_benchmark__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir_fair_benchmark___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_fir_fair_benchmark___024root___eval_triggers__act(vlSelf);
    Vtb_fir_fair_benchmark___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_fir_fair_benchmark___024root___timing_resume(vlSelf);
        Vtb_fir_fair_benchmark___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_fir_fair_benchmark___024root___eval_phase__nba(Vtb_fir_fair_benchmark___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_fir_fair_benchmark__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir_fair_benchmark___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_fir_fair_benchmark___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fir_fair_benchmark___024root___dump_triggers__nba(Vtb_fir_fair_benchmark___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fir_fair_benchmark___024root___dump_triggers__act(Vtb_fir_fair_benchmark___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_fir_fair_benchmark___024root___eval(Vtb_fir_fair_benchmark___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_fir_fair_benchmark__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir_fair_benchmark___024root___eval\n"); );
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
            Vtb_fir_fair_benchmark___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_fir_fair_benchmark.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_fir_fair_benchmark___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/tb_fir_fair_benchmark.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_fir_fair_benchmark___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_fir_fair_benchmark___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_fir_fair_benchmark___024root___eval_debug_assertions(Vtb_fir_fair_benchmark___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_fir_fair_benchmark__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fir_fair_benchmark___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
