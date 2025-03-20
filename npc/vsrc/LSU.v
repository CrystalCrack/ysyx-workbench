module LSU(
    input clk,
    input rst,

    input [31:0] ALU_resultX,
    input [31:0] src2X,
    input [7:0] mwmaskX,
    input mwenX,
    input mvalidX,
    input [2:0] mrtypeM,

    output reg [31:0] mdataM,

    input s_valid,
    output s_ready,
    input m_ready,
    output m_valid
);
    wire [31:0] rdata, rdata_sel;
    reg [2:0] mrtype;


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
                    state <= s_valid ? READING_MEM : IDLE;
                end
                READING_MEM: begin
                    state <= WAIT_READY;
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

    assign s_ready = state == IDLE;
    assign m_valid = state == WAIT_READY;

    SRAM data_mem(
        .clk    (clk  ),
        .rst    (rst  ),
        .raddr 	(ALU_resultX  ),
        .waddr 	(ALU_resultX    ),
        .wdata 	(src2X    ),
        .wmask 	(mwmaskX    ),
        .wen   	(mwenX    ),
        .valid 	(mvalidX & s_valid  ),
        .rdata 	(rdata  )
    );

    MuxKeyWithDefault #(
        .NR_KEY(5),
        .KEY_LEN(3),
        .DATA_LEN(32)
    ) ext_mdata (
        .out(rdata_sel),
        .key(mrtypeM),
        .default_out(32'h0000_0000),
        .lut({3'd0, {{24{rdata[7]}}, rdata[7:0]}, // byte
              3'd1, {{16{rdata[15]}}, rdata[15:0]}, // half word
              3'd2, rdata, // word
              3'd3, {24'b0, rdata[7:0]}, // byte unsigned
              3'd4, {16'b0, rdata[15:0]}}) // half word unsigned
    );

    always @(posedge clk) begin
        if (rst) begin
            mdataM <= 32'h0;
        end else begin
            if (state == READING_MEM) begin
                mdataM <= rdata_sel;
            end
        end
    end
endmodule
