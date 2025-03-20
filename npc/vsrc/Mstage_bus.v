`include "./include/config.vh"
module Mstage_bus(
    input clk,
    input rst,

    input mvalidX,
    input mwenX,
    input [7:0] mwmaskX,
    input [2:0] mrtypeX,
    input [2:0] rdregsrcX,
    input [31:0] dnpcX,
    input [31:0] snpcX,
    input [31:0] pcX,
    input [31:0] src2X,
    input [31:0] ALU_resultX,
    input [11:0] csraddrX,
    input [31:0] csrX,
    input cmp_resultX,
    input ecallX,
    input [4:0] rdX,

    output reg mvalidM,
    output reg mwenM,
    output reg [7:0] mwmaskM,
    output reg [2:0] mrtypeM,
    output reg [2:0] rdregsrcM,
    output reg [31:0] dnpcM,
    output reg [31:0] snpcM,
    output reg [31:0] pcM,
    output reg [31:0] src2M,
    output reg [31:0] ALU_resultM,
    output reg [11:0] csraddrM,
    output reg [31:0] csrM,
    output reg cmp_resultM,
    output reg ecallM,
    output reg [4:0] rdM,

    input s_valid,
    output s_ready,
    input m_ready,
    output m_valid
);
`ifndef SINGLE_CYCLE
    localparam IDLE = 0;
    localparam WAIT_READY = 1;

    reg state;
    always @(posedge clk) begin
        if(rst) begin
            state <= IDLE;
        end
        else begin
            case (state)
                IDLE: begin
                    if(s_valid) begin
                        state <= WAIT_READY;
                    end
                    else begin
                        state <= IDLE;
                    end
                end
                WAIT_READY: begin
                    if(m_ready) begin
                        state <= IDLE;
                    end
                    else begin
                        state <= WAIT_READY;
                    end
                end
            endcase
        end
    end
    assign s_ready = state == IDLE;
    assign m_valid = state == WAIT_READY;

    always @(posedge clk) begin
        if(rst) begin
            mvalidM <= 1'b0;
            mwenM <= 1'b0;
            mwmaskM <= 8'h0;
            mrtypeM <= 3'b0;
            rdregsrcM <= 3'b0;
            dnpcM <= 32'h0;
            snpcM <= 32'h0;
            pcM <= 32'h0;
            src2M <= 32'h0;
            ALU_resultM <= 32'h0;
            csraddrM <= 12'h0;
            csrM <= 32'h0;
            cmp_resultM <= 1'b0;
            ecallM <= 1'b0;
            rdM <= 5'b0;
        end
        else begin
            if(s_ready & s_valid) begin
                mvalidM <= mvalidX;
                mwenM <= mwenX;
                mwmaskM <= mwmaskX;
                mrtypeM <= mrtypeX;
                rdregsrcM <= rdregsrcX;
                dnpcM <= dnpcX;
                snpcM <= snpcX;
                pcM <= pcX;
                src2M <= src2X;
                ALU_resultM <= ALU_resultX;
                csraddrM <= csraddrX;
                csrM <= csrX;
                cmp_resultM <= cmp_resultX;
                ecallM <= ecallX;
                rdM <= rdX;
            end
        end
    end
`else
    
    assign s_ready = m_ready;
    assign m_valid = s_valid;
    always @(*) begin
        mvalidM = mvalidX;
        mwenM = mwenX;
        mwmaskM = mwmaskX;
        mrtypeM = mrtypeX;
        rdregsrcM = rdregsrcX;
        dnpcM = dnpcX;
        snpcM = snpcX;
        pcM = pcX;
        src2M = src2X;
        ALU_resultM = ALU_resultX;
        csraddrM = csraddrX;
        csrM = csrX;
        cmp_resultM = cmp_resultX;
        ecallM = ecallX;
        rdM = rdX;
    end
`endif
endmodule
