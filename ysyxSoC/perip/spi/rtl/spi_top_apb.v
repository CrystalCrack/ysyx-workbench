// define this macro to enable fast behavior simulation
// for flash by skipping SPI transfers
// `define FAST_FLASH

module spi_top_apb #(
  parameter flash_addr_start = 32'h30000000,
  parameter flash_addr_end   = 32'h3fffffff,
  parameter spi_ss_num       = 8
) (
  input         clock,
  input         reset,
  input  [31:0] in_paddr,
  input         in_psel,
  input         in_penable,
  input  [2:0]  in_pprot,
  input         in_pwrite,
  input  [31:0] in_pwdata,
  input  [3:0]  in_pstrb,
  output        in_pready,
  output [31:0] in_prdata,
  output        in_pslverr,

  output                  spi_sck,
  output [spi_ss_num-1:0] spi_ss,
  output                  spi_mosi,
  input                   spi_miso,
  output                  spi_irq_out
);

`ifdef FAST_FLASH

wire [31:0] data;
parameter invalid_cmd = 8'h0;
flash_cmd flash_cmd_i(
  .clock(clock),
  .valid(in_psel && !in_penable),
  .cmd(in_pwrite ? invalid_cmd : 8'h03),
  .addr({8'b0, in_paddr[23:2], 2'b0}),
  .data(data)
);
assign spi_sck    = 1'b0;
assign spi_ss     = 8'b0;
assign spi_mosi   = 1'b1;
assign spi_irq_out= 1'b0;
assign in_pslverr = 1'b0;
assign in_pready  = in_penable && in_psel && !in_pwrite;
assign in_prdata  = data[31:0];

`else

localparam XIP_IDLE = 0;
localparam XIP_DIVIDER = 1;
localparam XIP_CONFIG = 2;
localparam XIP_SS = 3;
localparam XIP_CMD = 4;
localparam XIP_START = 5;
localparam XIP_WAIT = 6;
localparam XIP_READ = 7;
localparam XIP_BACK = 8;

reg [3:0] xip_state;

wire is_spi_reg  = (in_paddr >= 32'h1000_1000) && (in_paddr <= 32'h1000_1FFF);
wire is_flash    = (in_paddr >= 32'h3000_0000) && (in_paddr <= 32'h3FFF_FFFF);
wire is_xip = ~(xip_state == XIP_IDLE);

reg xip_pready, xip_psel, xip_pwrite;
reg [31:0] xip_wdata, xip_rdata;
reg [4:0] xip_addr;

always @(posedge clock) begin
  if (reset) begin
    xip_state <= XIP_IDLE;
  end else begin
    case (xip_state)
      XIP_IDLE: begin
        if(in_penable & in_psel & (~in_pwrite) & is_flash) begin
          xip_state <= XIP_DIVIDER;
          xip_pready <= 1'b0;
          xip_addr <= 5'h14;
          xip_wdata <= 32'h0000_0001;
          xip_pwrite <= 1'b1;
          xip_psel <= 1'b1;
        end
      end
      XIP_DIVIDER: begin
          if(wb_ack_o) begin
            xip_state <= XIP_CONFIG;
            xip_pready <= 1'b0;
            xip_addr <= 5'h10;
            xip_wdata <= 32'h0000_2040;
            xip_pwrite <= 1'b1;
          end
      end
      XIP_CONFIG: begin
        if(wb_ack_o) begin
          xip_state <= XIP_SS;
          xip_pready <= 1'b0;
          xip_addr <= 5'h18;
          xip_wdata <= 32'h0000_0001;
          xip_pwrite <= 1'b1;
        end
      end
      XIP_SS: begin
        if(wb_ack_o) begin
          xip_state <= XIP_CMD;
          xip_pready <= 1'b0;
          xip_addr <= 5'h04;
          xip_wdata <= {8'h03, in_paddr[23:2], 2'b0};
          xip_pwrite <= 1'b1;
          xip_psel <= 1'b1;
        end
      end
      XIP_CMD: begin
        if(wb_ack_o) begin
          xip_state <= XIP_START;
          xip_pready <= 1'b0;
          xip_addr <= 5'h10;
          xip_wdata <= 32'h0000_2140;
          xip_pwrite <= 1'b1;
        end
      end
      XIP_START: begin
        if(wb_ack_o) begin
          xip_state <= XIP_WAIT;
          xip_pready <= 1'b0;
          xip_addr <= 5'h10;
          xip_pwrite <= 1'b0;
        end
      end
      XIP_WAIT: begin
        if (wb_ack_o & (~wb_dat_o[8])) begin
          xip_state <= XIP_READ;
          xip_pready <= 1'b0;
          xip_addr <= 5'h00;
          xip_pwrite <= 1'b0;
        end
      end
      XIP_READ: begin
        if (wb_ack_o) begin
          xip_state <= XIP_BACK;
          xip_pready <= 1'b1;
          xip_rdata <= {wb_dat_o[7:0], wb_dat_o[15:8], wb_dat_o[23:16], wb_dat_o[31:24]};
        end
      end
      XIP_BACK: begin
        xip_state <= XIP_IDLE;
        xip_pready <= 1'b0;
      end
      default: begin
        xip_state <= XIP_IDLE;
      end
    endcase
  end
