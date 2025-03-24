module xbar(
    input         clk,
    input         rst,
    
    axi4_lite_interface.slave master,
    axi4_lite_interface.master mem,
    axi4_lite_interface.master uart,
    axi4_lite_interface.master clint
);

    // mem address bound: 0x8000_0000 ~ 0x8800_0000
    // uart address bound: 0xa000_03f8
    typedef enum logic [1:0] {IDLE, MEM, UART, CLINT} slave_t;
    slave_t read_slave, write_slave;
    slave_t read_slave_reg, write_slave_reg;

    always @(*) begin
        if (master.awvalid && master.awaddr >= 32'h8000_0000 && master.awaddr < 32'h8800_0000) begin
            write_slave = MEM;
        end else if (master.awvalid && master.awaddr == 32'hA000_03F8) begin
            write_slave = UART;
        end else if (master.awvalid && master.awaddr >= 32'ha000_0048 && master.awaddr <= 32'ha000_004c) begin
            write_slave = CLINT;
        end else begin
            write_slave = IDLE;
        end

        if (master.arvalid && master.araddr >= 32'h8000_0000 && master.araddr < 32'h8800_0000) begin
            read_slave = MEM;
        end else if (master.arvalid && master.araddr == 32'hA000_03F8) begin
            read_slave = UART;
        end else if (master.arvalid && master.araddr >= 32'ha000_0048 && master.araddr <= 32'ha000_004c) begin
            read_slave = CLINT;
        end else begin
            read_slave = IDLE;
        end
    end

    always @(posedge clk) begin
        if(rst) begin
            read_slave_reg <= IDLE;
        end else begin
            if(read_slave_reg == IDLE && read_slave != IDLE) begin
                read_slave_reg <= read_slave;
            end else if(read_slave_reg != IDLE && master.rvalid && master.rready) begin
                read_slave_reg <= IDLE;
            end
        end
    end

    always @(posedge clk) begin
        if(rst) begin
            write_slave_reg <= IDLE;
        end else begin
            if(write_slave_reg == IDLE && write_slave != IDLE) begin
                write_slave_reg <= write_slave;
            end else if(write_slave_reg != IDLE && master.wready) begin
                write_slave_reg <= IDLE;
            end
        end
    end

    wire write_sel_mem, write_sel_uart, read_sel_mem, read_sel_uart, read_sel_clint, write_sel_clint;
    assign write_sel_mem = write_slave == MEM || write_slave_reg == MEM;
    assign write_sel_uart = write_slave == UART || write_slave_reg == UART;
    assign read_sel_mem = read_slave == MEM || read_slave_reg == MEM;
    assign read_sel_uart = read_slave == UART || read_slave_reg == UART;
    assign read_sel_clint = read_slave == CLINT || read_slave_reg == CLINT;
    assign write_sel_clint = write_slave == CLINT || write_slave_reg == CLINT;

    assign mem.awaddr = {32{write_sel_mem}} & master.awaddr;
    assign mem.awvalid = write_sel_mem & master.awvalid;
    assign mem.wdata = master.wdata;
    assign mem.wstrb = master.wstrb;
    assign mem.wvalid = write_sel_mem & master.wvalid;
    assign mem.bready = master.bready;
    assign mem.araddr = {32{read_sel_mem}} & master.araddr;
    assign mem.arvalid = read_sel_mem & master.arvalid;
    assign mem.rready = master.rready;

    assign uart.awaddr = {32{write_sel_uart}} & master.awaddr;
    assign uart.awvalid = write_sel_uart & master.awvalid;
    assign uart.wdata = master.wdata;
    assign uart.wstrb = master.wstrb;
    assign uart.wvalid = write_sel_uart & master.wvalid;
    assign uart.bready = master.bready;
    assign uart.araddr = {32{read_sel_uart}} & master.araddr;
    assign uart.arvalid = read_sel_uart & master.arvalid;
    assign uart.rready = master.rready;

    assign clint.awaddr = {32{write_slave == CLINT}} & master.awaddr;
    assign clint.awvalid = write_slave == CLINT && master.awvalid;
    assign clint.wdata = master.wdata;
    assign clint.wstrb = master.wstrb;
    assign clint.wvalid = write_slave == CLINT && master.wvalid;
    assign clint.bready = master.bready;
    assign clint.araddr = {32{read_slave == CLINT}} & master.araddr;
    assign clint.arvalid = read_slave == CLINT && master.arvalid;
    assign clint.rready = master.rready;

    assign master.arready = (read_sel_mem & mem.arready) | (read_sel_uart & uart.arready) | (read_sel_clint & clint.arready);
    assign master.rdata = ({32{read_sel_mem}} & mem.rdata) | ({32{read_sel_uart}} & uart.rdata) | ({32{read_sel_clint}} & clint.rdata);
    assign master.rresp = ({2{read_sel_mem}} & mem.rresp) | ({2{read_sel_uart}} & uart.rresp) | ({2{read_sel_clint}} & clint.rresp);
    assign master.rvalid = (read_sel_mem & mem.rvalid) | (read_sel_uart & uart.rvalid) | (read_sel_clint & clint.rvalid);
    assign master.awready = (write_sel_mem & mem.awready) | (write_sel_uart & uart.awready) | (write_sel_clint & clint.awready);
    assign master.wready = (write_sel_mem & mem.wready) | (write_sel_uart & uart.wready) | (write_sel_clint & clint.wready);
    assign master.bresp = ({2{write_sel_mem}} & mem.bresp) | ({2{write_sel_uart}} & uart.bresp) | ({2{write_sel_clint}} & clint.bresp);
    assign master.bvalid = (write_sel_mem & mem.bvalid) | (write_sel_uart & uart.bvalid) | (write_sel_clint & clint.bvalid);

endmodule
