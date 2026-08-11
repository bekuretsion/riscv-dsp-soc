module tb_decoder;

    logic [31:0] instruction;

    logic [4:0] rs1_addr;
    logic [4:0] rs2_addr;
    logic [4:0] rd_addr;

    logic [31:0] immediate;

    logic alu_src;
    logic reg_write;
    logic [3:0] alu_ctrl;

    decoder dut (
        .instruction(instruction),
        .rs1_addr(rs1_addr),
        .rs2_addr(rs2_addr),
        .rd_addr(rd_addr),
        .immediate(immediate),
        .alu_src(alu_src),
        .reg_write(reg_write),
        .alu_ctrl(alu_ctrl)
    );

    initial begin

        $display("============================");
        $display("      DECODER TEST");
        $display("============================");

        // --------------------------------
        // addi x5, x0, 10
        // machine code = 0x00A00293
        // --------------------------------

        instruction = 32'h00A00293;
        #1;

        $display("Testing: addi x5, x0, 10");

        if (rs1_addr !== 5'd0)
            $fatal("FAIL rs1");

        if (rd_addr !== 5'd5)
            $fatal("FAIL rd");

        if (immediate !== 32'd10)
            $fatal("FAIL immediate");

        if (alu_src !== 1'b1)
            $fatal("FAIL alu_src");

        if (reg_write !== 1'b1)
            $fatal("FAIL reg_write");

        if (alu_ctrl !== 4'b0000)
            $fatal("FAIL alu_ctrl");

        $display("PASS: ADDI decoded correctly");


        // --------------------------------
        // add x7, x5, x6
        // --------------------------------

        instruction = 32'h006283B3;
        #1;

        $display("Testing: add x7, x5, x6");

        if (rs1_addr !== 5'd5)
            $fatal("FAIL rs1");

        if (rs2_addr !== 5'd6)
            $fatal("FAIL rs2");

        if (rd_addr !== 5'd7)
            $fatal("FAIL rd");

        if (alu_src !== 1'b0)
            $fatal("FAIL alu_src");

        if (reg_write !== 1'b1)
            $fatal("FAIL reg_write");

        if (alu_ctrl !== 4'b0000)
            $fatal("FAIL ADD control");

        $display("PASS: ADD decoded correctly");


        // --------------------------------
        // sub x7, x5, x6
        // --------------------------------

        instruction = 32'h406283B3;
        #1;

        $display("Testing: sub x7, x5, x6");

        if (alu_ctrl !== 4'b0001)
            $fatal("FAIL SUB control");

        $display("PASS: SUB decoded correctly");


        $display("============================");
        $display("    ALL DECODER TESTS PASS");
        $display("============================");

        $finish;

    end

endmodule