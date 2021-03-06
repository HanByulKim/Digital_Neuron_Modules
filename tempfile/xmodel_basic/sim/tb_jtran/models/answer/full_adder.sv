/*----------------------------------------------------------------------
MODULE full_adder

= Purpose =
A full adder model in Verilog

= Description =
In this exercise, you will practice using the continuous assignments
in Verilog.
----------------------------------------------------------------------*/

module full_adder (
    output Sout, Cout,
    input A, B, Cin
);

assign Sout = A ^ B ^ Cin;
assign Cout = (A & B) | (B & Cin) | (Cin & A);

endmodule

