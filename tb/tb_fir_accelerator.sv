module tb_fir_accelerator;

    logic clk;
    logic reset;

    logic write_en;
    logic read_en;

    logic [4:0]  address;
    logic [31:0] write_data;

    logic [31:0] read_data;
    logic done;


    fir_accelerator dut (
        .clk(clk),
        .reset(reset),

        .write_en(write_en),
        .read_en(read_en),

        .address(address),
        .write_data(write_data),

        .read_data(read_data),
        .done(done)
    );


    // ========================================
    // CLOCK
    // ========================================

    initial begin
        clk = 1'b0;
        forever #5 clk = ~clk;
    end


    // ========================================
    // WRITE REGISTER
    // ========================================

    task automatic write_reg (
        input logic [4:0]  addr,
        input logic [31:0] data
    );

        begin

            @(negedge clk);

            address    = addr;
            write_data = data;
            write_en   = 1'b1;

            @(posedge clk);
            #1;

            write_en = 1'b0;

        end

    endtask


    // ========================================
    // READ REGISTER
    // ========================================

    task automatic read_reg (
        input  logic [4:0]  addr,
        output logic [31:0] data
    );

        begin

            address = addr;
            read_en = 1'b1;

            #1;

            data = read_data;

            read_en = 1'b0;

        end

    endtask


    // ========================================
    // PROCESS SAMPLE
    // ========================================

    task automatic process_sample (
        input logic signed [31:0] sample
    );

        begin

            // Write input sample
            write_reg(
                5'h00,
                sample
            );

            // Start FIR operation
            write_reg(
                5'h14,
                32'd1
            );

        end

    endtask


    // ========================================
    // TEST
    // ========================================

    logic [31:0] result_value;

    initial begin

        write_en   = 1'b0;
        read_en    = 1'b0;
        address    = 5'd0;
        write_data = 32'd0;

        reset = 1'b1;

        $display("==============================");
        $display("     FIR ACCELERATOR TEST");
        $display("==============================");

        repeat (2)
            @(posedge clk);

        reset = 1'b0;


        // ====================================
        // COEFFICIENTS
        //
        // c0 = 1
        // c1 = 2
        // c2 = 3
        // c3 = 4
        // ====================================

        write_reg(5'h04, 32'd1);
        write_reg(5'h08, 32'd2);
        write_reg(5'h0C, 32'd3);
        write_reg(5'h10, 32'd4);


        $display("");
        $display("Coefficients loaded:");
        $display("c0=1 c1=2 c2=3 c3=4");
        $display("");


        // ====================================
        // SAMPLE 1
        //
        // input = 10
        //
        // y =
        // 10*1 +
        // 0*2 +
        // 0*3 +
        // 0*4
        //
        // = 10
        // ====================================

        process_sample(32'sd10);

        read_reg(
            5'h18,
            result_value
        );

        $display(
            "sample=10 result=%0d expected=10",
            $signed(result_value)
        );

        if ($signed(result_value) !== 32'sd10)
            $fatal("FAIL: sample 1");


        // ====================================
        // SAMPLE 2
        //
        // input = 20
        //
        // y =
        // 20*1 +
        // 10*2
        //
        // = 40
        // ====================================

        process_sample(32'sd20);

        read_reg(
            5'h18,
            result_value
        );

        $display(
            "sample=20 result=%0d expected=40",
            $signed(result_value)
        );

        if ($signed(result_value) !== 32'sd40)
            $fatal("FAIL: sample 2");


        // ====================================
        // SAMPLE 3
        //
        // input = 30
        //
        // y =
        // 30*1 +
        // 20*2 +
        // 10*3
        //
        // = 100
        // ====================================

        process_sample(32'sd30);

        read_reg(
            5'h18,
            result_value
        );

        $display(
            "sample=30 result=%0d expected=100",
            $signed(result_value)
        );

        if ($signed(result_value) !== 32'sd100)
            $fatal("FAIL: sample 3");


        // ====================================
        // SAMPLE 4
        //
        // input = 40
        //
        // y =
        // 40*1 +
        // 30*2 +
        // 20*3 +
        // 10*4
        //
        // = 200
        // ====================================

        process_sample(32'sd40);

        read_reg(
            5'h18,
            result_value
        );

        $display(
            "sample=40 result=%0d expected=200",
            $signed(result_value)
        );

        if ($signed(result_value) !== 32'sd200)
            $fatal("FAIL: sample 4");


        $display("");
        $display("PASS: coefficient registers");
        $display("PASS: sample input");
        $display("PASS: delay line");
        $display("PASS: multiply-accumulate");
        $display("PASS: result register");

        $display("==============================");
        $display("     FIR ACCELERATOR PASS");
        $display("==============================");

        $finish;

    end

endmodule