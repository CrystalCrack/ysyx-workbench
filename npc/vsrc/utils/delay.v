module delay #(parameter N=1) (
    input clk,
    
    input signal,
    output delayed_signal
);

    reg [N-1:0] delay_reg;
    genvar i;
    generate
        for (i = 0; i < N; i = i + 1) begin : delay_loop
            always @(posedge clk) begin
                if (i == 0) begin
                    delay_reg[i] <= signal;
                end else begin
                    delay_reg[i] <= delay_reg[i-1];
                end
            end
        end
    endgenerate

    assign delayed_signal = delay_reg[N-1];

endmodule
