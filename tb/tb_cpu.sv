module tb_alu;

    logic [31:0] a;
    logic [31:0] b;
    logic [3:0]  alu_ctrl;
    logic [31:0] result;
    logic        zero;

    alu dut (
        .a(a),
        .b(b),
        .alu_ctrl(alu_ctrl),
        .result(result),
        .zero(zero)
    );

    task automatic check(
        input [31:0] test_a,
        input [31:0] test_b,
        input [3:0]  operation,
        input [31:0] expected
    );
        begin
            a        = test_a;
            b        = test_b;
            alu_ctrl = operation;

            #1;

            if (result !== expected) begin
                $display(
                    "FAIL: a=%h b=%h ctrl=%b result=%h expected=%h",
                    a, b, alu_ctrl, result, expected
                );
                $fatal;
            end
            else begin
                $display(
                    "PASS: a=%h b=%h ctrl=%b result=%h",
                    a, b, alu_ctrl, result
                );
            end
        end
    endtask


    initial begin

        $display("==========================");
        $display("      RV32I ALU TEST");
        $display("==========================");

        // ADD
        check(32'd5,  32'd7, 4'b0000, 32'd12);

        // SUB
        check(32'd10, 32'd3, 4'b0001, 32'd7);

        // AND
        check(
            32'hF0F0,
            32'h0FF0,
            4'b0010,
            32'h000000F0
        );

        // OR
        check(
            32'hF000,
            32'h0F00,
            4'b0011,
            32'h0000FF00
        );

        // XOR
        check(
            32'hAAAA,
            32'h5555,
            4'b0100,
            32'h0000FFFF
        );

        // Shift left
        check(
            32'd1,
            32'd4,
            4'b0101,
            32'd16
        );

        // Shift right
        check(
            32'd16,
            32'd2,
            4'b0110,
            32'd4
        );

        // Signed comparison: -5 < 2
        check(
            -32'sd5,
            32'd2,
            4'b1000,
            32'd1
        );

        // Unsigned comparison
        check(
            32'd5,
            32'd10,
            4'b1001,
            32'd1
        );

        $display("==========================");
        $display("      ALL TESTS PASS");
        $display("==========================");

        $finish;

    end

endmodule