module npc(
    input clk,
    input rst
);

    wire stop_sim;

    /* -------------------------------------------------------------------- */
    /*                           Fetch Stage                                */
    /* -------------------------------------------------------------------- */
    wire validF;
    wire start, ifetch_en;
    reg rst_d, validW_d;
    wire [31:0] instF, pcF, snpcF;

    always @(posedge clk) begin
        rst_d <= rst;
        validW_d <= validW;
    end
    assign start = ~rst & rst_d; // negedge detect
    assign ifetch_en = ~rst & (validW_d | start);
    PC u_PC(
        .clk(clk),
        .rst(rst),
        .en(validW),
        .dnpc(dnpcX),
        .pc(pcF)
    );
    assign snpcF = pcF + 4;

    IFU u_IFU(
        .clk(clk),
        .rst(rst),
        .pc(pcF),
        .inst(instF),
        .s_valid(ifetch_en),
        .m_ready(readyD),
        .m_valid(validF)
    );

    /* -------------------------------------------------------------------- */
    /*                           Decode Stage                               */
    /* -------------------------------------------------------------------- */

    /* Dstage signals declaration */
    // bus
    wire [31:0] instD, pcD, snpcD;
    wire readyD, validD;
    // IDU
    wire [6:0] opcode, funct7;
    wire [2:0] funct3, mrtypeD, cmp_typeD, ALU_opD, rdregsrcD, inst_type, mrtypeD;
    wire [1:0] ALUsrc1D, ALUsrc2D;
    wire [11:0] funct12;
    wire mvalidD, mwenD, branchD, jumpD, jalrD, ecallD, mretD, write_csr;
    wire [7:0] mwmaskD;
    // RegisterFile
    wire [4:0] rf_raddr1, rf_raddr2, rs1, rs2;
    wire [31:0] src1D, src2D;
    // immediate extend
    wire [31:0] immD;
    // csr
    wire [11:0] csraddrD;
    wire [31:0] mtvec_data, mcause_data, mepc_data, mstatus_data, csr_rdata, csrD;
    wire [31:0] mtvec_wdata, mcause_wdata, mepc_wdata, mstatus_wdata;
    wire mtvec_wen, mcause_wen, mepc_wen, mstatus_wen;
    // forward
    wire [4:0] rdD;

    Dstage_bus dstagebus_inst(
        .clk(clk),
        .rst(rst),

        .instF(instF),
        .pcF(pcF),
        .snpcF(snpcF),

        .instD(instD),
        .pcD(pcD),
        .snpcD(snpcD),

        .s_valid(validF),
        .s_ready(readyD),
        .m_valid(validD),
        .m_ready(readyX)
    );


    assign opcode = instD[6:0];
    assign funct3 = instD[14:12];
    assign funct7 = instD[31:25];
    assign funct12 = instD[31:20];
    IDU idu_inst(
        .opcode(opcode),
        .funct3(funct3),
        .funct7(funct7),
        .funct12(funct12),

        .mvalidD(mvalidD),
        .mwmaskD(mwmaskD),
        .mwenD(mwenD),
        .mrtypeD(mrtypeD),
        .cmp_typeD(cmp_typeD),
        .branchD(branchD),
        .jumpD(jumpD),
        .ALU_opD(ALU_opD),
        .rdregsrcD(rdregsrcD),
        .jalrD(jalrD),
        .ALUsrc1D(ALUsrc1D),
        .ALUsrc2D(ALUsrc2D),
        .inst_type(inst_type),
        .ecallD(ecallD),
        .mretD(mretD),
        .write_csr(write_csr),
        .stop_sim(stop_sim)
    );


    assign rs1 = instD[19:15];
    assign rs2 = instD[24:20];
    assign rf_raddr1 = rs1;
    assign rf_raddr2 = ecallD ? 5'd15 : rs2;
    RegisterFile#(.ADDR_WIDTH(5),.DATA_WIDTH(32)) u_RegisterFile(
        .clk    	(clk),
        .rst    	(rst),
        .wdata  	(rddataW),
        .waddr  	(rdW),
        .wen    	(~disableW),
        .raddr1 	(rf_raddr1  ),
        .raddr2 	(rf_raddr2  ),
        .rdata1 	(src1D  ),
        .rdata2 	(src2D  ),
        .ren    	(1'b1     )
    );


    MuxKeyWithDefault #(
        .NR_KEY(5),
        .KEY_LEN(3),
        .DATA_LEN(32)
    ) sel_imm (
        .out(immD),
        .key(inst_type),
        .default_out(32'h0000_0000),
        .lut({3'd0, {{20{instD[31]}}, instD[31:20]},
              3'd1, {{20{instD[31]}}, instD[31:25], instD[11:7]},
              3'd3, {instD[31:12], 12'b0},
              3'd4, {{12{instD[31]}}, instD[19:12], instD[20], instD[30:21], 1'b0},
              3'd5, {{20{instD[31]}}, instD[7], instD[30:25], instD[11:8], 1'b0}})
    );

    
    Reg #(.WIDTH(32), .RESET_VAL(0))
        mtvec(
        .clk  	(clk   ),
        .rst  	(rst   ),
        .din  	(mtvec_wdata   ),
        .dout 	(mtvec_data),  
        .wen  	(mtvec_wen)   
    );
    assign mtvec_wen = csraddrW==12'h305;
    assign mtvec_wdata = ALU_resultW;
    Reg #(.WIDTH(32), .RESET_VAL(0))
        mcause(
        .clk  	(clk   ),
        .rst  	(rst   ),
        .din  	(mcause_wdata   ),
        .dout 	(mcause_data),  
        .wen  	(mcause_wen)   
    );
    assign mcause_wen = ecallW | (csraddrW==12'h342);
    assign mcause_wdata = ecallW ? src2W : ALU_resultW;
    Reg #(.WIDTH(32), .RESET_VAL(0))
        mepc(
        .clk  	(clk   ),
        .rst  	(rst   ),
        .din  	(mepc_wdata   ),
        .dout 	(mepc_data),  
        .wen  	(mepc_wen)   
    );
    assign mepc_wen = ecallW | (csraddrW==12'h341);
    assign mepc_wdata = ecallW ? pcW : ALU_resultW;
    Reg #(.WIDTH(32), .RESET_VAL(32'h0000_1800))
        mstatus(
        .clk  	(clk   ),
        .rst  	(rst   ),
        .din  	(mstatus_wdata   ),
        .dout 	(mstatus_data),  
        .wen  	(mstatus_wen)   
    );
    assign mstatus_wen = csraddrW==12'h300;
    assign mstatus_wdata = ALU_resultW;
    MuxKeyWithDefault #(
        .NR_KEY(4),
        .KEY_LEN(12),
        .DATA_LEN(32)
    )sel_csr_read(
        .out         	(csr_rdata),
        .key         	(csraddrD),
        .default_out 	(32'h0000_0000),
        .lut         	({12'h300, mstatus_data,
                         12'h341, mepc_data,
                         12'h342, mcause_data,
                         12'h305, mtvec_data})
    );
    assign csraddrD = write_csr ? funct12 : 12'h000;
    assign csrD = ecallD ? mtvec_data :
                  mretD ? mepc_data : csr_rdata;


    assign rdD = instD[11:7];

/* -------------------------------------------------------------------- */
/*                           Execute Stage                              */
/* -------------------------------------------------------------------- */
    // bus
    wire mvalidX, mwenX, ecallX, mretX, branchX, jumpX, jalrX;
    wire [1:0] ALUsrc1X, ALUsrc2X;
    wire [2:0] cmp_typeX, ALU_opX, rdregsrcX, mrtypeX;
    wire [4:0] rdX;
    wire [7:0] mwmaskX;
    wire [11:0] csraddrX;
    wire [31:0] csrX, immX, snpcX, pcX, src1X, src2X;
    wire validX, readyX;
    // ALU
    wire [31:0] ALU_A, ALU_B, ALU_resultX;
    wire overflow, zero, Cout;
    wire uge, ult, eq, neq, slt, sge;
    // cmp
    wire cmp_resultX;
    // pc jump
    wire [31:0] base_addr, offset, jump_addr, dnpc_, dnpcX;
    wire judge_jump;
    
    Xstage_bus u_Xstage_bus(
        .clk       	(clk        ),
        .rst       	(rst        ),
        .mvalidD   	(mvalidD    ),
        .mwenD     	(mwenD      ),
        .mwmaskD   	(mwmaskD    ),
        .mrtypeD   	(mrtypeD    ),
        .ecallD    	(ecallD     ),
        .mretD     	(mretD      ),
        .cmp_typeD 	(cmp_typeD  ),
        .branchD   	(branchD    ),
        .jumpD     	(jumpD      ),
        .ALU_opD   	(ALU_opD    ),
        .rdregsrcD 	(rdregsrcD  ),
        .jalrD     	(jalrD      ),
        .ALUsrc1D  	(ALUsrc1D   ),
        .ALUsrc2D  	(ALUsrc2D   ),
        .src1D     	(src1D      ),
        .src2D     	(src2D      ),
        .immD      	(immD       ),
        .snpcD     	(snpcD      ),
        .csraddrD  	(csraddrD   ),
        .pcD       	(pcD        ),
        .csrD      	(csrD       ),
        .rdD       	(rdD        ),
        .mvalidX   	(mvalidX    ),
        .mwenX     	(mwenX      ),
        .mwmaskX   	(mwmaskX    ),
        .mrtypeX   	(mrtypeX    ),
        .ecallX    	(ecallX     ),
        .mretX     	(mretX      ),
        .cmp_typeX 	(cmp_typeX  ),
        .branchX   	(branchX    ),
        .jumpX     	(jumpX      ),
        .ALU_opX   	(ALU_opX    ),
        .rdregsrcX 	(rdregsrcX  ),
        .jalrX     	(jalrX      ),
        .ALUsrc1X  	(ALUsrc1X   ),
        .ALUsrc2X  	(ALUsrc2X   ),
        .src1X     	(src1X      ),
        .src2X     	(src2X      ),
        .immX      	(immX       ),
        .snpcX     	(snpcX      ),
        .csraddrX  	(csraddrX   ),
        .pcX       	(pcX        ),
        .csrX      	(csrX       ),
        .rdX       	(rdX        ),
        .s_valid   	(validD    ),
        .s_ready   	(readyX    ),
        .m_ready   	(readyM    ),
        .m_valid   	(validX    )
    );
    

    assign ALU_A = (ALUsrc1X==2'd0) ? src1X : 
                   (ALUsrc1X==2'd1) ? pcX : 32'd0;
    assign ALU_B = (ALUsrc2X==2'd0) ? src2X : 
                   (ALUsrc2X==2'd1) ? immX : 
                   (ALUsrc2X==2'd2) ? csrX : 32'd0;
    ALU u_ALU(
        .mode(ALU_opX),
        .A(ALU_A),
        .B(ALU_B),
        .Cin(0),
        .zero(zero),
        .overflow(overflow),
        .Cout(Cout),
        .result(ALU_resultX)
    );
    assign uge = Cout;
    assign ult = ~uge;
    assign eq = zero;
    assign neq = ~eq;
    assign slt = overflow ^ ALU_resultX[31];
    assign sge = ~slt;
    MuxKeyWithDefault #(
        .NR_KEY(6),
        .KEY_LEN(3),
        .DATA_LEN(1)
    ) sel_cmp (
        .out(cmp_resultX),
        .key(cmp_typeX),
        .default_out(1'b0),
        .lut({3'd0, eq,
              3'd1, neq,
              3'd2, slt,
              3'd3, sge,
              3'd4, ult,
              3'd5, uge})
    );


    assign base_addr = jalrX ? src1X : pcX;
    assign offset = immX;
    assign jump_addr = base_addr + offset;
    assign judge_jump = jumpX | (branchX & cmp_resultX);
    assign dnpc_ = judge_jump ? jump_addr : snpcX;
    assign dnpcX = (ecallX | mretX) ? csrX : dnpc_;

    
    /* -------------------------------------------------------------------- */
    /*                           Memory Stage                               */
    /* -------------------------------------------------------------------- */
    // bus
    wire readyM, validM, cmp_resultM;
    wire mvalidM, mwenM, ecallM;
    wire [2:0] rdregsrcM, mrtypeM;
    wire [4:0] rdM;
    wire [7:0] mwmaskM;
    wire [11:0] csraddrM;
    wire [31:0] dnpcM, pcM, src2M, ALU_resultM, csrM, snpcM;
    // memory
    wire [31:0] rdata, mdataM;
    
    Mstage_bus u_Mstage_bus(
        .clk         	(clk          ),
        .rst         	(rst          ),
        .mvalidX     	(mvalidX      ),
        .mwenX       	(mwenX        ),
        .mwmaskX     	(mwmaskX      ),
        .mrtypeX     	(mrtypeX      ),
        .rdregsrcX   	(rdregsrcX    ),
        .dnpcX       	(dnpcX        ),
        .snpcX       	(snpcX        ),
        .pcX         	(pcX          ),
        .src2X       	(src2X        ),
        .ALU_resultX 	(ALU_resultX  ),
        .csraddrX    	(csraddrX     ),
        .csrX        	(csrX         ),
        .cmp_resultX 	(cmp_resultX  ),
        .ecallX      	(ecallX       ),
        .rdX         	(rdX          ),
        .mvalidM     	(mvalidM      ),
        .mwenM       	(mwenM        ),
        .mwmaskM     	(mwmaskM      ),
        .mrtypeM     	(mrtypeM      ),
        .rdregsrcM   	(rdregsrcM    ),
        .dnpcM       	(dnpcM        ),
        .snpcM       	(snpcM        ),
        .pcM         	(pcM          ),
        .src2M       	(src2M        ),
        .ALU_resultM 	(ALU_resultM  ),
        .csraddrM    	(csraddrM     ),
        .csrM        	(csrM         ),
        .cmp_resultM 	(cmp_resultM  ),
        .ecallM      	(ecallM       ),
        .rdM         	(rdM          ),
        .s_valid     	(validX       ),
        .s_ready     	(readyM       ),
        .m_ready     	(readyW       ),
        .m_valid     	(validM       )
    );
    

    /* data memory */
    memory data_mem(
        .raddr 	(ALU_resultM  ),
        .waddr 	(ALU_resultM  ),
        .wdata 	(src2M  ),
        .wmask 	(mwmaskM  ),
        .wen   	(mwenM    ),
        .valid 	(mvalidM  ),
        .rdata 	(rdata  )
    );
    MuxKeyWithDefault #(
        .NR_KEY(5),
        .KEY_LEN(3),
        .DATA_LEN(32)
    ) ext_mdata (
        .out(mdataM),
        .key(mrtypeM),
        .default_out(32'h0000_0000),
        .lut({3'd0, {{24{rdata[7]}}, rdata[7:0]}, // byte
              3'd1, {{16{rdata[15]}}, rdata[15:0]}, // half word
              3'd2, rdata, // word
              3'd3, {24'b0, rdata[7:0]}, // byte unsigned
              3'd4, {16'b0, rdata[15:0]}}) // half word unsigned
    );

    /* -------------------------------------------------------------------- */
    /*                          Write Back Stage                            */
    /* -------------------------------------------------------------------- */
    //bus
    wire readyW, validW;
    wire ecallW, cmp_resultW, disableW;
    wire [2:0] rdregsrcW;
    wire [4:0] rdW;
    wire [31:0] src2W, pcW, dnpcW, ALU_resultW, csrW, snpcW, mdataW, rddataW;
    wire [11:0] csraddrW;

    Wstage_bus u_Wstage_bus(
        .clk         	(clk          ),
        .rst         	(rst          ),
        .dnpcM       	(dnpcM        ),
        .rdregsrcM   	(rdregsrcM    ),
        .mdataM      	(mdataM       ),
        .ALU_resultM 	(ALU_resultM  ),
        .csraddrM    	(csraddrM     ),
        .snpcM       	(snpcM        ),
        .pcM         	(pcM          ),
        .cmp_resultM 	(cmp_resultM  ),
        .ecallM      	(ecallM       ),
        .csrM        	(csrM         ),
        .src2M       	(src2M        ),
        .rdM         	(rdM          ),
        .dnpcW       	(dnpcW        ),
        .rdregsrcW   	(rdregsrcW    ),
        .mdataW     	(mdataW       ),
        .ALU_resultW 	(ALU_resultW  ),
        .csraddrW    	(csraddrW     ),
        .snpcW       	(snpcW        ),
        .pcW         	(pcW          ),
        .cmp_resultW 	(cmp_resultW  ),
        .ecallW      	(ecallW       ),
        .csrW        	(csrW         ),
        .src2W       	(src2W        ),
        .rdW         	(rdW          ),
        .s_valid     	(validM       ),
        .s_ready     	(readyW       ),
        .m_ready     	(1'b1         ),
        .m_valid     	(validW       )
    );
    MuxKeyWithDefault #(
        .NR_KEY(5),
        .KEY_LEN(3),
        .DATA_LEN(32)
    ) sel_WB (
        .out(rddataW),
        .key(rdregsrcW),
        .default_out(32'h0000_0000),
        .lut({3'd0, ALU_resultW,
              3'd1, mdataW,
              3'd2, snpcW,
              3'd3, {31'b0, cmp_resultW},
              3'd4, csrW})
    );
    assign disableW = rdregsrcW == 3'd5;

    export "DPI-C" function get_pc_inst;
    function void get_pc_inst();
        output int cpu_pc;
        output int cpu_inst;
        cpu_pc = pcF;
        cpu_inst = instF;
    endfunction

    export "DPI-C" function get_CSR;
    function void get_CSR();
        output int csr_mtvec;
        output int csr_mcause;
        output int csr_mepc;
        output int csr_mstatus;
        csr_mtvec = mtvec_data;
        csr_mcause = mcause_data;
        csr_mepc = mepc_data;
        csr_mstatus = mstatus_data;
    endfunction

    import "DPI-C" function void ebreak();
    always @ (posedge clk) begin
        if(stop_sim) begin
            ebreak();
        end
    end

    export "DPI-C" function is_inst_done;
    function void is_inst_done();
        output int done;
        done = {31'b0, validW_d};
    endfunction

endmodule
