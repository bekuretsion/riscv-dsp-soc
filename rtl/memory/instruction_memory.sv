module instruction_memory (
    input  logic [31:0] address,
    output logic [31:0] instruction
);

    logic [31:0] memory [0:255];

    initial begin

        // addi x5, x0, 42
        memory[0] = 32'h02A00293;

        // sw x5, 0(x0)
        memory[1] = 32'h00502023;

        // lw x6, 0(x0)
        memory[2] = 32'h00002303;

        // addi x7, x6, 8
        memory[3] = 32'h00830393;

        // NOP
        memory[4] = 32'h00000013;

    end

    assign instruction = memory[address[9:2]];

endmodule