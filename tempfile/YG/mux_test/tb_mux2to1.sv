`include "xmodel.h"
//`include "mux2to1.sv"

module tb_mux2to1();

	xreal in1, in2;
	xreal sel_xreal;
	xreal VDD_in;
//	xreal time_sel_rising;

	xbit sel;
	xbit in1_xbit;
	xbit in2_xbit;
	xbit out;

	real delay_test;
	xbit trigger_from;
	xbit trigger_to;


//DC_gen
	dc_gen	#(.value(1.0))	my_vdd(VDD_in);
//Input. step_gen. It is for simple simulation.
	step_gen	#(.init_value(0.0), .change(1.0), .delay(10ns))	my_in1(in1);
	step_gen	#(.init_value(0.0), .change(1.0), .delay(20ns))	my_in2(in2);
//sel
	pulse_gen	#(.init_value(0.0), .width(5ns), .delay(15ns), .period(10ns))	my_sel(sel);
//	step_gen	#(.init_value(0.0), .change(1.0), .delay(15ns))	my_in3(sel_xreal);

//xreal to xbit conversion for mux.

	xreal_to_xbit	#(.threshold(0.5), .width(1))	my_in1_xbit_convert(.out(in1_xbit), .in(in1));
	xreal_to_xbit	#(.threshold(0.5), .width(1))	my_in2_xbit_convert(.out(in2_xbit), .in(in2));
//	xreal_to_xbit	#(.threshold(0.5), .width(1))	my_in3_xbit_convert(.out(sel), .in(sel_xreal));
	
	mux_xbit	#(.num_in(2), .width_sel(1), .delay(1ns))	my_mux(.out(out), .in({in2_xbit,in1_xbit}), .sel(sel));


//	mux_RC	#(.WP(20), .WN(10)) mux1(.Y(out), .D0(in1), .D1(in2), .SEL(sel), .VDD);


//	probe_bit	#(.filename("tb_mux2to1.jez"), .start(0.0s), .stop(50ns))	probe_out(out);
	
//	meas_posedge	#(.delay(1ns), .times(0s))	probe_rising_sel(.out(time_sel_rising), .in(sel));
	trig_posedge	#(.delay(1ns), .times(1))	trig_pos_in1(.in(in1_xbit), .out(trigger_from));
	trig_posedge	#(.delay(1ns), .times(1))	trig_pos_in2(.in(out), .out(trigger_to));

	meas_delay	#(.strict_order(1))	measurement_delay_test(.out(delay_test), .from(trigger_from), .to(trigger_to));	

	

endmodule
