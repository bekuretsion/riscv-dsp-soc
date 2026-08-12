module fir_accelerator (
    input  logic        clk,
    input  logic        reset,

    input  logic        write_en,
    input  logic        read_en,

    input  logic [4:0]  address,
    input  logic [31:0] write_data,

    output logic [31:0] read_data,
    output logic        done
);

    logic signed [31:0] sample_in;

    logic signed [31:0] coeff0;
    logic signed [31:0] coeff1;
    logic signed [31:0] coeff2;
    logic signed [31:0] coeff3;

    logic signed [31:0] delay0;
    logic signed [31:0] delay1;
    logic signed [31:0] delay2;

    logic signed [63:0] product0;
    logic signed [63:0] product1;
    logic signed [63:0] product2;
    logic signed [63:0] product3;

    logic signed [63:0] accumulator;

    logic signed [31:0] result;


    // ========================================
    // MULTIPLICATION
    // ========================================

    always_comb begin

        product0 = sample_in * coeff0;
        product1 = delay0    * coeff1;
        product2 = delay1    * coeff2;
        product3 = delay2    * coeff3;

        accumulator =
            product0 +
            product1 +
            product2 +
            product3;

    end


    // ========================================
    // REGISTER WRITES
    // ========================================

    always_ff @(posedge clk) begin

        if (reset) begin

            sample_in <= 32'sd0;

            coeff0 <= 32'sd0;
            coeff1 <= 32'sd0;
            coeff2 <= 32'sd0;
            coeff3 <= 32'sd0;

            delay0 <= 32'sd0;
            delay1 <= 32'sd0;
            delay2 <= 32'sd0;

            result <= 32'sd0;

            done <= 1'b0;

        end

        else begin

            done <= 1'b0;

            if (write_en) begin

                case (address)

                    // INPUT
                    5'h00:
                        sample_in <= $signed(write_data);

                    // COEFF0
                    5'h04:
                        coeff0 <= $signed(write_data);

                    // COEFF1
                    5'h08:
                        coeff1 <= $signed(write_data);

                    // COEFF2
                    5'h0C:
                        coeff2 <= $signed(write_data);

                    // COEFF3
                    5'h10:
                        coeff3 <= $signed(write_data);

                    // CONTROL
                    5'h14: begin

                        if (write_data[0]) begin

                            result <= accumulator[31:0];

                            delay2 <= delay1;
                            delay1 <= delay0;
                            delay0 <= sample_in;

                            done <= 1'b1;

                        end

                    end

                    default: begin
                    end

                endcase

            end

        end

    end


    // ========================================
    // REGISTER READS
    // ========================================

    always_comb begin

        read_data = 32'd0;

        if (read_en) begin

            case (address)

                // INPUT
                5'h00:
                    read_data = sample_in;

                // COEFF0
                5'h04:
                    read_data = coeff0;

                // COEFF1
                5'h08:
                    read_data = coeff1;

                // COEFF2
                5'h0C:
                    read_data = coeff2;

                // COEFF3
                5'h10:
                    read_data = coeff3;

                // RESULT
                5'h18:
                    read_data = result;

                // STATUS
                5'h1C:
                    read_data = {31'd0, done};

                default:
                    read_data = 32'd0;

            endcase

        end

    end

endmodule