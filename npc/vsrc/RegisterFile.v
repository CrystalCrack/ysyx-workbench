module RegisterFile #(ADDR_WIDTH = 1, DATA_WIDTH = 1) (
    input clk,
    input [DATA_WIDTH-1:0] wdata,
    input [ADDR_WIDTH-1:0] waddr,
    input wen,
    input [ADDR_WIDTH-1:0] raddr1,
    input [ADDR_WIDTH-1:0] raddr2,
    output [DATA_WIDTH-1:0] rdata1,
    output [DATA_WIDTH-1:0] rdata2,
    input ren
);
    reg [DATA_WIDTH-1:0] rf [2**ADDR_WIDTH-1:0];
    always @(posedge clk) begin
        if (wen) rf[waddr] <= wdata;
    end
    
    assign rdata1 = (ren&(raddr1!=0)) ? rf[raddr1] : 0;
    assign rdata2 = (ren&(raddr2!=0)) ? rf[raddr2] : 0;

    export "DPI-C" function get_reg;
    function int get_reg(input int addr);
        return rf[addr];
    endfunction
endmodule
