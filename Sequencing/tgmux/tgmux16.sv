


module tgmux16 #(
	parameter real WP = 20,
	parameter real WN = 10
)(
	output xreal [7:0] out,
	input xreal [7:0] in1, in2,
	input xreal sel,
	input xreal VDD
);


	//in1
	tgmux2		#(.WP(WP), .WN(WN))	TGMUX2_1 (.Y(out[0]), .D0(in1[0]), .D1(in2[0]), .SEL(sel), .VDD(VDD));
	tgmux2		#(.WP(WP), .WN(WN))	TGMUX2_2 (.Y(out[1]), .D0(in1[1]), .D1(in2[1]), .SEL(sel), .VDD(VDD));
	tgmux2		#(.WP(WP), .WN(WN))	TGMUX2_3 (.Y(out[2]), .D0(in1[2]), .D1(in2[2]), .SEL(sel), .VDD(VDD));
	tgmux2		#(.WP(WP), .WN(WN))	TGMUX2_4 (.Y(out[3]), .D0(in1[3]), .D1(in2[3]), .SEL(sel), .VDD(VDD));
	tgmux2		#(.WP(WP), .WN(WN))	TGMUX2_5 (.Y(out[4]), .D0(in1[4]), .D1(in2[4]), .SEL(sel), .VDD(VDD));
	tgmux2		#(.WP(WP), .WN(WN))	TGMUX2_6 (.Y(out[5]), .D0(in1[5]), .D1(in2[5]), .SEL(sel), .VDD(VDD));
	tgmux2		#(.WP(WP), .WN(WN))	TGMUX2_7 (.Y(out[6]), .D0(in1[6]), .D1(in2[6]), .SEL(sel), .VDD(VDD));
	tgmux2		#(.WP(WP), .WN(WN))	TGMUX2_8 (.Y(out[7]), .D0(in1[7]), .D1(in2[7]), .SEL(sel), .VDD(VDD));

endmodule


