module tb_riscv_cpu;

    logic clk;
    logic reset;

    logic [31:0] pc;
    logic [31:0] instruction;
    logic [31:0] alu_result;

    integer cycle_count;

    riscv_cpu dut (
        .clk(clk),
        .reset(reset),

        .pc(pc),
        .instruction(instruction),
        .alu_result(alu_result)
    );


    // ========================================
    // CLOCK
    // ========================================

    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end


    // ========================================
    // TEST
    // ========================================

    initial begin

        $display("==============================");
        $display("       BNE + JAL TEST");
        $display("==============================");

        reset = 1;
        cycle_count = 0;

        @(posedge clk);
        #1;

        reset = 0;


        // Run enough cycles to:
        //
        // 1. execute the BNE loop
        // 2. set x7 = 99
        // 3. reach JAL at PC=20
        // 4. verify PC remains 20

        repeat (16) begin

            @(posedge clk);
            #1;

            cycle_count = cycle_count + 1;

            $display(
                "cycle=%0d PC=%0d INST=%h x5=%0d x6=%0d x7=%0d",
                cycle_count,
                pc,
                instruction,
                dut.core.dp.rf.registers[5],
                dut.core.dp.rf.registers[6],
                dut.core.dp.rf.registers[7]
            );

        end


        // ========================================
        // VERIFY LOOP
        // ========================================

        if (dut.core.dp.rf.registers[5] !== 32'd5)
            $fatal(
                "FAIL: expected x5=5, got %0d",
                dut.core.dp.rf.registers[5]
            );

        if (dut.core.dp.rf.registers[6] !== 32'd5)
            $fatal(
                "FAIL: expected x6=5, got %0d",
                dut.core.dp.rf.registers[6]
            );

        if (dut.core.dp.rf.registers[7] !== 32'd99)
            $fatal(
                "FAIL: expected x7=99, got %0d",
                dut.core.dp.rf.registers[7]
            );


        // ========================================
        // VERIFY JAL
        //
        // done:
        //     j done
        //
        // PC should remain 20.
        // ========================================

        if (pc !== 32'd20)
            $fatal(
                "FAIL: JAL expected PC=20, got %0d",
                pc
            );


        $display("");
        $display("PASS: BNE loop executed correctly");
        $display("PASS: x5 = 5");
        $display("PASS: x6 = 5");
        $display("PASS: x7 = 99");
        $display("PASS: JAL keeps PC at 20");

        $display("==============================");
        $display("      BNE + JAL PASS");
        $display("==============================");

        $finish;

    end

endmodule