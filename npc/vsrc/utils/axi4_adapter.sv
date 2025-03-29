module axi4_adapter(
    input master_awready,
    output master_awvalid,
    output [31:0] master_awaddr,
    output [3:0] master_awid,
    output [7:0] master_awlen,
    output [2:0] master_awsize,
    output [1:0] master_awburst,
    input master_wready,
    output master_wvalid,
    output [31:0] master_wdata,
    output [3:0] master_wstrb,
    output master_wlast,
    output master_bready,
    input master_bvalid,
    input [1:0] master_bresp,
    input [3:0] master_bid,
    input master_arready,
    output master_arvalid,
    output [31:0] master_araddr,
    output [3:0] master_arid,
    output [7:0] master_arlen,
    output [2:0] master_arsize,
    output [1:0] master_arburst,
    output master_rready,
    input master_rvalid,
    input [1:0] master_rresp,
    input [31:0] master_rdata,
    input master_rlast,
    input [3:0] master_rid,

    output slave_awready,
    input slave_awvalid,
    input [31:0] slave_awaddr,
    input [3:0] slave_awid,
    input [7:0] slave_awlen,
    input [2:0] slave_awsize,
    input [1:0] slave_awburst,
    output slave_wready,
    input slave_wvalid,
    input [31:0] slave_wdata,
    input [3:0] slave_wstrb,
    input slave_wlast,
    input slave_bready,
    output slave_bvalid,
    output [1:0] slave_bresp,
    output [3:0] slave_bid,
    output slave_arready,
    input slave_arvalid,
    input [31:0] slave_araddr,
    input [3:0] slave_arid,
    input [7:0] slave_arlen,
    input [2:0] slave_arsize,
    input [1:0] slave_arburst,
    input slave_rready,
    output slave_rvalid,
    output [1:0] slave_rresp,
    output [31:0] slave_rdata,
    output slave_rlast,
    output [3:0] slave_rid,

    axi4_interface.slave master,
    axi4_interface.master slave
);
    assign master.awready = master_awready;
    assign master_awvalid = master.awvalid;
    assign master_awaddr = master.awaddr;
    assign master_awid = master.awid;
    assign master_awlen = master.awlen;
    assign master_awsize = master.awsize;
    assign master_awburst = master.awburst;
    assign master.wready = master_wready;
    assign master_wvalid = master.wvalid;
    assign master_wdata = master.wdata;
    assign master_wstrb = master.wstrb;
    assign master_wlast = master.wlast;
    assign master_bready = master.bready;
    assign master.bvalid = master_bvalid;
    assign master.bresp = master_bresp;
    assign master.bid = master_bid;
    assign master.arready = master_arready;
    assign master_arvalid = master.arvalid;
    assign master_araddr = master.araddr;
    assign master_arid = master.arid;
    assign master_arlen = master.arlen;
    assign master_arsize = master.arsize;
    assign master_arburst = master.arburst;
    assign master_rready = master.rready;
    assign master.rvalid = master_rvalid;
    assign master.rresp = master_rresp;
    assign master.rdata = master_rdata;
    assign master.rlast = master_rlast;
    assign master.rid = master_rid;

    assign slave_awready = slave.awready;
    assign slave.awvalid = slave_awvalid;
    assign slave.awaddr = slave_awaddr;
    assign slave.awid = slave_awid;
    assign slave.awlen = slave_awlen;
    assign slave.awsize = slave_awsize;
    assign slave.awburst = slave_awburst;
    assign slave_wready = slave.wready;
    assign slave.wvalid = slave_wvalid;
    assign slave.wdata = slave_wdata;
    assign slave.wstrb = slave_wstrb;
    assign slave.wlast = slave_wlast;
    assign slave.bready = slave_bready;
    assign slave_bvalid = slave.bvalid;
    assign slave_bresp = slave.bresp;
    assign slave_bid = slave.bid;
    assign slave_arready = slave.arready;
    assign slave.arvalid = slave_arvalid;
    assign slave.araddr = slave_araddr;
    assign slave.arid = slave_arid;
    assign slave.arlen = slave_arlen;
    assign slave.arsize = slave_arsize;
    assign slave.arburst = slave_arburst;
    assign slave.rready = slave_rready;
    assign slave_rvalid = slave.rvalid;
    assign slave_rresp = slave.rresp;
    assign slave_rdata = slave.rdata;
    assign slave_rlast = slave.rlast;
    assign slave_rid = slave.rid;

endmodule
