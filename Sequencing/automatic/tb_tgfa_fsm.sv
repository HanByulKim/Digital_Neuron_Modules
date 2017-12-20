/*----------------------------------------------------------------------
TESTBENCH tb_inv_delay.sv

= Purpose =
A testbench for an inverter RC model.

= Description =
The testbench feeds a random data to the digital neuron and checks whether
its output is matched to that of a reference neuron model. 
----------------------------------------------------------------------*/
module tb_tgfa_fsm;
	parameter N=10;
//---- signal declarations

	xreal [9:0] total_input[9:0];
	
	xreal [N-1:0] in0;
	xreal [N-1:0] in1;
	xreal [N-1:0] in2;
	xreal [N-1:0] in3;
	xreal [N-1:0] in4;
	xreal [N-1:0] in5;
	xreal [N-1:0] in6;
	xreal [N-1:0] in7;
	xreal [N-1:0] in8;
	xreal [N-1:0] in9;

	bit [9:0] in0_re = 10'b0000000000;
	bit [9:0] in1_re = 10'b0011111111;
	bit [9:0] in2_re = 10'b0011111111;
	bit [9:0] in3_re = 10'b0011111111;
	bit [9:0] in4_re = 10'b0011111111;
	bit [9:0] in5_re = 10'b0011111111;
	bit [9:0] in6_re = 10'b0011111111;
	bit [9:0] in7_re = 10'b0011111111;
	bit [9:0] in8_re = 10'b0011111111;
	bit [9:0] in9_re = 10'b0000000000;

	bit_to_xreal #(.width(10)) rxr0 (.in(in0_re[9:0]), .out(in0[9:0]));
	bit_to_xreal #(.width(10)) rxr1 (.in(in1_re[9:0]), .out(in1[9:0]));
	bit_to_xreal #(.width(10)) rxr2 (.in(in2_re[9:0]), .out(in2[9:0]));
	bit_to_xreal #(.width(10)) rxr3 (.in(in3_re[9:0]), .out(in3[9:0]));
	bit_to_xreal #(.width(10)) rxr4 (.in(in4_re[9:0]), .out(in4[9:0]));
	bit_to_xreal #(.width(10)) rxr5 (.in(in5_re[9:0]), .out(in5[9:0]));
	bit_to_xreal #(.width(10)) rxr6 (.in(in6_re[9:0]), .out(in6[9:0]));
	bit_to_xreal #(.width(10)) rxr7 (.in(in7_re[9:0]), .out(in7[9:0]));
	bit_to_xreal #(.width(10)) rxr8 (.in(in8_re[9:0]), .out(in8[9:0]));
	bit_to_xreal #(.width(10)) rxr9 (.in(in9_re[9:0]), .out(in9[9:0]));

	xreal [10:0] out;
//	xreal [N-1:0] mid1;
//	xreal [N-1:0] mid2;
//	xreal [N-1:0] mid3;
//	xreal [N-1:0] mid4;
//	xreal [N:0] fin1;	// 10bit
//	xreal [N:0] fin2;
	xreal [N/2-1:0] Cmid;
	xreal [N/4-1:0] Cfin;
	xreal [9:0] input_from_sum;
	xreal [9:0] input_from_ff;
	xreal [9:0] sequential_input;

	//xreal sel;
	xreal VDD;	

	xbit clk_xb;
	xreal clk_xb_real;
	xreal clk_xb_real_b;
	//xreal clk;

	assign	total_input[0] = in0;	
	assign	total_input[1] = in1;	
	assign	total_input[2] = in2;	
	assign	total_input[3] = in3;	
	assign	total_input[4] = in4;	
	assign	total_input[5] = in5;	
	assign	total_input[6] = in6;	
	assign	total_input[7] = in7;	
	assign	total_input[8] = in8;	
	assign	total_input[9] = in9;	


