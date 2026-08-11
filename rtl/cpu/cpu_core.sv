module cpu_core (
    input  logic        clk,
    input  logic [31:0] instruction,

    output logic [31:0] alu_result
);

    logic [4:0] rs1_addr;
    logic [4:0] rs2_addr;
    logic [4:0] rd_addr;

    logic [31:0] immediate;

    logic        alu_src;
    logic        reg_write;
    logic [3:0]  alu_ctrl;

    logic [31:0] rs1_data;
    logic [31:0] rs2_data;

    // Decode instruction
    decoder dec (
        .instruction(instruction),
        .rs1_addr(rs1_addr),
        .rs2_addr(rs2_addr),
        .rd_addr(rd_addr),
        .immediate(immediate),
        .alu_src(alu_src),
        .reg_write(reg_write),
        .alu_ctrl(alu_ctrl)
    );

    // Execute instruction
    datapath dp (
        .clk(clk),
        .we(reg_write),
        .rs1_addr(rs1_addr),
        .rs2_addr(rs2_addr),
        .rd_addr(rd_addr),
        .immediate(immediate),
        .alu_src(alu_src),
        .alu_ctrl(alu_ctrl),
        .rs1_data(rs1_data),
        .rs2_data(rs2_data),
        .alu_result(alu_result)
    );

endmodule