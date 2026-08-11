module tb_decoder;

    logic [31:0] instruction;

    logic [4:0] rs1_addr;
    logic [4:0] rs2_addr;
    logic [4:0] rd_addr;

    logic [31:0] immediate;

    logic alu_src;
    logic reg_write;
    logic mem_write;
    logic mem_to_reg;

    logic [3:0] alu_ctrl;

    decoder dut (
        .instruction(instruction),

        .rs1_addr(rs1_addr),
        .rs2_addr(rs2_addr),
        .rd_addr(rd_addr),

        .immediate(immediate),

        .alu_src(alu_src),
        .reg_write(reg_write),
        .mem_write(mem_write),
        .mem_to_reg(mem_to_reg),

        .alu_ctrl(alu_ctrl)
    );


    initial begin

        $display("============================");
        $display("      DECODER TEST");
        $display("============================");


        // ==================================================
        // ADDI
        // addi x5, x0, 10
        // 0x00A00293
        // ==================================================

        instruction = 32'h00A00293;
        #1;

        $display("Testing: addi x5, x0, 10");

        if (rs1_addr !== 5'd0)
            $fatal("FAIL ADDI rs1");

        if (rd_addr !== 5'd5)
            $fatal("FAIL ADDI rd");

        if (immediate !== 32'd10)
            $fatal("FAIL ADDI immediate");

        if (alu_src !== 1'b1)
            $fatal("FAIL ADDI alu_src");

        if (reg_write !== 1'b1)
            $fatal("FAIL ADDI reg_write");

        if (mem_write !== 1'b0)
            $fatal("FAIL ADDI mem_write");

        if (mem_to_reg !== 1'b0)
            $fatal("FAIL ADDI mem_to_reg");

        if (alu_ctrl !== 4'b0000)
            $fatal("FAIL ADDI alu_ctrl");

        $display("PASS: ADDI decoded correctly");


        // ==================================================
        // ADD
        // add x7, x5, x6
        // 0x006283B3
        // ==================================================

        instruction = 32'h006283B3;
        #1;

        $display("Testing: add x7, x5, x6");

        if (rs1_addr !== 5'd5)
            $fatal("FAIL ADD rs1");

        if (rs2_addr !== 5'd6)
            $fatal("FAIL ADD rs2");

        if (rd_addr !== 5'd7)
            $fatal("FAIL ADD rd");

        if (alu_src !== 1'b0)
            $fatal("FAIL ADD alu_src");

        if (reg_write !== 1'b1)
            $fatal("FAIL ADD reg_write");

        if (mem_write !== 1'b0)
            $fatal("FAIL ADD mem_write");

        if (mem_to_reg !== 1'b0)
            $fatal("FAIL ADD mem_to_reg");

        if (alu_ctrl !== 4'b0000)
            $fatal("FAIL ADD alu_ctrl");

        $display("PASS: ADD decoded correctly");


        // ==================================================
        // SUB
        // sub x7, x5, x6
        // 0x406283B3
        // ==================================================

        instruction = 32'h406283B3;
        #1;

        $display("Testing: sub x7, x5, x6");

        if (alu_ctrl !== 4'b0001)
            $fatal("FAIL SUB alu_ctrl");

        if (reg_write !== 1'b1)
            $fatal("FAIL SUB reg_write");

        if (mem_write !== 1'b0)
            $fatal("FAIL SUB mem_write");

        $display("PASS: SUB decoded correctly");


        // ==================================================
        // LW
        // lw x6, 0(x0)
        // 0x00002303
        // ==================================================

        instruction = 32'h00002303;
        #1;

        $display("Testing: lw x6, 0(x0)");

        if (rs1_addr !== 5'd0)
            $fatal("FAIL LW rs1");

        if (rd_addr !== 5'd6)
            $fatal("FAIL LW rd");

        if (immediate !== 32'd0)
            $fatal("FAIL LW immediate");

        if (alu_src !== 1'b1)
            $fatal("FAIL LW alu_src");

        if (reg_write !== 1'b1)
            $fatal("FAIL LW reg_write");

        if (mem_write !== 1'b0)
            $fatal("FAIL LW mem_write");

        if (mem_to_reg !== 1'b1)
            $fatal("FAIL LW mem_to_reg");

        if (alu_ctrl !== 4'b0000)
            $fatal("FAIL LW alu_ctrl");

        $display("PASS: LW decoded correctly");


        // ==================================================
        // SW
        // sw x5, 0(x0)
        // 0x00502023
        // ==================================================

        instruction = 32'h00502023;
        #1;

        $display("Testing: sw x5, 0(x0)");

        if (rs1_addr !== 5'd0)
            $fatal("FAIL SW rs1");

        if (rs2_addr !== 5'd5)
            $fatal("FAIL SW rs2");

        if (immediate !== 32'd0)
            $fatal("FAIL SW immediate");

        if (alu_src !== 1'b1)
            $fatal("FAIL SW alu_src");

        if (reg_write !== 1'b0)
            $fatal("FAIL SW reg_write");

        if (mem_write !== 1'b1)
            $fatal("FAIL SW mem_write");

        if (mem_to_reg !== 1'b0)
            $fatal("FAIL SW mem_to_reg");

        if (alu_ctrl !== 4'b0000)
            $fatal("FAIL SW alu_ctrl");

        $display("PASS: SW decoded correctly");


        $display("============================");
        $display("   ALL DECODER TESTS PASS");
        $display("============================");

        $finish;

    end

endmodule