module IFU(
    input clk,
    input rst,
    
    input [31:0] pcF,
    input validW,
    output readyF,
    output [31:0] instF,
    output validF,
    input readyD,

    axi4_interface.master sram

);

    reg rst_d, start_reg;
    wire start, ifetch_en;

    always @(posedge clk) begin
        rst_d <= rst;
    end
    assign start = (~rst & rst_d); // negedge detect

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            start_reg <= 1'b0;
        end else if (start) begin
            start_reg <= 1'b1;
        end else if (readyF) begin
            start_reg <= 1'b0;
        end
    end
    assign ifetch_en = ~rst & (validW | start | start_reg);


    // axi slave connect
    assign sram.arvalid = ifetch_en;
    assign sram.araddr = pcF;
    assign readyF = sram.arready;

    assign instF = sram.rdata;
    assign validF = sram.rvalid;
    assign sram.rready = readyD;

    assign sram.awaddr = 32'b0;
    assign sram.awvalid = 1'b0;
    assign sram.wdata = 32'b0;
    assign sram.wstrb = 4'b0;
    assign sram.wvalid = 1'b0;
    assign sram.bready = 1'b1;
    assign sram.arid = 0;
    assign sram.awlen = 0;
    assign sram.awsize = 0;
    assign sram.awburst = 0;
    assign sram.wlast = 1;
    assign sram.arid = 0;
    assign sram.arlen = 0;
    assign sram.arsize = 2;
    assign sram.arburst = 0;

    
    // SRAM u_SRAM(
    //     .clk     	(clk      ),
    //     .rst     	(rst      ),
    //     .araddr  	(araddr   ),
    //     .arvalid 	(arvalid  ),
    //     .arready 	(arready  ),
    //     .rdata   	(rdata    ),
    //     .rresp   	(rresp    ),
    //     .rvalid  	(rvalid   ),
    //     .rready  	(rready   ),
    //     .awaddr  	(0   ),
    //     .awvalid 	(0  ),
    //     .awready 	(  ),
    //     .wdata   	(0    ),
    //     .wstrb   	(0    ),
    //     .wvalid  	(0   ),
    //     .wready  	(   ),
    //     .bresp   	(    ),
    //     .bvalid  	(   ),
    //     .bready  	(0   )
    // );
    

endmodule
