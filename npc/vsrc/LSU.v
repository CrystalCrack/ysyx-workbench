module LSU(
    input clk,
    input rst,

    input [31:0] araddr,
    input [2:0] mrtypeM,
    input arvalid,
    output arready,

    output [31:0] rdata,
    output rresp,
    output rvalid,
    input rready,

    input [31:0] awaddr,
    input awvalid,
    output awready,

    input [31:0] wdata,
    input [3:0] wstrb,
    input wvalid,
    output wready,

    output bresp,
    output bvalid,
    input bready

);
    // LFSR Signals
    wire [7:0] lfsr_out;
    
    // Delay Control States
    typedef enum {IDLE, DELAY} state_t;
    
    // Read Address Channel
    state_t      ar_state;
    reg [7:0]   ar_delay;
    reg [31:0]  latched_araddr;
    wire        arvalid_delayed;
    
    // Write Address Channel
    state_t      aw_state;
    reg [7:0]   aw_delay;
    reg [31:0]  latched_awaddr;
    wire        awvalid_delayed;
    
    // Write Data Channel
    state_t      w_state;
    reg [7:0]   w_delay;
    reg [31:0]  latched_wdata;
    reg [3:0]   latched_wstrb;
    wire        wvalid_delayed;
    
    // Read Data Ready
    state_t      r_state;
    reg [7:0]   r_delay;
    wire        rready_delayed;
    
    // Write Response Ready
    state_t      b_state;
    reg [7:0]   b_delay;
    wire        bready_delayed;

    // LFSR Module (8-bit fixed width)
    LFSR u_lfsr(
        .clk(clk),
        .rst(rst),
        .lfsr(lfsr_out)
    );

    //----------------------------------------------------------
    // Read Address Channel Delay
    //----------------------------------------------------------
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            ar_state <= IDLE;
            ar_delay <= 0;
            latched_araddr <= 0;
        end else begin
            case (ar_state)
                IDLE: if (arvalid && arready) begin
                    latched_araddr <= araddr;
                    ar_delay <= lfsr_out;  // Get random delay
                    ar_state <= DELAY;
                end
                
                DELAY: begin
                    if (ar_delay > 0)
                        ar_delay <= ar_delay - 1;
                    else
                        ar_state <= IDLE;
                end
            endcase
        end
    end
    assign arvalid_delayed = (ar_state == DELAY) && (ar_delay == 0);
    assign arready = (ar_state == IDLE);

    //----------------------------------------------------------
    // Write Address Channel Delay (Similar Structure)
    //----------------------------------------------------------
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            aw_state <= IDLE;
            aw_delay <= 0;
            latched_awaddr <= 0;
        end else begin
            case (aw_state)
                IDLE: if (awvalid && awready) begin
                    latched_awaddr <= awaddr;
                    aw_delay <= lfsr_out;  // New delay value
                    aw_state <= DELAY;
                end
                
                DELAY: begin
                    if (aw_delay > 0)
                        aw_delay <= aw_delay - 1;
                    else
                        aw_state <= IDLE;
                end
            endcase
        end
    end
    assign awvalid_delayed = (aw_state == DELAY) && (aw_delay == 0);
    assign awready = (aw_state == IDLE);

    //----------------------------------------------------------
    // Write Data Channel Delay
    //----------------------------------------------------------
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            w_state <= IDLE;
            w_delay <= 0;
            latched_wdata <= 0;
            latched_wstrb <= 0;
        end else begin
            case (w_state)
                IDLE: if (wvalid && wready) begin
                    latched_wdata <= wdata;
                    latched_wstrb <= wstrb;
                    w_delay <= lfsr_out;
                    w_state <= DELAY;
                end
                
                DELAY: begin
                    if (w_delay > 0)
                        w_delay <= w_delay - 1;
                    else
                        w_state <= IDLE;
                end
            endcase
        end
    end
    assign wvalid_delayed = (w_state == DELAY) && (w_delay == 0);
    assign wready = (w_state == IDLE);

    //----------------------------------------------------------
    // Read Data Ready Delay (Receiver side)
    //----------------------------------------------------------
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            r_state <= IDLE;
            r_delay <= 0;
        end else begin
            case (r_state)
                IDLE: if (rvalid && rready) begin
                    r_delay <= lfsr_out;
                    r_state <= DELAY;
                end
                
                DELAY: begin
                    if (r_delay > 0)
                        r_delay <= r_delay - 1;
                    else
                        r_state <= IDLE;
                end
            endcase
        end
    end
    assign rready_delayed = (r_state == DELAY) && (r_delay == 0);

    //----------------------------------------------------------
    // Write Response Ready Delay
    //----------------------------------------------------------
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            b_state <= IDLE;
            b_delay <= 0;
        end else begin
            case (b_state)
                IDLE: if (bvalid && bready) begin
                    b_delay <= lfsr_out;
                    b_state <= DELAY;
                end
                
                DELAY: begin
                    if (b_delay > 0)
                        b_delay <= b_delay - 1;
                    else
                        b_state <= IDLE;
                end
            endcase
        end
    end
    assign bready_delayed = (b_state == DELAY) && (b_delay == 0);

    //----------------------------------------------------------
    // SRAM Instance with Delayed Signals
    //----------------------------------------------------------
    wire [31:0] rdata_int;
    
    SRAM data_ram(
        .clk(clk),
        .rst(rst),
        // Read Address
        .araddr(latched_araddr),
        .arvalid(arvalid_delayed),
        .arready(/* Connected internally */),
        // Read Data
        .rdata(rdata_int),
        .rresp(rresp),
        .rvalid(rvalid),
        .rready(rready_delayed),
        // Write Address
        .awaddr(latched_awaddr),
        .awvalid(awvalid_delayed),
        .awready(/* Connected internally */),
        // Write Data
        .wdata(latched_wdata),
        .wstrb(latched_wstrb),
        .wvalid(wvalid_delayed),
        .wready(/* Connected internally */),
        // Write Response
        .bresp(bresp),
        .bvalid(bvalid),
        .bready(bready_delayed)
    );

    //----------------------------------------------------------
    // Data Type Conversion Mux
    //----------------------------------------------------------
    MuxKeyWithDefault #(
        .NR_KEY(5),
        .KEY_LEN(3),
        .DATA_LEN(32)
    ) ext_mdata (
        .out(rdata),
        .key(mrtypeM),
        .default_out(32'h0000_0000),
        .lut({
            3'd0, {{24{rdata_int[7]}}, rdata_int[7:0]},    // lb
            3'd1, {{16{rdata_int[15]}}, rdata_int[15:0]},  // lh
            3'd2, rdata_int,                               // lw
            3'd3, {24'b0, rdata_int[7:0]},                 // lbu
            3'd4, {16'b0, rdata_int[15:0]}                 // lhu
        })
    );
endmodule
