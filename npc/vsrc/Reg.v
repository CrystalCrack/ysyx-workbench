// 触发器模板
module Reg #(WIDTH = 1, RESET_VAL = 0) (
  input clk,
  input rst,
  input [WIDTH-1:0] din,
  output reg [WIDTH-1:0] dout,
  input wen
);
  always @(posedge clk) begin
    if (rst) dout <= RESET_VAL;
    else if (wen) dout <= din;
  end

  export "DPI-C" function get_reg;
  function get_reg;
    input [WIDTH-1:0] addr;
    begin
      get_reg = dout[addr];
    end
  endfunction

endmodule
