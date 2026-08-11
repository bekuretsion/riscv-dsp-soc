module tb_cpu_core;

    logic clk;
    logic [31:0] instruction;
    logic [31:0] alu_result;

    cpu_core dut (
        .clk(clk),
        .instruction(instruction),
        .alu_result(alu_result)
    );

    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end

    task automatic execute_instruction(
        input [31:0] instr
    );
        begin
            instruction = instr;

            @(posedge clk);
            #1;
        end
    endtask

    initial begin

        $display("=============================");
        $display("       CPU CORE TEST");
        $display("=============================");

        instruction = 32'd0;

        // addi x5, x0, 10
        execute_instruction(32'h00A00293);

        $display(
            "After ADDI: x5 = %0d",
            dut.dp.rf.registers[5]
        );

        // addi x6, x0, 20
        execute_instruction(32'h01400313);

        $display(
            "After ADDI: x6 = %0d",
            dut.dp.rf.registers[6]
        );

        // add x7, x5, x6
        execute_instruction(32'h006283B3);

        $display(
            "After ADD: x7 = %0d",
            dut.dp.rf.registers[7]
        );

        if (dut.dp.rf.registers[5] !== 32'd10)
            $fatal("FAIL x5");

        if (dut.dp.rf.registers[6] !== 32'd20)
            $fatal("FAIL x6");

        if (dut.dp.rf.registers[7] !== 32'd30)
            $fatal("FAIL x7");

        $display("");
        $display("PASS:");
        $display("addi x5, x0, 10");
        $display("addi x6, x0, 20");
        $display("add  x7, x5, x6");

        $display("=============================");
        $display("       CPU CORE PASS");
        $display("=============================");

        $finish;

    end

endmodule