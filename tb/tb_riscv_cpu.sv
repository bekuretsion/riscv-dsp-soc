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

    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end

    initial begin

        $display("==============================");
        $display("        BNE LOOP TEST");
        $display("==============================");

        reset = 1;
        cycle_count = 0;

        @(posedge clk);
        #1;

        reset = 0;

        repeat (13) begin

            @(posedge clk);
            #1;

            cycle_count = cycle_count + 1;

            $display(
                "cycle=%0d PC=%0d x5=%0d x6=%0d x7=%0d",
                cycle_count,
                pc,
                dut.core.dp.rf.registers[5],
                dut.core.dp.rf.registers[6],
                dut.core.dp.rf.registers[7]
            );

        end

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

        $display("");
        $display("PASS: loop executed correctly");
        $display("PASS: x5 counted from 0 to 5");
        $display("PASS: BNE exited when x5 == x6");
        $display("PASS: x7 = 99");

        $display("==============================");
        $display("       BNE LOOP PASS");
        $display("==============================");

        $finish;

    end

endmodule