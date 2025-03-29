interface axi4_interface #(parameter ADDR_WIDTH = 32, parameter DATA_WIDTH = 32);
    logic awready;
    logic awvalid;
    logic [ADDR_WIDTH-1:0] awaddr;
    logic [3:0] awid;
    logic [7:0] awlen;
    logic [2:0] awsize;
    logic [1:0] awburst;

    logic wready;
    logic wvalid;
    logic [ADDR_WIDTH-1:0] wdata;
    logic [3:0] wstrb;
    logic wlast;

    logic bready;
    logic bvalid;
    logic [1:0] bresp;
    logic [3:0] bid;
    
    logic arready;
    logic arvalid;
    logic [ADDR_WIDTH-1:0] araddr;
    logic [3:0] arid;
    logic [7:0] arlen;
    logic [2:0] arsize;
    logic [1:0] arburst;
    
    logic rready;
    logic rvalid;
    logic [1:0] rresp;
    logic [ADDR_WIDTH-1:0] rdata;
    logic rlast;
    logic [3:0] rid;

    modport master(
        input awready, wready, bvalid, bresp, bid, arready, rvalid, rresp, rdata, rlast, rid,
        output awvalid, awaddr, awid, awlen, awsize, awburst, wvalid, wdata, wstrb, wlast, bready, arvalid, araddr, arid, arlen, arsize, arburst, rready
    );

    modport slave(
        output awready, wready, bvalid, bresp, bid, arready, rvalid, rresp, rdata, rlast, rid,
        input awvalid, awaddr, awid, awlen, awsize, awburst, wvalid, wdata, wstrb, wlast, bready, arvalid, araddr, arid, arlen, arsize, arburst, rready
    );
endinterface
