`include "config.vh"
module Wstage_bus(
    input clk,
    input rst,

    input [31:0] dnpcM,
    input [2:0] rdregsrcM,
    input [31:0] mdataM,
    input [31:0] ALU_resultM,
    input [11:0] csraddrM,
    input [31:0] snpcM,
    input [31:0] pcM,
    input cmp_resultM,
    input ecallM,
    input [31:0] csrM,
    input [4:0] rdM,
    input [31:0] src2M,

    output reg [31:0] dnpcW,
    output reg [2:0] rdregsrcW,
    output reg [31:0] mdataW,
    output reg [31:0] ALU_resultW,
    output reg [11:0] csraddrW,
    output reg [31:0] snpcW,
    output reg [31:0] pcW,
    output reg cmp_resultW,
    output reg ecallW,
    output reg [31:0] csrW,
    output reg [4:0] rdW,
    output reg [31:0] src2W,

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
            dnpcW <= 32'h0;
            rdregsrcW <= 3'b0;
            mdataW <= 32'h0;
            ALU_resultW <= 32'h0;
            csraddrW <= 12'h0;
            snpcW <= 32'h0;
            pcW <= 32'h0;
            cmp_resultW <= 1'b0;
            ecallW <= 1'b0;
            csrW <= 32'h0;
            rdW <= 5'b0;
            src2W <= 32'h0;
        end
        else begin
            if(s_ready & s_valid) begin
                dnpcW <= dnpcM;
                rdregsrcW <= rdregsrcM;
                mdataW <= mdataM;
                ALU_resultW <= ALU_resultM;
                csraddrW <= csraddrM;
                snpcW <= snpcM;
                pcW <= pcM;
                cmp_resultW <= cmp_resultM;
                ecallW <= ecallM;
                csrW <= csrM;
                rdW <= rdM;
                src2W <= src2M;
            end
        end
    end
`else
    assign s_ready = m_ready;
    assign m_valid = s_valid;
    always @(*) begin
        dnpcW = dnpcM;
        rdregsrcW = rdregsrcM;
        mdataW = mdataM;
        ALU_resultW = ALU_resultM;
        csraddrW = csraddrM;
        snpcW = snpcM;
        pcW = pcM;
        cmp_resultW = cmp_resultM;
        ecallW = ecallM;
        csrW = csrM;
        rdW = rdM;
        src2W = src2M;
    end
`endif

endmodule
