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

    output logic [1:0]  branch_type,

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

        immediate   = 32'd0;
        alu_src     = 1'b0;
        reg_write   = 1'b0;
        mem_write   = 1'b0;
        mem_to_reg  = 1'b0;
        branch_type = 2'b00;
        alu_ctrl    = 4'b0000;

        case (opcode)

            // R-Type
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

                    3'b111:
                        alu_ctrl = 4'b0010; // AND

                    3'b110:
                        alu_ctrl = 4'b0011; // OR

                    3'b100:
                        alu_ctrl = 4'b0100; // XOR

                    3'b001:
                        alu_ctrl = 4'b0101; // SLL

                    3'b101: begin
                        if (funct7 == 7'b0100000)
                            alu_ctrl = 4'b0111; // SRA
                        else
                            alu_ctrl = 4'b0110; // SRL
                    end

                    3'b010:
                        alu_ctrl = 4'b1000; // SLT

                    3'b011:
                        alu_ctrl = 4'b1001; // SLTU

                    default:
                        alu_ctrl = 4'b0000;

                endcase
            end


            // I-Type Arithmetic
            // ADDI
            7'b0010011: begin

                reg_write = 1'b1;
                alu_src   = 1'b1;

                immediate = {
                    {20{instruction[31]}},
                    instruction[31:20]
                };

                case (funct3)

                    3'b000:
                        alu_ctrl = 4'b0000; // ADDI

                    default:
                        alu_ctrl = 4'b0000;

                endcase
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

                alu_ctrl = 4'b0000;
            end


            // SW
            7'b0100011: begin

                reg_write = 1'b0;
                alu_src   = 1'b1;
                mem_write = 1'b1;

                immediate = {
                    {20{instruction[31]}},
                    instruction[31:25],
                    instruction[11:7]
                };

                alu_ctrl = 4'b0000;
            end


            // BEQ / BNE
            7'b1100011: begin

                reg_write = 1'b0;
                alu_src   = 1'b0;
                mem_write = 1'b0;

                // Compare rs1 - rs2
                alu_ctrl = 4'b0001;

                immediate = {
                    {19{instruction[31]}},
                    instruction[31],
                    instruction[7],
                    instruction[30:25],
                    instruction[11:8],
                    1'b0
                };

                case (funct3)

                    3'b000:
                        branch_type = 2'b01; // BEQ

                    3'b001:
                        branch_type = 2'b10; // BNE

                    default:
                        branch_type = 2'b00;

                endcase
            end


            default: begin

                immediate   = 32'd0;
                alu_src     = 1'b0;
                reg_write   = 1'b0;
                mem_write   = 1'b0;
                mem_to_reg  = 1'b0;
                branch_type = 2'b00;
                alu_ctrl    = 4'b0000;

            end

        endcase
    end

endmodule