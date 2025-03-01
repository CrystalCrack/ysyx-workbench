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
    output reg [2:0] ALU_op,
    output reg memtoreg,
    output reg ALUsrc2, // 0 for regsrc2, 1 for imm
    output reg stop_sim
);

    wire [1:0] inst_name;
    wire inst_is_addi;
    wire inst_is_ebreak;

    assign inst_name = {inst_is_ebreak, inst_is_addi};

    // decode
    assign inst_is_addi = (opcode == 7'b0010011) && (funct3 == 3'b000);
    assign inst_is_ebreak = (inst==32'h0010_0073) ? 1 : 0;
    
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
    assign rs1 = inst_is_ebreak ? 5'd0 : inst[19:15];
    assign rs2 = inst[24:20];
    assign rd = inst_is_ebreak ? 5'd10 : inst[11:7];
    assign funct3 = inst[14:12];
    assign funct7 = inst[31:25];
    assign opcode = inst[6:0];

    MuxKeyWithDefault# (
        .NR_KEY(2),
        .KEY_LEN(2),
        .DATA_LEN(32)
    ) getimm(
        .out         	(imm          ),
        .key         	(inst_name          ),
        .default_out 	(32'b1  ),
        .lut         	({2'b01, immI,
                          2'b10, 32'b0}          )
    );

    MuxKeyWithDefault# (
        .NR_KEY(2),
        .KEY_LEN(2),
        .DATA_LEN(3)
    ) getALU_mode(
        .out         	(ALU_op          ),
        .key         	(inst_name          ),
        .default_out 	(3'b000  ),
        .lut         	({2'b01, 3'b000,
                          2'b10, 3'b000}          )
    );
    
    MuxKeyWithDefault# (
        .NR_KEY(2),
        .KEY_LEN(2),
        .DATA_LEN(1)
    ) getmemtoreg(
        .out         	(memtoreg          ),
        .key         	(inst_name          ),
        .default_out 	(1'b0  ),
        .lut         	({2'b01, 1'b0,
                          2'b10, 1'b0}          )
    );

    MuxKeyWithDefault# (
        .NR_KEY(2),
        .KEY_LEN(2),
        .DATA_LEN(1)
    ) getALUsrc2(
        .out         	(ALUsrc2          ),
        .key         	(inst_name          ),
        .default_out 	(1'b1  ),
        .lut         	({2'b01, 1'b1,
                          2'b10, 1'b1}          )
    );

    assign stop_sim = inst_is_ebreak;



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
