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
    output reg ALUsrc2, // 0 for regsrc2, 1 for imm
    output reg stop_sim
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
                    default: ;
                endcase
            end
            default: ;
        endcase
    end

    assign stop_sim = (inst==32'h0010_0073) ? 1 : 0;



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
