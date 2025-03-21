module IFU(
    input clk,
    input rst,
    
    input [31:0] araddr,
    input arvalid,
    output arready,

    output [31:0] rdata,
    output rresp,
    output rvalid,
    input rready

);
    // LFSR Signals
    wire [7:0] lfsr_out;
    
    // Delay Control States
    typedef enum {IDLE, DELAY} state_t;
    
    // Read Address Channel
    state_t      ar_state;
    reg [7:0]    ar_delay;
    reg [31:0]  latched_araddr;
    wire         arvalid_delayed;
    
    // Read Data Ready
    state_t      r_state;
    reg [7:0]    r_delay;
    wire         rready_delayed;

    // LFSR Module
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
                    ar_delay <= lfsr_out;  // Capture random delay
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
    // Read Data Ready Delay
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
    // SRAM Interface
    //----------------------------------------------------------
    SRAM u_SRAM(
        .clk     (clk),
        .rst     (rst),
        // Read Address
        .araddr  (latched_araddr),
        .arvalid (arvalid_delayed),
        .arready (),
        // Read Data
        .rdata   (rdata),
        .rresp   (rresp),
        .rvalid  (rvalid),
        .rready  (rready_delayed),
        // Unused Write Ports
        .awaddr  (32'h0),
        .awvalid (1'b0),
        .awready (),
        .wdata   (32'h0),
        .wstrb   (4'h0),
        .wvalid  (1'b0),
        .wready  (),
        .bresp   (),
        .bvalid  (),
        .bready  (1'b0)
    );

endmodule
