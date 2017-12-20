/*----------------------------------------------------------------------
MODULE FF_RC.sv

= Purpose =
An RC model of a static CMOS flip flop.

= Description =
The switches with resistances and capacitances model the functionality
of the logic gates as well as their timing and power characteristics.
----------------------------------------------------------------------*/

module tb_fa(Sout, Cout, In1, In2, In3, In4, In5, In6, In7, In8, VDD);

	output xreal [9:0] Sout;
	output xreal Cout;
// input in1~in8
	input xreal [7:0] In1;
	input xreal VDD;

	xreal [3:0] Carry_a;
	xreal [

   8bit_fa fa1(.Sout(Sout[0]), .Cout(Carry_a[0]), .A(In1), .B(In2), .Cin(0), .VDD(VDD));
   8bit_fa fa1(.Sout(Sout[0]), .Cout(Carry_a[1]), .A(In3), .B(In4), .Cin(0), .VDD(VDD));
   8bit_fa fa1(.Sout(Sout[0]), .Cout(Carry_a[2]), .A(In5), .B(In6), .Cin(Carry_a[1]), .VDD(VDD));
   8bit_fa fa1(.Sout(Sout[0]), .Cout(Carry_a[3]), .A(In7), .B(In8), .Cin(Carry_a[2]), .VDD(VDD));

   fa_RC fa2(.Sout(Sout[1]), .Cout(Carry[1]), .A(A[1]), .B(B[1]), .Cin(Carry[0]), .VDD(VDD)); 
   fa_RC fa3(.Sout(Sout[2]), .Cout(Carry[2]), .A(A[2]), .B(B[2]), .Cin(Carry[1]), .VDD(VDD)); 
   fa_RC fa4(.Sout(Sout[3]), .Cout(Carry[3]), .A(A[3]), .B(B[3]), .Cin(Carry[2]), .VDD(VDD)); 
   fa_RC fa5(.Sout(Sout[4]), .Cout(Carry[4]), .A(A[4]), .B(B[4]), .Cin(Carry[3]), .VDD(VDD)); 
   fa_RC fa6(.Sout(Sout[5]), .Cout(Carry[5]), .A(A[5]), .B(B[5]), .Cin(Carry[4]), .VDD(VDD)); 
   fa_RC fa7(.Sout(Sout[6]), .Cout(Carry[6]), .A(A[6]), .B(B[6]), .Cin(Carry[5]), .VDD(VDD)); 
   fa_RC fa8(.Sout(Sout[7]), .Cout(Carry[7]), .A(A[7]), .B(B[7]), .Cin(Carry[6]), .VDD(VDD)); 
   fa_RC fa9(.Sout(Sout[8]), .Cout(Carry[8]), .A(A[8]), .B(B[8]), .Cin(Carry[7]), .VDD(VDD)); 
   fa_RC fa10(.Sout(Sout[9]), .Cout(Cout), .A(A[9]), .B(B[9]), .Cin(Carry[8]), .VDD(VDD)); 

endmodule

