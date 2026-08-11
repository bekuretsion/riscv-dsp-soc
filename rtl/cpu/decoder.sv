module decoder (
    input  logic [31:0] instruction,

    output logic [4:0]  rs1_addr,
    output logic [4:0]  rs2_addr,
    output logic [4:0]  rd_addr,

    output logic [31:0] immediate,

    output logic        alu_src,
    output logic        reg_write,
    output logic        mem_write,
    output logic        mem_to_reg,

    output logic [3:0]  alu_ctrl
);

    logic [6:0] opcode;
    logic [2:0] funct3;
    logic [6:0] funct7;

    assign opcode   = instruction[6:0];
    assign rd_addr  = instruction[11:7];
    assign funct3   = instruction[14:12];
    assign rs1_addr = instruction[19:15];
    assign rs2_addr = instruction[24:20];
    assign funct7   = instruction[31:25];

    always_comb begin

        immediate  = 32'd0;
        alu_src    = 1'b0;
        reg_write  = 1'b0;
        mem_write  = 1'b0;
        mem_to_reg = 1'b0;
        alu_ctrl   = 4'b0000;

        case (opcode)

            // R-Type: ADD / SUB
            7'b0110011: begin

                reg_write = 1'b1;
                alu_src   = 1'b0;

                case (funct3)

                    3'b000: begin
                        if (funct7 == 7'b0100000)
                            alu_ctrl = 4'b0001; // SUB
                        else
                            alu_ctrl = 4'b0000; // ADD
                    end

                    default:
                        alu_ctrl = 4'b0000;

                endcase

            end


            // I-Type arithmetic: ADDI
            7'b0010011: begin

                reg_write = 1'b1;
                alu_src   = 1'b1;

                immediate = {
                    {20{instruction[31]}},
                    instruction[31:20]
                };

                alu_ctrl = 4'b0000;

            end


            // LW
            7'b0000011: begin

                reg_write  = 1'b1;
                alu_src    = 1'b1;
                mem_to_reg = 1'b1;

                immediate = {
                    {20{instruction[31]}},
                    instruction[31:20]
                };

                alu_ctrl = 4'b0000; // address = rs1 + immediate

            end


            // SW
            7'b0100011: begin

                reg_write = 1'b0;
                alu_src   = 1'b1;
                mem_write = 1'b1;

                // S-type immediate
                immediate = {
                    {20{instruction[31]}},
                    instruction[31:25],
                    instruction[11:7]
                };

                alu_ctrl = 4'b0000; // address = rs1 + immediate

            end


            default: begin
                reg_write = 1'b0;
                mem_write = 1'b0;
            end

        endcase

    end

endmodule