module riscv_cpu (
    input  logic        clk,
    input  logic        reset,

    output logic [31:0] pc,
    output logic [31:0] instruction,
    output logic [31:0] alu_result
);

    pc pc_unit (
        .clk(clk),
        .reset(reset),
        .pc_out(pc)
    );

    instruction_memory imem (
        .address(pc),
        .instruction(instruction)
    );

    cpu_core core (
        .clk(clk),
        .instruction(instruction),
        .alu_result(alu_result)
    );

endmodule