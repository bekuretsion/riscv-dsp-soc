// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_riscv_cpu.h for the primary calling header

#include "Vtb_riscv_cpu__pch.h"
#include "Vtb_riscv_cpu___024root.h"

VL_ATTR_COLD void Vtb_riscv_cpu___024root___eval_static(Vtb_riscv_cpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_riscv_cpu___024root___eval_initial__TOP(Vtb_riscv_cpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root___eval_initial__TOP\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__imem__DOT__memory[0U] = 0x500293U;
    vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__imem__DOT__memory[1U] = 0x500313U;
    vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__imem__DOT__memory[2U] = 0x628463U;
    vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__imem__DOT__memory[3U] = 0x100393U;
    vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__imem__DOT__memory[4U] = 0x6300393U;
    vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__imem__DOT__memory[5U] = 0x13U;
}

VL_ATTR_COLD void Vtb_riscv_cpu___024root___eval_final(Vtb_riscv_cpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_riscv_cpu___024root___dump_triggers__stl(Vtb_riscv_cpu___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_riscv_cpu___024root___eval_phase__stl(Vtb_riscv_cpu___024root* vlSelf);

VL_ATTR_COLD void Vtb_riscv_cpu___024root___eval_settle(Vtb_riscv_cpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root___eval_settle\n"); );
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
            Vtb_riscv_cpu___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_riscv_cpu.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_riscv_cpu___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_riscv_cpu___024root___dump_triggers__stl(Vtb_riscv_cpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root___dump_triggers__stl\n"); );
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

VL_ATTR_COLD void Vtb_riscv_cpu___024root___stl_sequent__TOP__0(Vtb_riscv_cpu___024root* vlSelf);

VL_ATTR_COLD void Vtb_riscv_cpu___024root___eval_stl(Vtb_riscv_cpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_riscv_cpu___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_riscv_cpu___024root___stl_sequent__TOP__0(Vtb_riscv_cpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root___stl_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ tb_riscv_cpu__DOT__instruction;
    tb_riscv_cpu__DOT__instruction = 0;
    IData/*31:0*/ tb_riscv_cpu__DOT__dut__DOT__immediate;
    tb_riscv_cpu__DOT__dut__DOT__immediate = 0;
    CData/*4:0*/ tb_riscv_cpu__DOT__dut__DOT__core__DOT__rs1_addr;
    tb_riscv_cpu__DOT__dut__DOT__core__DOT__rs1_addr = 0;
    CData/*4:0*/ tb_riscv_cpu__DOT__dut__DOT__core__DOT__rs2_addr;
    tb_riscv_cpu__DOT__dut__DOT__core__DOT__rs2_addr = 0;
    CData/*0:0*/ tb_riscv_cpu__DOT__dut__DOT__core__DOT__alu_src;
    tb_riscv_cpu__DOT__dut__DOT__core__DOT__alu_src = 0;
    CData/*3:0*/ tb_riscv_cpu__DOT__dut__DOT__core__DOT__alu_ctrl;
    tb_riscv_cpu__DOT__dut__DOT__core__DOT__alu_ctrl = 0;
    IData/*31:0*/ tb_riscv_cpu__DOT__dut__DOT__core__DOT__rs1_data;
    tb_riscv_cpu__DOT__dut__DOT__core__DOT__rs1_data = 0;
    CData/*6:0*/ tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode;
    tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode = 0;
    CData/*2:0*/ tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__funct3;
    tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__funct3 = 0;
    CData/*0:0*/ tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT____VdfgRegularize_h662e6b9b_0_0;
    tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT____VdfgRegularize_h662e6b9b_0_0 = 0;
    IData/*31:0*/ tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__alu_b;
    tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__alu_b = 0;
    // Body
    vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__rd_addr 
        = (0x1fU & (vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__imem__DOT__memory
                    [(0xffU & (vlSelfRef.tb_riscv_cpu__DOT__pc 
                               >> 2U))] >> 7U));
    tb_riscv_cpu__DOT__dut__DOT__core__DOT__rs1_addr 
        = (0x1fU & (vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__imem__DOT__memory
                    [(0xffU & (vlSelfRef.tb_riscv_cpu__DOT__pc 
                               >> 2U))] >> 0xfU));
    tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__funct3 
        = (7U & (vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__imem__DOT__memory
                 [(0xffU & (vlSelfRef.tb_riscv_cpu__DOT__pc 
                            >> 2U))] >> 0xcU));
    tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT____VdfgRegularize_h662e6b9b_0_0 
        = (0x20U == (vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__imem__DOT__memory
                     [(0xffU & (vlSelfRef.tb_riscv_cpu__DOT__pc 
                                >> 2U))] >> 0x19U));
    tb_riscv_cpu__DOT__dut__DOT__core__DOT__rs2_addr 
        = (0x1fU & (vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__imem__DOT__memory
                    [(0xffU & (vlSelfRef.tb_riscv_cpu__DOT__pc 
                               >> 2U))] >> 0x14U));
    tb_riscv_cpu__DOT__instruction = vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__imem__DOT__memory
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
    vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__rs2_data 
        = ((0U == (IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__rs2_addr))
            ? 0U : vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers
           [tb_riscv_cpu__DOT__dut__DOT__core__DOT__rs2_addr]);
    vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__mem_write 
        = ((1U & (~ ((IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode) 
                     >> 6U))) && ((1U & ((IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode) 
                                         >> 5U)) && 
                                  ((1U & (~ ((IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode) 
                                             >> 4U))) 
                                   && ((1U & (~ ((IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode) 
                                                 >> 3U))) 
                                       && ((1U & (~ 
                                                  ((IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode) 
                                                   >> 2U))) 
                                           && ((1U 
                                                & ((IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode) 
                                                   >> 1U)) 
                                               && (1U 
                                                   & (IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode))))))));
    vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__mem_to_reg 
        = ((1U & (~ ((IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode) 
                     >> 6U))) && ((1U & (~ ((IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode) 
                                            >> 5U))) 
                                  && ((1U & (~ ((IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode) 
                                                >> 4U))) 
                                      && ((1U & (~ 
                                                 ((IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode) 
                                                  >> 3U))) 
                                          && ((1U & 
                                               (~ ((IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode) 
                                                   >> 2U))) 
                                              && ((1U 
                                                   & ((IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode) 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & (IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode))))))));
    vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__branch = 
        ((1U & ((IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode) 
                >> 6U)) && ((1U & ((IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode) 
                                   >> 5U)) && ((1U 
                                                & (~ 
                                                   ((IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode) 
                                                    >> 4U))) 
                                               && ((1U 
                                                    & (~ 
                                                       ((IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode) 
                                                        >> 3U))) 
                                                   && ((1U 
                                                        & (~ 
                                                           ((IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode) 
                                                            >> 2U))) 
                                                       && ((1U 
                                                            & ((IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode) 
                                                               >> 1U)) 
                                                           && (1U 
                                                               & (IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode))))))));
    vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__reg_write 
        = ((1U & (~ ((IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode) 
                     >> 6U))) && ((0x20U & (IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode))
                                   ? ((1U & ((IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode) 
                                             >> 4U)) 
                                      && ((1U & (~ 
                                                 ((IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode) 
                                                  >> 3U))) 
                                          && ((1U & 
                                               (~ ((IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode) 
                                                   >> 2U))) 
                                              && ((1U 
                                                   & ((IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode) 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & (IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode))))))
                                   : ((0x10U & (IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode))
                                       ? ((1U & (~ 
                                                 ((IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode) 
                                                  >> 3U))) 
                                          && ((1U & 
                                               (~ ((IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode) 
                                                   >> 2U))) 
                                              && ((1U 
                                                   & ((IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode) 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & (IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode)))))
                                       : ((1U & (~ 
                                                 ((IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode) 
                                                  >> 3U))) 
                                          && ((1U & 
                                               (~ ((IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode) 
                                                   >> 2U))) 
                                              && ((1U 
                                                   & ((IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode) 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & (IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode))))))));
    tb_riscv_cpu__DOT__dut__DOT__core__DOT__alu_src 
        = ((1U & (~ ((IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode) 
                     >> 6U))) && ((0x20U & (IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode))
                                   ? ((1U & (~ ((IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode) 
                                                >> 4U))) 
                                      && ((1U & (~ 
                                                 ((IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode) 
                                                  >> 3U))) 
                                          && ((1U & 
                                               (~ ((IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode) 
                                                   >> 2U))) 
                                              && ((1U 
                                                   & ((IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode) 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & (IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode))))))
                                   : ((0x10U & (IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode))
                                       ? ((1U & (~ 
                                                 ((IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode) 
                                                  >> 3U))) 
                                          && ((1U & 
                                               (~ ((IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode) 
                                                   >> 2U))) 
                                              && ((1U 
                                                   & ((IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode) 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & (IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode)))))
                                       : ((1U & (~ 
                                                 ((IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode) 
                                                  >> 3U))) 
                                          && ((1U & 
                                               (~ ((IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode) 
                                                   >> 2U))) 
                                              && ((1U 
                                                   & ((IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode) 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & (IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode))))))));
    tb_riscv_cpu__DOT__dut__DOT__immediate = 0U;
    if ((0x40U & (IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode))) {
        if ((0x20U & (IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode))) {
            if ((0x10U & (IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode))) {
                tb_riscv_cpu__DOT__dut__DOT__core__DOT__alu_ctrl = 0U;
                tb_riscv_cpu__DOT__dut__DOT__immediate = 0U;
            } else if ((8U & (IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode))) {
                tb_riscv_cpu__DOT__dut__DOT__core__DOT__alu_ctrl = 0U;
                tb_riscv_cpu__DOT__dut__DOT__immediate = 0U;
            } else if ((4U & (IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode))) {
                tb_riscv_cpu__DOT__dut__DOT__core__DOT__alu_ctrl = 0U;
                tb_riscv_cpu__DOT__dut__DOT__immediate = 0U;
            } else if ((2U & (IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode))) {
                if ((1U & (IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode))) {
                    tb_riscv_cpu__DOT__dut__DOT__core__DOT__alu_ctrl = 1U;
                    tb_riscv_cpu__DOT__dut__DOT__immediate 
                        = (((- (IData)((tb_riscv_cpu__DOT__instruction 
                                        >> 0x1fU))) 
                            << 0xdU) | (((0x1000U & 
                                          (tb_riscv_cpu__DOT__instruction 
                                           >> 0x13U)) 
                                         | (0x800U 
                                            & (tb_riscv_cpu__DOT__instruction 
                                               << 4U))) 
                                        | ((0x7e0U 
                                            & (tb_riscv_cpu__DOT__instruction 
                                               >> 0x14U)) 
                                           | (0x1eU 
                                              & (tb_riscv_cpu__DOT__instruction 
                                                 >> 7U)))));
                } else {
                    tb_riscv_cpu__DOT__dut__DOT__core__DOT__alu_ctrl = 0U;
                    tb_riscv_cpu__DOT__dut__DOT__immediate = 0U;
                }
            } else {
                tb_riscv_cpu__DOT__dut__DOT__core__DOT__alu_ctrl = 0U;
                tb_riscv_cpu__DOT__dut__DOT__immediate = 0U;
            }
        } else {
            tb_riscv_cpu__DOT__dut__DOT__core__DOT__alu_ctrl = 0U;
            tb_riscv_cpu__DOT__dut__DOT__immediate = 0U;
        }
    } else if ((0x20U & (IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode))) {
        if ((0x10U & (IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode))) {
            if ((8U & (IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode))) {
                tb_riscv_cpu__DOT__dut__DOT__core__DOT__alu_ctrl = 0U;
                tb_riscv_cpu__DOT__dut__DOT__immediate = 0U;
            } else if ((4U & (IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode))) {
                tb_riscv_cpu__DOT__dut__DOT__core__DOT__alu_ctrl = 0U;
                tb_riscv_cpu__DOT__dut__DOT__immediate = 0U;
            } else if ((2U & (IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode))) {
                tb_riscv_cpu__DOT__dut__DOT__core__DOT__alu_ctrl 
                    = ((1U & (IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode))
                        ? ((4U & (IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__funct3))
                            ? ((2U & (IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__funct3))
                                ? ((1U & (IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__funct3))
                                    ? 2U : 3U) : ((1U 
                                                   & (IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__funct3))
                                                   ? 
                                                  ((IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT____VdfgRegularize_h662e6b9b_0_0)
                                                    ? 7U
                                                    : 6U)
                                                   : 4U))
                            : ((2U & (IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__funct3))
                                ? ((1U & (IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__funct3))
                                    ? 9U : 8U) : ((1U 
                                                   & (IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__funct3))
                                                   ? 5U
                                                   : 
                                                  ((IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT____VdfgRegularize_h662e6b9b_0_0)
                                                    ? 1U
                                                    : 0U))))
                        : 0U);
                if ((1U & (~ (IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode)))) {
                    tb_riscv_cpu__DOT__dut__DOT__immediate = 0U;
                }
            } else {
                tb_riscv_cpu__DOT__dut__DOT__core__DOT__alu_ctrl = 0U;
                tb_riscv_cpu__DOT__dut__DOT__immediate = 0U;
            }
        } else {
            tb_riscv_cpu__DOT__dut__DOT__core__DOT__alu_ctrl = 0U;
            tb_riscv_cpu__DOT__dut__DOT__immediate 
                = ((8U & (IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode))
                    ? 0U : ((4U & (IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode))
                             ? 0U : ((2U & (IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode))
                                      ? ((1U & (IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode))
                                          ? (((- (IData)(
                                                         (tb_riscv_cpu__DOT__instruction 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | ((0xfe0U 
                                                 & (tb_riscv_cpu__DOT__instruction 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (tb_riscv_cpu__DOT__instruction 
                                                      >> 7U))))
                                          : 0U) : 0U)));
        }
    } else {
        tb_riscv_cpu__DOT__dut__DOT__core__DOT__alu_ctrl = 0U;
        tb_riscv_cpu__DOT__dut__DOT__immediate = ((0x10U 
                                                   & (IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode))
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & (IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode))
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      & (IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode))
                                                       ? 
                                                      (((- (IData)(
                                                                   (tb_riscv_cpu__DOT__instruction 
                                                                    >> 0x1fU))) 
                                                        << 0xcU) 
                                                       | (tb_riscv_cpu__DOT__instruction 
                                                          >> 0x14U))
                                                       : 0U)
                                                      : 0U)))
                                                   : 
                                                  ((8U 
                                                    & (IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode))
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & (IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode))
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      & (IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__dec__DOT__opcode))
                                                       ? 
                                                      (((- (IData)(
                                                                   (tb_riscv_cpu__DOT__instruction 
                                                                    >> 0x1fU))) 
                                                        << 0xcU) 
                                                       | (tb_riscv_cpu__DOT__instruction 
                                                          >> 0x14U))
                                                       : 0U)
                                                      : 0U))));
    }
    vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__branch_target 
        = (tb_riscv_cpu__DOT__dut__DOT__immediate + vlSelfRef.tb_riscv_cpu__DOT__pc);
    tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__alu_b 
        = ((IData)(tb_riscv_cpu__DOT__dut__DOT__core__DOT__alu_src)
            ? tb_riscv_cpu__DOT__dut__DOT__immediate
            : vlSelfRef.tb_riscv_cpu__DOT__dut__DOT__core__DOT__rs2_data);
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

VL_ATTR_COLD void Vtb_riscv_cpu___024root___eval_triggers__stl(Vtb_riscv_cpu___024root* vlSelf);

VL_ATTR_COLD bool Vtb_riscv_cpu___024root___eval_phase__stl(Vtb_riscv_cpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_riscv_cpu___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_riscv_cpu___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_riscv_cpu___024root___dump_triggers__act(Vtb_riscv_cpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_riscv_cpu.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_riscv_cpu___024root___dump_triggers__nba(Vtb_riscv_cpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_riscv_cpu.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_riscv_cpu___024root___ctor_var_reset(Vtb_riscv_cpu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_riscv_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv_cpu___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_riscv_cpu__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_riscv_cpu__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->tb_riscv_cpu__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->tb_riscv_cpu__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__branch = VL_RAND_RESET_I(1);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__branch_target = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__imem__DOT__memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__core__DOT__rd_addr = VL_RAND_RESET_I(5);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__core__DOT__reg_write = VL_RAND_RESET_I(1);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__core__DOT__mem_write = VL_RAND_RESET_I(1);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__core__DOT__mem_to_reg = VL_RAND_RESET_I(1);
    vlSelf->tb_riscv_cpu__DOT__dut__DOT__core__DOT__rs2_data = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->tb_riscv_cpu__DOT__dut__DOT__core__DOT__dp__DOT__dmem__DOT__memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_riscv_cpu__DOT__clk__0 = VL_RAND_RESET_I(1);
}
