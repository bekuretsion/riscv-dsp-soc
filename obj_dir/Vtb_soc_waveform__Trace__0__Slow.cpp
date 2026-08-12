// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_soc_waveform__Syms.h"


VL_ATTR_COLD void Vtb_soc_waveform___024root__trace_init_sub__TOP__0(Vtb_soc_waveform___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_soc_waveform__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc_waveform___024root__trace_init_sub__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_soc_waveform", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+87,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+4,0,"fir_selected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"fir_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+87,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"instruction",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"alu_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+4,0,"fir_selected",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"fir_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"branch_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+7,0,"zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"immediate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+10,0,"branch_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"branch_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"jump_target",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"pc_plus_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+87,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"pc_plus_4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"alu_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"branch_type",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+8,0,"jump",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"immediate",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+4,0,"fir_selected",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"fir_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"rs1_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+14,0,"rs2_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+15,0,"rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+16,0,"alu_src",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"reg_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"mem_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"mem_to_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"lui",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"alu_ctrl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+22,0,"rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+24,0,"mem_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dec", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2,0,"instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"rs1_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+14,0,"rs2_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+15,0,"rd_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+9,0,"immediate",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+16,0,"alu_src",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"reg_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"mem_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"mem_to_reg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"branch_type",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+8,0,"jump",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"lui",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"alu_ctrl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+25,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+26,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+27,0,"funct7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->pushPrefix("dp", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+87,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"mem_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"mem_to_reg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"jump",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"lui",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"pc_plus_4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"rs1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+14,0,"rs2_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+15,0,"rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+9,0,"immediate",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+16,0,"alu_src",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"alu_ctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+22,0,"rs1_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"rs2_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"alu_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+24,0,"mem_read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+7,0,"zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"fir_selected",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"fir_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"alu_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,0,"writeback_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("alu_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+22,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"alu_ctrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+3,0,"result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+7,0,"zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mmio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+87,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"mem_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"mem_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"write_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+24,0,"read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+4,0,"fir_selected",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"fir_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"is_fir",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+30,0,"ram_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"fir_read_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+32,0,"ram_write_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"fir_write_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"fir_read_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("fir", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+87,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"write_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"read_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+23,0,"write_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+5,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"sample_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"coeff0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,0,"coeff1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,0,"coeff2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"coeff3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"delay0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"delay1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,0,"delay2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+44,0,"product0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+46,0,"product1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+48,0,"product2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+50,0,"product3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+52,0,"accumulator",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+54,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("ram", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+87,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"mem_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"write_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+30,0,"read_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("rf", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+87,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"rs1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+14,0,"rs2_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+15,0,"rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+29,0,"rd_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"rs1_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"rs2_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("registers", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+55+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("imem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"instruction",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("pc_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+87,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"branch_taken",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"branch_target",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+8,0,"jump",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"jump_target",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"pc_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_soc_waveform___024root__trace_init_top(Vtb_soc_waveform___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_soc_waveform__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc_waveform___024root__trace_init_top\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_soc_waveform___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_soc_waveform___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_soc_waveform___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_soc_waveform___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_soc_waveform___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_soc_waveform___024root__trace_register(Vtb_soc_waveform___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_soc_waveform__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc_waveform___024root__trace_register\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_soc_waveform___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_soc_waveform___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_soc_waveform___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_soc_waveform___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_soc_waveform___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc_waveform___024root__trace_const_0\n"); );
    // Init
    Vtb_soc_waveform___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_soc_waveform___024root*>(voidSelf);
    Vtb_soc_waveform__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vtb_soc_waveform___024root__trace_full_0_sub_0(Vtb_soc_waveform___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_soc_waveform___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc_waveform___024root__trace_full_0\n"); );
    // Init
    Vtb_soc_waveform___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_soc_waveform___024root*>(voidSelf);
    Vtb_soc_waveform__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_soc_waveform___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_soc_waveform___024root__trace_full_0_sub_0(Vtb_soc_waveform___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_soc_waveform__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc_waveform___024root__trace_full_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.tb_soc_waveform__DOT__pc),32);
    bufp->fullIData(oldp+2,(vlSelfRef.tb_soc_waveform__DOT__instruction),32);
    bufp->fullIData(oldp+3,(vlSelfRef.tb_soc_waveform__DOT__alu_result),32);
    bufp->fullBit(oldp+4,((0x4000U == (vlSelfRef.tb_soc_waveform__DOT__alu_result 
                                       >> 0x10U))));
    bufp->fullBit(oldp+5,(vlSelfRef.tb_soc_waveform__DOT__fir_done));
    bufp->fullCData(oldp+6,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__branch_type),2);
    bufp->fullBit(oldp+7,((0U == vlSelfRef.tb_soc_waveform__DOT__alu_result)));
    bufp->fullBit(oldp+8,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__jump));
    bufp->fullIData(oldp+9,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__immediate),32);
    bufp->fullBit(oldp+10,(((1U == (IData)(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__branch_type))
                             ? (0U == vlSelfRef.tb_soc_waveform__DOT__alu_result)
                             : ((2U == (IData)(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__branch_type)) 
                                && (0U != vlSelfRef.tb_soc_waveform__DOT__alu_result)))));
    bufp->fullIData(oldp+11,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__branch_target),32);
    bufp->fullIData(oldp+12,(((IData)(4U) + vlSelfRef.tb_soc_waveform__DOT__pc)),32);
    bufp->fullCData(oldp+13,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__rs1_addr),5);
    bufp->fullCData(oldp+14,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__rs2_addr),5);
    bufp->fullCData(oldp+15,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__rd_addr),5);
    bufp->fullBit(oldp+16,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__alu_src));
    bufp->fullBit(oldp+17,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__reg_write));
    bufp->fullBit(oldp+18,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__mem_write));
    bufp->fullBit(oldp+19,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__mem_to_reg));
    bufp->fullBit(oldp+20,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__lui));
    bufp->fullCData(oldp+21,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__alu_ctrl),4);
    bufp->fullIData(oldp+22,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__rs1_data),32);
    bufp->fullIData(oldp+23,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__rs2_data),32);
    bufp->fullIData(oldp+24,(((0x4000U == (vlSelfRef.tb_soc_waveform__DOT__alu_result 
                                           >> 0x10U))
                               ? vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir_read_data
                               : vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__ram__DOT__memory
                              [(0xffU & (vlSelfRef.tb_soc_waveform__DOT__alu_result 
                                         >> 2U))])),32);
    bufp->fullCData(oldp+25,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dec__DOT__opcode),7);
    bufp->fullCData(oldp+26,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dec__DOT__funct3),3);
    bufp->fullCData(oldp+27,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dec__DOT__funct7),7);
    bufp->fullIData(oldp+28,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__alu_b),32);
    bufp->fullIData(oldp+29,(((IData)(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__jump)
                               ? ((IData)(4U) + vlSelfRef.tb_soc_waveform__DOT__pc)
                               : ((IData)(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__lui)
                                   ? vlSelfRef.tb_soc_waveform__DOT__dut__DOT__immediate
                                   : ((IData)(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__mem_to_reg)
                                       ? ((0x4000U 
                                           == (vlSelfRef.tb_soc_waveform__DOT__alu_result 
                                               >> 0x10U))
                                           ? vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir_read_data
                                           : vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__ram__DOT__memory
                                          [(0xffU & 
                                            (vlSelfRef.tb_soc_waveform__DOT__alu_result 
                                             >> 2U))])
                                       : vlSelfRef.tb_soc_waveform__DOT__alu_result)))),32);
    bufp->fullIData(oldp+30,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__ram__DOT__memory
                             [(0xffU & (vlSelfRef.tb_soc_waveform__DOT__alu_result 
                                        >> 2U))]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir_read_data),32);
    bufp->fullBit(oldp+32,(((0x4000U != (vlSelfRef.tb_soc_waveform__DOT__alu_result 
                                         >> 0x10U)) 
                            & (IData)(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__mem_write))));
    bufp->fullBit(oldp+33,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir_write_en));
    bufp->fullBit(oldp+34,(((IData)(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__mem_to_reg) 
                            & (0x4000U == (vlSelfRef.tb_soc_waveform__DOT__alu_result 
                                           >> 0x10U)))));
    bufp->fullCData(oldp+35,((0x1fU & vlSelfRef.tb_soc_waveform__DOT__alu_result)),5);
    bufp->fullIData(oldp+36,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__sample_in),32);
    bufp->fullIData(oldp+37,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__coeff0),32);
    bufp->fullIData(oldp+38,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__coeff1),32);
    bufp->fullIData(oldp+39,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__coeff2),32);
    bufp->fullIData(oldp+40,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__coeff3),32);
    bufp->fullIData(oldp+41,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__delay0),32);
    bufp->fullIData(oldp+42,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__delay1),32);
    bufp->fullIData(oldp+43,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__delay2),32);
    bufp->fullQData(oldp+44,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__product0),64);
    bufp->fullQData(oldp+46,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__product1),64);
    bufp->fullQData(oldp+48,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__product2),64);
    bufp->fullQData(oldp+50,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__product3),64);
    bufp->fullQData(oldp+52,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__accumulator),64);
    bufp->fullIData(oldp+54,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__mmio__DOT__fir__DOT__result),32);
    bufp->fullIData(oldp+55,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers[0]),32);
    bufp->fullIData(oldp+56,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers[1]),32);
    bufp->fullIData(oldp+57,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers[2]),32);
    bufp->fullIData(oldp+58,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers[3]),32);
    bufp->fullIData(oldp+59,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers[4]),32);
    bufp->fullIData(oldp+60,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers[5]),32);
    bufp->fullIData(oldp+61,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers[6]),32);
    bufp->fullIData(oldp+62,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers[7]),32);
    bufp->fullIData(oldp+63,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers[8]),32);
    bufp->fullIData(oldp+64,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers[9]),32);
    bufp->fullIData(oldp+65,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers[10]),32);
    bufp->fullIData(oldp+66,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers[11]),32);
    bufp->fullIData(oldp+67,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers[12]),32);
    bufp->fullIData(oldp+68,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers[13]),32);
    bufp->fullIData(oldp+69,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers[14]),32);
    bufp->fullIData(oldp+70,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers[15]),32);
    bufp->fullIData(oldp+71,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers[16]),32);
    bufp->fullIData(oldp+72,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers[17]),32);
    bufp->fullIData(oldp+73,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers[18]),32);
    bufp->fullIData(oldp+74,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers[19]),32);
    bufp->fullIData(oldp+75,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers[20]),32);
    bufp->fullIData(oldp+76,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers[21]),32);
    bufp->fullIData(oldp+77,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers[22]),32);
    bufp->fullIData(oldp+78,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers[23]),32);
    bufp->fullIData(oldp+79,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers[24]),32);
    bufp->fullIData(oldp+80,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers[25]),32);
    bufp->fullIData(oldp+81,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers[26]),32);
    bufp->fullIData(oldp+82,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers[27]),32);
    bufp->fullIData(oldp+83,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers[28]),32);
    bufp->fullIData(oldp+84,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers[29]),32);
    bufp->fullIData(oldp+85,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers[30]),32);
    bufp->fullIData(oldp+86,(vlSelfRef.tb_soc_waveform__DOT__dut__DOT__core__DOT__dp__DOT__rf__DOT__registers[31]),32);
    bufp->fullBit(oldp+87,(vlSelfRef.tb_soc_waveform__DOT__clk));
    bufp->fullBit(oldp+88,(vlSelfRef.tb_soc_waveform__DOT__reset));
}
