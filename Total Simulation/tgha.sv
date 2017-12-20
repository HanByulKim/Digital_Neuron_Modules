module tgha_RC #(
    parameter real WP = 20,     // pmos size in lambdas
    parameter real WN = 10      // nmos size in lambdas
)(
    output xreal sum,
	output xreal carry,
    input xreal a,
	input xreal b,
	//input xreal c,
    input xreal VDD
);

	xreal [1:0] n;

	inv_RC 	#(.WP(WP), .WN(WN))
			INV1 (.A(a), .Y(n[0]), .VDD(VDD));
	inv_RC 	#(.WP(WP), .WN(WN))
			INV2 (.A(b), .Y(n[1]), .VDD(VDD));

	tg_double_RC    #(.WP(WP), .WN(WN))
                    TGD1 (.S(sum), .D1(n[1]), .D2(b), .CKN1(a), .CKN2(n[0]), .CKP1(n[0]), .CKP2(a)); 
	tg_double_RC    #(.WP(WP), .WN(WN))
                    TGD2 (.S(sum), .D1(a), .D2(b), .CKN1(b), .CKN2(a), .CKP1(a), .CKP2(b)); 



	/*
	tg_RC	#(.WP(WP), .WN(WN))
			TG1 (.S(sum), .D(n[1]), .CKN(a), .CKP(n[0]), .VDD(VDD)); 
	tg_RC	#(.WP(WP), .WN(WN))
			TG2 (.S(sum), .D(b), .CKN(n[0]), .CKP(a), .VDD(VDD)); 
	tg_RC	#(.WP(WP), .WN(WN))
			TG3 (.S(carry), .D(a), .CKN(b), .CKP(a), .VDD(VDD)); 
	tg_RC	#(.WP(WP), .WN(WN))
			TG4 (.S(carry), .D(b), .CKN(a), .CKP(b), .VDD(VDD)); 
	*/

endmodule

