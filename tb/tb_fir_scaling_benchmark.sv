module tb_fir_scaling_benchmark;

    logic clk;
    logic reset;

    logic [31:0] pc;
    logic [31:0] instruction;
    logic [31:0] alu_result;

    logic fir_selected;
    logic fir_done;


    integer cycle_count;


    // ========================================
    // SOFTWARE TIMING
    // ========================================

    integer sw_start;

    integer sw_8;
    integer sw_16;
    integer sw_32;


    // ========================================
    // HARDWARE TIMING
    // ========================================

    integer hw_start;

    integer hw_8;
    integer hw_16;
    integer hw_32;


    // ========================================
    // CYCLE RESULTS
    // ========================================

    integer sw_cycles_8;
    integer sw_cycles_16;
    integer sw_cycles_32;

    integer hw_cycles_8;
    integer hw_cycles_16;
    integer hw_cycles_32;


    // ========================================
    // SPEEDUPS
    // ========================================

    real speedup_8;
    real speedup_16;
    real speedup_32;


    logic sw_started;
    logic hw_started;

    logic sw_seen_8;
    logic sw_seen_16;
    logic sw_seen_32;

    logic hw_seen_8;
    logic hw_seen_16;
    logic hw_seen_32;


    riscv_cpu dut (
        .clk(clk),
        .reset(reset),

        .pc(pc),
        .instruction(instruction),

        .alu_result(alu_result),

        .fir_selected(fir_selected),
        .fir_done(fir_done)
    );


    // ========================================
    // CLOCK
    // ========================================

    initial begin

        clk = 1'b0;

        forever #5
            clk = ~clk;

    end


    // ========================================
    // BENCHMARK
    // ========================================

    initial begin

        $display(
            "================================"
        );

        $display(
            "     FIR SCALING BENCHMARK"
        );

        $display(
            "================================"
        );


        reset = 1'b1;


        cycle_count = 0;


        sw_start = 0;

        sw_8  = 0;
        sw_16 = 0;
        sw_32 = 0;


        hw_start = 0;

        hw_8  = 0;
        hw_16 = 0;
        hw_32 = 0;


        sw_started = 1'b0;
        hw_started = 1'b0;


        sw_seen_8  = 1'b0;
        sw_seen_16 = 1'b0;
        sw_seen_32 = 1'b0;


        hw_seen_8  = 1'b0;
        hw_seen_16 = 1'b0;
        hw_seen_32 = 1'b0;


        repeat (2)
            @(posedge clk);


        reset = 1'b0;


        // Plenty of cycles for the complete benchmark

        repeat (1200) begin

            @(posedge clk);
            #1;

            cycle_count =
                cycle_count + 1;


            // ====================================
            // SOFTWARE START
            //
            // x30 = 1
            // ====================================

            if (
                !sw_started &&
                dut.core.dp.rf.registers[30]
                == 32'd1
            ) begin

                sw_started = 1'b1;

                sw_start =
                    cycle_count;


                $display(
                    "SW start cycle = %0d",
                    sw_start
                );

            end


            // ====================================
            // SOFTWARE 8 SAMPLES
            // ====================================

            if (
                sw_started &&
                !sw_seen_8 &&
                dut.core.dp.rf.registers[27]
                == 32'd8
            ) begin

                sw_seen_8 = 1'b1;

                sw_8 =
                    cycle_count;


                $display(
                    "SW 8 samples: cycle=%0d result=%0d",
                    sw_8,
                    dut.core.dp.rf.registers[24]
                );


                if (
                    dut.core.dp.rf.registers[24]
                    !== 32'd600
                )
                    $fatal(
                        "FAIL: SW result at 8 samples = %0d",
                        dut.core.dp.rf.registers[24]
                    );

            end


            // ====================================
            // SOFTWARE 16 SAMPLES
            // ====================================

            if (
                sw_started &&
                !sw_seen_16 &&
                dut.core.dp.rf.registers[27]
                == 32'd16
            ) begin

                sw_seen_16 = 1'b1;

                sw_16 =
                    cycle_count;


                $display(
                    "SW 16 samples: cycle=%0d result=%0d",
                    sw_16,
                    dut.core.dp.rf.registers[24]
                );


                if (
                    dut.core.dp.rf.registers[24]
                    !== 32'd1400
                )
                    $fatal(
                        "FAIL: SW result at 16 samples = %0d",
                        dut.core.dp.rf.registers[24]
                    );

            end


            // ====================================
            // SOFTWARE 32 SAMPLES
            // ====================================

            if (
                sw_started &&
                !sw_seen_32 &&
                dut.core.dp.rf.registers[27]
                == 32'd32
            ) begin

                sw_seen_32 = 1'b1;

                sw_32 =
                    cycle_count;


                $display(
                    "SW 32 samples: cycle=%0d result=%0d",
                    sw_32,
                    dut.core.dp.rf.registers[24]
                );


                if (
                    dut.core.dp.rf.registers[24]
                    !== 32'd3000
                )
                    $fatal(
                        "FAIL: SW result at 32 samples = %0d",
                        dut.core.dp.rf.registers[24]
                    );

            end


            // ====================================
            // HARDWARE START
            //
            // x31 = 1
            // ====================================

            if (
                !hw_started &&
                dut.core.dp.rf.registers[31]
                == 32'd1
            ) begin

                hw_started = 1'b1;

                hw_start =
                    cycle_count;


                $display(
                    "HW start cycle = %0d",
                    hw_start
                );

            end


            // ====================================
            // HARDWARE 8 SAMPLES
            // ====================================

            if (
                hw_started &&
                !hw_seen_8 &&
                dut.core.dp.rf.registers[28]
                == 32'd8
            ) begin

                hw_seen_8 = 1'b1;

                hw_8 =
                    cycle_count;


                $display(
                    "HW 8 samples: cycle=%0d result=%0d",
                    hw_8,
                    dut.core.dp.rf.registers[25]
                );


                if (
                    dut.core.dp.rf.registers[25]
                    !== 32'd600
                )
                    $fatal(
                        "FAIL: HW result at 8 samples = %0d",
                        dut.core.dp.rf.registers[25]
                    );

            end


            // ====================================
            // HARDWARE 16 SAMPLES
            // ====================================

            if (
                hw_started &&
                !hw_seen_16 &&
                dut.core.dp.rf.registers[28]
                == 32'd16
            ) begin

                hw_seen_16 = 1'b1;

                hw_16 =
                    cycle_count;


                $display(
                    "HW 16 samples: cycle=%0d result=%0d",
                    hw_16,
                    dut.core.dp.rf.registers[25]
                );


                if (
                    dut.core.dp.rf.registers[25]
                    !== 32'd1400
                )
                    $fatal(
                        "FAIL: HW result at 16 samples = %0d",
                        dut.core.dp.rf.registers[25]
                    );

            end


            // ====================================
            // HARDWARE 32 SAMPLES
            // ====================================

            if (
                hw_started &&
                !hw_seen_32 &&
                dut.core.dp.rf.registers[28]
                == 32'd32
            ) begin

                hw_seen_32 = 1'b1;

                hw_32 =
                    cycle_count;


                $display(
                    "HW 32 samples: cycle=%0d result=%0d",
                    hw_32,
                    dut.core.dp.rf.registers[25]
                );


                if (
                    dut.core.dp.rf.registers[25]
                    !== 32'd3000
                )
                    $fatal(
                        "FAIL: HW result at 32 samples = %0d",
                        dut.core.dp.rf.registers[25]
                    );

            end

        end


        // ========================================
        // VERIFY ALL MILESTONES WERE REACHED
        // ========================================

        if (!sw_seen_8)
            $fatal("FAIL: SW 8-sample point missing");

        if (!sw_seen_16)
            $fatal("FAIL: SW 16-sample point missing");

        if (!sw_seen_32)
            $fatal("FAIL: SW 32-sample point missing");


        if (!hw_seen_8)
            $fatal("FAIL: HW 8-sample point missing");

        if (!hw_seen_16)
            $fatal("FAIL: HW 16-sample point missing");

        if (!hw_seen_32)
            $fatal("FAIL: HW 32-sample point missing");


        // ========================================
        // CALCULATE CYCLES
        // ========================================

        sw_cycles_8 =
            sw_8 - sw_start;

        sw_cycles_16 =
            sw_16 - sw_start;

        sw_cycles_32 =
            sw_32 - sw_start;


        hw_cycles_8 =
            hw_8 - hw_start;

        hw_cycles_16 =
            hw_16 - hw_start;

        hw_cycles_32 =
            hw_32 - hw_start;


        // ========================================
        // CALCULATE SPEEDUPS
        // ========================================

        speedup_8 =
            $itor(sw_cycles_8)
            /
            $itor(hw_cycles_8);


        speedup_16 =
            $itor(sw_cycles_16)
            /
            $itor(hw_cycles_16);


        speedup_32 =
            $itor(sw_cycles_32)
            /
            $itor(hw_cycles_32);


        // ========================================
        // RESULTS
        // ========================================

        $display("");
        $display(
            "=============================================="
        );

        $display(
            "              SCALING RESULTS"
        );

        $display(
            "=============================================="
        );

        $display(
            "Samples | SW cycles | HW cycles | Speedup"
        );

        $display(
            "----------------------------------------------"
        );

        $display(
            "8       | %0d        | %0d        | %0.2fx",
            sw_cycles_8,
            hw_cycles_8,
            speedup_8
        );

        $display(
            "16      | %0d        | %0d        | %0.2fx",
            sw_cycles_16,
            hw_cycles_16,
            speedup_16
        );

        $display(
            "32      | %0d        | %0d        | %0.2fx",
            sw_cycles_32,
            hw_cycles_32,
            speedup_32
        );


        $display("");
        $display(
            "SW cycles/sample @32 = %0f",
            $itor(sw_cycles_32) / 32.0
        );

        $display(
            "HW cycles/sample @32 = %0f",
            $itor(hw_cycles_32) / 32.0
        );


        $display(
            "=============================================="
        );

        $display(
            "      FIR SCALING BENCHMARK PASS"
        );

        $display(
            "=============================================="
        );


        $finish;

    end

endmodule
