module riscv_cpu (
    input  logic        clk,
    input  logic        reset,

    output logic [31:0] pc,
    output logic [31:0] instruction,
    output logic [31:0] alu_result
);

    logic branch;
    logic zero;

    logic [31:0] immediate;

    logic branch_taken;
    logic [31:0] branch_target;

    assign branch_taken  = branch && zero;
    assign branch_target = pc + immediate;

    pc pc_unit (
        .clk(clk),
        .reset(reset),

        .branch_taken(branch_taken),
        .branch_target(branch_target),

        .pc_out(pc)
    );

    instruction_memory imem (
        .address(pc),
        .instruction(instruction)
    );

    cpu_core core (
        .clk(clk),
        .instruction(instruction),

        .alu_result(alu_result),

        .branch(branch),
        .zero(zero),
        .immediate(immediate)
    );

endmodule