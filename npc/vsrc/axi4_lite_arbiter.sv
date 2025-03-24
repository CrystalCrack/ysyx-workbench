`define VERSION_1
module axi4_lite_arbiter (
    input             clk,
    input             rst,

    axi4_lite_interface.slave m0,
    axi4_lite_interface.slave m1,
    axi4_lite_interface.master s
);

`ifdef VERSION_1
typedef enum logic [1:0] {
    IDLE,
    M0_GRANT,
    M1_GRANT
} arb_state_t;
arb_state_t read_state, write_state;

logic current_read_master, current_write_master; // determines priority

// Reading State Machine
always @(posedge clk) begin
    if (rst) begin
        read_state <= IDLE;
        current_read_master <= 0;
    end
    else begin
        case (read_state)
            IDLE: begin
                if (current_read_master) begin
                    // in this case, m0 has higher priority
                    if (m0.arvalid) begin
                        read_state <= M0_GRANT;
                        current_read_master <= 0;
                    end else if (m1.arvalid) begin
                        read_state <= M1_GRANT;
                        current_read_master <= 1;
                    end
                end else begin
                    // in this case, m1 has higher priority
                    if (m1.arvalid) begin
                        read_state <= M1_GRANT;
                        current_read_master <= 1;
                    end else if (m0.arvalid) begin
                        read_state <= M0_GRANT;
                        current_read_master <= 0;
                    end
                end
            end
            M0_GRANT: begin
                if (s.rvalid & m0.rready) begin
                    read_state <= IDLE;
                end
            end
            M1_GRANT: begin
                if (s.rvalid & m1.rready) begin
                    read_state <= IDLE;
                end
            end
            default: begin
                read_state <= IDLE;
                current_read_master <= 0;
            end
        endcase
    end
end

assign s.araddr = {32{read_state == M0_GRANT}} & m0.araddr | {32{read_state == M1_GRANT}} & m1.araddr;
assign s.arvalid = {read_state == M0_GRANT} & m0.arvalid | {read_state == M1_GRANT} & m1.arvalid;
assign m0.arready = {read_state == M0_GRANT} & s.arready;
assign m1.arready = {read_state == M1_GRANT} & s.arready;
assign m0.rvalid = {read_state == M0_GRANT} & s.rvalid;
assign m1.rvalid = {read_state == M1_GRANT} & s.rvalid;
assign m0.rdata = {32{read_state == M0_GRANT}} & s.rdata;
assign m1.rdata = {32{read_state == M1_GRANT}} & s.rdata;
assign m0.rresp = {2{read_state == M0_GRANT}} & s.rresp;
assign m1.rresp = {2{read_state == M1_GRANT}} & s.rresp;
assign s.rready = {read_state == M0_GRANT} & m0.rready | {read_state == M1_GRANT} & m1.rready;

// Writing State Machine
always @(posedge clk) begin
    if (rst) begin
        write_state <= IDLE;
        current_write_master <= 0;
    end
    else begin
        case (write_state)
            IDLE: begin
                if (current_write_master) begin
                    // in this case, m0 has higher priority
                    if (m0.awvalid & m0.wvalid) begin
                        write_state <= M0_GRANT;
                        current_write_master <= 0;
                    end else if (m1.awvalid & m1.wvalid) begin
                        write_state <= M1_GRANT;
                        current_write_master <= 1;
                    end
                end else begin
                    // in this case, m1 has higher priority
                    if (m1.awvalid & m1.wvalid) begin
                        write_state <= M1_GRANT;
                        current_write_master <= 1;
                    end else if (m0.awvalid & m0.wvalid) begin
                        write_state <= M0_GRANT;
                        current_write_master <= 0;
                    end
                end
            end
            M0_GRANT: begin
                if (s.awready & s.wready) begin
                    write_state <= IDLE;
                end
            end
            M1_GRANT: begin
                if (s.awready & s.wready) begin
                    write_state <= IDLE;
                end
            end
            default: begin
                write_state <= IDLE;
                current_write_master <= 0;
            end
        endcase
    end
end

