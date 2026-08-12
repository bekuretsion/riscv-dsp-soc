module tb_soc_waveform;

    logic clk;
    logic reset;

    logic [31:0] pc;
    logic [31:0] instruction;
    logic [31:0] alu_result;

    logic fir_selected;
    logic fir_done;

    riscv_cpu dut (
        .clk(clk),
        .reset(reset),

        .pc(pc),
        .instruction(instruction),
        .alu_result(alu_result),

        .fir_selected(fir_selected),
        .fir_done(fir_done)
    );


    initial begin
        clk = 1'b0;
        forever #5 clk = ~clk;
    end


    initial begin

        $dumpfile("soc_waveform.vcd");
        $dumpvars(0, tb_soc_waveform);

        reset = 1'b1;

        repeat (2)
            @(posedge clk);

        reset = 1'b0;

        repeat (40)
            @(posedge clk);

        $finish;

    end

endmodule
