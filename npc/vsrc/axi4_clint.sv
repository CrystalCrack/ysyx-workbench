module axi4_clint(
    input clk,
    input rst,

    axi4_interface.slave clint
);
    reg [63:0] mtime;
    always @(posedge clk) begin
        if(rst) begin
            mtime <= 0;
        end else begin
            mtime <= mtime + 1;
        end
    end

    typedef enum logic {IDLE, READ} state_t;
    state_t state;

    always @(posedge clk) begin
        if(rst) begin
            state <= IDLE;
        end
        else begin
            case (state)
                IDLE: begin
                    clint.arready <= 1;
                    clint.rvalid <= 0;
                    if(clint.arvalid) begin
                        state <= READ;
                        clint.rvalid <= 1;
                        clint.arready <= 0;
                        if(clint.araddr == 32'h02000000) begin
                            clint.rdata <= mtime[31:0];
                        end
                        else if(clint.araddr == 32'h02000004) begin
                            clint.rdata <= mtime[63:32];
                        end
                        else begin
                            clint.rdata <= 0;
                        end
                    end
                end
                READ: begin
                    if(clint.rready) begin
                        state <= IDLE;
                        clint.rvalid <= 0;
                        clint.arready <= 1;
                    end
                end
            endcase
        end
    end

    assign clint.awready = 1;
    assign clint.wready = 1;
    assign clint.bvalid = 1;
    assign clint.bresp = 0;
    assign clint.bid = 0;
    assign clint.rlast = 1;
    assign clint.rid = 0;

endmodule
