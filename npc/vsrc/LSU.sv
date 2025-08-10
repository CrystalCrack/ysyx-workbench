module LSU(
    input clk,
    input rst,

    input [31:0] ALU_resultX,
    input [31:0] src2X,
    input [3:0] mwmaskX,
    input [2:0] mrtypeX,
    input mvalidX,
    input validX,
    input mwenX,
    input readyW,
    input Mbus_ready,

    output LSU_valid,
    output LSU_ready,
    output reg [31:0] mdataM,

    // SRAM
    axi4_interface.master sram
);

    wire need_align = mvalidX & ((ALU_resultX >= 32'h0f00_0000 && ALU_resultX <= 32'h0f00_1fff) || (ALU_resultX >= 32'h3000_0000 && ALU_resultX <= 32'h3fff_ffff) || (ALU_resultX >= 32'h8000_0000 && ALU_resultX <= 32'h9fff_ffff));
    wire [31:0] aligned_addr = ALU_resultX & 32'hfffffffc;
    wire [1:0] aligned_addr_offset = ALU_resultX[1:0];
    wire [31:0] aligned_data = sram.rdata >> (8 * aligned_addr_offset);
    wire [31:0] rdata = need_align ? aligned_data : sram.rdata;

    wire arready, rvalid, awready, wready;

    assign sram.araddr = need_align ? aligned_addr : ALU_resultX;
    assign sram.arvalid = validX & mvalidX & (~mwenX);
    assign arready = sram.arready;

    assign rvalid = sram.rvalid;
    assign sram.rready = readyW;

    assign sram.awaddr = ALU_resultX;
    assign sram.awvalid = validX & mwenX;
    assign awready = sram.awready;

    assign sram.wdata = src2X;
    assign sram.wstrb = mwmaskX;
    assign sram.wvalid = validX & mwenX;
    assign wready = sram.wready;
    
    assign sram.bready = 1'b1;

    assign sram.awid = 0;
    assign sram.awlen = 0;
    assign sram.awsize = {3{mwmaskX==4'b1111}} & 3'b010 |
                         {3{mwmaskX==4'b0011}} & 3'b001;
    assign sram.awburst = 0;
    assign sram.wlast = 1;
    assign sram.arid = 0;
    assign sram.arlen = 0;
    assign sram.arsize = (mrtypeX==3'd0 || mrtypeX == 3'd3) ? 3'b000 :
                         (mrtypeX==3'd1 || mrtypeX == 3'd4) ? 3'b001 : 3'b010;
    assign sram.arburst = 0;

    
    wire valid;
    reg valid_reg;
    assign valid = (~mvalidX) | ((~mwenX) & rvalid) | (mwenX & wready);
    assign LSU_ready = (~mvalidX) | ((~mwenX) & arready) | (mwenX & wready & awready);
    always @(posedge clk) begin
        if(rst) begin
            valid_reg <= 1'b0;
        end else if(valid) begin
            valid_reg <= 1'b1;
        end else if(Mbus_ready) begin
            valid_reg <= 1'b0;
        end
    end
    assign LSU_valid = valid | valid_reg;


    MuxKeyWithDefault #(
        .NR_KEY(5),
        .KEY_LEN(3),
        .DATA_LEN(32)
    ) ext_mdata (
        .out(mdataM),
        .key(mrtypeX),
        .default_out(32'h0000_0000),
        .lut({3'd0, {{24{rdata[7]}}, rdata[7:0]}, // byte
              3'd1, {{16{rdata[15]}}, rdata[15:0]}, // half word
              3'd2, rdata, // word
              3'd3, {24'b0, rdata[7:0]}, // byte unsigned
              3'd4, {16'b0, rdata[15:0]}}) // half word unsigned
    );

endmodule
