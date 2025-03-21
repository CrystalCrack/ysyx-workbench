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
    wire [31:0] rdata_int;
    reg [2:0] mrtype;

    wire arvalid_i, rready_i, awvalid_i, wvalid_i, bready_i;
    delay #(
        .N(3)
    ) u_delay1(
        .clk(clk),
        .din(arvalid),
        .dout(arvalid_i)
    );

    delay #(
        .N(6)
    ) u_delay2(
        .clk(clk),
        .din(rready),
        .dout(rready_i)
    );

    delay #(
        .N(8)
    ) u_delay3(
        .clk(clk),
        .din(awvalid),
        .dout(awvalid_i)
    );

    delay #(
        .N(9)
    ) u_delay4(
        .clk(clk),
        .din(wvalid),
        .dout(wvalid_i)
    );

    delay #(
        .N(11)
    ) u_delay5(
        .clk(clk),
        .din(bready),
        .dout(bready_i)
    );
    
    SRAM data_ram(
        .clk     	(clk      ),
        .rst     	(rst      ),
        .araddr  	(araddr   ),
        .arvalid 	(arvalid_i  ),
        .arready 	(arready  ),
        .rdata   	(rdata_int    ),
        .rresp   	(rresp    ),
        .rvalid  	(rvalid   ),
        .rready  	(rready_i   ),
        .awaddr  	(awaddr   ),
        .awvalid 	(awvalid_i  ),
        .awready 	(awready  ),
        .wdata   	(wdata    ),
        .wstrb   	(wstrb    ),
        .wvalid  	(wvalid_i   ),
        .wready  	(wready   ),
        .bresp   	(bresp    ),
        .bvalid  	(bvalid   ),
        .bready  	(bready_i   )
    );
    

    MuxKeyWithDefault #(
        .NR_KEY(5),
        .KEY_LEN(3),
        .DATA_LEN(32)
    ) ext_mdata (
        .out(rdata),
        .key(mrtypeM),
        .default_out(32'h0000_0000),
        .lut({3'd0, {{24{rdata_int[7]}}, rdata_int[7:0]}, // byte
              3'd1, {{16{rdata_int[15]}}, rdata_int[15:0]}, // half word
              3'd2, rdata_int, // word
              3'd3, {24'b0, rdata_int[7:0]}, // byte unsigned
              3'd4, {16'b0, rdata_int[15:0]}}) // half word unsigned
    );

endmodule
