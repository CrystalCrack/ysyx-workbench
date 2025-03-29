module ysyx_25020057(
    input clock,
    input reset,
    input io_interrupt,

    input io_master_awready,
    output io_master_awvalid,
    output [31:0] io_master_awaddr,
    output [3:0] io_master_awid,
    output [7:0] io_master_awlen,
    output [2:0] io_master_awsize,
    output [1:0] io_master_awburst,
    input io_master_wready,
    output io_master_wvalid,
    output [31:0] io_master_wdata,
    output [3:0] io_master_wstrb,
    output io_master_wlast,
    output io_master_bready,
    input io_master_bvalid,
    input [1:0] io_master_bresp,
    input [3:0] io_master_bid,
    input io_master_arready,
    output io_master_arvalid,
    output [31:0] io_master_araddr,
    output [3:0] io_master_arid,
    output [7:0] io_master_arlen,
    output [2:0] io_master_arsize,
    output [1:0] io_master_arburst,
    output io_master_rready,
    input io_master_rvalid,
    input [1:0] io_master_rresp,
    input [31:0] io_master_rdata,
    input io_master_rlast,
    input [3:0] io_master_rid,

    output io_slave_awready,
    input io_slave_awvalid,
    input [31:0] io_slave_awaddr,
    input [3:0] io_slave_awid,
    input [7:0] io_slave_awlen,
    input [2:0] io_slave_awsize,
    input [1:0] io_slave_awburst,
    output io_slave_wready,
    input io_slave_wvalid,
    input [31:0] io_slave_wdata,
    input [3:0] io_slave_wstrb,
    input io_slave_wlast,
    input io_slave_bready,
    output io_slave_bvalid,
    output [1:0] io_slave_bresp,
    output [3:0] io_slave_bid,
    output io_slave_arready,
    input io_slave_arvalid,
    input [31:0] io_slave_araddr,
    input [3:0] io_slave_arid,
    input [7:0] io_slave_arlen,
    input [2:0] io_slave_arsize,
    input [1:0] io_slave_arburst,
    input io_slave_rready,
    output io_slave_rvalid,
    output [1:0] io_slave_rresp,
    output [31:0] io_slave_rdata,
    output io_slave_rlast,
    output [3:0] io_slave_rid
);

    wire stop_sim;
    assign stop_sim = instD==32'h00100073; // ebreak

    /* -------------------------------------------------------------------- */
    /*                           Fetch Stage                                */
    /* -------------------------------------------------------------------- */
    wire validF, readyF;
    wire newpc;
    wire [31:0] instF, pcF, snpcF;
    axi4_interface #(32, 32) Isram_if();

    // detect validX rising edge to update pcF only once
    reg validX_d;
    wire update_pc;
    always @(posedge clock) begin
        validX_d <= validX;
    end
    assign update_pc = validX & ~validX_d;
    PC u_PC(
        .clk(clock),
        .rst(reset),
        .en(update_pc),
        .dnpc(dnpcX),
        .pc(pcF)
    );


    
    assign snpcF = pcF + 4;

    IFU u_IFU(
        .clk(clock),
        .rst(reset),
        
        .pcF(pcF),
        .validW(validW),
        .readyF(readyF),
        .instF(instF),
        .validF(validF),
        .readyD(readyD),

        .sram(Isram_if.master)

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
        .clk(clock),
        .rst(reset),

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
        .write_csr(write_csr)
    );


    assign rs1 = instD[19:15];
    assign rs2 = instD[24:20];
    assign rf_raddr1 = rs1;
    assign rf_raddr2 = ecallD ? 5'd15 : rs2;
    RegisterFile#(.ADDR_WIDTH(5),.DATA_WIDTH(32)) u_RegisterFile(
        .clk    	(clock),
        .rst    	(reset),
        .wdata  	(rddataW),
        .waddr  	(rdW),
        .wen    	(~disableW & validW),
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
        .clk  	(clock   ),
        .rst  	(reset   ),
        .din  	(mtvec_wdata   ),
        .dout 	(mtvec_data),  
        .wen  	(mtvec_wen)   
    );
    assign mtvec_wen = csraddrW==12'h305;
    assign mtvec_wdata = ALU_resultW;
    Reg #(.WIDTH(32), .RESET_VAL(0))
        mcause(
        .clk  	(clock   ),
        .rst  	(reset   ),
        .din  	(mcause_wdata   ),
        .dout 	(mcause_data),  
        .wen  	(mcause_wen)   
    );
    assign mcause_wen = ecallW | (csraddrW==12'h342);
    assign mcause_wdata = ecallW ? src2W : ALU_resultW;
    Reg #(.WIDTH(32), .RESET_VAL(0))
        mepc(
        .clk  	(clock   ),
        .rst  	(reset   ),
        .din  	(mepc_wdata   ),
        .dout 	(mepc_data),  
        .wen  	(mepc_wen)   
    );
    assign mepc_wen = ecallW | (csraddrW==12'h341);
    assign mepc_wdata = ecallW ? pcW : ALU_resultW;
    Reg #(.WIDTH(32), .RESET_VAL(32'h0000_1800))
        mstatus(
        .clk  	(clock   ),
        .rst  	(reset   ),
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
        .clk       	(clock        ),
        .rst       	(reset        ),
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
    wire Mbus_valid, Mbus_ready;
    wire [2:0] rdregsrcM, mrtypeM;
    wire [4:0] rdM;
    wire [7:0] mwmaskM;
    wire [11:0] csraddrM;
    wire [31:0] dnpcM, pcM, src2M, ALU_resultM, csrM, snpcM;
    // LSU
    wire [31:0] mdataM;
    axi4_interface #(32, 32) Dsram_if();
    wire LSU_ready, LSU_valid;
    
    Mstage_bus u_Mstage_bus(
        .clk         	(clock          ),
        .rst         	(reset          ),
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
        .s_valid     	(validX & LSU_ready       ), // when LSU ready, mbus can store data.
        .s_ready     	(Mbus_ready       ),
        .m_ready     	(readyW & validM       ),
        .m_valid     	(Mbus_valid       )
    );
    LSU u_LSU(
        .clk     	(clock      ),
        .rst     	(reset      ),
        .ALU_resultX(ALU_resultX),
        .src2X   	(src2X    ),
        .mwmaskX 	(mwmaskX[3:0]  ),
        .mrtypeX 	(mrtypeX  ),
        .mvalidX 	(mvalidX  ),
        .validX  	(validX   ),
        .mwenX   	(mwenX    ),
        .readyW  	(readyW   ),
        .Mbus_ready (Mbus_ready),
        .LSU_valid  (LSU_valid),
        .LSU_ready  (LSU_ready),
        .mdataM  	(mdataM   ),

        .sram(Dsram_if.master)
    );


    assign readyM = LSU_ready & Mbus_ready;
    assign validM = LSU_valid & Mbus_valid;
    
    

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
        .clk         	(clock          ),
        .rst         	(reset          ),
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
        .m_ready     	(readyF         ),
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



    //-------------------------------------------------------------
    //           Peripheral, SRAM and Interconnect
    //-------------------------------------------------------------

    axi4_interface #(32, 32) arbiter_if();
    axi4_interface #(32, 32) soc_if();
    axi4_interface #(32, 32) clint_if();
    
    axi4_arbiter u_axi4_arbiter(
        .clk        	(clock         ),
        .rst        	(reset         ),
        .m0             (Isram_if.slave),
        .m1             (Dsram_if.slave),
        .s              (arbiter_if.master)
    );
    
    xbar u_xbar(
        .clk     	(clock      ),
        .rst     	(reset      ),
        .master     (arbiter_if.slave),
        .soc        (soc_if.master),
        .clint      (clint_if.master)
    );
    
    // axi4_uart u_axi4_uart(
    //     .clk     	(clock      ),
    //     .rst     	(reset      ),
    //     .uart       (uart_if.slave)
    // );
    
    // SRAM u_SRAM(
    //     .clk     	(clock      ),
    //     .rst     	(reset      ),
    //     .sram    	(sram_if.slave)
    // );

    axi4_clint u_axi4_clint(
        .clk     	(clock      ),
        .rst     	(reset      ),
        .clint    	(clint_if.slave)
    );

    axi4_interface #(32, 32) npc_if();
    assign npc_if.awready = 0;
    assign npc_if.wready = 0;
    assign npc_if.bvalid = 0;
    assign npc_if.bresp = 0;
    assign npc_if.bid = 0;
    assign npc_if.arready = 0;
    assign npc_if.rvalid = 0;
    assign npc_if.rresp = 0;
    assign npc_if.rdata = 0;
    assign npc_if.rlast = 0;
    assign npc_if.rid = 0;
    
    axi4_adapter u_axi4_adapter(
        .master_awready 	(io_master_awready  ),
        .master_awvalid 	(io_master_awvalid  ),
        .master_awaddr  	(io_master_awaddr   ),
        .master_awid    	(io_master_awid     ),
        .master_awlen   	(io_master_awlen    ),
        .master_awsize  	(io_master_awsize   ),
        .master_awburst 	(io_master_awburst  ),
        .master_wready  	(io_master_wready   ),
        .master_wvalid  	(io_master_wvalid   ),
        .master_wdata   	(io_master_wdata    ),
        .master_wstrb   	(io_master_wstrb    ),
        .master_wlast   	(io_master_wlast    ),
        .master_bready  	(io_master_bready   ),
        .master_bvalid  	(io_master_bvalid   ),
        .master_bresp   	(io_master_bresp    ),
        .master_bid     	(io_master_bid      ),
        .master_arready 	(io_master_arready  ),
        .master_arvalid 	(io_master_arvalid  ),
        .master_araddr  	(io_master_araddr   ),
        .master_arid    	(io_master_arid     ),
        .master_arlen   	(io_master_arlen    ),
        .master_arsize  	(io_master_arsize   ),
        .master_arburst 	(io_master_arburst  ),
        .master_rready  	(io_master_rready   ),
        .master_rvalid 	(io_master_rvalid  ),
        .master_rresp   	(io_master_rresp    ),
        .master_rdata   	(io_master_rdata    ),
        .master_rlast   	(io_master_rlast    ),
        .master_rid     	(io_master_rid      ),
        .slave_awready  	(io_slave_awready   ),
        .slave_awvalid  	(io_slave_awvalid   ),
        .slave_awaddr   	(io_slave_awaddr    ),
        .slave_awid     	(io_slave_awid      ),
        .slave_awlen    	(io_slave_awlen     ),
        .slave_awsize   	(io_slave_awsize    ),
        .slave_awburst  	(io_slave_awburst   ),
        .slave_wready   	(io_slave_wready    ),
        .slave_wvalid   	(io_slave_wvalid    ),
        .slave_wdata    	(io_slave_wdata     ),
        .slave_wstrb    	(io_slave_wstrb     ),
        .slave_wlast    	(io_slave_wlast     ),
        .slave_bready   	(io_slave_bready    ),
        .slave_bvalid   	(io_slave_bvalid    ),
        .slave_bresp    	(io_slave_bresp     ),
        .slave_bid      	(io_slave_bid       ),
        .slave_arready  	(io_slave_arready   ),
        .slave_arvalid  	(io_slave_arvalid   ),
        .slave_araddr   	(io_slave_araddr    ),
        .slave_arid     	(io_slave_arid      ),
        .slave_arlen    	(io_slave_arlen     ),
        .slave_arsize   	(io_slave_arsize    ),
        .slave_arburst  	(io_slave_arburst   ),
        .slave_rready   	(io_slave_rready    ),
        .slave_rvalid   	(io_slave_rvalid    ),
        .slave_rresp    	(io_slave_rresp     ),
        .slave_rdata    	(io_slave_rdata     ),
        .slave_rlast    	(io_slave_rlast     ),
        .slave_rid      	(io_slave_rid       ),
        .master         	(soc_if.slave          ),
        .slave          	(npc_if.master           )
    );
    
    

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
    always @ (posedge clock) begin
        if(stop_sim) begin
            ebreak();
        end
    end

    wire FW_handshake;
    reg FW_handshake_d;
    always @(posedge clock) begin
        FW_handshake_d <= FW_handshake;
    end
    assign FW_handshake = validW&readyF;
    export "DPI-C" function is_inst_done;
    function void is_inst_done();
        output int done;
        done = {31'b0, FW_handshake_d};
    endfunction

endmodule
