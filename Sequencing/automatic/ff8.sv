/*----------------------------------------------------------------------
MODULE FF_RC.sv

= Purpose =
An RC model of a static CMOS flip flop.

= Description =
The switches with resistances and capacitances model the functionality
of the logic gates as well as their timing and power characteristics.
----------------------------------------------------------------------*/

module ff8 #(
	parameter real WP = 20,
	parameter real WN = 10
)(
	output xreal [7:0] Q,
	input xreal [7:0] D,
	input xreal CK,
	input xreal CKB,
	input xreal VDD
	
);

	ff1	#(.WP(WP), .WN(WN))
		FF0 (.Q(Q[0]), .D(D[0]), .CK(CK), .CKB(CKB), .VDD(VDD));
	ff1	#(.WP(WP), .WN(WN))
		FF1 (.Q(Q[1]), .D(D[1]), .CK(CK), .CKB(CKB), .VDD(VDD));
	ff1	#(.WP(WP), .WN(WN))
		FF2 (.Q(Q[2]), .D(D[2]), .CK(CK), .CKB(CKB), .VDD(VDD));
	ff1	#(.WP(WP), .WN(WN))
		FF3 (.Q(Q[3]), .D(D[3]), .CK(CK), .CKB(CKB), .VDD(VDD));
	ff1	#(.WP(WP), .WN(WN))
		FF4 (.Q(Q[4]), .D(D[4]), .CK(CK), .CKB(CKB), .VDD(VDD));
	ff1	#(.WP(WP), .WN(WN))
		FF5 (.Q(Q[5]), .D(D[5]), .CK(CK), .CKB(CKB), .VDD(VDD));
	ff1	#(.WP(WP), .WN(WN))
		FF6 (.Q(Q[6]), .D(D[6]), .CK(CK), .CKB(CKB), .VDD(VDD));
	ff1	#(.WP(WP), .WN(WN))
		FF7 (.Q(Q[7]), .D(D[7]), .CK(CK), .CKB(CKB), .VDD(VDD));
	
endmodule

