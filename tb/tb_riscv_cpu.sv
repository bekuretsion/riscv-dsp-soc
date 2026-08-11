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
        $display("      LOAD / STORE TEST");
        $display("==============================");

        reset = 1;

        @(posedge clk);
        #1;

        reset = 0;


        // --------------------------------
        // addi x5, x0, 42
        // --------------------------------

        @(posedge clk);
        #1;

        $display(
            "x5 = %0d",
            dut.core.dp.rf.registers[5]
        );


        // --------------------------------
        // sw x5, 0(x0)
        // --------------------------------

        @(posedge clk);
        #1;

        $display(
            "RAM[0] = %0d",
            dut.core.dp.dmem.memory[0]
        );


        // --------------------------------
        // lw x6, 0(x0)
        // --------------------------------

        @(posedge clk);
        #1;

        $display(
            "x6 = %0d",
            dut.core.dp.rf.registers[6]
        );


        // --------------------------------
        // addi x7, x6, 8
        // --------------------------------

        @(posedge clk);
        #1;

        $display(
            "x7 = %0d",
            dut.core.dp.rf.registers[7]
        );


        // ========================================
        // VERIFY EVERYTHING
        // ========================================

        if (dut.core.dp.rf.registers[5] !== 32'd42)
            $fatal("FAIL: x5");

        if (dut.core.dp.dmem.memory[0] !== 32'd42)
            $fatal("FAIL: RAM[0]");

        if (dut.core.dp.rf.registers[6] !== 32'd42)
            $fatal("FAIL: x6");

        if (dut.core.dp.rf.registers[7] !== 32'd50)
            $fatal("FAIL: x7");


        $display("");
        $display("PASS:");
        $display("x5     = 42");
        $display("RAM[0] = 42");
        $display("x6     = 42");
        $display("x7     = 50");

        $display("==============================");
        $display("     LOAD / STORE PASS");
        $display("==============================");

        $finish;

    end

endmodule