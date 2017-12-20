


module tb_proj1;

	reg [7:0] in_D0, in_D1, in_D2, in_D3, in_D4, in_D5, in_D6, in_D7;
	xreal [7:0] in_D0_xr, in_D1_xr, in_D2_xr, in_D3_xr, in_D4_xr, in_D5_xr, in_D6_xr, in_D7_xr;
	xreal [7:0] D0, D1, D2, D3, D4, D5, D6, D7;
	xreal [8:0] mo1, mo2, mo3, mo4;
	xreal [9:0] mo5, mo6;
	xreal [10:0] mo7;
	xreal [7:0] Q;
	xreal [7:0] out;	


	bit_to_xreal_var	#(.width(8), .Rout(R







	wire CK1;
	wire CKB;
	xbit CK1_xb;

	reg xreal VDD;


	parameter real f_CK1 = 100e6;

	clk_gen		#(.freq(f_CK1))	I_CK1(.out(CK1_xb));
	xbit_to_bit	#(.width(1))	CONN_CK1(.in(CK1_xb), .out(CK1));
	inv_RC		#(.WP(20), .WN(10))	inv_clk(.Y(CKB), .A(CK1), .VDD(VDD));	


	8bit_ff_RC	ff1(.D(in_D0_xr), .Q(D0), .QB(), .CK(CK1), .CKB(CKB), .VDD(VDD));
	8bit_ff_RC	ff2(.D(in_D1_xr), .Q(D1), .QB(), .CK(CK1), .CKB(CKB), .VDD(VDD));
	8bit_ff_RC	ff3(.D(in_D2_xr), .Q(D2), .QB(), .CK(CK1), .CKB(CKB), .VDD(VDD));
	8bit_ff_RC	ff4(.D(in_D3_xr), .Q(D3), .QB(), .CK(CK1), .CKB(CKB), .VDD(VDD));
	8bit_ff_RC	ff5(.D(in_D4_xr), .Q(D4), .QB(), .CK(CK1), .CKB(CKB), .VDD(VDD));
	8bit_ff_RC	ff6(.D(in_D5_xr), .Q(D5), .QB(), .CK(CK1), .CKB(CKB), .VDD(VDD));
	8bit_ff_RC	ff7(.D(in_D6_xr), .Q(D6), .QB(), .CK(CK1), .CKB(CKB), .VDD(VDD));
	8bit_ff_RC	ff8(.D(in_D7_xr), .Q(D7), .QB(), .CK(CK1), .CKB(CKB), .VDD(VDD));




	mux16to8	#(.WP(20), .WN(10))	mux1(.out(Q), .in1(mo7[9:2]), .in2('ground), .sel(mo7[10]), .VDD(VDD));


	8bit_ff_RC	ff9(.D(Q), .Q(out), .QB(), .CK(CK1), .CKB(CKB), .VDD(VDD));


endmodule


