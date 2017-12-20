/*----------------------------------------------------------------------
MODULE FF_RC.sv

= Purpose =
An RC model of a static CMOS flip flop.

= Description =
The switches with resistances and capacitances model the functionality
of the logic gates as well as their timing and power characteristics.
----------------------------------------------------------------------*/

module tgfa_10bit #(

    parameter real WP = 20,
    parameter real WN = 10
)(
	output xreal [9:0] Sout,
	output xreal Cout,
	input xreal [9:0] A,
	input xreal [9:0] B,
	input xreal Cin,
	input xreal VDD
);

	xreal [8:0] cflow;
   
   	tgfa_RC tgfa1(.sum(Sout[0]), .carry(cflow[0]), .a(A[0]), .b(B[0]), .c(Cin), .VDD(VDD)); 
   	tgfa_RC tgfa2(.sum(Sout[1]), .carry(cflow[1]), .a(A[1]), .b(B[1]), .c(cflow[0]), .VDD(VDD)); 
   	tgfa_RC tgfa3(.sum(Sout[2]), .carry(cflow[2]), .a(A[2]), .b(B[2]), .c(cflow[1]), .VDD(VDD)); 
   	tgfa_RC tgfa4(.sum(Sout[3]), .carry(cflow[3]), .a(A[3]), .b(B[3]), .c(cflow[2]), .VDD(VDD)); 
   	tgfa_RC tgfa5(.sum(Sout[4]), .carry(cflow[4]), .a(A[4]), .b(B[4]), .c(cflow[3]), .VDD(VDD)); 
   	tgfa_RC tgfa6(.sum(Sout[5]), .carry(cflow[5]), .a(A[5]), .b(B[5]), .c(cflow[4]), .VDD(VDD)); 
   	tgfa_RC tgfa7(.sum(Sout[6]), .carry(cflow[6]), .a(A[6]), .b(B[6]), .c(cflow[5]), .VDD(VDD)); 
   	tgfa_RC tgfa8(.sum(Sout[7]), .carry(cflow[7]), .a(A[7]), .b(B[7]), .c(cflow[6]), .VDD(VDD)); 
   	tgfa_RC tgfa9(.sum(Sout[8]), .carry(cflow[8]), .a(A[8]), .b(B[8]), .c(cflow[7]), .VDD(VDD)); 
   	tgfa_RC tgfa10(.sum(Sout[9]), .carry(Cout), .a(A[9]), .b(B[9]), .c(cflow[8]), .VDD(VDD)); 

/*
tgfa_RC fa3(.Sout(Sout[2]), .Caout(Carry[2]), .A(A[2]), .B(B[2]), .Cain(Carry[1]), .VDD(VDD)); 
   	tgfa_RC fa4(.Sout(Sout[3]), .Caout(Carry[3]), .A(A[3]), .B(B[3]), .Cain(Carry[2]), .VDD(VDD)); 
   	tgfa_RC fa5(.Sout(Sout[4]), .Caout(Carry[4]), .A(A[4]), .B(B[4]), .Cain(Carry[3]), .VDD(VDD)); 
   	tgfa_RC fa6(.Sout(Sout[5]), .Caout(Carry[5]), .A(A[5]), .B(B[5]), .Cain(Carry[4]), .VDD(VDD)); 
   	tgfa_RC fa7(.Sout(Sout[6]), .Caout(Carry[6]), .A(A[6]), .B(B[6]), .Cain(Carry[5]), .VDD(VDD)); 
   	tgfa_RC fa8(.Sout(Sout[7]), .Caout(Cout), .A(A[7]), .B(B[7]), .Cain(Carry[6]), .VDD(VDD)); 
*/

endmodule

