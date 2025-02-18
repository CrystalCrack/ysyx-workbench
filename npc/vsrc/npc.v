module npc(
    input clk,
    input rst,
    
    output reg [31:0] pc,
    input [31:0] inst
);
    always @(posedge clk) begin
        if(rst) begin
            pc <= 32'h80000000;
        end
        else begin
            pc <= pc+4;
        end
    end

    wire [4:0] rs1, rs2, rd;
    wire [31:0] imm;
    wire [2:0] funct3;
    wire [6:0] funct7;
    wire [6:0] opcode;
    wire [5:0] inst_type;
    wire [2:0] ALU_op;
    wire memtoreg;
    wire ALUsrc2;


    wire [31:0] rf_wdata;
    wire [31:0] rf_rdata1;
    wire [31:0] rf_rdata2;
    wire [4:0] rf_raddr1;
    wire [4:0] rf_raddr2;

    wire [31:0] ALU_result;
    wire [31:0] ALU_A;
    wire [31:0] ALU_B;
    wire ALU_Cin;
    wire ALU_zero;
    wire ALU_overflow;
    wire ALU_Cout;
    wire [31:0] ALU_result;

    IDU idu_inst(
        .inst(inst),
        .rd(rd),
        .rs1(rs1),
        .rs2(rs2),
        .imm(imm),
        .funct3(funct3),
        .funct7(funct7),
        .opcode(opcode),
        .inst_type(inst_type),
        .ALU_op(ALU_op),
        .memtoreg(memtoreg),
        .ALUsrc2(ALUsrc2)
    );

    assign rf_wdata = memtoreg?32'b0:ALU_result; //TODO
    assign rf_raddr1 = rs1;
    assign rf_raddr2 = rs2;
    RegisterFile#(.ADDR_WIDTH(5),.DATA_WIDTH(32)) u_RegisterFile(
        .clk    	(clk     ),
        .wdata  	(rf_wdata   ),
        .waddr  	(rd   ),
        .wen    	(1'b1     ),
        .raddr1 	(rf_raddr1  ),
        .raddr2 	(rf_raddr2  ),
        .rdata1 	(rf_rdata1  ),
        .rdata2 	(rf_rdata2  ),
        .ren    	(1'b1     )
    );
    
    assign ALU_A = rf_rdata1;
    assign ALU_B = ALUsrc2 ? imm : rf_rdata2;
    ALU u_ALU(
        .mode(ALU_op),
        .A(ALU_A),
        .B(ALU_B),
        .Cin(ALU_Cin),
        .zero(ALU_zero),
        .overflow(ALU_overflow),
        .Cout(ALU_Cout),
        .result(ALU_result)
    );

endmodule