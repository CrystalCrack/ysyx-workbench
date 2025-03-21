module delay #(
    parameter N = 1  
)(
    input  wire clk, 
    input  wire din, 
    output wire dout 
);

generate
    if (N == 0) begin: NO_DELAY
        assign dout = din;
    end else begin: GEN_DELAY
        reg [N:0] shift_reg;
        always @(posedge clk) begin
            shift_reg[0] <= din;
            for (int i = 1; i <= N; i = i + 1) begin
                shift_reg[i] <= shift_reg[i-1];
            end
        end
        assign dout = shift_reg[N];
    end
endgenerate

endmodule
