module PC(
    input clk,
    input rst,
    input en,
    input [31:0] dnpc,
    output reg [31:0] pc
);
    always @(posedge clk) begin
        if(rst) begin
            pc <= 32'h3000_0000;
        end
        else begin
            if(en)
                pc <= dnpc;
            else
                pc <= pc;
        end
    end

endmodule
