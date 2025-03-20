module IFU(
    input clk,
    input rst,
    
    input [31:0] araddr,
    input arvalid,
    output arready,

    output [31:0] rdata,
    output rresp,
    output rvalid,
    input rready

);
    
    SRAM u_SRAM(
        .clk     	(clk      ),
        .rst     	(rst      ),
        .araddr  	(araddr   ),
        .arvalid 	(arvalid  ),
        .arready 	(arready  ),
        .rdata   	(rdata    ),
        .rresp   	(rresp    ),
        .rvalid  	(rvalid   ),
        .rready  	(rready   ),
        .awaddr  	(0   ),
        .awvalid 	(0  ),
        .awready 	(  ),
        .wdata   	(0    ),
        .wstrb   	(0    ),
        .wvalid  	(0   ),
        .wready  	(   ),
        .bresp   	(    ),
        .bvalid  	(   ),
        .bready  	(0   )
    );
    

endmodule
