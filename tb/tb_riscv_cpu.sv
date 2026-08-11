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
        $display("          BEQ TEST");
        $display("==============================");

        reset = 1;

        @(posedge clk);
        #1;

        reset = 0;

        // addi x5, x0, 5
        @(posedge clk);
        #1;

        $display(
            "PC=%0d x5=%0d",
            pc,
            dut.core.dp.rf.registers[5]
        );

        // addi x6, x0, 5
        @(posedge clk);
        #1;

        $display(
            "PC=%0d x6=%0d",
            pc,
            dut.core.dp.rf.registers[6]
        );

        // BEQ should branch from PC=8 to PC=16
        @(posedge clk);
        #1;

        $display(
            "After BEQ: PC=%0d",
            pc
        );

        if (pc !== 32'd16)
            $fatal("FAIL: expected PC=16");

        $display("PASS: BEQ jumped to PC=16");

        // Execute addi x7, x0, 99
        @(posedge clk);
        #1;

        $display(
            "x7=%0d",
            dut.core.dp.rf.registers[7]
        );

        if (dut.core.dp.rf.registers[5] !== 32'd5)
            $fatal("FAIL: x5");

        if (dut.core.dp.rf.registers[6] !== 32'd5)
            $fatal("FAIL: x6");

        if (dut.core.dp.rf.registers[7] !== 32'd99)
            $fatal("FAIL: x7");

        $display("");
        $display("PASS: x5 = 5");
        $display("PASS: x6 = 5");
        $display("PASS: PC=12 was skipped");
        $display("PASS: x7 = 99");

        $display("==============================");
        $display("        BEQ TEST PASS");
        $display("==============================");

        $finish;

    end

endmodule