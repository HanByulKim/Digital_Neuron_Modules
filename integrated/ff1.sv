/*----------------------------------------------------------------------
MODULE FF_RC.sv

= Purpose =
An RC model of a static CMOS flip flop.

= Description =
The switches with resistances and capacitances model the functionality
of the logic gates as well as their timing and power characteristics.
----------------------------------------------------------------------*/

module ff1 #(
	parameter real WP = 20,
	parameter real WN = 10
)(
	output xreal Q,
	//output xreal QB,
	input xreal D,
	input xreal CK,
	input xreal CKB,
	input xreal VDD
	
);
	xreal [6:0] n;
	inv_RC 	#(.WP(WP), .WN(WN))
			INV1 (.A(D), .Y(n[0]), .VDD(VDD));	
	inv_RC 	#(.WP(WP), .WN(WN))
			INV2 (.A(n[1]), .Y(n[2]), .VDD(VDD));	
	inv_RC 	#(.WP(WP), .WN(WN))
			INV3 (.A(n[2]), .Y(n[3]), .VDD(VDD));	
	//inv_RC  #(.WP(WP), .WN(WN))
	//		INV4 (.A(n[4]), .Y(n[QB]), .VDD(VDD));	
	inv_RC 	#(.WP(WP), .WN(WN))
			INV5 (.A(n[4]), .Y(n[5]), .VDD(VDD));	
	inv_RC  #(.WP(WP), .WN(WN))
			INV6 (.A(n[5]), .Y(n[6]), .VDD(VDD));	
	inv_RC  #(.WP(WP), .WN(WN))
			INV7 (.A(n[5]), .Y(Q), .VDD(VDD));	
	
	tg_double_RC    #(.WP(WP), .WN(WN))
                    TGD1 (.S(n[1]), .D1(n[0]), .D2(n[3]), .CKN1(CKB), .CKN2(CK), .CKP1(CK), .CKP2(CKB), .VDD(VDD)); 
 	tg_double_RC    #(.WP(WP), .WN(WN))
                    TGD2 (.S(n[4]), .D1(n[2]), .D2(n[6]), .CKN1(CK), .CKN2(CKB), .CKP1(CKB), .CKP2(CK), .VDD(VDD)); 
       
/*
	ff_switch_RC 	#(.WP(WP), .WN(WN))
					FFSW1 (.D(n[0]), .S(n[1]), .CKN(CKB), .CKP(CK), .VDD);
	ff_switch_RC 	#(.WP(WP), .WN(WN))
					FFSW2 (.D(n[2]), .S(n[4]), .CKN(CK), .CKP(CKB), .VDD);
	ff_switch_RC 	#(.WP(WP), .WN(WN))
					FFSW3 (.D(n[3]), .S(n[1]), .CKN(CK), .CKP(CKB), .VDD);
	ff_switch_RC 	#(.WP(WP), .WN(WN))
					FFSW4 (.D(n[6]), .S(n[4]), .CKN(CKB), .CKP(CK), .VDD);

*/

endmodule

