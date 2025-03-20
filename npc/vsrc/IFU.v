module IFU(
    input clk,
    input rst,
    
    input [31:0] pc,
    output reg [31:0] inst,

    input wire s_valid,
    input wire m_ready,
    output wire m_valid
);


    localparam [1:0] IDLE = 0;
    localparam [1:0] READING_MEM = 1;
    localparam [1:0] WAIT_READY = 2;
    reg [1:0] state;
    always @(posedge clk) begin
        if (rst) begin
            state <= IDLE;
        end else begin
            case (state)
                IDLE: begin
                    state <= s_valid ? WAIT_READY : IDLE;
                end
                // READING_MEM: begin // sram fetch need a cycle
                //     state <= WAIT_READY;
                // end
                WAIT_READY: begin
                    state <= m_ready ? IDLE : WAIT_READY;
                end
                default: begin
                    state <= IDLE;
                end
            endcase 
        end
    end

    assign m_valid = state == WAIT_READY;
    /* instruction memory */
    SRAM inst_mem(
        .clk    (clk  ),
        .rst    (rst  ),
        .raddr 	(pc  ),
        .waddr 	(0    ),
        .wdata 	(0    ),
        .wmask 	(0    ),
        .wen   	(0    ),
        .valid 	(s_valid  ),
        .rdata 	(inst  )
    );
endmodule
