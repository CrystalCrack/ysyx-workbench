module SRAM(
    input clk,
    input rst,

    input [31:0] araddr,
    input arvalid,
    output arready,

    output reg [31:0] rdata,
    output reg rresp,
    output rvalid,
    input rready,

    input [31:0] awaddr,
    input awvalid,
    output awready,

    input [31:0] wdata,
    input [3:0] wstrb,
    input wvalid,
    output wready,

    output reg bresp,
    output reg bvalid,
    input bready

);
    import "DPI-C" function int pmem_read(input int raddr);
    import "DPI-C" function void pmem_write(input int waddr, input int wdata, input byte wmask);

    localparam [1:0] IDLE = 0;
    localparam [1:0] READING_MEM = 1;
    localparam [1:0] WAIT_READY = 2;

    assign arready = 1;

    reg [1:0] read_state;
    always @(posedge clk) begin
        if(rst) begin
            read_state <= IDLE;
        end
        else begin
            case (read_state)
                IDLE: begin
                    read_state <= arvalid ? WAIT_READY : IDLE;
                end
                WAIT_READY: begin
                    read_state <= rready ? IDLE : WAIT_READY;
                end
                default: begin
                    read_state <= IDLE;
                end
            endcase 
        end
    end

    always @(posedge clk) begin
        if (rst) begin
            rdata <= 0;
            rresp <= 0;
        end
        else begin
            if (arvalid && arready) begin
                rdata <= pmem_read(araddr);
                rresp <= 0;
            end
            else begin
                rresp <= 0;
            end
        end
    end
    assign rvalid = read_state == WAIT_READY;

    assign awready = 1;
    assign wready = 1;
    reg [31:0] waddr_latch;
    wire [31:0] waddr;
    always @(posedge clk) begin
        if(rst) begin
            waddr_latch <= 0;
        end
        else begin
            if(awvalid && awready) begin
                waddr_latch <= awaddr;
            end
        end
    end
    assign waddr = awvalid ? awaddr : waddr_latch;
    

    assign wready = 1;
    reg [31:0] wdata_latch;
    reg [3:0] wstrb_latch;
    wire [31:0] wdata_;
    wire [3:0] wstrb_;
    always @(posedge clk) begin
        if(rst) begin
            wdata_latch <= 0;
            wstrb_latch <= 0;
        end
        else begin
            if(wvalid && wready) begin
                wdata_latch <= wdata;
                wstrb_latch <= wstrb;
            end
        end
    end
    assign wdata_ = wvalid ? wdata : wdata_latch;
    assign wstrb_ = awvalid ? wstrb : wstrb_latch;

    always @(posedge clk) begin
        if(rst) begin
            bresp <= 0;
            bvalid <= 0;
        end
        else begin
            if(wvalid && wready) begin
                pmem_write(waddr, wdata_, {4'b0, wstrb_});
                bresp <= 0;
                bvalid <= 1;
            end
            else begin
                bvalid <= 0;
            end
        end
    end
    


endmodule
