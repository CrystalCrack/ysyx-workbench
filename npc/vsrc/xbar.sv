module xbar(
    input         clk,
    input         rst,
    
    axi4_interface.slave master,
    axi4_interface.master soc,
    axi4_interface.master clint
);

    // clint: 0x0200_0000~0x0200_ffff
    // sram: 0x0f00_0000~0x0f00_1fff -- REQUIRE 4-BIT ALIGNMENT
    // flash: 0x3000_0000~0x3fff_ffff -- REQUIRE 4-BIT ALIGNMENT
    typedef enum logic [1:0] {IDLE, CLINT, SRAM, SOC} slave_t;
    slave_t read_slave, write_slave;
    slave_t read_slave_reg, write_slave_reg;

    always @(*) begin
        if (master.awvalid && master.awaddr >= 32'h0200_0000 && master.awaddr <= 32'h0200_ffff) begin
            write_slave = CLINT;
        end else if (master.awvalid && ((master.awaddr >= 32'h0f00_0000 && master.awaddr <= 32'h0f00_1fff) || (master.awaddr >= 32'h3000_0000 && master.awaddr <= 32'h3fff_ffff))) begin
            write_slave = SRAM;
        end else if (master.awvalid) begin
            write_slave = SOC;
        end else begin
            write_slave = IDLE;
        end

        if (master.arvalid && master.araddr >= 32'h0200_0000 && master.araddr <= 32'h0200_ffff) begin
            read_slave = CLINT;
        end else if (master.arvalid && ((master.araddr >= 32'h0f00_0000 && master.araddr <= 32'h0f00_1fff) || (master.araddr >= 32'h3000_0000 && master.araddr <= 32'h3fff_ffff))) begin
            read_slave = SRAM;
        end else if (master.arvalid) begin
            read_slave = SOC;
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

    wire write_sel_soc, read_sel_soc, read_sel_clint, write_sel_clint, read_sel_sram, write_sel_sram;
    assign write_sel_soc = write_slave == SOC || write_slave_reg == SOC;
    assign read_sel_soc = read_slave == SOC || read_slave_reg == SOC;
    assign read_sel_clint = read_slave == CLINT || read_slave_reg == CLINT;
    assign write_sel_clint = write_slave == CLINT || write_slave_reg == CLINT;
    assign read_sel_sram = read_slave == SRAM || read_slave_reg == SRAM;
    assign write_sel_sram = write_slave == SRAM || write_slave_reg == SRAM;

    wire [1:0] write_shift_bits, read_shift_bits;
    wire [31:0] aligned_read_data, aligned_write_data, aligned_araddr, aligned_awaddr;
    wire [3:0] aligned_wstrb;
    assign write_shift_bits = master.awaddr[1:0];
    assign read_shift_bits = master.araddr[1:0];
    assign aligned_read_data = soc.rdata >> (8*read_shift_bits);
    assign aligned_write_data = master.wdata << (8*write_shift_bits);
    assign aligned_araddr = {master.araddr[31:2], 2'b0};
    assign aligned_awaddr = {master.awaddr[31:2], 2'b0};
    assign aligned_wstrb = master.wstrb << write_shift_bits;

    assign soc.awaddr = ({32{write_slave == SOC}} & master.awaddr) | ({32{write_slave == SRAM}} & aligned_awaddr);
    assign soc.awvalid = (write_slave == SOC && master.awvalid) | (write_slave == SRAM && master.awvalid);
    assign soc.wdata = ({32{write_slave == SOC}} & master.wdata) | ({32{write_slave == SRAM}} & aligned_write_data);
    assign soc.wstrb = ({4{write_slave == SOC}} & master.wstrb) | ({4{write_slave == SRAM}} & aligned_wstrb);
    assign soc.wvalid = (write_slave == SOC && master.wvalid) | (write_slave == SRAM && master.wvalid);
    assign soc.bready = master.bready;
    assign soc.araddr = ({32{read_slave == SOC}} & master.araddr) | ({32{read_slave == SRAM}} & aligned_araddr);
    assign soc.arvalid = (read_slave == SOC && master.arvalid) | (read_slave == SRAM && master.arvalid);
    assign soc.rready = master.rready;
    assign soc.awid = master.awid;
    assign soc.awlen = master.awlen;
    assign soc.awsize = master.awsize;
    assign soc.awburst = master.awburst;
    assign soc.wlast = master.wlast;
    assign soc.arid = master.arid;
    assign soc.arlen = master.arlen;
    assign soc.arsize = master.arsize;
    assign soc.arburst = master.arburst;

    assign clint.awaddr = {32{write_slave == CLINT}} & master.awaddr;
    assign clint.awvalid = write_slave == CLINT && master.awvalid;
    assign clint.wdata = master.wdata;
    assign clint.wstrb = master.wstrb;
    assign clint.wvalid = write_slave == CLINT && master.wvalid;
    assign clint.bready = master.bready;
    assign clint.araddr = {32{read_slave == CLINT}} & master.araddr;
    assign clint.arvalid = read_slave == CLINT && master.arvalid;
    assign clint.rready = master.rready;
    assign clint.awid = master.awid;
    assign clint.awlen = master.awlen;
    assign clint.awsize = master.awsize;
    assign clint.awburst = master.awburst;
    assign clint.wlast = master.wlast;
    assign clint.arid = master.arid;
    assign clint.arlen = master.arlen;
    assign clint.arsize = master.arsize;
    assign clint.arburst = master.arburst;

    assign master.arready = ((read_sel_soc | read_sel_sram) & soc.arready) | (read_sel_clint & clint.arready);
    assign master.rdata = ({32{read_sel_soc}} & soc.rdata) | ({32{read_sel_clint}} & clint.rdata) | ({32{read_sel_sram}} & aligned_read_data);
    assign master.rresp = ({2{(read_sel_soc | read_sel_sram)}} & soc.rresp) | ({2{read_sel_clint}} & clint.rresp);
    assign master.rvalid = ((read_sel_soc | read_sel_sram) & soc.rvalid) | (read_sel_clint & clint.rvalid);
    assign master.awready = ((write_sel_soc | write_sel_sram) & soc.awready) | (write_sel_clint & clint.awready);
    assign master.wready = ((write_sel_soc | write_sel_sram) & soc.wready) | (write_sel_clint & clint.wready);
    assign master.bresp = ({2{(write_sel_soc | write_sel_sram)}} & soc.bresp) | ({2{write_sel_clint}} & clint.bresp);
    assign master.bvalid = ((write_sel_soc | write_sel_sram) & soc.bvalid) | (write_sel_clint & clint.bvalid);
    assign master.bid = ({4{(write_sel_soc | write_sel_sram)}} & soc.awid) | ({4{write_sel_clint}} & clint.awid);
    assign master.rlast = ((read_sel_soc | read_sel_sram) & soc.rlast) | (read_sel_clint & clint.rlast);
    assign master.rid = ({4{(read_sel_soc | read_sel_sram)}} & soc.arid) | ({4{read_sel_clint}} & clint.arid);

endmodule
