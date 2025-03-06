`define INST_NAME_LEN 5

//instuction Decode Unit
module IDU(
    input [31:0] inst,
    output [4:0] rs1,
    output [4:0] rs2,
    output [4:0] rd,
    output [2:0] funct3,
    output [6:0] funct7,
    output [6:0] opcode, 

    output [31:0] imm,
    output [2:0] ALU_op,
    output [2:0] rdregsrc, // 0 for ALU, 1 for mem, 2 for snpc, 3 for compare_result, 4 for disable
    output ALUsrc1, // 0 for regsrc1, 1 for pc
    output ALUsrc2, // 0 for regsrc2, 1 for imm
    output jump,
    output branch,
    output [1:0] cmp_type, // 0 for equal, 1 for unequal, 2 for less signed, 3 for less unsigned
    output slt,
    output [7:0] dwmask,
    output dwen,
    output dvalid,

    output stop_sim
);
    parameter NUM_OF_INST = 17;

    wire [`INST_NAME_LEN-1:0] inst_name;
    wire inst_is_addi;
    wire inst_is_ebreak;
    wire inst_is_auipc;
    wire inst_is_lui;
    wire inst_is_jal;
    wire inst_is_jalr;
    wire inst_is_sw;
    wire inst_is_lw;
    wire inst_is_add;
    wire inst_is_beq;
    wire inst_is_sltu;
    wire inst_is_xor;
    wire inst_is_or;
    wire inst_is_sltiu;
    wire inst_is_bne;
    wire inst_is_lbu;
    wire inst_is_sb;

    // decode
    assign inst_is_addi = (opcode == 7'b0010011) && (funct3 == 3'b000);
    assign inst_is_ebreak = (inst==32'h0010_0073) ? 1 : 0;
    assign inst_is_auipc = (opcode == 7'b0010111);
    assign inst_is_lui = (opcode == 7'b0110111);
    assign inst_is_jal = (opcode == 7'b1101111);
    assign inst_is_jalr = (opcode == 7'b1100111) && (funct3 == 3'b000);
    assign inst_is_sw = (opcode == 7'b0100011) && (funct3 == 3'b010);
    assign inst_is_lw = (opcode == 7'b0000011) && (funct3 == 3'b010);
    assign inst_is_add = (opcode == 7'b0110011) && (funct3 == 3'b000) && (funct7 == 7'b0000000);
    assign inst_is_beq = (opcode == 7'b1100011) && (funct3 == 3'b000);
    assign inst_is_sltu = (opcode == 7'b0110011) && (funct3 == 3'b011) && (funct7 == 7'b0000000);
    assign inst_is_xor = (opcode == 7'b0110011) && (funct3 == 3'b100);
    assign inst_is_or = (opcode == 7'b0110011) && (funct3 == 3'b110);
    assign inst_is_sltiu = (opcode == 7'b0010011) && (funct3 == 3'b011);
    assign inst_is_bne = (opcode == 7'b1100011) && (funct3 == 3'b001);
    assign inst_is_lbu = (opcode == 7'b0000011) && (funct3 == 3'b100);
    assign inst_is_sb = (opcode == 7'b0100011) && (funct3 == 3'b000);

    assign inst_name =  inst_is_addi ? 1 : //addi
                        inst_is_ebreak ? 2 : //ebreak
                        inst_is_auipc ? 3 : //auipc
                        inst_is_lui ? 4 : //lui
                        inst_is_jal ? 5 : //jal
                        inst_is_jalr ? 6 : //jalr
                        inst_is_sw ? 7 : // sw
                        inst_is_lw ? 8 : // lw
                        inst_is_add ? 9 : // add
                        inst_is_beq ? 10 : // beq
                        inst_is_sltu ? 11 : // sltu
                        inst_is_xor ? 12 : // xor
                        inst_is_or ? 13 : // or
                        inst_is_sltiu ? 14 : // sltiu
                        inst_is_bne ? 15 :  // bne
                        inst_is_lbu ? 16 :  // lbu
                        inst_is_sb ? 17 :  // sb
                       0; 
    
    // assign imm = ({32{inst_is_addi}} & immI) ;
    // assign ALU_op = ({3{inst_is_addi}} & 3'b000);
    // assign memtoreg = (inst_is_addi & 1'b0);
    // assign ALUsrc2 = (inst_is_addi & 1'b1);

    wire [31:0] immI, immU, immS, immB, immJ;
    assign immI = {{20{inst[31]}}, inst[31:20]};
    assign immU = {inst[31:12], 12'b0};
    assign immS = {{20{inst[31]}}, inst[31:25], inst[11:7]};
    assign immB = {{20{inst[31]}}, inst[7], inst[30:25], inst[11:8], 1'b0};
    assign immJ = {{12{inst[31]}}, inst[19:12], inst[20], inst[30:21], 1'b0};
    assign rs1 = (stop_sim | inst_is_lui) ? 5'd0 : inst[19:15];
    assign rs2 = inst[24:20];
    assign rd = stop_sim ? 10 : inst[11:7];
    assign funct3 = inst[14:12];
    assign funct7 = inst[31:25];
    assign opcode = inst[6:0];
    assign jump = inst_is_jal | inst_is_jalr;

    MuxKeyWithDefault# (
        .NR_KEY(NUM_OF_INST),
        .KEY_LEN(`INST_NAME_LEN),
        .DATA_LEN(32)
    ) getimm(
        .out         	(imm          ),
        .key         	(inst_name          ),
        .default_out 	(32'b1  ),
        .lut         	({`INST_NAME_LEN'd1, immI,
                          `INST_NAME_LEN'd2, 32'b0,
                          `INST_NAME_LEN'd3, immU,
                          `INST_NAME_LEN'd4, immU,
                          `INST_NAME_LEN'd5, immJ,
                          `INST_NAME_LEN'd6, immI,
                          `INST_NAME_LEN'd7, immI,
                          `INST_NAME_LEN'd8, immI,
                          `INST_NAME_LEN'd9, 32'b0,
                          `INST_NAME_LEN'd10, immB,
                          `INST_NAME_LEN'd11, 32'b0}          )
    );

    MuxKeyWithDefault# (
        .NR_KEY(NUM_OF_INST),
        .KEY_LEN(`INST_NAME_LEN),
        .DATA_LEN(3)
    ) getALU_mode(
        .out         	(ALU_op          ),
        .key         	(inst_name          ),
        .default_out 	(3'b000  ),
        .lut         	({`INST_NAME_LEN'd1, 3'b000,
                          `INST_NAME_LEN'd2, 3'b000,
                          `INST_NAME_LEN'd3, 3'b000,
                          `INST_NAME_LEN'd4, 3'b000,
                          `INST_NAME_LEN'd5, 3'b000,
                          `INST_NAME_LEN'd6, 3'b000,
                          `INST_NAME_LEN'd7, 3'b000,
                          `INST_NAME_LEN'd8, 3'b000,
                          `INST_NAME_LEN'd9, 3'b000,
                          `INST_NAME_LEN'd10, 3'b001,
                          `INST_NAME_LEN'd11, 3'b001}          )
    );
    
    MuxKeyWithDefault# (
        .NR_KEY(NUM_OF_INST),
        .KEY_LEN(`INST_NAME_LEN),
        .DATA_LEN(2)
    ) getrdregsrc(
        .out         	(rdregsrc          ),
        .key         	(inst_name          ),
        .default_out 	(2'b0  ),
        .lut         	({`INST_NAME_LEN'd1, 2'd0,
                          `INST_NAME_LEN'd2, 2'd0,
                          `INST_NAME_LEN'd3, 2'd0,
                          `INST_NAME_LEN'd4, 2'd0,
                          `INST_NAME_LEN'd5, 2'd2,
                          `INST_NAME_LEN'd6, 2'd2,
                          `INST_NAME_LEN'd7, 2'd4,
                          `INST_NAME_LEN'd8, 2'd1,
                          `INST_NAME_LEN'd9, 2'd0,
                          `INST_NAME_LEN'd10, 2'd0}          )
    );

    MuxKeyWithDefault# (
        .NR_KEY(NUM_OF_INST),
        .KEY_LEN(`INST_NAME_LEN),
        .DATA_LEN(1)
    ) getALUsrc1(
        .out         	(ALUsrc1          ),
        .key         	(inst_name          ),
        .default_out 	(1'b0  ),
        .lut         	({`INST_NAME_LEN'd1, 1'b0,
                          `INST_NAME_LEN'd2, 1'b0,
                          `INST_NAME_LEN'd3, 1'b1,
                          `INST_NAME_LEN'd4, 1'b0,
                          `INST_NAME_LEN'd5, 1'b1,
                          `INST_NAME_LEN'd6, 1'b0,
                          `INST_NAME_LEN'd7, 1'b0,
                          `INST_NAME_LEN'd8, 1'b0,
                          `INST_NAME_LEN'd9, 1'b0,
                          `INST_NAME_LEN'd10, 1'b0}          )
    );

    MuxKeyWithDefault# (
        .NR_KEY(NUM_OF_INST),
        .KEY_LEN(`INST_NAME_LEN),
        .DATA_LEN(1)
    ) getALUsrc2(
        .out         	(ALUsrc2          ),
        .key         	(inst_name          ),
        .default_out 	(1'b1  ),
        .lut         	({`INST_NAME_LEN'd1, 1'b1,
                          `INST_NAME_LEN'd2, 1'b1,
                          `INST_NAME_LEN'd3, 1'b1,
                          `INST_NAME_LEN'd4, 1'b1,
                          `INST_NAME_LEN'd5, 1'b1,
                          `INST_NAME_LEN'd6, 1'b1,
                          `INST_NAME_LEN'd7, 1'b1,
                          `INST_NAME_LEN'd8, 1'b1,
                          `INST_NAME_LEN'd9, 1'b0,
                          `INST_NAME_LEN'd10, 1'b0}          )
    );

    assign branch = inst_is_beq | inst_is_bne;
    assign slt = inst_is_sltu | inst_is_sltiu;
    assign dvalid = inst_is_sw | inst_is_lw;
    assign dwen = inst_is_sw;
    assign dwmask = inst_is_sw ? 8'b0000_1111 : 
                                 8'b0000_0000;
    assign cmp_type = (inst_is_sltu | inst_is_sltiu) ? 2'd2 : 2'd0;

    assign stop_sim = inst_is_ebreak | ~(|inst_name);



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
