module riscv_cpu (
    input  logic        clk,
    input  logic        reset,

    output logic [31:0] pc,
    output logic [31:0] instruction,
    output logic [31:0] alu_result
);

    logic [1:0] branch_type;

    logic zero;
    logic jump;

    logic [31:0] immediate;

    logic branch_taken;

    logic [31:0] branch_target;
    logic [31:0] jump_target;

    logic [31:0] pc_plus_4;


    // ========================================
    // NEXT-PC CALCULATIONS
    // ========================================

    assign pc_plus_4 = pc + 32'd4;

    assign branch_target = pc + immediate;

    assign jump_target = pc + immediate;


    // ========================================
    // BRANCH DECISION
    // ========================================

    always_comb begin

        case (branch_type)

            2'b01:
                branch_taken = zero;       // BEQ

            2'b10:
                branch_taken = !zero;      // BNE

            default:
                branch_taken = 1'b0;

        endcase

    end


    // ========================================
    // PROGRAM COUNTER
    // ========================================

    pc pc_unit (
        .clk(clk),
        .reset(reset),

        .branch_taken(branch_taken),
        .branch_target(branch_target),

        .jump(jump),
        .jump_target(jump_target),

        .pc_out(pc)
    );


    // ========================================
    // INSTRUCTION MEMORY
    // ========================================

    instruction_memory imem (
        .address(pc),
        .instruction(instruction)
    );


    // ========================================
    // CPU CORE
    // ========================================

    cpu_core core (
        .clk(clk),

        .instruction(instruction),

        .pc_plus_4(pc_plus_4),

        .alu_result(alu_result),

        .branch_type(branch_type),

        .jump(jump),

        .zero(zero),

        .immediate(immediate)
    );

endmodule