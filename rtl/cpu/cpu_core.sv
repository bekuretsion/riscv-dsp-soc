module cpu_core (
    input  logic        clk,
    input  logic        reset,

    input  logic [31:0] instruction,
    input  logic [31:0] pc_plus_4,

    output logic [31:0] alu_result,

    output logic [1:0]  branch_type,
    output logic        jump,

    output logic        zero,

    output logic [31:0] immediate,

    output logic        fir_selected,
    output logic        fir_done
);

    logic [4:0] rs1_addr;
    logic [4:0] rs2_addr;
    logic [4:0] rd_addr;

    logic alu_src;
    logic reg_write;

    logic mem_write;
    logic mem_to_reg;

    logic [3:0] alu_ctrl;

    logic [31:0] rs1_data;
    logic [31:0] rs2_data;

    logic [31:0] mem_read_data;


    // ========================================
    // DECODER
    // ========================================

    decoder dec (
        .instruction(instruction),

        .rs1_addr(rs1_addr),
        .rs2_addr(rs2_addr),
        .rd_addr(rd_addr),

        .immediate(immediate),

        .alu_src(alu_src),

        .reg_write(reg_write),

        .mem_write(mem_write),
        .mem_to_reg(mem_to_reg),

        .branch_type(branch_type),

        .jump(jump),

        .alu_ctrl(alu_ctrl)
    );


    // ========================================
    // DATAPATH
    // ========================================

    datapath dp (
        .clk(clk),
        .reset(reset),

        .we(reg_write),

        .mem_write(mem_write),
        .mem_to_reg(mem_to_reg),

        .jump(jump),
        .pc_plus_4(pc_plus_4),

        .rs1_addr(rs1_addr),
        .rs2_addr(rs2_addr),
        .rd_addr(rd_addr),

        .immediate(immediate),

        .alu_src(alu_src),
        .alu_ctrl(alu_ctrl),

        .rs1_data(rs1_data),
        .rs2_data(rs2_data),

        .alu_result(alu_result),

        .mem_read_data(mem_read_data),

        .zero(zero),

        .fir_selected(fir_selected),
        .fir_done(fir_done)
    );

endmodule