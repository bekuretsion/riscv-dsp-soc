module instruction_memory (
    input  logic [31:0] address,
    output logic [31:0] instruction
);

    logic [31:0] memory [0:255];

    initial begin

        // addi x5, x0, 5
        memory[0] = 32'h00500293;

        // addi x6, x0, 5
        memory[1] = 32'h00500313;

        // beq x5, x6, +8
        // PC 8 -> PC 16
        memory[2] = 32'h00628463;

        // should be skipped
        // addi x7, x0, 1
        memory[3] = 32'h00100393;

        // branch target
        // addi x7, x0, 99
        memory[4] = 32'h06300393;

        // nop
        memory[5] = 32'h00000013;

    end

    assign instruction = memory[address[9:2]];

endmodule