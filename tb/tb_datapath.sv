module tb_datapath;

    logic clk;
    logic we;
    logic alu_src;

    logic [4:0] rs1_addr;
    logic [4:0] rs2_addr;
    logic [4:0] rd_addr;

    logic [3:0] alu_ctrl;
    logic [31:0] immediate;

    logic [31:0] rs1_data;
    logic [31:0] rs2_data;
    logic [31:0] alu_result;

    datapath dut (
        .clk(clk),
        .we(we),

        .rs1_addr(rs1_addr),
        .rs2_addr(rs2_addr),
        .rd_addr(rd_addr),

        .immediate(immediate),
        .alu_src(alu_src),
        .alu_ctrl(alu_ctrl),

        .rs1_data(rs1_data),
        .rs2_data(rs2_data),
        .alu_result(alu_result)
    );

    // Clock
    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end


    task automatic execute(
        input [4:0] src1,
        input [4:0] src2,
        input [4:0] dest,
        input [31:0] imm,
        input use_imm,
        input [3:0] operation
    );

        begin

            rs1_addr = src1;
            rs2_addr = src2;
            rd_addr = dest;

            immediate = imm;
            alu_src = use_imm;
            alu_ctrl = operation;

            we = 1;

            @(posedge clk);
            #1;

            we = 0;

        end

    endtask


    initial begin

        $display("==============================");
        $display("   MINI RISC-V DATAPATH TEST");
        $display("==============================");

        we = 0;
        rs1_addr = 0;
        rs2_addr = 0;
        rd_addr = 0;
        immediate = 0;
        alu_src = 0;
        alu_ctrl = 0;


        // --------------------------------
        // addi x5, x0, 10
        // --------------------------------

        execute(
            5'd0,
            5'd0,
            5'd5,
            32'd10,
            1'b1,
            4'b0000
        );

        $display("x5 = %0d", dut.rf.registers[5]);


        // --------------------------------
        // addi x6, x0, 20
        // --------------------------------

        execute(
            5'd0,
            5'd0,
            5'd6,
            32'd20,
            1'b1,
            4'b0000
        );

        $display("x6 = %0d", dut.rf.registers[6]);


        // --------------------------------
        // add x7, x5, x6
        // --------------------------------

        execute(
            5'd5,
            5'd6,
            5'd7,
            32'd0,
            1'b0,
            4'b0000
        );

        $display("x7 = %0d", dut.rf.registers[7]);


        // Verify final result

        if (dut.rf.registers[7] !== 32'd30) begin

            $display("FAIL: expected x7 = 30");
            $fatal;

        end


        $display("");
        $display("PASS:");
        $display("x5 = 10");
        $display("x6 = 20");
        $display("x7 = x5 + x6 = 30");

        $display("==============================");
        $display("   MINI PROGRAM PASSED");
        $display("==============================");

        $finish;

    end

endmodule