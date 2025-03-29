module axi4_full2lite_converter(
    axi4_interface.master master_in,
    axi4_interface.slave slave_in,

    axi4_lite_interface.slave master_out,
    axi4_lite_interface.master slave_out
);
    assign master_out.awready = master_in.awready;
    assign master_out.wready = master_in.wready;
    assign master_out.bvalid = master_in.bvalid;
    assign master_out.bresp = master_in.bresp;
    assign master_out.arready = master_in.arready;
    assign master_out.rvalid = master_in.rvalid;
    assign master_out.rresp = master_in.rresp;
    assign master_out.rdata = master_in.rdata;
    assign master_in.awvalid = master_out.awvalid;
    assign master_in.awaddr = master_out.awaddr;
    assign master_in.awid = 0;
    assign master_in.awlen = 0;
    assign master_in.awsize = 0;
    assign master_in.awburst = 0;
    assign master_in.wvalid = master_out.wvalid;
    assign master_in.wdata = master_out.wdata;
    assign master_in.wstrb = master_out.wstrb;
    assign master_in.wlast = 0;
    assign master_in.bready = master_out.bready;
    assign master_in.arvalid = master_out.arvalid;
    assign master_in.araddr = master_out.araddr;
    assign master_in.arid = 0;
    assign master_in.arlen = 0;
    assign master_in.arsize = 0;
    assign master_in.arbusrt = 0;
    assign master_in.rready = master_out.rready;

    assign slave_out.awvalid = slave_in.awvalid;
    assign slave_out.awaddr = slave_in.awaddr;
    assign slave_out.wvalid = slave_in.wvalid;
    assign slave_out.wdata = slave_in.wdata;
    assign slave_out.wstrb = slave_in.wstrb;
    assign slave_out.bready = slave_in.bready;
    assign slave_out.arvalid = slave_in.arvalid;
    assign slave_out.araddr = slave_in.araddr;
    assign slave_out.rready = slave_in.rready;
    assign slave_in.awready = slave_out.awready;
    assign slave_in.wready = slave_out.wready;
    assign slave_in.bvalid = slave_out.bvalid;
    assign slave_in.bresp = slave_out.bresp;
    assign slave_in.bid = 0;
    assign slave_in.arready = slave_out.arready;
    assign slave_in.rvalid = slave_out.rvalid;
    assign slave_in.rresp = slave_out.rresp;
    assign slave_in.rdata = slave_out.rdata;
    assign slave_in.rlast = 0;
    assign slave_in.rid = 0;
endmodule
