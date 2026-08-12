// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_soc_waveform__Syms.h"


void Vtb_soc_waveform___024root__trace_chg_0_sub_0(Vtb_soc_waveform___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_soc_waveform___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc_waveform___024root__trace_chg_0\n"); );
    // Init
    Vtb_soc_waveform___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_soc_waveform___024root*>(voidSelf);
    Vtb_soc_waveform__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_soc_waveform___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_soc_waveform___024root__trace_chg_0_sub_0(Vtb_soc_waveform___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_soc_waveform__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc_waveform___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelfRef.tb_soc_waveform__DOT__pc),32);
        bufp->chgIData(oldp+1,(vlSelfRef.tb_soc_waveform__DOT__instruction),32);
        bufp->chgIData(oldp+2,(vlSelfRef.tb_soc_waveform__DOT__alu_result),32);
        bufp->chgBit(oldp+3,((0x4000U == (vlSelfRef.tb_soc_waveform__DOT__alu_result 
                                          >> 0x10U))));
        bufp->chgBit(oldp+4,(vlSelfRef.tb_soc_waveform__DOT__fir_done));
        bufp->chgCData(oldp+5,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__branch_type),2);
        bufp->chgBit(oldp+6,((0U == vlSelfRef.tb_soc_waveform__DOT__alu_result)));
        bufp->chgBit(oldp+7,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__jump));
        bufp->chgIData(oldp+8,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__immediate),32);
        bufp->chgBit(oldp+9,(((1U == (IData)(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__branch_type))
                               ? (0U == vlSelfRef.tb_soc_waveform__DOT__alu_result)
                               : ((2U == (IData)(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__branch_type)) 
                                  && (0U != vlSelfRef.tb_soc_waveform__DOT__alu_result)))));
        bufp->chgIData(oldp+10,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__branch_target),32);
        bufp->chgIData(oldp+11,(((IData)(4U) + vlSelfRef.tb_soc_waveform__DOT__pc)),32);
        bufp->chgCData(oldp+12,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__rs1_addr),5);
        bufp->chgCData(oldp+13,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__rs2_addr),5);
        bufp->chgCData(oldp+14,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__rd_addr),5);
        bufp->chgBit(oldp+15,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__alu_src));
        bufp->chgBit(oldp+16,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__reg_write));
        bufp->chgBit(oldp+17,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__mem_write));
        bufp->chgBit(oldp+18,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__mem_to_reg));
        bufp->chgBit(oldp+19,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__lui));
        bufp->chgCData(oldp+20,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__alu_ctrl),4);
        bufp->chgIData(oldp+21,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__rs1_data),32);
        bufp->chgIData(oldp+22,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__rs2_data),32);
        bufp->chgIData(oldp+23,(((0x4000U == (vlSelfRef.tb_soc_waveform__DOT__alu_result 
                                              >> 0x10U))
                                  ? vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir_read_data
                                  : vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__ram__DOT__memory
                                 [(0xffU & (vlSelfRef.tb_soc_waveform__DOT__alu_result 
                                            >> 2U))])),32);
        bufp->chgCData(oldp+24,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dec__DOT__opcode),7);
        bufp->chgCData(oldp+25,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dec__DOT__funct3),3);
        bufp->chgCData(oldp+26,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dec__DOT__funct7),7);
        bufp->chgIData(oldp+27,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__alu_b),32);
        bufp->chgIData(oldp+28,(((IData)(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__jump)
                                  ? ((IData)(4U) + vlSelfRef.tb_soc_waveform__DOT__pc)
                                  : ((IData)(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__lui)
                                      ? vlSelfRef.tb_soc_waveform__DOT__dut__DOT__immediate
                                      : ((IData)(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__mem_to_reg)
                                          ? ((0x4000U 
                                              == (vlSelfRef.tb_soc_waveform__DOT__alu_result 
                                                  >> 0x10U))
                                              ? vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir_read_data
                                              : vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__ram__DOT__memory
                                             [(0xffU 
                                               & (vlSelfRef.tb_soc_waveform__DOT__alu_result 
                                                  >> 2U))])
                                          : vlSelfRef.tb_soc_waveform__DOT__alu_result)))),32);
        bufp->chgIData(oldp+29,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__ram__DOT__memory
                                [(0xffU & (vlSelfRef.tb_soc_waveform__DOT__alu_result 
                                           >> 2U))]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir_read_data),32);
        bufp->chgBit(oldp+31,(((0x4000U != (vlSelfRef.tb_soc_waveform__DOT__alu_result 
                                            >> 0x10U)) 
                               & (IData)(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__mem_write))));
        bufp->chgBit(oldp+32,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir_write_en));
        bufp->chgBit(oldp+33,(((IData)(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__mem_to_reg) 
                               & (0x4000U == (vlSelfRef.tb_soc_waveform__DOT__alu_result 
                                              >> 0x10U)))));
        bufp->chgCData(oldp+34,((0x1fU & vlSelfRef.tb_soc_waveform__DOT__alu_result)),5);
        bufp->chgIData(oldp+35,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__sample_in),32);
        bufp->chgIData(oldp+36,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__coeff0),32);
        bufp->chgIData(oldp+37,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__coeff1),32);
        bufp->chgIData(oldp+38,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__coeff2),32);
        bufp->chgIData(oldp+39,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__coeff3),32);
        bufp->chgIData(oldp+40,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__delay0),32);
        bufp->chgIData(oldp+41,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__delay1),32);
        bufp->chgIData(oldp+42,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__delay2),32);
        bufp->chgQData(oldp+43,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__product0),64);
        bufp->chgQData(oldp+45,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__product1),64);
        bufp->chgQData(oldp+47,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__product2),64);
        bufp->chgQData(oldp+49,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__product3),64);
        bufp->chgQData(oldp+51,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__accumulator),64);
        bufp->chgIData(oldp+53,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__result),32);
        bufp->chgIData(oldp+54,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers[0]),32);
        bufp->chgIData(oldp+55,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers[1]),32);
        bufp->chgIData(oldp+56,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers[2]),32);
        bufp->chgIData(oldp+57,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers[3]),32);
        bufp->chgIData(oldp+58,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers[4]),32);
        bufp->chgIData(oldp+59,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers[5]),32);
        bufp->chgIData(oldp+60,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers[6]),32);
        bufp->chgIData(oldp+61,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers[7]),32);
        bufp->chgIData(oldp+62,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers[8]),32);
        bufp->chgIData(oldp+63,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers[9]),32);
        bufp->chgIData(oldp+64,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers[10]),32);
        bufp->chgIData(oldp+65,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers[11]),32);
        bufp->chgIData(oldp+66,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers[12]),32);
        bufp->chgIData(oldp+67,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers[13]),32);
        bufp->chgIData(oldp+68,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers[14]),32);
        bufp->chgIData(oldp+69,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers[15]),32);
        bufp->chgIData(oldp+70,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers[16]),32);
        bufp->chgIData(oldp+71,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers[17]),32);
        bufp->chgIData(oldp+72,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers[18]),32);
        bufp->chgIData(oldp+73,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers[19]),32);
        bufp->chgIData(oldp+74,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers[20]),32);
        bufp->chgIData(oldp+75,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers[21]),32);
        bufp->chgIData(oldp+76,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers[22]),32);
        bufp->chgIData(oldp+77,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers[23]),32);
        bufp->chgIData(oldp+78,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers[24]),32);
        bufp->chgIData(oldp+79,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers[25]),32);
        bufp->chgIData(oldp+80,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers[26]),32);
        bufp->chgIData(oldp+81,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers[27]),32);
        bufp->chgIData(oldp+82,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers[28]),32);
        bufp->chgIData(oldp+83,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers[29]),32);
        bufp->chgIData(oldp+84,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers[30]),32);
        bufp->chgIData(oldp+85,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers[31]),32);
    }
    bufp->chgBit(oldp+86,(vlSelfRef.tb_soc_waveform__DOT__clk));
    bufp->chgBit(oldp+87,(vlSelfRef.tb_soc_waveform__DOT__reset));
}

void Vtb_soc_waveform___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc_waveform___024root__trace_cleanup\n"); );
    // Init
    Vtb_soc_waveform___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_soc_waveform___024root*>(voidSelf);
    Vtb_soc_waveform__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
