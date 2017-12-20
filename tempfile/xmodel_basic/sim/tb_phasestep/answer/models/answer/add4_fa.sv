/*----------------------------------------------------------------------
MODULE add4_sa.sv

= Purpose =
A 4-bit adder using structural description of Verilog

= Description =
In this exercise, you will practice how to compose higher-level module
by putting together lower-level instances. 
----------------------------------------------------------------------*/

module add4_fa (
    output C,		    // carry output
    output [3:0] S,		// sum output
    input [3:0] A,		// A input
    input [3:0] B		// B input
);

// signal declarations
wire [3:1] Ci;

// instance declarations
full_adder I3 (.A(A[3]), .B(B[3]), .Cin(Ci[3]), .Sout(S[3]), .Cout(C));
full_adder I2 (.A(A[2]), .B(B[2]), .Cin(Ci[2]), .Sout(S[2]), .Cout(Ci[3]));
full_adder I1 (.A(A[1]), .B(B[1]), .Cin(Ci[1]), .Sout(S[1]), .Cout(Ci[2]));
full_adder I0 (.A(A[0]), .B(B[0]), .Cin(1'b0), .Sout(S[0]), .Cout(Ci[1]));

endmodule   // add4_fa

