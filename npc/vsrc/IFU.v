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
    // add random delay to valid and ready
    reg [7:0] delay;
    reg [7:0] count;
    
    LFSR u_LFSR(
        .clk  	(clk   ),
        .rst  	(rst   ),
        .lfsr 	(delay  )
    );
    
    reg arvalid_i, rready_i;
    always @(posedge clk) begin
        if(count >= delay) begin
            count <= 0;
        end
        else begin
            count <= count + 1;
        end
    end

    always @(posedge clk) begin
        if(count >= delay) begin
            arvalid_i <= arvalid;
            rready_i <= rready;
        end
    end
    
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
