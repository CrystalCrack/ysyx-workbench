module mux4_1(
    input  [1:0] ctrl,    
    input  [1:0] in0,     
    input  [1:0] in1,     
    input  [1:0] in2,     
    input  [1:0] in3,     
    output [1:0] out      
);

MuxKeyWithDefault #(
    .NR_KEY    (4),       
    .KEY_LEN   (2),       
    .DATA_LEN  (2)        
) i0 (
    .out       (out),     
    .key       (ctrl),    
    .default_out(2'b00),  
    .lut       ({         
        2'b00, in0,      
        2'b01, in1,      
        2'b10, in2,      
        2'b11, in3       
    })
);

endmodule
