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
    wire arvalid_i, rready_i;
    delay #(
        .N(1)
    ) u_delay1(
        .clk(clk),
        .signal(arvalid),
        .delayed_signal(arvalid_i)
    );

    delay #(
        .N(1)
    ) u_delay2(
        .clk(clk),
        .signal(rready),
        .delayed_signal(rready_i)
    );
    
    SRAM u_SRAM(
        .clk     	(clk      ),
        .rst     	(rst      ),
        .araddr  	(araddr   ),
        .arvalid 	(arvalid_i  ),
        .arready 	(arready  ),
        .rdata   	(rdata    ),
        .rresp   	(rresp    ),
        .rvalid  	(rvalid   ),
        .rready  	(rready_i   ),
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
