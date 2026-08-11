module datapath (
    input  logic        clk,
    input  logic        we,

    input  logic [4:0]  rs1_addr,
    input  logic [4:0]  rs2_addr,
    input  logic [4:0]  rd_addr,

    input  logic [31:0] immediate,
    input  logic        alu_src,
    input  logic [3:0]  alu_ctrl,

    output logic [31:0] rs1_data,
    output logic [31:0] rs2_data,
    output logic [31:0] alu_result
);

    logic [31:0] alu_b;

    regfile rf (
        .clk(clk),
        .we(we),
        .rs1_addr(rs1_addr),
        .rs2_addr(rs2_addr),
        .rd_addr(rd_addr),
        .rd_data(alu_result),
        .rs1_data(rs1_data),
        .rs2_data(rs2_data)
    );

    // Select register or immediate for ALU input B
    assign alu_b = alu_src ? immediate : rs2_data;

    alu alu_unit (
        .a(rs1_data),
        .b(alu_b),
        .alu_ctrl(alu_ctrl),
        .result(alu_result),
        .zero()
    );

endmodule