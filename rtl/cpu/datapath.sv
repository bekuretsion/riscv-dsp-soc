module datapath (
    input  logic        clk,
    input  logic        we,
    input  logic        mem_write,
    input  logic        mem_to_reg,

    input  logic [4:0]  rs1_addr,
    input  logic [4:0]  rs2_addr,
    input  logic [4:0]  rd_addr,

    input  logic [31:0] immediate,
    input  logic        alu_src,
    input  logic [3:0]  alu_ctrl,

    output logic [31:0] rs1_data,
    output logic [31:0] rs2_data,
    output logic [31:0] alu_result,
    output logic [31:0] mem_read_data,
    output logic        zero
);

    logic [31:0] alu_b;
    logic [31:0] writeback_data;

    regfile rf (
        .clk(clk),
        .we(we),
        .rs1_addr(rs1_addr),
        .rs2_addr(rs2_addr),
        .rd_addr(rd_addr),
        .rd_data(writeback_data),
        .rs1_data(rs1_data),
        .rs2_data(rs2_data)
    );

    assign alu_b = alu_src ? immediate : rs2_data;

    alu alu_unit (
        .a(rs1_data),
        .b(alu_b),
        .alu_ctrl(alu_ctrl),
        .result(alu_result),
        .zero(zero)
    );

    data_memory dmem (
        .clk(clk),
        .mem_write(mem_write),
        .address(alu_result),
        .write_data(rs2_data),
        .read_data(mem_read_data)
    );

    assign writeback_data =
        mem_to_reg ? mem_read_data : alu_result;

endmodule