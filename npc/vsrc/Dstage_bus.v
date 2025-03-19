`include "config.vh"

module Dstage_bus(
    input clk,
    input rst,

    input [31:0] instF,
    input [31:0] snpcF,
    input [31:0] pcF,

    output reg [31:0] instD,
    output reg [31:0] snpcD,
    output reg [31:0] pcD,

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
            pcD <= 32'h80000000;
            instD <= 32'h0;
            snpcD <= 32'h0;
        end
        else begin
            if(s_ready & m_valid) begin
                pcD <= pcF;
                instD <= instF;
                snpcD <= snpcF;
            end
        end
    end
`else

    // single sycle: always ready
    assign s_ready = 1;
    assign m_valid = 1;
    always @(*) begin
        pcD = pcF;
        instD = instF;
        snpcD = snpcF;
    end
`endif

endmodule
