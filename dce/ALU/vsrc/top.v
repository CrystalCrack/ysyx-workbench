module top(
    input [2:0] mode,
    input [3:0] A,
    input [3:0] B,
    input Cin,
    output zero,
    output wire overflow,
    output wire Cout,
    output wire [3:0] result
);
    wire add_overflow, sub_overflow;
    wire int_Cout;
    wire [3:0] add_result, sub_result;

    assign zero = ~(|result);
    adder adder_inst(
        .A(A),
        .B(B),
        .Cin(Cin),
        .sum(add_result),
        .Cout(int_Cout),
        .overflow(add_overflow)
    );
    adder sub_inst(
        .A(A),
        .B(~B),
        .Cin(1),
        .sum(sub_result),
        .Cout(),
        .overflow(sub_overflow)
    );

    // output declaration of module MuxKeyWithDefault
    wire [5:0] out;
    MuxKeyWithDefault #(8, 3, 6) u_MuxKeyWithDefault(
        .out         	(out          ),
        .key         	(mode          ),
        .default_out 	(6'b0  ),
        .lut         	({3'b000, int_Cout, add_overflow, add_result,
                          3'b001, 1'b0, sub_overflow, sub_result,
                          3'b010, 1'b0, 1'b0, ~A,
                          3'b011, 1'b0, 1'b0, A&B,
                          3'b100, 1'b0, 1'b0, A|B,
                          3'b101, 1'b0, 1'b0, A^B,
                          3'b110, 1'b0, 1'b0, 3'b0, sub_overflow^sub_result[3],
                          3'b111, 1'b0, 1'b0, 3'b0, ~(|sub_result)}          )
    );

    assign {Cout, overflow, result} = out;
    
endmodule

module adder(
    input [3:0] A,
    input [3:0] B,
    input Cin,
    output [3:0] sum,
    output Cout,
    output overflow
);
    assign {Cout, sum} = A + B + {3'b0,Cin};
    assign overflow = (A[3]&B[3]&~sum[3]) | (~A[3]&~B[3]&sum[3]);
endmodule

