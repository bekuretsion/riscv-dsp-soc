module instruction_memory (
    input  logic [31:0] address,
    output logic [31:0] instruction
);

    logic [31:0] memory [0:255];

    initial begin

        // addi x5, x0, 0
        memory[0] = 32'h00000293;

        // addi x6, x0, 5
        memory[1] = 32'h00500313;

        // loop:
        // addi x5, x5, 1
        memory[2] = 32'h00128293;

        // bne x5, x6, -4
        // PC 12 -> PC 8
        memory[3] = 32'hFE629EE3;

        // after loop:
        // addi x7, x0, 99
        memory[4] = 32'h06300393;

        // NOP
        memory[5] = 32'h00000013;

    end

    assign instruction = memory[address[9:2]];

endmodule