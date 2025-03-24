`define INST_NAME_LEN 6

//instuction Decode Unit
module IDU(
    input [6:0] opcode,
    input [2:0] funct3,
    input [6:0] funct7,
    input [11:0] funct12,

    output mvalidD,
    output [7:0] mwmaskD,
    output mwenD,
    output [2:0] mrtypeD, // 0-byte, 1-half, 2-word, 3-byte unsigned, 4-half-unsigned
    output [2:0] cmp_typeD, // 0-eq, 1-ne, 2-lt, 3-ge, 4-ltu, 5-geu
    output branchD,
    output jumpD,
    output [2:0] ALU_opD,
    output [2:0] rdregsrcD, // 0 for ALU, 1 for mem, 2 for snpc, 3 for compare_result, 4 for csr , 5 for disable
    output jalrD,
    output [1:0] ALUsrc1D, // 0-regsrc1, 1-pc, 2-zero, 3-csr
    output [1:0] ALUsrc2D, // 0-regsrc2, 1-imm, 2-csr
    output [2:0] inst_type, // 0-I, 1-S, 2-R, 3-U, 4-J, 5-B, 6-N
    output ecallD,
    output mretD,
    output write_csr
);

    // decode
    wire lui, auipc, jal, load, store, Iarith, Rarith, ebreak, csrRelated, csrrw, csrrs, mismatch;
    assign lui = opcode == 7'b0110111;
    assign auipc = opcode == 7'b0010111;
    assign jal = opcode == 7'b1101111;
    assign jalrD = opcode == 7'b1100111 && funct3 == 3'b000;
    assign branchD = opcode == 7'b1100011;
    assign load = opcode == 7'b0000011;
    assign store = opcode == 7'b0100011;
    assign Iarith = opcode == 7'b0010011;
    assign Rarith = opcode == 7'b0110011;
    assign ecallD = opcode == 7'b1110011 && funct3 == 3'b000 && funct12 == 12'b0000_0000_0000;
    assign mretD = opcode == 7'b1110011 && funct3 == 3'b000 && funct12 == 12'b0011_0000_0010;
    assign csrRelated = opcode == 7'b1110011;
    assign csrrw = csrRelated & (funct3 == 3'b001);
    assign csrrs = csrRelated & (funct3 == 3'b010);
    assign mismatch = ~(lui | auipc | jal | jalrD | branchD | load | store | Iarith | Rarith | ebreak | ecallD | mretD | csrRelated);


    assign jumpD = jal | jalrD;

    // 0-I, 1-S, 2-R, 3-U, 4-J, 5-B, 6-N
    MuxKeyWithDefault #(
        .NR_KEY(9),
        .KEY_LEN(9),
        .DATA_LEN(3)
    ) get_itype (
        .out(inst_type),
        .key({lui, auipc, jal, jalrD, branchD, load, store, Iarith, Rarith}),
        .default_out(3'd6),
        .lut({9'b100000000, 3'd3,
              9'b010000000, 3'd3,
              9'b001000000, 3'd4,
              9'b000100000, 3'd0,
              9'b000010000, 3'd5,
              9'b000001000, 3'd0,
              9'b000000100, 3'd1,
              9'b000000010, 3'd0,
              9'b000000001, 3'd2})
    );

    assign mvalidD = load | store;
    assign mwenD = store;
    MuxKeyWithDefault #(
        .NR_KEY(3),
        .KEY_LEN(3),
        .DATA_LEN(8)
    ) get_mwmask (
        .out(mwmaskD),
        .key(funct3),
        .default_out(8'b0),
        .lut({3'b000, 8'b0000_0001,
              3'b001, 8'b0000_0011,
              3'b010, 8'b0000_1111})
    );
    // 0-byte, 1-half, 2-word, 3-byte unsigned, 4-half-unsigned
    MuxKeyWithDefault #(
        .NR_KEY(5),
        .KEY_LEN(3),
        .DATA_LEN(3)
    ) get_mrtype (
        .out(mrtypeD),
        .key(funct3),
        .default_out(3'd0),
        .lut({3'b000, 3'd0,
              3'b001, 3'd1,
              3'b010, 3'd2,
              3'b100, 3'd3,
              3'b101, 3'd4})
    );

    // 0-eq, 1-ne, 2-lt, 3-ge, 4-ltu, 5-geu
    wire condset;
    MuxKeyWithDefault #(
        .NR_KEY(10),
        .KEY_LEN(6),
        .DATA_LEN(4)
    ) get_cmptype (
        .out({cmp_typeD, condset}),
        .key({funct3, branchD, Iarith, Rarith}),
        .default_out(0),
        .lut({6'b000100, 3'd0, 1'b0,
              6'b001100, 3'd1, 1'b0,
              6'b100100, 3'd2, 1'b0,
              6'b101100, 3'd3, 1'b0,
              6'b110100, 3'd4, 1'b0,
              6'b111100, 3'd5, 1'b0,
              6'b010010, 3'd2, 1'b1,
              6'b011010, 3'd4, 1'b1,
              6'b010001, 3'd2, 1'b1,
              6'b011001, 3'd4, 1'b1})
    );
    wire sub, sll, srl, sra, xor_, or_, and_;
    assign sub = branchD | condset | (Rarith & (funct7 == 7'b0100000) & (funct3 == 3'b000));
    assign sll = (Iarith | Rarith) & (funct3 == 3'b001) & (funct7 == 7'b0000000);
    assign srl = (Iarith | Rarith) & (funct3 == 3'b101) & (funct7 == 7'b0000000);
    assign sra = (Iarith | Rarith) & (funct3 == 3'b101) & (funct7 == 7'b0100000);
    assign xor_ = (Iarith | Rarith) & (funct3 == 3'b100);
    assign or_ = ((Iarith | Rarith) & (funct3 == 3'b110)) | (csrRelated);
    assign and_ = (Iarith | Rarith) & (funct3 == 3'b111);
    MuxKeyWithDefault #(
        .NR_KEY(7),
        .KEY_LEN(7),
        .DATA_LEN(3)
    ) get_ALUop (
        .out(ALU_opD),
        .key({sub, sll, srl, sra, xor_, or_, and_}),
        .default_out(3'd0),
        .lut({7'b1000000, 3'b001,
              7'b0100000, 3'b110,
              7'b0010000, 3'b111,
              7'b0001000, 3'b010,
              7'b0000100, 3'b101,
              7'b0000010, 3'b100,
              7'b0000001, 3'b011})
    );

    // 0 for ALU, 1 for mem, 2 for snpc, 3 for compare_result, 4 for csr , 5 for disable
    // mem<->load, snpc<->jump, compare_result<->condset, csr<->csrRelated, disable<->branchD|store|ecallD|mretD|ebreak
    wire is_disable;
    assign is_disable = branchD | store | ecallD | mretD | ebreak | mismatch;
    MuxKeyWithDefault #(
        .NR_KEY(5),
        .KEY_LEN(5),
        .DATA_LEN(3)
    ) get_rdregsrc (
        .out(rdregsrcD),
        .key({load, jumpD, condset, csrRelated, is_disable}),
        .default_out(3'd0),
        .lut({5'b10000, 3'd1,
              5'b01000, 3'd2,
              5'b00100, 3'd3,
              5'b00010, 3'd4,
              5'b00001, 3'd5})
    );

    assign ALUsrc1D = auipc ? 2'd1 :
                      lui ? 2'd2 : 2'd0;

    // 0-regsrc2, 1-imm, 2-csr, 3-zero
    MuxKeyWithDefault #(
        .NR_KEY(3),
        .KEY_LEN(3),
        .DATA_LEN(2)
    ) get_ALUsrc2 (
        .out(ALUsrc2D),
        .key({Rarith | branchD, csrrw, csrrs}),
        .default_out(2'd1),
        .lut({3'b100, 2'd0,
              3'b010, 2'd3,
              3'b001, 2'd2})
    );

    assign write_csr = csrRelated | ecallD;
    
endmodule
