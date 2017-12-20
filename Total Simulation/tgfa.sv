module tgfa_RC #(
    parameter real WP = 20,     // pmos size in lambdas
    parameter real WN = 10      // nmos size in lambdas
)(
    output xreal sum,
	output xreal carry,
    input xreal a,
	input xreal b,
	input xreal c,
    input xreal VDD
);

	xreal [4:0] n;

	inv_RC 	#(.WP(WP), .WN(WN))
			INV1 (.A(a), .Y(n[1]), .VDD(VDD));
	inv_RC 	#(.WP(WP), .WN(WN))
			INV2 (.A(b), .Y(n[0]), .VDD(VDD));
	inv_RC 	#(.WP(WP), .WN(WN))
			INV3 (.A(c), .Y(n[4]), .VDD(VDD));
	inv_RC 	#(.WP(WP), .WN(WN))
			INV4 (.A(n[2]), .Y(n[3]), .VDD(VDD));

    tg_double_RC    #(.WP(WP), .WN(WN))
                    TGD1 (.S(n[2]), .D1(a), .D2(n[1]), .CKN1(n[0]), .CKN2(b), .CKP1(a), .CKP2(n[0]), .VDD(VDD)); 
    tg_double_RC    #(.WP(WP), .WN(WN))
                    TGD2 (.S(sum), .D1(c), .D2(n[4]), .CKN1(n[3]), .CKN2(n[2]), .CKP1(n[2]), .CKP2(n[3]), .VDD(VDD)); 
    tg_double_RC    #(.WP(WP), .WN(WN))
                    TGD3 (.S(carry), .D1(c), .D2(a), .CKN1(n[2]), .CKN2(n[3]), .CKP1(n[3]), .CKP2(n[2]), .VDD(VDD)); 


	/*
    tg_RC	#(.WP(WP), .WN(WN))
			TG3 (.S(sum), .D(c), .CKN(n[3]), .CKP(n[2]), .VDD(VDD)); 
	tg_RC	#(.WP(WP), .WN(WN))
			TG4 (.S(sum), .D(n[4]), .CKN(n[2]), .CKP(n[3]), .VDD(VDD)); 
	tg_RC	#(.WP(WP), .WN(WN))
			TG5 (.S(carry), .D(c), .CKN(n[2]), .CKP(n[3]), .VDD(VDD)); 
	tg_RC	#(.WP(WP), .WN(WN))
			TG6 (.S(carry), .D(a), .CKN(n[3]), .CKP(n[2]), .VDD(VDD));
    */

endmodule

