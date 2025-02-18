//instuction Decode Unit
module IDU(
    input [31:0] inst,
    output [4:0] rs1,
    output [4:0] rs2,
    output [4:0] rd,
    output [2:0] funct3,
    output [6:0] funct7,
    output [6:0] opcode, 

    output reg [31:0] imm,
    output reg [5:0] inst_type,//IRSBUJ
    output reg [2:0] ALU_op,
    output reg memtoreg,
    output reg ALUsrc2 // 0 for regsrc2, 1 for imm
);
    wire [31:0] immI, immU, immS, immB, immJ;
    assign immI = {{20{inst[31]}}, inst[31:20]};
    assign immU = {inst[31:12], 12'b0};
    assign immS = {{20{inst[31]}}, inst[31:25], inst[11:7]};
    assign immB = {{20{inst[31]}}, inst[7], inst[30:25], inst[11:8], 1'b0};
    assign immJ = {{12{inst[31]}}, inst[19:12], inst[20], inst[30:21], 1'b0};
    assign rs1 = inst[19:15];
    assign rs2 = inst[24:20];
    assign rd = inst[11:7];
    assign funct3 = inst[14:12];
    assign funct7 = inst[31:25];
    assign opcode = inst[6:0];

    // choose type
    always @(*) begin
        inst_type = 6'b0;
        ALU_op = 3'b0;
        memtoreg = 0;
        ALUsrc2 = 0;
        case (opcode)
            7'b0010011: begin
                imm = immI;
                inst_type = 6'b100000;
                memtoreg = 0;
                ALUsrc2 = 1;
                case (funct3)
                    3'd000: ALU_op = 3'b0;
                    default:
                endcase
            end
            default:
        endcase
    end



    // MuxKeyWithDefault #(1, 7, 6)gettype(
    //     .out         	(inst_type          ),
    //     .key         	(opcode          ),
    //     .default_out 	(6'b000000  ),
    //     .lut         	({7'b0010011, 6'b100000})
    // );
    
    // // choose immediate value
    // MuxKeyWithDefault #(5, 6, 32) getimm(
    //     .out         	(imm          ),
    //     .key         	(inst_type          ),
    //     .default_out 	(32'b0  ),
    //     .lut         	({6'b100000, immI,
    //                       6'b001000, immS,
    //                       6'b000100, immB,
    //                       6'b000010, immJ,
    //                       6'b000001, immU})
    // );

    // // choose ALU mode
    // MuxKeyWithDefault #(1, 3, 3) getALU_mode(
    //     .out         	(ALU_op          ),
    //     .key         	(funct3          ),
    //     .default_out 	(3'b000  ),
    //     .lut         	({3'b000, 3'b000})
    // );
    
endmodule

module riscv_decoder(
    input [31:0] instuction,
    output reg [4:0] rd,
    output reg [4:0] rs1,
    output reg [4:0] rs2,
    output reg [31:0] imm,
    output reg [2:0] funct3,
    output reg [6:0] funct7,
    output reg [6:0] opcode,
    output reg is_r_type,
    output reg is_i_type,
    output reg is_s_type,
    output reg is_b_type,
    output reg is_u_type,
    output reg is_j_type,
    output reg alu_src,
    output reg mem_to_reg,
    output reg reg_write,
    output reg mem_read,
    output reg mem_write,
    output reg branch,
    output reg [3:0] alu_op
);

    always @(*) begin
        // Default values
        rd = 5'b0;
        rs1 = 5'b0;
        rs2 = 5'b0;
        imm = 32'b0;
        funct3 = 3'b0;
        funct7 = 7'b0;
        opcode = instuction[6:0];
        is_r_type = 1'b0;
        is_i_type = 1'b0;
        is_s_type = 1'b0;
        is_b_type = 1'b0;
        is_u_type = 1'b0;
        is_j_type = 1'b0;
        alu_src = 1'b0;
        mem_to_reg = 1'b0;
        reg_write = 1'b0;
        mem_read = 1'b0;
        mem_write = 1'b0;
        branch = 1'b0;
        alu_op = 4'b0000;

        case(opcode)
            7'b0110011: begin // R-type
                is_r_type = 1'b1;
                rd = instuction[11:7];
                funct3 = instuction[14:12];
                rs1 = instuction[19:15];
                rs2 = instuction[24:20];
                funct7 = instuction[31:25];
                reg_write = 1'b1;
                alu_op = 4'b0010;
            end
            7'b0010011: begin // I-type ALU
                is_i_type = 1'b1;
                rd = instuction[11:7];
                funct3 = instuction[14:12];
                rs1 = instuction[19:15];
                imm = {{20{instuction[31]}}, instuction[31:20]};
                reg_write = 1'b1;
                alu_src = 1'b1;
                alu_op = 4'b0011;
            end
            7'b0000011: begin // I-type Load
                is_i_type = 1'b1;
                rd = instuction[11:7];
                funct3 = instuction[14:12];
                rs1 = instuction[19:15];
                imm = {{20{instuction[31]}}, instuction[31:20]};
                reg_write = 1'b1;
                alu_src = 1'b1;
                mem_to_reg = 1'b1;
                mem_read = 1'b1;
                alu_op = 4'b0000;
            end
            7'b0100011: begin // S-type
                is_s_type = 1'b1;
                funct3 = instuction[14:12];
                rs1 = instuction[19:15];
                rs2 = instuction[24:20];
                imm = {{20{instuction[31]}}, instuction[31:25], instuction[11:7]};
                alu_src = 1'b1;
                mem_write = 1'b1;
                alu_op = 4'b0000;
            end
            7'b1100011: begin // B-type
                is_b_type = 1'b1;
                funct3 = instuction[14:12];
                rs1 = instuction[19:15];
                rs2 = instuction[24:20];
                imm = {{20{instuction[31]}}, instuction[7], instuction[30:25], instuction[11:8], 1'b0};
                branch = 1'b1;
                alu_op = 4'b0001;
            end
            7'b0110111: begin // U-type (LUI)
                is_u_type = 1'b1;
                rd = instuction[11:7];
                imm = {instuction[31:12], 12'b0};
                reg_write = 1'b1;
                alu_op = 4'b0100;
            end
            7'b1101111: begin // J-type (JAL)
                is_j_type = 1'b1;
                rd = instuction[11:7];
                imm = {{12{instuction[31]}}, instuction[19:12], instuction[20], instuction[30:21], 1'b0};
                reg_write = 1'b1;
                branch = 1'b1;
                alu_op = 4'b0101;
            end
            default: begin
                // Unsupported instuction
            end
        endcase
    end

endmodule