// clock generation
clk_gen     #(.freq(1.2e9)) I0 (.out(clk_xb));
xbit_to_xreal clk_converter(.in(clk_xb), .out(clk_xb_real));
inv_RC	#(.WP(20), .WN(10)) clk_b_generator(.Y(clk_xb_real_b), .A(clk_xb_real), .VDD(VDD));
//transition  #(.value1(1.0), .value0(0.0)) I1 (.in(clk_xb), .out(clk));

//---- supply voltage generation
vsource     #(.dc(1.0), .mode("dc")) I_VDD (.pos(VDD), .neg(`ground), .in(`ground));

//---- MUX
//mux16to8	#(.WP(20), .WN(10))
//            MUX1 (.out(out), .in1(in1), .in2(in2), .sel(sel), .VDD(VDD));


tgfa_10bit #(.WP(20), .WN(10)) FA_tgfa10(.Sout(out[9:0]), .Cout(out[10]), .A(input_from_sum), .B(input_from_ff), .Cin(`ground), .VDD(VDD));

ff10	#(.WP(20), .WN(10)) fsm_of_sum(.D(out[9:0]), .Q(input_from_sum), .CK(clk_xb_real), .CKB(clk_xb_real_b), .VDD(VDD));
ff10	#(.WP(20), .WN(10)) fsm_of_input(.D(sequential_input), .Q(input_from_ff), .CK(clk_xb_real), .CKB(clk_xb_real_b), .VDD(VDD));


integer i=0;

always@(negedge clk_xb) begin
	if(i<9) i++;
	sequential_input = total_input[i];
end




//---- delay measurement
xbit trig_in2, trig_out;
real delay;

xbit clk_in2;
real in2_0_re;

pat_gen #(.data({0,0,0,0,0,1,1,1}), .repeat_num(100)) trig_clk(.trig(clk_xb), .out(clk_in2));
xbit_to_real conv1(.in(clk_in2), .out(in2_0_re));
real_to_xreal conv2(.in(in2_0_re), .out(in2[2]));

//assign in2[0] = VDD;
//xreal in_xb;
//clk_gen     #(.freq(5e10)) I02 (.out(in_xb));
//transition  #(.value1(1.0), .value0(0.0)) I1 (.in(in_xb), .out(in2[0]));
//step_gen #(.init_value(1), .change(0), .delay(5e-9)) gen1 (.out(in2[0])) ;

trig_cross  #(.threshold(0.5)) TRIG_sel (.in(in2[2]), .out(trig_in2));
trig_cross  #(.threshold(0.5)) TRIG_out (.in(Cout), .out(trig_out));
meas_delay  MEAS0 (.from(trig_in2), .to(trig_out), .out(delay));

always @(delay) begin
    if ($time > 0) $display("MEASURED DELAY = ", delay);
end

//---- power measurement
xbit trig_t1, trig_t2;
real Etotal;

trig_time #(.delay(10e-9)) TRIG_t1 (.out(trig_t1));
trig_time #(.delay(90e-9)) TRIG_t2 (.out(trig_t2));
meas_integ  MEAS1 (.in(I_VDD.I), .out(Etotal), .from(trig_t1), .to(trig_t2));

always @(Etotal) begin
    if ($time > 0) $display("MEASURED POWER from 10ns to 90ns: ", -Etotal/90e-9);
end

//probe_xreal test (Cout);
//---- waveform recording
initial begin
    $xmodel_dumpfile("tb_tgfa_8bit_delay.jez");
    $xmodel_dumpvars();
end

bit [N+2:0] out_pt;
xreal_to_bit #(.width(N+3)) xr1 (.in(out), .out(out_pt));

final begin
	//$display("Output Value %b %b %b %b %b %b %b %b %b %b %b", out_pt[N+2], out_pt[N+1], out_pt[N], out_pt[N-1], out_pt[6], out_pt[5], out_pt[4], out_pt[3], out_pt[2], out_pt[1], out_pt[0]);
	$display("output value: %b", out_pt[N+2:0]);
	$monitor("result : %h", out[N+2:0]);
end

endmodule

