//Execution Unit
module EXU(
    input clk,
    input [5:0] inst_type,
    input [2:0] ALU_mode,
    input [4:0] rs1,
    input [4:0] rs2,
    input [4:0] rd,
    input [31:0] imm
);
    wire [31:0] src1, src2;
    wire [31:0] result;

    RegisterFile #(.ADDR_WIDTH(5), .DATA_WIDTH(32)) regfile_inst(
        .clk(clk),
        .wdata(result),
        .waddr(rd),
        .wen(1'b1),
        .raddr1(rs1),
        .raddr2(rs2),
        .rdata1(src1),
        .rdata2(src2),
        .ren(1'b1)
    );
    
    ALU alu_inst(
        .mode(ALU_mode),
        .A(imm),
        .B(src1),
        .Cin(0),
        .result(result)
    );
    

endmodule
