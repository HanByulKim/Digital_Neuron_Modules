


module mux16to8 #(
	parameter real WP = 20,
	parameter real WN = 10
)(
	output xreal [7:0] out,
	input xreal [7:0] in1, in2,
	input xreal sel,
	input xreal VDD
);


	//in1
	mux_RC		#(.WP(WP), .WN(WN))	mux1(.Y(out[0]), .D0(in1[0]), .D1(in2[0]), .SEL(sel), .VDD(VDD));
	mux_RC		#(.WP(WP), .WN(WN))	mux2(.Y(out[1]), .D0(in1[1]), .D1(in2[1]), .SEL(sel), .VDD(VDD));
	mux_RC		#(.WP(WP), .WN(WN))	mux3(.Y(out[2]), .D0(in1[2]), .D1(in2[2]), .SEL(sel), .VDD(VDD));
	mux_RC		#(.WP(WP), .WN(WN))	mux4(.Y(out[3]), .D0(in1[3]), .D1(in2[3]), .SEL(sel), .VDD(VDD));
	mux_RC		#(.WP(WP), .WN(WN))	mux5(.Y(out[4]), .D0(in1[4]), .D1(in2[4]), .SEL(sel), .VDD(VDD));
	mux_RC		#(.WP(WP), .WN(WN))	mux6(.Y(out[5]), .D0(in1[5]), .D1(in2[5]), .SEL(sel), .VDD(VDD));
	mux_RC		#(.WP(WP), .WN(WN))	mux7(.Y(out[6]), .D0(in1[6]), .D1(in2[6]), .SEL(sel), .VDD(VDD));
	mux_RC		#(.WP(WP), .WN(WN))	mux8(.Y(out[7]), .D0(in1[7]), .D1(in2[7]), .SEL(sel), .VDD(VDD));

endmodule


