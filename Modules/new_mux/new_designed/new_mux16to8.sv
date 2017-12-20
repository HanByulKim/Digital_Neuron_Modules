


module new_mux16to8 #(
	parameter real WP = 20,
	parameter real WN = 10,
	parameter real WPS = 20
)(
	output xreal [7:0] out,
	input xreal [7:0] in1,
	input xreal sel,
	input xreal VDD
);


	//in1
	new_mux_RC		#(.WP(WP), .WN(WN), .WPS(WPS))	mux1(.Y(out[0]), .D0(in1[0]), .SEL(sel), .VDD(VDD));
	new_mux_RC		#(.WP(WP), .WN(WN), .WPS(WPS))	mux2(.Y(out[1]), .D0(in1[1]), .SEL(sel), .VDD(VDD));
	new_mux_RC		#(.WP(WP), .WN(WN), .WPS(WPS))	mux3(.Y(out[2]), .D0(in1[2]), .SEL(sel), .VDD(VDD));
	new_mux_RC		#(.WP(WP), .WN(WN), .WPS(WPS))	mux4(.Y(out[3]), .D0(in1[3]), .SEL(sel), .VDD(VDD));
	new_mux_RC		#(.WP(WP), .WN(WN), .WPS(WPS))	mux5(.Y(out[4]), .D0(in1[4]), .SEL(sel), .VDD(VDD));
	new_mux_RC		#(.WP(WP), .WN(WN), .WPS(WPS))	mux6(.Y(out[5]), .D0(in1[5]), .SEL(sel), .VDD(VDD));
	new_mux_RC		#(.WP(WP), .WN(WN), .WPS(WPS))	mux7(.Y(out[6]), .D0(in1[6]), .SEL(sel), .VDD(VDD));
	new_mux_RC		#(.WP(WP), .WN(WN), .WPS(WPS))	mux8(.Y(out[7]), .D0(in1[7]), .SEL(sel), .VDD(VDD));

endmodule


