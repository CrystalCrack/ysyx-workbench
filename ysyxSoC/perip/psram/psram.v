// ysyxSoC/perip/psram/psram.v
// Behavioral model for IS66WVS4M8ALL-like PSRAM
// Supports QSPI commands: Quad IO Read (EBh) and Quad IO Write (38h)

module psram (
  input             sck,    // Clock
  input             ce_n,   // Chip Enable, active low (like SPI SS)
  inout  [3:0]      dio     // Quad I/O data lines
);

  //================================================================
  // Parameters
  //================================================================
  // --- FSM States ---
  parameter S_IDLE          = 4'd0;
  parameter S_RECV_CMD      = 4'd1;
  parameter S_RECV_ADDR     = 4'd2;
  parameter S_READ_LATENCY  = 4'd3;
  parameter S_READ_DATA     = 4'd4;
  parameter S_WRITE_DATA    = 4'd5;

  // --- PSRAM Commands ---
  parameter CMD_READ_QUAD   = 8'hEB;
  parameter CMD_WRITE_QUAD  = 8'h38;

  // --- PSRAM Configuration ---
  parameter ADDR_BITS       = 24;
  parameter READ_LATENCY_CYCLES = 6;     // Dummy cycles for Quad IO Read (EBh)

  //================================================================
  // Memory Array and Internal Registers
  //================================================================

  import "DPI-C" function void psram_read(input int raddr, output byte rdata);
  import "DPI-C" function void psram_write(input int waddr, input byte wdata);
  reg [7:0] rdata;
  reg [7:0] wdata;

  reg [3:0]   state, next_state;
  reg [7:0]   cmd_reg;
  reg [ADDR_BITS-1:0] addr_reg;
  
  // Counters
  reg [3:0]   bit_count;    // For 1-bit command reception
  reg [3:0]   cycle_count;  // For 4-bit address/latency/data phases

  // Tri-state buffer control
  reg [3:0]   dio_out;
  reg         dio_oe; // Output Enable for dio bus

  // Internal flip-flop to handle nibble assembly/disassembly
  reg         is_lower_nibble; 
  reg [7:0]   write_byte_buf;

  

  //================================================================
  // Tri-state IO Logic
  //================================================================
  // If dio_oe is high, drive dio_out onto the bus.
  // Otherwise, dio is high-impedance (input).
  assign dio = dio_oe ? dio_out : 4'bzzzz;

  //================================================================
  // State Machine: Combinational Logic
  //================================================================
  always @(*) begin
    next_state = state;
    case (state)
      S_IDLE: begin
        if (!ce_n) begin
          next_state = S_RECV_CMD;
        end
      end
      S_RECV_CMD: begin
        if (bit_count == 4'd7) begin
          next_state = S_RECV_ADDR;
        end
      end
      S_RECV_ADDR: begin
        if (cycle_count == 5) begin
          if (cmd_reg == CMD_READ_QUAD) begin
            next_state = S_READ_LATENCY;
          end else if (cmd_reg == CMD_WRITE_QUAD) begin
            next_state = S_WRITE_DATA;
          end else begin
            // Unsupported command, return to idle when ce_n goes high
            next_state = S_IDLE;
          end
        end
      end
      S_READ_LATENCY: begin
        if (cycle_count == READ_LATENCY_CYCLES - 1) begin
          next_state = S_READ_DATA;
        end
      end
      S_READ_DATA: begin
        // Stays in this state as long as ce_n is low for burst read
        next_state = S_READ_DATA;
      end
      S_WRITE_DATA: begin
        // Stays in this state as long as ce_n is low for burst write
        next_state = S_WRITE_DATA;
      end
      default: next_state = S_IDLE;
    endcase
  end

  //================================================================
  // State Machine: Sequential Logic
  //================================================================
  always @(posedge sck or posedge ce_n) begin
    if (ce_n) begin
      // Transaction ends when ce_n goes high, reset to IDLE
      state <= S_IDLE;
      dio_oe <= 1'b0;
      bit_count <= 4'b0;
      cycle_count <= 4'b0;
      is_lower_nibble <= 1'b0;
      cmd_reg <= 8'b0;
      addr_reg <= {ADDR_BITS{1'b0}};
    end else begin
      // Transaction is active
      state <= next_state;

      case (state)
        S_IDLE: begin
          // When transaction starts, reset counters
          bit_count <= 4'b0;
          cycle_count <= 4'b0;
          is_lower_nibble <= 1'b0;
          dio_oe <= 1'b0; // Set to input mode
          if(~ce_n) begin
            cmd_reg <= {cmd_reg[6:0], dio[0]};
            bit_count <= bit_count + 1;
          end
        end

        S_RECV_CMD: begin
          // Command is received on dio[0]
            cmd_reg <= {cmd_reg[6:0], dio[0]};
            bit_count <= bit_count + 1;

        end
        
        S_RECV_ADDR: begin
            if(cycle_count == 5) begin
                cycle_count <= 0;
            end else begin
                cycle_count <= cycle_count + 1;
            end
            addr_reg <= {addr_reg[ADDR_BITS-1-4:0], dio};
        end

        S_READ_LATENCY: begin
          // Wait for dummy cycles, do nothing with dio
          cycle_count <= cycle_count + 1;
        end
        
        S_READ_DATA: begin
          dio_oe <= 1'b1;
          psram_read({8'h00,addr_reg}, rdata);
          if (is_lower_nibble) begin
            dio_out <= rdata[3:0];
            addr_reg <= addr_reg + 1; // Increment address after a full byte is sent
          end else begin
            dio_out <= rdata[7:4];
          end
          is_lower_nibble <= ~is_lower_nibble;
        end

        S_WRITE_DATA: begin
          if (is_lower_nibble) begin
            // Received lower nibble, combine with upper nibble and write to memory
            write_byte_buf[3:0] <= dio;
            
            psram_write({8'h00, addr_reg}, {write_byte_buf[7:4], dio});

            addr_reg <= addr_reg + 1; // Increment address after a full byte is written
          end else begin
            // Received upper nibble, store it
            write_byte_buf[7:4] <= dio;

          end
          is_lower_nibble <= ~is_lower_nibble;
        end

        default: begin
          // Default case, do nothing
          dio_oe <= 1'b0; // Ensure dio is high-impedance
        end
      endcase
    end
  end

endmodule
