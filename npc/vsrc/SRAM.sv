module SRAM(
    input clk,
    input rst,

    axi4_lite_interface.slave sram
);
    import "DPI-C" function int pmem_read(input int raddr);
    import "DPI-C" function void pmem_write(input int waddr, input int wdata, input byte wmask);

    localparam [1:0] IDLE = 0;
    localparam [1:0] READING_MEM = 1;
    localparam [1:0] WAIT_READY = 2;
    localparam [1:0] WAIT_RESP = 3;

    reg [1:0] read_state;
    always @(posedge clk) begin
        if(rst) begin
            read_state <= IDLE;
        end
        else begin
            case (read_state)
                IDLE: begin
                    read_state <= sram.arvalid ? WAIT_READY : IDLE;
                end
                WAIT_READY: begin
                    read_state <= sram.rready ? IDLE : WAIT_READY;
                end
                default: begin
                    read_state <= IDLE;
                end
            endcase 
        end
    end

    always @(posedge clk) begin
        if (rst) begin
            sram.rdata <= 0;
            sram.rresp <= 0;
        end
        else begin
            if (sram.arvalid && sram.arready) begin
                sram.rdata <= pmem_read(sram.araddr);
                sram.rresp <= 0;
            end
            else begin
                sram.rresp <= 0;
            end
        end
    end
    assign sram.rvalid = read_state == WAIT_READY;
    assign sram.arready = read_state == IDLE;

    assign sram.awready = 1;
    assign sram.wready = 1;
    reg [31:0] waddr_latch;
    wire [31:0] waddr;
    always @(posedge clk) begin
        if(rst) begin
            waddr_latch <= 0;
        end
        else begin
            if(sram.awvalid && sram.awready) begin
                waddr_latch <= sram.awaddr;
            end
        end
    end
    assign waddr = sram.awvalid ? sram.awaddr : waddr_latch;
    

    assign sram.wready = 1;
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
            if(sram.wvalid && sram.wready) begin
                wdata_latch <= sram.wdata;
                wstrb_latch <= sram.wstrb;
            end
        end
    end
    assign wdata_ = sram.wvalid ? sram.wdata : wdata_latch;
    assign wstrb_ = sram.awvalid ? sram.wstrb : wstrb_latch;


    reg [1:0] write_state;
    always @(posedge clk) begin
        if(rst) begin
            write_state <= IDLE;
        end
        else begin
            case (write_state)
                IDLE: begin
                    write_state <= sram.wvalid ? WAIT_READY : IDLE;
                end
                WAIT_READY: begin
                    write_state <= sram.wready ? WAIT_RESP : WAIT_READY;
                end
                
                default: begin
                    write_state <= IDLE;
                end
            endcase 
        end
    end
    always @(posedge clk) begin
        if(rst) begin
            sram.bresp <= 0;
            sram.bvalid <= 0;
        end
        else begin
            if(sram.wvalid && sram.wready) begin
                pmem_write(waddr, wdata_, {4'b0, wstrb_});
                sram.bresp <= 0;
                sram.bvalid <= 1;
            end
            else begin
                sram.bvalid <= 0;
            end
        end
    end
endmodule
