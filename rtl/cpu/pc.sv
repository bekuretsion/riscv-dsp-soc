module pc (
    input  logic        clk,
    input  logic        reset,

    input  logic        branch_taken,
    input  logic [31:0] branch_target,

    output logic [31:0] pc_out
);

    always_ff @(posedge clk) begin

        if (reset)
            pc_out <= 32'd0;

        else if (branch_taken)
            pc_out <= branch_target;

        else
            pc_out <= pc_out + 32'd4;

    end

endmodule