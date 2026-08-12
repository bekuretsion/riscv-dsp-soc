module tb_mmio_interconnect;

    logic clk;
    logic reset;

    logic mem_write;
    logic mem_read;

    logic [31:0] address;
    logic [31:0] write_data;

    logic [31:0] read_data;

    logic fir_selected;
    logic fir_done;


    mmio_interconnect dut (
        .clk(clk),
        .reset(reset),

        .mem_write(mem_write),
        .mem_read(mem_read),

        .address(address),
        .write_data(write_data),

        .read_data(read_data),

        .fir_selected(fir_selected),
        .fir_done(fir_done)
    );


    // ========================================
    // CLOCK
    // ========================================

    initial begin
        clk = 1'b0;
        forever #5 clk = ~clk;
    end


    // ========================================
    // MMIO WRITE
    // ========================================

    task automatic write_address (
        input logic [31:0] addr,
        input logic [31:0] data
    );

        begin

            @(negedge clk);

            address    = addr;
            write_data = data;

            mem_write = 1'b1;
            mem_read  = 1'b0;

            @(posedge clk);
            #1;

            mem_write = 1'b0;

        end

    endtask


    // ========================================
    // MMIO READ
    // ========================================

    task automatic read_address (
        input  logic [31:0] addr,
        output logic [31:0] data
    );

        begin

            address = addr;

            mem_write = 1'b0;
            mem_read  = 1'b1;

            #1;

            data = read_data;

            mem_read = 1'b0;

        end

    endtask


    logic [31:0] value;


    // ========================================
    // TEST
    // ========================================

    initial begin

        reset      = 1'b1;
        mem_write  = 1'b0;
        mem_read   = 1'b0;

        address    = 32'd0;
        write_data = 32'd0;


        $display("==============================");
        $display("       MMIO SOC TEST");
        $display("==============================");


        repeat (2)
            @(posedge clk);

        reset = 1'b0;


        // ====================================
        // TEST NORMAL RAM
        // ====================================

        $display("");
        $display("Testing normal RAM...");

        write_address(
            32'h0000_0000,
            32'd123
        );

        read_address(
            32'h0000_0000,
            value
        );

        $display(
            "RAM value=%0d expected=123",
            value
        );

        if (value !== 32'd123)
            $fatal("FAIL: RAM");


        if (fir_selected !== 1'b0)
            $fatal("FAIL: RAM incorrectly selected FIR");


        $display("PASS: normal RAM");


        // ====================================
        // FIR COEFFICIENTS
        // ====================================

        $display("");
        $display("Loading FIR coefficients...");

        write_address(
            32'h4000_0004,
            32'd1
        );

        write_address(
            32'h4000_0008,
            32'd2
        );

        write_address(
            32'h4000_000C,
            32'd3
        );

        write_address(
            32'h4000_0010,
            32'd4
        );


        // ====================================
        // FIR INPUT
        // ====================================

        write_address(
            32'h4000_0000,
            32'd10
        );


        // ====================================
        // FIR START
        // ====================================

        write_address(
            32'h4000_0014,
            32'd1
        );


        if (fir_done !== 1'b1)
            $fatal("FAIL: FIR did not assert done");


        // ====================================
        // READ FIR RESULT
        // ====================================

        read_address(
            32'h4000_0018,
            value
        );


        $display(
            "FIR result=%0d expected=10",
            value
        );


        if (value !== 32'd10)
            $fatal("FAIL: FIR result");


        if (fir_selected !== 1'b1)
            $fatal("FAIL: FIR address not selected");


        $display("PASS: FIR MMIO access");


        // ====================================
        // MAKE SURE RAM WAS NOT CORRUPTED
        // ====================================

        read_address(
            32'h0000_0000,
            value
        );


        if (value !== 32'd123)
            $fatal(
                "FAIL: FIR access corrupted RAM"
            );


        $display("PASS: RAM remains independent");


        $display("");
        $display("PASS: RAM address decoding");
        $display("PASS: FIR address decoding");
        $display("PASS: FIR register writes");
        $display("PASS: FIR result reads");

        $display("==============================");
        $display("       MMIO SOC PASS");
        $display("==============================");

        $finish;

    end

endmodule