assign s.awaddr = {32{write_state == M0_GRANT}} & m0.awaddr | {32{write_state == M1_GRANT}} & m1.awaddr;
assign s.awvalid = {write_state == M0_GRANT} & m0.awvalid | {write_state == M1_GRANT} & m1.awvalid;
assign m0.awready = {write_state == M0_GRANT} & s.awready;
assign m1.awready = {write_state == M1_GRANT} & s.awready;
assign s.wdata = {32{write_state == M0_GRANT}} & m0.wdata | {32{write_state == M1_GRANT}} & m1.wdata;
assign s.wstrb = {4{write_state == M0_GRANT}} & m0.wstrb | {4{write_state == M1_GRANT}} & m1.wstrb;
assign s.wvalid = {write_state == M0_GRANT} & m0.wvalid | {write_state == M1_GRANT} & m1.wvalid;
assign m0.wready = {write_state == M0_GRANT} & s.wready;
assign m1.wready = {write_state == M1_GRANT} & s.wready;
assign m0.bresp = {2{write_state == M0_GRANT}} & s.bresp;
assign m1.bresp = {2{write_state == M1_GRANT}} & s.bresp;
assign m0.bvalid = {write_state == M0_GRANT} & s.bvalid;
assign m1.bvalid = {write_state == M1_GRANT} & s.bvalid;
assign s.bready = {write_state == M0_GRANT} & m0.bready | {write_state == M1_GRANT} & m1.bready;

