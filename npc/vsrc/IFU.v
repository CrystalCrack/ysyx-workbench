module IFU(
    input wire clk,
    input wire rst,
    input wire [31:0] pc,
    output wire [31:0] inst,

    input wire ready,
    output wire valid
);


    localparam [1:0] IDLE = 2'b00;
    localparam [1:0] WAIT_READY = 2'b01;
    reg [1:0] state;
    always @(posedge clk) begin
        if (rst) begin
            state <= IDLE;
        end else begin
            case (state)
                IDLE: begin
                    state <= valid ? (ready ? IDLE : WAIT_READY) : IDLE;
                end
                WAIT_READY: begin
                    state <= ready ? IDLE : WAIT_READY;
                end
                default: begin
                    state <= IDLE;
                end
            endcase 
        end
    end

    assign valid = (~rst) & (state == IDLE);
    /* instruction memory */
    memory inst_mem(
        .raddr 	(pc  ),
        .waddr 	(0    ),
        .wdata 	(0    ),
        .wmask 	(0    ),
        .wen   	(0    ),
        .valid 	(valid  ),
        .rdata 	(inst  )
    );
endmodule