end

wire [4:0] wb_adr_i;
wire [31:0] wb_dat_i, wb_dat_o;
wire [3:0] wb_sel_i;
wire wb_we_i, wb_stb_i, wb_cyc_i;
wire wb_ack_o, wb_err_o;
wire wb_int_o;

assign wb_adr_i = is_xip ? xip_addr : in_paddr[4:0];
assign wb_dat_i = is_xip ? xip_wdata : in_pwdata;
assign wb_sel_i = is_xip ? 4'b1111 : in_pstrb;
assign wb_we_i = is_xip ? xip_pwrite : in_pwrite;
assign wb_stb_i = is_xip ? xip_psel : in_psel;
assign wb_cyc_i = is_xip ? 1'b1 : in_penable;
assign in_pready = is_xip ? xip_pready : wb_ack_o;
assign in_prdata = is_xip ? xip_rdata : wb_dat_o;
assign in_pslverr = is_xip ? 1'b0 : wb_err_o;



spi_top u0_spi_top (
  .wb_clk_i(clock),
  .wb_rst_i(reset),
  .wb_adr_i(wb_adr_i),
  .wb_dat_i(wb_dat_i),
  .wb_dat_o(wb_dat_o),
  .wb_sel_i(wb_sel_i),
  .wb_we_i (wb_we_i),
  .wb_stb_i(wb_stb_i),
  .wb_cyc_i(wb_cyc_i),
  .wb_ack_o(wb_ack_o),
  .wb_err_o(wb_err_o),
  .wb_int_o(wb_int_o),

  .ss_pad_o(spi_ss),
  .sclk_pad_o(spi_sck),
  .mosi_pad_o(spi_mosi),
  .miso_pad_i(spi_miso)
);
// spi_top u0_spi_top (
//   .wb_clk_i(clock),
//   .wb_rst_i(reset),
//   .wb_adr_i(in_paddr[4:0]),
//   .wb_dat_i(in_pwdata),
//   .wb_dat_o(in_prdata),
//   .wb_sel_i(in_pstrb),
//   .wb_we_i (in_pwrite),
//   .wb_stb_i(in_psel),
//   .wb_cyc_i(in_penable),
//   .wb_ack_o(in_pready),
//   .wb_err_o(in_pslverr),
//   .wb_int_o(spi_irq_out),

//   .ss_pad_o(spi_ss),
//   .sclk_pad_o(spi_sck),
//   .mosi_pad_o(spi_mosi),
//   .miso_pad_i(spi_miso)
// );

`endif // FAST_FLASH

endmodule
