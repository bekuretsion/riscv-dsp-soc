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
    output logic        branch,

    output logic [3:0]  alu_ctrl
);

    logic [6:0] opcode;
    logic [2:0] funct3;
    logic [6:0] funct7;


    // ========================================
    // COMMON INSTRUCTION FIELDS
    // ========================================

    assign opcode   = instruction[6:0];
    assign rd_addr  = instruction[11:7];
    assign funct3   = instruction[14:12];
    assign rs1_addr = instruction[19:15];
    assign rs2_addr = instruction[24:20];
    assign funct7   = instruction[31:25];


    // ========================================
    // CONTROL LOGIC
    // ========================================

    always_comb begin

        // Default values
        immediate  = 32'd0;

        alu_src    = 1'b0;
        reg_write  = 1'b0;

        mem_write  = 1'b0;
        mem_to_reg = 1'b0;

        branch     = 1'b0;

        alu_ctrl   = 4'b0000;


        case (opcode)


            // ========================================
            // R-TYPE
            //
            // ADD
            // SUB
            // ========================================

            7'b0110011: begin

                alu_src   = 1'b0;
                reg_write = 1'b1;

                mem_write  = 1'b0;
                mem_to_reg = 1'b0;

                branch = 1'b0;


                case (funct3)

                    // ADD / SUB
                    3'b000: begin

                        if (funct7 == 7'b0100000)
                            alu_ctrl = 4'b0001;   // SUB

                        else
                            alu_ctrl = 4'b0000;   // ADD

                    end


                    // AND
                    3'b111:
                        alu_ctrl = 4'b0010;


                    // OR
                    3'b110:
                        alu_ctrl = 4'b0011;


                    // XOR
                    3'b100:
                        alu_ctrl = 4'b0100;


                    // SLL
                    3'b001:
                        alu_ctrl = 4'b0101;


                    // SRL / SRA
                    3'b101: begin

                        if (funct7 == 7'b0100000)
                            alu_ctrl = 4'b0111;   // SRA

                        else
                            alu_ctrl = 4'b0110;   // SRL

                    end


                    // SLT
                    3'b010:
                        alu_ctrl = 4'b1000;


                    // SLTU
                    3'b011:
                        alu_ctrl = 4'b1001;


                    default:
                        alu_ctrl = 4'b0000;

                endcase

            end


            // ========================================
            // I-TYPE ARITHMETIC
            //
            // ADDI
            // ========================================

            7'b0010011: begin

                alu_src   = 1'b1;
                reg_write = 1'b1;

                mem_write  = 1'b0;
                mem_to_reg = 1'b0;

                branch = 1'b0;


                // Sign-extend I-type immediate

                immediate = {
                    {20{instruction[31]}},
                    instruction[31:20]
                };


                case (funct3)

                    // ADDI
                    3'b000:
                        alu_ctrl = 4'b0000;


                    default:
                        alu_ctrl = 4'b0000;

                endcase

            end


            // ========================================
            // LOAD
            //
            // LW
            // ========================================

            7'b0000011: begin

                alu_src    = 1'b1;

                reg_write  = 1'b1;

                mem_write  = 1'b0;
                mem_to_reg = 1'b1;

                branch     = 1'b0;


                // I-type immediate

                immediate = {
                    {20{instruction[31]}},
                    instruction[31:20]
                };


                // Address = rs1 + immediate

                alu_ctrl = 4'b0000;

            end


            // ========================================
            // STORE
            //
            // SW
            // ========================================

            7'b0100011: begin

                alu_src    = 1'b1;

                reg_write  = 1'b0;

                mem_write  = 1'b1;
                mem_to_reg = 1'b0;

                branch     = 1'b0;


                // S-type immediate
                //
                // instruction[31:25]
                // instruction[11:7]

                immediate = {
                    {20{instruction[31]}},
                    instruction[31:25],
                    instruction[11:7]
                };


                // Address = rs1 + immediate

                alu_ctrl = 4'b0000;

            end


            // ========================================
            // BRANCH
            //
            // BEQ
            // ========================================

            7'b1100011: begin

                alu_src    = 1'b0;

                reg_write  = 1'b0;

                mem_write  = 1'b0;
                mem_to_reg = 1'b0;

                branch     = 1'b1;


                // Compare rs1 - rs2

                alu_ctrl = 4'b0001;


                // B-type immediate
                //
                // imm[12]   = instruction[31]
                // imm[11]   = instruction[7]
                // imm[10:5] = instruction[30:25]
                // imm[4:1]  = instruction[11:8]
                // imm[0]    = 0

                immediate = {
                    {19{instruction[31]}},
                    instruction[31],
                    instruction[7],
                    instruction[30:25],
                    instruction[11:8],
                    1'b0
                };

            end


            // ========================================
            // UNKNOWN / UNSUPPORTED OPCODE
            // ========================================

            default: begin

                immediate  = 32'd0;

                alu_src    = 1'b0;
                reg_write  = 1'b0;

                mem_write  = 1'b0;
                mem_to_reg = 1'b0;

                branch     = 1'b0;

                alu_ctrl   = 4'b0000;

            end

        endcase

    end

endmodule