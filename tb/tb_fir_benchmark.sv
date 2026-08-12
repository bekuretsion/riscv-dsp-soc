module tb_fir_benchmark;

    logic clk;
    logic reset;

    logic [31:0] pc;
    logic [31:0] instruction;
    logic [31:0] alu_result;

    logic fir_selected;
    logic fir_done;

    integer total_cycles;

    integer sw_done_cycle;
    integer hw_start_cycle;
    integer hw_done_cycle;

    logic sw_seen;
    logic hw_started;
    logic hw_seen;


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
        $display("        FIR BENCHMARK");
        $display("==============================");

        reset = 1'b1;

        total_cycles   = 0;

        sw_done_cycle  = 0;
        hw_start_cycle = 0;
        hw_done_cycle  = 0;

        sw_seen    = 1'b0;
        hw_started = 1'b0;
        hw_seen    = 1'b0;

        repeat (2)
            @(posedge clk);

        reset = 1'b0;


        repeat (80) begin

            @(posedge clk);
            #1;

            total_cycles = total_cycles + 1;


            // Software FIR result appears in x24.

            if (
                !sw_seen &&
                dut.core.dp.rf.registers[24] == 32'd200
            ) begin

                sw_seen = 1'b1;
                sw_done_cycle = total_cycles;

                $display(
                    "Software FIR done at cycle %0d",
                    sw_done_cycle
                );

            end


            // Hardware section starts when x10 becomes
            // FIR base address.

            if (
                !hw_started &&
                dut.core.dp.rf.registers[10]
                == 32'h4000_0000
            ) begin

                hw_started = 1'b1;
                hw_start_cycle = total_cycles;

                $display(
                    "Hardware FIR section starts at cycle %0d",
                    hw_start_cycle
                );

            end


            // Hardware result appears in x25.

            if (
                !hw_seen &&
                dut.core.dp.rf.registers[25] == 32'd200
            ) begin

                hw_seen = 1'b1;
                hw_done_cycle = total_cycles;

                $display(
                    "Hardware FIR done at cycle %0d",
                    hw_done_cycle
                );

            end

        end


        // ========================================
        // FUNCTIONAL CHECKS
        // ========================================

        if (
            dut.core.dp.rf.registers[24]
            !== 32'd200
        )
            $fatal(
                "FAIL: software FIR result = %0d",
                dut.core.dp.rf.registers[24]
            );


        if (
            dut.core.dp.rf.registers[25]
            !== 32'd200
        )
            $fatal(
                "FAIL: hardware FIR result = %0d",
                dut.core.dp.rf.registers[25]
            );


        if (!sw_seen)
            $fatal(
                "FAIL: software completion not detected"
            );


        if (!hw_started)
            $fatal(
                "FAIL: hardware start not detected"
            );


        if (!hw_seen)
            $fatal(
                "FAIL: hardware completion not detected"
            );


        // ========================================
        // REPORT
        // ========================================

        $display("");
        $display("Software result = %0d",
            dut.core.dp.rf.registers[24]
        );

        $display("Hardware result = %0d",
            dut.core.dp.rf.registers[25]
        );

        $display("");

        $display(
            "Software completion cycle = %0d",
            sw_done_cycle
        );

        $display(
            "Hardware section cycles   = %0d",
            hw_done_cycle - hw_start_cycle
        );

        $display("");
        $display(
            "NOTE: this is an initial architectural benchmark."
        );

        $display(
            "Hardware timing currently includes MMIO setup/data transfers."
        );

        $display("==============================");
        $display("       FIR BENCHMARK PASS");
        $display("==============================");

        $finish;

    end

endmodule