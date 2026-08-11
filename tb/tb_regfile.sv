module tb_regfile;

    logic        clk;
    logic        we;

    logic [4:0]  rs1_addr;
    logic [4:0]  rs2_addr;
    logic [4:0]  rd_addr;

    logic [31:0] rd_data;

    logic [31:0] rs1_data;
    logic [31:0] rs2_data;

    regfile dut (
        .clk(clk),
        .we(we),
        .rs1_addr(rs1_addr),
        .rs2_addr(rs2_addr),
        .rd_addr(rd_addr),
        .rd_data(rd_data),
        .rs1_data(rs1_data),
        .rs2_data(rs2_data)
    );

    // Clock: toggles every 5 time units
    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end

    task automatic write_reg(
        input [4:0] addr,
        input [31:0] data
    );
        begin
            rd_addr = addr;
            rd_data = data;
            we = 1;

            @(posedge clk);
            #1;

            we = 0;
        end
    endtask

    initial begin

        $display("============================");
        $display("    REGISTER FILE TEST");
        $display("============================");

        we = 0;
        rd_addr = 0;
        rd_data = 0;
        rs1_addr = 0;
        rs2_addr = 0;

        // Write x5 = 123
        write_reg(5'd5, 32'd123);

        rs1_addr = 5'd5;
        #1;

        if (rs1_data !== 32'd123) begin
            $display("FAIL: x5 = %0d", rs1_data);
            $fatal;
        end

        $display("PASS: x5 = %0d", rs1_data);

        // Write x10 = 456
        write_reg(5'd10, 32'd456);

        rs1_addr = 5'd10;
        #1;

        if (rs1_data !== 32'd456) begin
            $display("FAIL: x10 = %0d", rs1_data);
            $fatal;
        end

        $display("PASS: x10 = %0d", rs1_data);

        // Read x5 and x10 simultaneously
        rs1_addr = 5'd5;
        rs2_addr = 5'd10;
        #1;

        if ((rs1_data !== 32'd123) ||
            (rs2_data !== 32'd456)) begin

            $display(
                "FAIL: x5=%0d x10=%0d",
                rs1_data,
                rs2_data
            );

            $fatal;
        end

        $display(
            "PASS: simultaneous read x5=%0d x10=%0d",
            rs1_data,
            rs2_data
        );

        // Try writing x0 = 999
        write_reg(5'd0, 32'd999);

        rs1_addr = 5'd0;
        #1;

        if (rs1_data !== 32'd0) begin
            $display("FAIL: x0 changed to %0d", rs1_data);
            $fatal;
        end

        $display("PASS: x0 remains 0");

        $display("============================");
        $display("   ALL REGFILE TESTS PASS");
        $display("============================");

        $finish;

    end

endmodule