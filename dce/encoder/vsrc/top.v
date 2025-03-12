module top(
    input [7:0] data,  // SW7-SW0: 8-bit input data
    input en,          // SW8: Enable signal
    output reg [6:0] seg,  // SEG0A-SEG0G: 7-segment display
    output reg [2:0] out,  // LD2-LD0: Encoded output
    output reg inputValid  // LD3: Input validity indicator
);

    // Priority encoder logic
    always @(*) begin
        if (en) begin
            casez (data)
                8'b1???????: begin out = 3'd7; inputValid = 1'b1; end
                8'b01??????: begin out = 3'd6; inputValid = 1'b1; end
                8'b001?????: begin out = 3'd5; inputValid = 1'b1; end
                8'b0001????: begin out = 3'd4; inputValid = 1'b1; end
                8'b00001???: begin out = 3'd3; inputValid = 1'b1; end
                8'b000001??: begin out = 3'd2; inputValid = 1'b1; end
                8'b0000001?: begin out = 3'd1; inputValid = 1'b1; end
                8'b00000001: begin out = 3'd0; inputValid = 1'b1; end
                default:     begin out = 3'd0; inputValid = 1'b0; end
            endcase
        end 
        else begin
            out = 3'd0;
            inputValid = 1'b0;
        end
    end

    // 7-segment display decoder
    always @(*) begin
        case (out)
            3'd0: seg = 7'b0000001; // 0
            3'd1: seg = 7'b1001111; // 1
            3'd2: seg = 7'b0010010; // 2
            3'd3: seg = 7'b0000110; // 3
            3'd4: seg = 7'b1001100; // 4
            3'd5: seg = 7'b0100100; // 5
            3'd6: seg = 7'b0100000; // 6
            3'd7: seg = 7'b0001111; // 7
            default: seg = 7'b1111111; // All segments off
        endcase
    end

endmodule