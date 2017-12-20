/*----------------------------------------------------------------------
MODULE add4.sv

= Purpose =
A 4-bit adder in Verilog

= Description =
In this exercise, you will practice using the arithmetic operators
in Verilog.
----------------------------------------------------------------------*/

module add4 (
    input [3:0] A,
    input [3:0] B,
    output [3:0] S,
    output C
);

wire    [4:0] sum;

assign  sum = A + B;
assign  S = sum[3:0];
assign  C = sum[4];

endmodule

