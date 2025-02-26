module top(
    input wire clk,      // Clock input (BTNC)
    input wire rst,      // Reset input (SW0)
    output wire [6:0] seg1, // First 7-segment display (SEG0A-SEG0G)
    output wire [6:0] seg2  // Second 7-segment display (SEG1A-SEG1G)
);

    // 8-bit LFSR register
    reg [7:0] lfsr;
    
    // Hex to 7-segment decoder
    function [6:0] hex_to_seg;
        input [3:0] hex;
        begin
            case(hex)
                4'h0: hex_to_seg = 7'b0000001;
                4'h1: hex_to_seg = 7'b1001111;
                4'h2: hex_to_seg = 7'b0010010;
                4'h3: hex_to_seg = 7'b0000110;
                4'h4: hex_to_seg = 7'b1001100;
                4'h5: hex_to_seg = 7'b0100100;
                4'h6: hex_to_seg = 7'b0100000;
                4'h7: hex_to_seg = 7'b0001111;
                4'h8: hex_to_seg = 7'b0000000;
                4'h9: hex_to_seg = 7'b0000100;
                4'hA: hex_to_seg = 7'b0001000;
                4'hB: hex_to_seg = 7'b1100000;
                4'hC: hex_to_seg = 7'b0110001;
                4'hD: hex_to_seg = 7'b1000010;
                4'hE: hex_to_seg = 7'b0110000;
                4'hF: hex_to_seg = 7'b0111000;
                default: hex_to_seg = 7'b1111111;
            endcase
        end
    endfunction

    // LFSR logic
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            lfsr <= 8'b00000001; // Initialize to non-zero state
        end else begin
            if (lfsr == 8'b00000000) begin
                lfsr <= 8'b00000001; // Handle all-zero case
            end else begin
                lfsr <= {lfsr[0] ^ lfsr[2] ^ lfsr[3] ^ lfsr[4], lfsr[7:1]};
            end
        end
    end

    // Output to 7-segment displays
    assign seg1 = hex_to_seg(lfsr[3:0]);   // Lower 4 bits
    assign seg2 = hex_to_seg(lfsr[7:4]);   // Upper 4 bits

endmodule