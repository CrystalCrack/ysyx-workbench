module IFU(
    input wire clk,
    input wire rst,
    input wire [31:0] pc,
    output wire [31:0] inst,

    input wire s_valid,
    input wire m_ready,
    output wire m_valid
);


    localparam  IDLE = 0;
    localparam  WAIT_READY = 1;
    reg state;
    always @(posedge clk) begin
        if (rst) begin
            state <= IDLE;
        end else begin
            case (state)
                IDLE: begin
                    state <= s_valid ? WAIT_READY : IDLE;
                end
                WAIT_READY: begin
                    state <= m_ready ? IDLE : WAIT_READY;
                end
                default: begin
                    state <= IDLE;
                end
            endcase 
        end
    end

    assign m_valid = state==WAIT_READY;
    /* instruction memory */
    memory inst_mem(
        .raddr 	(pc  ),
        .waddr 	(0    ),
        .wdata 	(0    ),
        .wmask 	(0    ),
        .wen   	(0    ),
        .valid 	(s_valid  ),
        .rdata 	(inst  )
    );
endmodule