`elsif VERSION_2


// Arbitration States
localparam [1:0] RD_IDLE     = 2'b00,
                 RD_AR_GRANT = 2'b01,
                 RD_R_GRANT  = 2'b10;

reg current_read_master;
reg [1:0] read_state;
always @(posedge clk) begin
    if (rst) begin
        read_state <= RD_IDLE;
        current_read_master <= 0;
        s.araddr <= 0;
        s.arvalid <= 0;
        s.rready <= 0;
        m1.rvalid <= 0;
        m1.arready <= 0;
        m1.rdata <= 0;
        m1.rresp <= 0;
        m0.rvalid <= 0;
        m0.arready <= 0;
        m0.rdata <= 0;
        m0.rresp <= 0;
    end else begin
        case (read_state)
            RD_IDLE: begin
                m0.rvalid <= 0;
                m1.rvalid <= 0;
                s.rready <= 0;
                m0.arready <= 0;
                m1.arready <= 0;
                s.arvalid <= 0;
                if (current_read_master) begin
                    if (m0.arvalid) begin
                        current_read_master <= 0;
                        read_state <= RD_AR_GRANT;
                        s.arvalid <= 1;
                        s.araddr <= m0.araddr;
                        m0.arready <= s.arready;
                    end else if (m1.arvalid) begin
                        current_read_master <= 1;
                        read_state <= RD_AR_GRANT;
                        s.arvalid <= 1;
                        s.araddr <= m1.araddr;
                        m1.arready <= s.arready;
                    end
                end else begin
                    if (m1.arvalid) begin
                        current_read_master <= 1;
                        read_state <= RD_AR_GRANT;
                        s.arvalid <= 1;
                        s.araddr <= m1.araddr;
                        m1.arready <= s.arready;
                    end else if (m0.arvalid) begin
                        current_read_master <= 0;
                        read_state <= RD_AR_GRANT;
                        s.arvalid <= 1;
                        s.araddr <= m0.araddr;
                        m0.arready <= s.arready;
                    end
                end
            end
            RD_AR_GRANT: begin
                if (s.arready) begin
                    if (current_read_master) begin
                        read_state <= RD_R_GRANT;
                        s.arvalid <= 0;
                        m1.arready <= 0;
                        m1.rvalid <= s.rvalid;
                        m1.rdata <= s.rdata;
                        m1.rresp <= s.rresp;
                        s.rready <= m1.rready;
                    end else begin
                        read_state <= RD_R_GRANT;
                        s.arvalid <= 0;
                        m0.arready <= 0;
                        m0.rvalid <= s.rvalid;
                        m0.rdata <= s.rdata;
                        m0.rresp <= s.rresp;
                        s.rready <= m0.rready;
                    end
                end
            end
            RD_R_GRANT: begin
                if(current_read_master) begin
                    m1.rvalid <= s.rvalid;
                    m1.rdata <= s.rdata;
                    m1.rresp <= s.rresp;
                    s.rready <= m1.rready;
                    if(m1.rready) begin
                        read_state <= RD_IDLE;
                    end
                end else begin
                    m0.rvalid <= s.rvalid;
                    m0.rdata <= s.rdata;
                    m0.rresp <= s.rresp;
                    s.rready <= m0.rready;
                    if(m0.rready) begin
                        read_state <= RD_IDLE;
                    end
                end
            end
            default: begin
                read_state <= RD_IDLE;
                current_read_master <= 0;
                s.araddr <= 0;
                s.arvalid <= 0;
                s.rready <= 0;
                m1.rvalid <= 0;
                m1.arready <= 0;
                m1.rdata <= 0;
                m1.rresp <= 0;
                m0.rvalid <= 0;
                m0.arready <= 0;
                m0.rdata <= 0;
                m0.rresp <= 0;
            end
        endcase
    end
end


localparam [1:0] WR_IDLE     = 2'b00,
                 WR_W_GRANT  = 2'b10,
                 WR_B_GRANT  = 2'b11;

reg current_write_master;
reg [1:0] write_state;

always @(posedge clk) begin
    if (rst) begin
        write_state <= WR_IDLE;
        current_write_master <= 0;
        s.awvalid <= 0;
        s.wvalid <= 0;
        m0.awready <= 0;
        m0.wready <= 0;
        m1.awready <= 0;
        m1.wready <= 0;
    end else begin
        case (write_state)
            WR_IDLE: begin
                m0.awready <= 0;
                m0.wready <= 0;
                m1.awready <= 0;
                m1.wready <= 0;
                s.awvalid <= 0;
                s.wvalid <= 0;
                m0.bvalid <= 0;
                m1.bvalid <= 0;
                s.bready <= 0;
                if (current_write_master) begin
                    if(m0.awvalid & m0.wvalid) begin
                        current_write_master <= 0;
                        write_state <= WR_W_GRANT;
                        s.awvalid <= 1;
                        s.awaddr <= m0.awaddr;
                        s.wvalid <= 1;
                        s.wdata <= m0.wdata;
                        s.wstrb <= m0.wstrb;
                        m0.awready <= s.awready;
                        m0.wready <= s.wready;
                    end else if(m1.awvalid & m1.wvalid) begin
                        current_write_master <= 1;
                        write_state <= WR_W_GRANT;
                        s.awvalid <= 1;
                        s.awaddr <= m1.awaddr;
                        s.wvalid <= 1;
                        s.wdata <= m1.wdata;
                        s.wstrb <= m1.wstrb;
                        m1.awready <= s.awready;
                        m1.wready <= s.wready;
                    end
                end else begin
                    if(m1.awvalid & m1.wvalid) begin
                        current_write_master <= 1;
                        write_state <= WR_W_GRANT;
                        s.awvalid <= 1;
                        s.awaddr <= m1.awaddr;
                        s.wvalid <= 1;
                        s.wdata <= m1.wdata;
                        s.wstrb <= m1.wstrb;
                        m1.awready <= s.awready;
                        m1.wready <= s.wready;
                    end else if(m0.awvalid & m0.wvalid) begin
                        current_write_master <= 0;
                        write_state <= WR_W_GRANT;
                        s.awvalid <= 1;
                        s.awaddr <= m0.awaddr;
                        s.wvalid <= 1;
                        s.wdata <= m0.wdata;
                        s.wstrb <= m0.wstrb;
                        m0.awready <= s.awready;
                        m0.wready <= s.wready;
                    end
                end
            end
            WR_W_GRANT: begin
                s.awvalid <= 1;
                s.wvalid <= 1;
                if(current_write_master) begin
                    s.awaddr <= m1.awaddr;
                    s.wdata <= m1.wdata;
                    s.wstrb <= m1.wstrb;
                    m1.awready <= s.awready;
                    m1.wready <= s.wready;
                end else begin
                    s.awaddr <= m0.awaddr;
                    s.wdata <= m0.wdata;
                    s.wstrb <= m0.wstrb;
                    m0.awready <= s.awready;
                    m0.wready <= s.wready;
                end
                if (s.awready & s.wready) begin
                    if(current_write_master) begin
                        write_state <= WR_B_GRANT;
                        m1.bresp <= s.bresp;
                        m1.bvalid <= s.bvalid;
                        s.bready <= m1.bready;
                    end else begin
                        write_state <= WR_B_GRANT;
                        m0.bresp <= s.bresp;
                        m0.bvalid <= s.bvalid;
                        s.bready <= m0.bready;
                    end
                end
            end
            WR_B_GRANT: begin
                if(current_write_master) begin
                    s.awvalid <= 0;
                    s.wvalid <= 0;
                    m1.awready <= 0;
                    m1.wready <= 0;
                    m1.bresp <= s.bresp;
                    m1.bvalid <= s.bvalid;
                    s.bready <= m1.bready;
                    if(m1.bready) begin
                        write_state <= WR_IDLE;
                    end
                end else begin
                    s.awvalid <= 0;
                    s.wvalid <= 0;
                    m0.awready <= 0;
                    m0.wready <= 0;
                    m0.bresp <= s.bresp;
                    m0.bvalid <= s.bvalid;
                    s.bready <= m0.bready;
                    if(m0.bready) begin
                        write_state <= WR_IDLE;
                    end
                end
            end
            default: begin
                write_state <= WR_IDLE;
                current_write_master <= 0;
                s.awvalid <= 0;
                s.wvalid <= 0;
                m0.awready <= 0;
                m0.wready <= 0;
                m1.awready <= 0;
                m1.wready <= 0;
            end
        endcase
    end
end

`endif

endmodule
