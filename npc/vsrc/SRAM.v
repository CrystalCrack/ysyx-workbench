module SRAM(
    input clk,
    input rst,

    input wire [31:0] raddr,
    input wire [31:0] waddr,
    input wire [31:0] wdata,
    input wire [7:0] wmask,
    input wire wen,
    input wire valid,
    output reg [31:0] rdata
);
    import "DPI-C" function int pmem_read(input int raddr);
    import "DPI-C" function void pmem_write(input int waddr, input int wdata, input byte wmask);

    always @(posedge clk) begin
        if (valid & ~rst) begin 
            rdata <= pmem_read(raddr);
            if (wen) begin 
            pmem_write(waddr, wdata, wmask);
            end
        end
        else begin
            rdata <= 0;
        end
    end

endmodule
