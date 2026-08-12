module tb_riscv_cpu;

    logic clk;
    logic reset;

    logic [31:0] pc;
    logic [31:0] instruction;
    logic [31:0] alu_result;

    logic fir_selected;
    logic fir_done;

    integer cycle_count;


    riscv_cpu dut (
        .clk(clk),
        .reset(reset),

        .pc(pc),
        .instruction(instruction),
        .alu_result(alu_result),

        .fir_selected(fir_selected),
        .fir_done(fir_done)
    );


    initial begin
        clk = 1'b0;
        forever #5 clk = ~clk;
    end


    initial begin

        $display("==============================");
        $display("      CPU -> FIR SOC TEST");
        $display("==============================");

        reset = 1'b1;
        cycle_count = 0;

        repeat (2)
            @(posedge clk);

        reset = 1'b0;


        // Run enough cycles for all MMIO accesses
        repeat (25) begin

            @(posedge clk);
            #1;

            cycle_count = cycle_count + 1;

            $display(
                "cycle=%0d PC=%0d INST=%h x10=%h x9=%0d FIR=%b",
                cycle_count,
                pc,
                instruction,
                dut.core.dp.rf.registers[10],
                dut.core.dp.rf.registers[9],
                fir_selected
            );

        end


        // ========================================
        // CHECK LUI
        // ========================================

        if (
            dut.core.dp.rf.registers[10]
            !== 32'h4000_0000
        )
            $fatal(
                "FAIL: x10 expected 0x40000000"
            );


        // ========================================
        // CHECK FIR COEFFICIENTS
        // ========================================

        if (
            dut.core.dp.mmio.fir.coeff0
            !== 32'sd1
        )
            $fatal("FAIL: coeff0");

        if (
            dut.core.dp.mmio.fir.coeff1
            !== 32'sd2
        )
            $fatal("FAIL: coeff1");

        if (
            dut.core.dp.mmio.fir.coeff2
            !== 32'sd3
        )
            $fatal("FAIL: coeff2");

        if (
            dut.core.dp.mmio.fir.coeff3
            !== 32'sd4
        )
            $fatal("FAIL: coeff3");


        // ========================================
        // CHECK FIR RESULT
        //
        // first sample:
        //
        // 10*1 + 0 + 0 + 0 = 10
        // ========================================

        if (
            dut.core.dp.rf.registers[9]
            !== 32'd10
        )
            $fatal(
                "FAIL: FIR result expected 10, got %0d",
                dut.core.dp.rf.registers[9]
            );


        $display("");
        $display("PASS: LUI generated 0x40000000");
        $display("PASS: CPU wrote FIR coefficients");
        $display("PASS: CPU wrote FIR sample");
        $display("PASS: CPU started accelerator");
        $display("PASS: CPU read FIR result");
        $display("PASS: x9 = 10");

        $display("==============================");
        $display("      CPU -> FIR SOC PASS");
        $display("==============================");

        $finish;

    end

endmodule