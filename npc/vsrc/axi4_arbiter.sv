`define VERSION_1
module axi4_arbiter (
    input             clk,
    input             rst,

    axi4_interface.slave m0,
    axi4_interface.slave m1,
    axi4_interface.master s
);

`ifdef VERSION_1
typedef enum logic {
    IDLE,
    WAIT_RVALID
} read_state_t;
read_state_t read_state;

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
                        read_state <= WAIT_RVALID;
                        current_read_master <= 0;
                    end else if (m1.arvalid) begin
                        read_state <= WAIT_RVALID;
                        current_read_master <= 1;
                    end
                end else begin
                    // in this case, m1 has higher priority
                    if (m1.arvalid) begin
                        read_state <= WAIT_RVALID;
                        current_read_master <= 1;
                    end else if (m0.arvalid) begin
                        read_state <= WAIT_RVALID;
                        current_read_master <= 0;
                    end
                end
            end
            WAIT_RVALID: begin
                if (s.rvalid) begin
                    if (current_read_master & m1.rready) begin
                        read_state <= IDLE;
                    end
                    else if (~current_read_master & m0.rready) begin
                        read_state <= IDLE;
                    end
                end
            end
        endcase
    end
end
wire read_sel_m0, read_sel_m1;
assign read_sel_m0 = (read_state != IDLE) & (~current_read_master);
assign read_sel_m1 = (read_state != IDLE) & current_read_master;

assign s.araddr = {32{read_sel_m0}} & m0.araddr | {32{read_sel_m1}} & m1.araddr;
assign s.arvalid = {read_sel_m0} & m0.arvalid | {read_sel_m1} & m1.arvalid;
assign s.rready = {read_sel_m0} & m0.rready | {read_sel_m1} & m1.rready;
assign s.arid = {4{read_sel_m0}} & m0.arid | {4{read_sel_m1}} & m1.arid;
assign s.arlen = {8{read_sel_m0}} & m0.arlen | {8{read_sel_m1}} & m1.arlen;
assign s.arsize = {3{read_sel_m0}} & m0.arsize | {3{read_sel_m1}} & m1.arsize;
assign s.arburst = {2{read_sel_m0}} & m0.arburst | {2{read_sel_m1}} & m1.arburst;
assign m0.arready = {read_sel_m0} & s.arready;
assign m1.arready = {read_sel_m1} & s.arready;
assign m0.rvalid = {read_sel_m0} & s.rvalid;
assign m1.rvalid = {read_sel_m1} & s.rvalid;
assign m0.rdata = {32{read_sel_m0}} & s.rdata;
assign m1.rdata = {32{read_sel_m1}} & s.rdata;
assign m0.rresp = {2{read_sel_m0}} & s.rresp;
assign m1.rresp = {2{read_sel_m1}} & s.rresp;
assign m0.rlast = {1{read_sel_m0}} & s.rlast;
assign m1.rlast = {1{read_sel_m1}} & s.rlast;
assign m0.rid = {4{read_sel_m0}} & s.rid;
assign m1.rid = {4{read_sel_m1}} & s.rid;

typedef enum logic [1:0] {
    IDLE_,
    WAIT_READY,
    WAIT_BVALID
} write_state_t;
write_state_t write_state;

// Writing State Machine
always @(posedge clk) begin
    if (rst) begin
        write_state <= IDLE_;
        current_write_master <= 0;
    end
    else begin
        case (write_state)
            IDLE_: begin
                if (current_write_master) begin
                    // in this case, m0 has higher priority
                    if (m0.awvalid & m0.wvalid) begin
                        write_state <= WAIT_READY;
                        current_write_master <= 0;
                    end else if (m1.awvalid & m1.wvalid) begin
                        write_state <= WAIT_READY;
                        current_write_master <= 1;
                    end
                end else begin
                    // in this case, m1 has higher priority
                    if (m1.awvalid & m1.wvalid) begin
                        write_state <= WAIT_READY;
                        current_write_master <= 1;
                    end else if (m0.awvalid & m0.wvalid) begin
                        write_state <= WAIT_READY;
                        current_write_master <= 0;
                    end
                end
            end
            WAIT_READY: begin
                if(s.awready & s.wready) begin
                    write_state <= WAIT_BVALID;
                end
            end
            WAIT_BVALID: begin
                if (s.bvalid) begin
                    write_state <= IDLE_;
                end
            end
            default: begin
                write_state <= IDLE_;
                current_write_master <= 0;
            end
        endcase
    end
end

wire m0_sel, m1_sel;
assign m0_sel = (write_state != IDLE_) & (~current_write_master);
assign m1_sel = (write_state != IDLE_) & current_write_master;

assign s.awaddr = {32{m0_sel}} & m0.awaddr | {32{m1_sel}} & m1.awaddr;
assign s.awvalid = {m0_sel} & m0.awvalid | {m1_sel} & m1.awvalid;
assign m0.awready = {m0_sel} & s.awready;
assign m1.awready = {m1_sel} & s.awready;
assign s.wdata = {32{m0_sel}} & m0.wdata | {32{m1_sel}} & m1.wdata;
assign s.wstrb = {4{m0_sel}} & m0.wstrb | {4{m1_sel}} & m1.wstrb;
assign s.wvalid = {m0_sel} & m0.wvalid | {m1_sel} & m1.wvalid;
assign m0.wready = {m0_sel} & s.wready;
assign m1.wready = {m1_sel} & s.wready;
assign m0.bresp = {2{m0_sel}} & s.bresp;
assign m1.bresp = {2{m1_sel}} & s.bresp;
assign m0.bvalid = {m0_sel} & s.bvalid;
assign m1.bvalid = {m1_sel} & s.bvalid;
assign s.bready = {m0_sel} & m0.bready | {m1_sel} & m1.bready;
assign s.awid = {4{m0_sel}} & m0.awid | {4{m1_sel}} & m1.awid;
assign s.awlen = {8{m0_sel}} & m0.awlen | {8{m1_sel}} & m1.awlen;
assign s.awsize = {3{m0_sel}} & m0.awsize | {3{m1_sel}} & m1.awsize;
assign s.awburst = {2{m0_sel}} & m0.awburst | {2{m1_sel}} & m1.awburst;
assign s.wlast = {1{m0_sel}} & m0.wlast | {1{m1_sel}} & m1.wlast;
assign m0.bid = {4{m0_sel}} & s.bid;
assign m1.bid = {4{m1_sel}} & s.bid;

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
