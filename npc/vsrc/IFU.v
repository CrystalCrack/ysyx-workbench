module IFU(
    input clk,
    input rst,
    input [31:0] pc,
    output [31:0] snpc,
    output [31:0] inst,

    output addr_valid,
    output [31:0] addr,
    input r_data_valid
);
    assign snpc = pc + 4;
    assign 
    assign 

endmodule
