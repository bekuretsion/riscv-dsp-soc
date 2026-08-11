module tb_memory;

    logic        clk;
    logic        mem_write;
    logic [31:0] address;
    logic [31:0] write_data;
    logic [31:0] read_data;

    data_memory dut (
        .clk(clk),
        .mem_write(mem_write),
        .address(address),
        .write_data(write_data),
        .read_data(read_data)
    );

    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end

    initial begin

        $display("============================");
        $display("      DATA MEMORY TEST");
        $display("============================");

        mem_write = 0;
        address = 0;
        write_data = 0;

        // -----------------------------
        // Write 42 to address 0
        // -----------------------------

        address = 32'd0;
        write_data = 32'd42;
        mem_write = 1;

        @(posedge clk);
        #1;

        mem_write = 0;

        if (read_data !== 32'd42)
            $fatal("FAIL: address 0");

        $display(
            "PASS: memory[0] = %0d",
            read_data
        );


        // -----------------------------
        // Write 123 to address 4
        // -----------------------------

        address = 32'd4;
        write_data = 32'd123;
        mem_write = 1;

        @(posedge clk);
        #1;

        mem_write = 0;

        if (read_data !== 32'd123)
            $fatal("FAIL: address 4");

        $display(
            "PASS: memory[1] = %0d",
            read_data
        );


        // -----------------------------
        // Make sure address 0 still = 42
        // -----------------------------

        address = 32'd0;
        #1;

        if (read_data !== 32'd42)
            $fatal("FAIL: original data corrupted");

        $display(
            "PASS: memory[0] still = %0d",
            read_data
        );


        $display("============================");
        $display("   ALL MEMORY TESTS PASS");
        $display("============================");

        $finish;

    end

endmodule