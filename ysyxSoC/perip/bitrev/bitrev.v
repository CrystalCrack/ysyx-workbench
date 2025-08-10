module bitrev (
  input  sck,
  input  ss,
  input  mosi,
  output miso
);
  localparam IDLE = 2'b00;
  localparam RX = 2'b01;
  localparam TX = 2'b10;
  reg [1:0] state;
  reg [7:0] shift_reg;
  reg [2:0] bit_count;

  always @(posedge sck or posedge ss) begin
    if(ss) begin
      state <= IDLE;
    end else begin
      case(state)
        IDLE: begin
          state <= RX;
        end
        RX: begin
          if(bit_count == 3'b111) begin
            state <= TX;
          end
        end
        TX: begin
          if(bit_count == 3'b000) begin
            state <= IDLE;
          end
        end
        default: begin
          state <= IDLE;
        end
      endcase
    end
  end

  assign miso = (state==TX) ? shift_reg[0] : 1'b1;

  always @(posedge sck) begin
    case (state)
      IDLE: begin
        if(~ss) begin
          bit_count <= bit_count + 1;
          shift_reg <= {shift_reg[6:0], mosi};
        end else begin
          bit_count <= 3'b0;
          shift_reg <= 8'b0;
        end
      end
      RX: begin
        shift_reg <= {shift_reg[6:0], mosi};
        bit_count <= (bit_count == 3'b111) ? 3'b111 : (bit_count + 1);
      end
      TX: begin
        shift_reg <= {1'b0, shift_reg[7:1]};
        bit_count <= (bit_count == 3'b000) ? 3'b000 : (bit_count - 1);
      end
      default: begin
        shift_reg <= 8'b0;
        bit_count <= 3'b0;
      end
    endcase
  end

endmodule
