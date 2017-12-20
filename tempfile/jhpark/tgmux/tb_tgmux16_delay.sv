/*----------------------------------------------------------------------
TESTBENCH tb_inv_delay.sv

= Purpose =
A testbench for an inverter RC model.

= Description =
The testbench feeds a random data to the digital neuron and checks whether
its output is matched to that of a reference neuron model. 
----------------------------------------------------------------------*/
module tb_tgmux16_delay;

//---- signal declarations
	xreal [7:0] in1;
	xreal [7:0] in2;
	bit [7:0] in1_re = 8'b11110000;
	bit [7:0] in2_re = 8'b11001100;

	bit_to_xreal rxr1 (.in(in1_re[0]), .out(in1[0]));
	bit_to_xreal rxr2 (.in(in2_re[0]), .out(in2[0]));
	bit_to_xreal rxr3 (.in(in1_re[1]), .out(in1[1]));
	bit_to_xreal rxr4 (.in(in2_re[1]), .out(in2[1]));
	bit_to_xreal rxr5 (.in(in1_re[2]), .out(in1[2]));
	bit_to_xreal rxr6 (.in(in2_re[2]), .out(in2[2]));
	bit_to_xreal rxr7 (.in(in1_re[3]), .out(in1[3]));
	bit_to_xreal rxr8 (.in(in2_re[3]), .out(in2[3]));
	bit_to_xreal rxr9 (.in(in1_re[4]), .out(in1[4]));
	bit_to_xreal rxr10 (.in(in2_re[4]), .out(in2[4]));
	bit_to_xreal rxr11 (.in(in1_re[5]), .out(in1[5]));
	bit_to_xreal rxr12 (.in(in2_re[5]), .out(in2[5]));
	bit_to_xreal rxr13 (.in(in1_re[6]), .out(in1[6]));
	bit_to_xreal rxr14 (.in(in2_re[6]), .out(in2[6]));
	bit_to_xreal rxr15 (.in(in1_re[7]), .out(in1[7]));
	bit_to_xreal rxr16 (.in(in2_re[7]), .out(in2[7]));

	xreal [7:0] out;
	xreal sel;
	xreal VDD;	

	xbit clk_xb;
	xreal clk;

// clock generation
clk_gen     #(.freq(100e6)) I0 (.out(clk_xb));
transition  #(.value1(1.0), .value0(0.0)) I1 (.in(clk_xb), .out(clk));

//---- supply voltage generation
vsource     #(.dc(1.0), .mode("dc")) I_VDD (.pos(VDD), .neg(`ground), .in(`ground));

//---- MUX
tgmux16		#(.WP(20), .WN(10))
            MUX1 (.out(out), .in1(in1), .in2(in2), .sel(sel), .VDD(VDD));

//---- delay measurement
xbit trig_sel, trig_out;
real delay;

xbit clk_sel;
real sel_re;

pat_gen #(.data({0,0,0,0,0,0,1,1}), .repeat_num(100)) trig_clk(.trig(clk_xb), .out(clk_sel));
xbit_to_real conv1(.in(clk_sel), .out(sel_re));
real_to_xreal conv2(.in(sel_re), .out(sel));

trig_cross  #(.threshold(0.5)) TRIG_sel (.in(sel), .out(trig_sel));
trig_cross  #(.threshold(0.5)) TRIG_out (.in(out[3]), .out(trig_out));
meas_delay  MEAS0 (.from(trig_sel), .to(trig_out), .out(delay));

always @(delay) begin
    if ($time > 0) $display("MEASURED DELAY = ", delay);
end
// -- power measurement
xbit trig_t1, trig_t2;
real Etotal;

trig_time #(.delay(10e-9)) TRIG_t1 (.out(trig_t1));
trig_time #(.delay(90e-9)) TRIG_t2 (.out(trig_t2));
meas_integ	MEAS1	(.in(I_VDD.I), .out(Etotal), .from(trig_t1), .to(trig_t2));

always @(Etotal) begin
    if ($time > 0) $display("MEASURED POWER from 10ns to 90ns: ", -Etotal/90e-9);
end


//---- waveform recording
initial begin
    $xmodel_dumpfile("tb_tgmux16_delay.fsdb");
    $xmodel_dumpvars();
end

endmodule

