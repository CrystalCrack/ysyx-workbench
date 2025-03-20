module LSU(
    input clk,
    input rst,

    input [31:0] araddr,
    input [2:0] mrtypeM,
    input arvalid,
    output arready,

    output [31:0] rdata,
    output rresp,
    output rvalid,
    input rready,

    input [31:0] awaddr,
    input awvalid,
    output awready,

    input [31:0] wdata,
    input [3:0] wstrb,
    input wvalid,
    output wready,

    output bresp,
    output bvalid,
    input bready

);
    wire [31:0] rdata_sel;
    reg [2:0] mrtype;
    
    SRAM data_ram(
        .clk     	(clk      ),
        .rst     	(rst      ),
        .araddr  	(araddr   ),
        .arvalid 	(arvalid  ),
        .arready 	(arready  ),
        .rdata   	(rdata    ),
        .rresp   	(rresp    ),
        .rvalid  	(rvalid   ),
        .rready  	(rready   ),
        .awaddr  	(awaddr   ),
        .awvalid 	(awvalid  ),
        .awready 	(awready  ),
        .wdata   	(wdata    ),
        .wstrb   	(wstrb    ),
        .wvalid  	(wvalid   ),
        .wready  	(wready   ),
        .bresp   	(bresp    ),
        .bvalid  	(bvalid   ),
        .bready  	(bready   )
    );
    

    MuxKeyWithDefault #(
        .NR_KEY(5),
        .KEY_LEN(3),
        .DATA_LEN(32)
    ) ext_mdata (
        .out(rdata_sel),
        .key(mrtypeM),
        .default_out(32'h0000_0000),
        .lut({3'd0, {{24{rdata[7]}}, rdata[7:0]}, // byte
              3'd1, {{16{rdata[15]}}, rdata[15:0]}, // half word
              3'd2, rdata, // word
              3'd3, {24'b0, rdata[7:0]}, // byte unsigned
              3'd4, {16'b0, rdata[15:0]}}) // half word unsigned
    );

endmodule
