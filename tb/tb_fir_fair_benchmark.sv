module tb_fir_fair_benchmark;

    logic clk;
    logic reset;

    logic [31:0] pc;
    logic [31:0] instruction;
    logic [31:0] alu_result;

    logic fir_selected;
    logic fir_done;

    integer cycle_count;

    integer sw_start_cycle;
    integer sw_end_cycle;

    integer hw_start_cycle;
    integer hw_end_cycle;

    integer sw_cycles;
    integer hw_cycles;

    real speedup;

    logic sw_started;
    logic sw_finished;

    logic hw_started;
    logic hw_finished;


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
        $display("      FAIR FIR BENCHMARK");
        $display("==============================");

        reset = 1'b1;

        cycle_count = 0;

        sw_start_cycle = 0;
        sw_end_cycle   = 0;

        hw_start_cycle = 0;
        hw_end_cycle   = 0;

        sw_cycles = 0;
        hw_cycles = 0;

        speedup = 0.0;

        sw_started  = 1'b0;
        sw_finished = 1'b0;

        hw_started  = 1'b0;
        hw_finished = 1'b0;


        repeat (2)
            @(posedge clk);

        reset = 1'b0;


        repeat (300) begin

            @(posedge clk);
            #1;

            cycle_count = cycle_count + 1;


            // Software benchmark starts when x30 = 1

            if (
                !sw_started &&
                dut.core.dp.rf.registers[30] == 32'd1
            ) begin

                sw_started = 1'b1;
                sw_start_cycle = cycle_count;

                $display(
                    "Software start cycle = %0d",
                    sw_start_cycle
                );

            end


            // Software benchmark ends when x30 = 2

            if (
                sw_started &&
                !sw_finished &&
                dut.core.dp.rf.registers[30] == 32'd2
            ) begin

                sw_finished = 1'b1;
                sw_end_cycle = cycle_count;

                $display(
                    "Software end cycle = %0d",
                    sw_end_cycle
                );

            end


            // Hardware benchmark starts when x31 = 1

            if (
                !hw_started &&
                dut.core.dp.rf.registers[31] == 32'd1
            ) begin

                hw_started = 1'b1;
                hw_start_cycle = cycle_count;

                $display(
                    "Hardware start cycle = %0d",
                    hw_start_cycle
                );

            end


            // Hardware benchmark ends when x31 = 2

            if (
                hw_started &&
                !hw_finished &&
                dut.core.dp.rf.registers[31] == 32'd2
            ) begin

                hw_finished = 1'b1;
                hw_end_cycle = cycle_count;

                $display(
                    "Hardware end cycle = %0d",
                    hw_end_cycle
                );

            end

        end


        // Verify software result

        if (
            dut.core.dp.rf.registers[24] !== 32'd600
        )
            $fatal(
                "FAIL: software result = %0d",
                dut.core.dp.rf.registers[24]
            );


        // Verify hardware result

        if (
            dut.core.dp.rf.registers[25] !== 32'd600
        )
            $fatal(
                "FAIL: hardware result = %0d",
                dut.core.dp.rf.registers[25]
            );


        if (!sw_finished)
            $fatal(
                "FAIL: software benchmark did not finish"
            );


        if (!hw_finished)
            $fatal(
                "FAIL: hardware benchmark did not finish"
            );


        // Calculate cycle counts

        sw_cycles =
            sw_end_cycle - sw_start_cycle;

        hw_cycles =
            hw_end_cycle - hw_start_cycle;


        speedup =
            $itor(sw_cycles)
            /
            $itor(hw_cycles);


        // Report

        $display("");
        $display("==============================");
        $display("          RESULTS");
        $display("==============================");

        $display(
            "Samples processed : 8"
        );

        $display(
            "Software result   : %0d",
            dut.core.dp.rf.registers[24]
        );

        $display(
            "Hardware result   : %0d",
            dut.core.dp.rf.registers[25]
        );

        $display("");

        $display(
            "Software cycles   : %0d",
            sw_cycles
        );

        $display(
            "Hardware cycles   : %0d",
            hw_cycles
        );

        $display(
            "SW cycles/sample  : %0f",
            $itor(sw_cycles) / 8.0
        );

        $display(
            "HW cycles/sample  : %0f",
            $itor(hw_cycles) / 8.0
        );

        $display("");

        $display(
            "Measured speedup  : %0.2fx",
            speedup
        );

        $display("==============================");
        $display("    FAIR FIR BENCHMARK PASS");
        $display("==============================");

        $finish;

    end

endmodule
