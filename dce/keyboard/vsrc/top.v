module top(
    input clk,          // Main clock
    input rstn,         // Reset (active low)
    input ps2_clk,      // PS/2 clock
    input ps2_data,     // PS/2 data
    output [6:0] seg0,  // Seven-segment display 0 (LSB keycode)
    output [6:0] seg1,  // Seven-segment display 1 (MSB keycode)
    output [6:0] seg2,  // Seven-segment display 2 (LSB ASCII)
    output [6:0] seg3,  // Seven-segment display 3 (MSB ASCII)
    output [6:0] seg4,  // Seven-segment display 4 (Count units)
    output [6:0] seg5,  // Seven-segment display 5 (Count tens)
    output ready,       // Data ready LED
    output overflow     // Overflow LED
);

// PS/2 Controller Interface
wire [7:0] ps2_data_out;
wire ps2_ready;
reg ps2_nextdata_n = 1;

ps2_keyboard ps2_controller(
    .clk(clk),
    .clrn(rstn),
    .ps2_clk(ps2_clk),
    .ps2_data(ps2_data),
    .data(ps2_data_out),
    .ready(ps2_ready),
    .nextdata_n(ps2_nextdata_n),
    .overflow(overflow)
);

// Key Processing FSM States
reg [2:0] state = 0;
localparam IDLE     = 3'b000;
localparam BREAK    = 3'b001;
localparam NEW_KEY  = 3'b010;

// Key Processing
reg [7:0] current_key = 0;
reg [7:0] key_count = 0; 

// Scan Code Processing FSM
always @(posedge clk) begin
    if (!rstn) begin
        state <= IDLE;
        current_key <= 0;
        key_count <= 0;
        ps2_nextdata_n <= 1;
    end else begin   
        if (ps2_ready) begin
            ps2_nextdata_n <= 0; // Acknowledge data read
            
            case (state)
                IDLE: begin
                    if (ps2_data_out == 8'hF0) begin
                        state <= BREAK; // Break code detected
                    end else if (current_key == 0) begin
                        // New key press detected
                        current_key <= ps2_data_out;
                        state <= NEW_KEY;
                        key_count <= key_count + 1;
                        state <= IDLE;
                    end
                    else begin
                        state <= IDLE;
                    end
                end
                
                BREAK: begin
                    // Expecting key code after F0
                    //if (ps2_data_out == current_key) begin
                        current_key <= 0; // Clear current key
                    //end
                    state <= IDLE;
                end
                
                // NEW_KEY: begin
                //     // Check for new key press
                //     if (ps2_data_out != prev_key) begin
                //         key_count <= key_count + 1;
                //         prev_key <= ps2_data_out;
                //     end
                //     state <= IDLE;
                // end
                default: begin
                    state <= IDLE;
                end
            endcase
        end
        else begin
            ps2_nextdata_n <= 1; 
        end
    end
end

// Seven-segment Display Logic
function [6:0] seg7 (input [3:0] num);
    case(num)
        4'h0: seg7 = 7'b0000001;
        4'h1: seg7 = 7'b1001111;
        4'h2: seg7 = 7'b0010010;
        4'h3: seg7 = 7'b0000110;
        4'h4: seg7 = 7'b1001100;
        4'h5: seg7 = 7'b0100100;
        4'h6: seg7 = 7'b0100000;
        4'h7: seg7 = 7'b0001111;
        4'h8: seg7 = 7'b0000000;
        4'h9: seg7 = 7'b0000100;
        4'hA: seg7 = 7'b0001000;
        4'hB: seg7 = 7'b1100000;
        4'hC: seg7 = 7'b0110001;
        4'hD: seg7 = 7'b1000010;
        4'hE: seg7 = 7'b0110000;
        4'hF: seg7 = 7'b0111000;
        default: seg7 = 7'b1111111;
    endcase
endfunction

wire [7:0] ascii;
scan_to_ascii_rom u_star(
    .scan_code(current_key),
    .ascii_code(ascii)
);

// Display Mux
wire [3:0] key_hi = current_key[7:4];
wire [3:0] key_lo = current_key[3:0];
wire [3:0] ascii_hi = ascii[7:4];
wire [3:0] ascii_lo = ascii[3:0];
wire [3:0] count_hi = key_count[7:4];
wire [3:0] count_lo = key_count[3:0];

assign seg0 = (current_key != 0) ? seg7(key_lo) : 7'b1111111;
assign seg1 = (current_key != 0) ? seg7(key_hi) : 7'b1111111;
assign seg2 = (current_key != 0) ? seg7(ascii_lo) : 7'b1111111;
assign seg3 = (current_key != 0) ? seg7(ascii_hi) : 7'b1111111;
assign seg4 = seg7(count_lo);
assign seg5 = seg7(count_hi);

// LED Outputs
assign ready = ps2_ready;

endmodule

// Scan code to ASCII converter ROM 
module scan_to_ascii_rom(
    input [7:0] scan_code,
    output reg [7:0] ascii_code
);

always @(*) begin
    case(scan_code)
        8'h1C: ascii_code = 8'h41; // A
        8'h32: ascii_code = 8'h42; // B
        8'h21: ascii_code = 8'h43; // C
        8'h23: ascii_code = 8'h44; // D
        8'h24: ascii_code = 8'h45; // E
        8'h2B: ascii_code = 8'h46; // F
        8'h34: ascii_code = 8'h47; // G
        8'h33: ascii_code = 8'h48; // H
        8'h43: ascii_code = 8'h49; // I
        8'h3B: ascii_code = 8'h4A; // J
        8'h42: ascii_code = 8'h4B; // K
        8'h4B: ascii_code = 8'h4C; // L
        8'h3A: ascii_code = 8'h4D; // M
        8'h31: ascii_code = 8'h4E; // N
        8'h44: ascii_code = 8'h4F; // O
        8'h4D: ascii_code = 8'h50; // P
        8'h15: ascii_code = 8'h51; // Q
        8'h2D: ascii_code = 8'h52; // R
        8'h1B: ascii_code = 8'h53; // S
        8'h2C: ascii_code = 8'h54; // T
        8'h3C: ascii_code = 8'h55; // U
        8'h2A: ascii_code = 8'h56; // V
        8'h1D: ascii_code = 8'h57; // W
        8'h22: ascii_code = 8'h58; // X
        8'h35: ascii_code = 8'h59; // Y
        8'h1A: ascii_code = 8'h5A; // Z
        8'h45: ascii_code = 8'h30; // 0
        8'h16: ascii_code = 8'h31; // 1
        8'h1E: ascii_code = 8'h32; // 2
        8'h26: ascii_code = 8'h33; // 3
        8'h25: ascii_code = 8'h34; // 4
        8'h2E: ascii_code = 8'h35; // 5
        8'h36: ascii_code = 8'h36; // 6
        8'h3D: ascii_code = 8'h37; // 7
        8'h3E: ascii_code = 8'h38; // 8
        8'h46: ascii_code = 8'h39; // 9
        default: ascii_code = 8'h00; // Unknown
    endcase
end

endmodule