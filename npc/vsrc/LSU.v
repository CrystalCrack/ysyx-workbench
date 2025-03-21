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
    
    // add random delay to valid and ready
    reg [7:0] delay;
    reg [7:0] count;
    
    LFSR u_LFSR(
        .clk  	(clk   ),
        .rst  	(rst   ),
        .lfsr 	(delay  )
    );
    
    reg arvalid_i, rready_i, awvalid_i, wvalid_i, bready_i;
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
            awready_i <= awready;
            wvalid_i <= wvalid;
            bready_i <= bready;
        end
    end

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
