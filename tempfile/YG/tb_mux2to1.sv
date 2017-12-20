module tb_mux2to1;

	xreal in1, in2;
//	xreal sel;
	xreal VDD;
	real time_sel_rising;

	xbit sel;
	xbit in1_xbit;
	xbit in2_xbit;
	xbit out;
	wire probe_out;

//DC_gen
	dc_gen	#(.value(1.0))	my_vdd(VDD);
//Input. step_gen. It is for simple simulation.
	step_gen	#(.init_value(0.0), .change(1.0), .delay(10e-9))	my_in1(in1);
	step_gen	#(.init_value(0.0), .change(1.0), .delay(20e-9))	my_in2(in2);
//sel
	pulse_gen	#(.init_value(0.0), .width(5e-9), .delay(5e-9), .period(10e-9))	my_sel(sel);

//xreal to xbit conversion for mux.

	xreal_to_xbit	#(.threshold(0.5), .width(1))	my_in1_xbit_convert(.out(in1_xbit), .in(in1));
	xreal_to_xbit	#(.threshold(0.5), .width(1))	my_in2_xbit_convert(.out(in2_xbit), .in(in2));
	
	mux_xbit	#(.num_in(2), .width_sel(1), .delay(1e-9))	my_mux(.out(out), .in({in2_xbit,in1_xbit}), .sel(sel));


//	mux_RC	#(.WP(20), .WN(10)) mux1(.Y(out), .D0(in1), .D1(in2), .SEL(sel), .VDD);

	xbit_to_bit tran1(.in(out), .out(probe_out));
	probe_bit	#(.filename("tb_mux2to1.jez"), .start(0.0), .stop(50e-9))	probe_out(probe_out);
	
	meas_posedge	#(.delay(1e-9), .times(0))	probe_rising_sel(.out(time_sel_rising), .in(sel));
	

endmodule
