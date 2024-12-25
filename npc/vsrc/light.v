module light(
    input clk,
    input rst_n,
    output reg [15:0] led
)
    reg [31:0] counter;
    always @(posedge clk or negedge rst_n)
    begin
        if (~rst_n)
            counter <= 32'h0000;
            led <= 16'h0001;
        else begin
            if(counter==500) begin
                counter <= 32'h0000;
                led <= {led[14:0], led[15]};
            end
            else begin
                counter <= counter+1;
            end
        end
    end
endmodule