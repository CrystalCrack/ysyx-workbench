module axi4_lite_uart (
    input         clk,
    input         rst,
    
    axi4_lite_interface uart
);


reg [7:0] device_reg;  

reg        awready_reg;
reg        wready_reg;
reg [31:0] awaddr_latched;
reg [31:0] wdata_latched;
reg [3:0]  wstrb_latched;


localparam WR_IDLE = 2'b00;
localparam WR_DATA = 2'b01;
localparam WR_RESP = 2'b10;
reg [1:0] wr_state;

reg        bvalid_reg;
reg [1:0]  bresp_reg;


always @(posedge clk) begin
    if (rst) begin
        wr_state     <= WR_IDLE;
        awready_reg  <= 1'b1;
        wready_reg   <= 1'b1;
        awaddr_latched <= 32'h0;
        wdata_latched <= 32'h0;
        wstrb_latched <= 4'h0;
        device_reg   <= 8'h0;
        bvalid_reg   <= 1'b0;
        bresp_reg    <= 2'b00;
    end
    else begin
        case (wr_state)
            // 等待地址和数据
            WR_IDLE: begin
                if (uart.awvalid && awready_reg) begin
                    awaddr_latched <= uart.awaddr;
                    awready_reg    <= 1'b0;
                end
                
                if (uart.wvalid && wready_reg) begin
                    wdata_latched <= uart.wdata;
                    wstrb_latched <= uart.wstrb;
                    wready_reg    <= 1'b0;
                end
                
                // 当两者都准备好后进入处理
                if ((~awready_reg|uart.awvalid) & (~wready_reg|uart.wvalid)) begin
                    wr_state <= WR_DATA;
                end
            end
            
            // 数据处理阶段
            WR_DATA: begin
                // 检查地址
                if (awaddr_latched == 32'ha00003f8 && wstrb_latched[0]) begin
                    device_reg <= wdata_latched[7:0];  // 更新寄存器
                    $write("%c", wdata_latched[7:0]);  // 打印ASCII字符
                end
                
                // 进入响应阶段
                bvalid_reg <= 1'b1;
                wr_state   <= WR_RESP;
            end
            
            // 响应阶段
            WR_RESP: begin
                if (uart.bready) begin
                    bvalid_reg   <= 1'b0;
                    awready_reg  <= 1'b1;  // 准备接收下一事务
                    wready_reg   <= 1'b1;
                    wr_state     <= WR_IDLE;
                end
            end
            default: begin
                wr_state <= WR_IDLE;
                awready_reg  <= 1'b1;
                wready_reg   <= 1'b1;
                awaddr_latched <= 32'h0;
                wdata_latched <= 32'h0;
                wstrb_latched <= 4'h0;
                device_reg   <= 8'h0;
                bvalid_reg   <= 1'b0;
                bresp_reg    <= 2'b00;
            end
        endcase
    end
end

//----------------------------------------------------------
// 读通道处理（仅返回0保持协议完整）
//----------------------------------------------------------
assign uart.arready = 1'b1;  // 始终准备好接收读地址
assign uart.rvalid  = uart.arvalid; 
assign uart.rdata    = 32'h0; 
assign uart.rresp    = 2'b00; 


assign uart.awready = awready_reg;
assign uart.wready  = wready_reg;
assign uart.bvalid  = bvalid_reg;
assign uart.bresp   = bresp_reg;

endmodule
