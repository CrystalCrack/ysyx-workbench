module LFSR(
    input clk,
    input rst,
    output reg [7:0] lfsr
);
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
endmodule
