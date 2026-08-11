module tb_riscv_cpu;

    logic clk;
    logic reset;

    logic [31:0] pc;
    logic [31:0] instruction;
    logic [31:0] alu_result;

    riscv_cpu dut (
        .clk(clk),
        .reset(reset),
        .pc(pc),
        .instruction(instruction),
        .alu_result(alu_result)
    );

    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end

    initial begin

        $display("==============================");
        $display("     AUTOMATIC CPU TEST");
        $display("==============================");

        reset = 1;

        @(posedge clk);
        #1;

        reset = 0;

        // Execute instruction at PC=0
        @(posedge clk);
        #1;

        $display(
            "PC=%0d INST=%h x5=%0d",
            pc,
            instruction,
            dut.core.dp.rf.registers[5]
        );

        // Execute instruction at PC=4
        @(posedge clk);
        #1;

        $display(
            "PC=%0d INST=%h x6=%0d",
            pc,
            instruction,
            dut.core.dp.rf.registers[6]
        );

        // Execute instruction at PC=8
        @(posedge clk);
        #1;

        $display(
            "PC=%0d INST=%h x7=%0d",
            pc,
            instruction,
            dut.core.dp.rf.registers[7]
        );

        if (dut.core.dp.rf.registers[5] !== 32'd10)
            $fatal("FAIL: x5");

        if (dut.core.dp.rf.registers[6] !== 32'd20)
            $fatal("FAIL: x6");

        if (dut.core.dp.rf.registers[7] !== 32'd30)
            $fatal("FAIL: x7");

        $display("");
        $display("PASS: Program executed automatically");
        $display("x5 = 10");
        $display("x6 = 20");
        $display("x7 = 30");

        $display("==============================");
        $display("      CPU PROGRAM PASS");
        $display("==============================");

        $finish;

    end

endmodule