module Xstage_bus(
    input clk,
    input rst,

    input mvalidD,
    input mwenD,
    input [7:0] mwmaskD,
    input [2:0] mrtypeD,
    input ecallD,
    input mretD,
    input [2:0] cmp_typeD,
    input branchD,
    input jumpD,
    input [2:0] ALU_opD,
    input [2:0] rdregsrcD,
    input jalrD,
    input [1:0] ALUsrc2D,
    input [31:0] src1D,
    input [31:0] src2D,
    input [31:0] immD,
    input [31:0] snpcD,
    input [11:0] csraddrD,
    input [31:0] pcD,
    input [31:0] csrD,
    input [4:0] rdD,

    output reg mvalidX,
    output reg mwenX,
    output reg [7:0] mwmaskX,
    output reg [2:0] mrtypeX,
    output reg ecallX,
    output reg mretX,
    output reg [2:0] cmp_typeX,
    output reg branchX,
    output reg jumpX,
    output reg [2:0] ALU_opX,
    output reg [2:0] rdregsrcX,
    output reg jalrX,
    output reg [1:0] ALUsrc2X,
    output reg [31:0] src1X,
    output reg [31:0] src2X,
    output reg [31:0] immX,
    output reg [31:0] snpcX,
    output reg [11:0] csraddrX,
    output reg [31:0] pcX,
    output reg [31:0] csrX,
    output reg [4:0] rdX,

    input s_valid,
    output s_ready,
    input m_ready,
    output m_valid
);
    // localparam IDLE = 0;
    // localparam WAIT_READY = 1;

    // reg state;
    // always @(posedge clk) begin
    //     if(rst) begin
    //         state <= IDLE;
    //     end
    //     else begin
    //         case (state)
    //             IDLE: begin
    //                 if(s_valid) begin
    //                     state <= WAIT_READY;
    //                 end
    //                 else begin
    //                     state <= IDLE;
    //                 end
    //             end
    //             WAIT_READY: begin
    //                 if(m_ready) begin
    //                     state <= IDLE;
    //                 end
    //                 else begin
    //                     state <= WAIT_READY;
    //                 end
    //             end
    //         endcase
    //     end
    // end
    // assign s_ready = state == IDLE;
    // assign m_valid = state == WAIT_READY;

    // always @(posedge clk) begin
    //     if(rst) begin
    //         pcX <= 32'h80000000;
    //         immX <= 32'h0;
    //         snpcX <= 32'h80000000;
    //         csraddrX <= 12'h0;
    //         csrX <= 32'h0;
    //         mvalidX <= 1'b0;
    //         mwenX <= 1'b0;
    //         mwmaskX <= 8'h0;
    //         mrtypeX <= 3'b0;
    //         ecallX <= 1'b0;
    //         mretX <= 1'b0;
    //         cmp_typeX <= 3'b0;
    //         branchX <= 1'b0;
    //         jumpX <= 1'b0;
    //         ALU_opX <= 3'b0;
    //         rdregsrcX <= 3'b0;
    //         jalrX <= 1'b0;
    //         ALUsrc2X <= 2'b0;
    //         src1X <= 32'b0;
    //         src2X <= 32'b0;
    //         rdX <= 5'b0;
    //     end
    //     else begin
    //         if(s_ready) begin
    //             pcX <= pcD;
    //             immX <= immD;
    //             snpcX <= snpcD;
    //             csraddrX <= csraddrD;
    //             csrX <= csrD;
    //             mvalidX <= mvalidD;
    //             mwenX <= mwenD;
    //             mwmaskX <= mwmaskD;
    //             mrtypeX <= mrtypeD;
    //             ecallX <= ecallD;
    //             mretX <= mretD;
    //             cmp_typeX <= cmp_typeD;
    //             branchX <= branchD;
    //             jumpX <= jumpD;
    //             ALU_opX <= ALU_opD;
    //             rdregsrcX <= rdregsrcD;
    //             jalrX <= jalrD;
    //             ALUsrc2X <= ALUsrc2D;
    //             src1X <= src1D;
    //             src2X <= src2D;
    //             rdX <= rdD;
    //         end
    //     end
    // end

    // single cycle: always ready
    assign s_ready = 1;
    assign m_valid = 1;
    always @(*) begin
        pcX = pcD;
        immX = immD;
        snpcX = snpcD;
        csraddrX = csraddrD;
        csrX = csrD;
        mvalidX = mvalidD;
        mwenX = mwenD;
        mwmaskX = mwmaskD;
        mrtypeX = mrtypeD;
        ecallX = ecallD;
        mretX = mretD;
        cmp_typeX = cmp_typeD;
        branchX = branchD;
        jumpX = jumpD;
        ALU_opX = ALU_opD;
        rdregsrcX = rdregsrcD;
        jalrX = jalrD;
        ALUsrc2X = ALUsrc2D;
        src1X = src1D;
        src2X = src2D;
        rdX = rdD;
    end


endmodule
