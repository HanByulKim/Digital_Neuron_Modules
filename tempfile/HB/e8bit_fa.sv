/*----------------------------------------------------------------------
MODULE FF_RC.sv

= Purpose =
An RC model of a static CMOS flip flop.

= Description =
The switches with resistances and capacitances model the functionality
of the logic gates as well as their timing and power characteristics.
----------------------------------------------------------------------*/

module e8bit_fa #(

    parameter real WP = 20,
    parameter real WN = 10
) (
	output xreal [7:0] Sout,
	output xreal Cout,
	input xreal [7:0] A,
	input xreal [7:0] B,
	input xreal Cin,
	input xreal VDD
);

	xreal [6:0] Carry;
   
   fa_RC fa1(.Sout(Sout[0]), .Caout(Carry[0]), .A(A[0]), .B(B[0]), .Cain(Cin), .VDD(VDD)); 
   fa_RC fa2(.Sout(Sout[1]), .Caout(Carry[1]), .A(A[1]), .B(B[1]), .Cain(Carry[0]), .VDD(VDD)); 
   fa_RC fa3(.Sout(Sout[2]), .Caout(Carry[2]), .A(A[2]), .B(B[2]), .Cain(Carry[1]), .VDD(VDD)); 
   fa_RC fa4(.Sout(Sout[3]), .Caout(Carry[3]), .A(A[3]), .B(B[3]), .Cain(Carry[2]), .VDD(VDD)); 
   fa_RC fa5(.Sout(Sout[4]), .Caout(Carry[4]), .A(A[4]), .B(B[4]), .Cain(Carry[3]), .VDD(VDD)); 
   fa_RC fa6(.Sout(Sout[5]), .Caout(Carry[5]), .A(A[5]), .B(B[5]), .Cain(Carry[4]), .VDD(VDD)); 
   fa_RC fa7(.Sout(Sout[6]), .Caout(Carry[6]), .A(A[6]), .B(B[6]), .Cain(Carry[5]), .VDD(VDD)); 
   fa_RC fa8(.Sout(Sout[7]), .Caout(Cout), .A(A[7]), .B(B[7]), .Cain(Carry[6]), .VDD(VDD)); 

endmodule

