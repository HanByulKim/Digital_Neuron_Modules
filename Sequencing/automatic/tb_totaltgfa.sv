/*----------------------------------------------------------------------
TESTBENCH tb_inv_delay.sv

= Purpose =
A testbench for an inverter RC model.

= Description =
The testbench feeds a random data to the digital neuron and checks whether
its output is matched to that of a reference neuron model. 
----------------------------------------------------------------------*/
module tb_totaltgfa;
	parameter N=8;
//---- signal declarations
	xreal [N-1:0] in1;
	xreal [N-1:0] in2;
	xreal [N-1:0] in3;
	xreal [N-1:0] in4;
	xreal [N-1:0] in5;
	xreal [N-1:0] in6;
	xreal [N-1:0] in7;
	xreal [N-1:0] in8;

	bit [7:0] in1_re = 8'b11111111;
	bit [7:0] in2_re = 8'b00000000;
	bit [7:0] in3_re = 8'b11111111;
	bit [7:0] in4_re = 8'b00000000;
	bit [7:0] in5_re = 8'b11111111;
	bit [7:0] in6_re = 8'b00000000;
	bit [7:0] in7_re = 8'b11111111;
	bit [7:0] in8_re = 8'b00000000;

	bit_to_xreal #(.width(8)) rxr1 (.in(in1_re[7:0]), .out(in1[7:0]));
	bit_to_xreal #(.width(8)) rxr2 (.in(in3_re[7:0]), .out(in3[7:0]));
	bit_to_xreal #(.width(8)) rxr3 (.in(in4_re[7:0]), .out(in4[7:0]));
	bit_to_xreal #(.width(8)) rxr4 (.in(in5_re[7:0]), .out(in5[7:0]));
	bit_to_xreal #(.width(8)) rxr5 (.in(in6_re[7:0]), .out(in6[7:0]));
	bit_to_xreal #(.width(8)) rxr6 (.in(in7_re[7:0]), .out(in7[7:0]));
	bit_to_xreal #(.width(8)) rxr7 (.in(in8_re[7:0]), .out(in8[7:0]));
	bit_to_xreal rxr9 (.in(in2_re[0]), .out(in2[0]));
	bit_to_xreal rxr8 (.in(in2_re[1]), .out(in2[1]));
	//bit_to_xreal rxr9 (.in(in2_re[2]), .out(in2[2]));
	bit_to_xreal rxr10 (.in(in2_re[3]), .out(in2[3]));
	bit_to_xreal rxr11 (.in(in2_re[4]), .out(in2[4]));
	bit_to_xreal rxr12 (.in(in2_re[5]), .out(in2[5]));
	bit_to_xreal rxr13 (.in(in2_re[6]), .out(in2[6]));
	bit_to_xreal rxr14 (.in(in2_re[7]), .out(in2[7]));

	xreal [N+2:0] out;
	xreal [N-1:0] mid1;
	xreal [N-1:0] mid2;
	xreal [N-1:0] mid3;
	xreal [N-1:0] mid4;
	xreal [N:0] fin1;	// 10bit
	xreal [N:0] fin2;
	xreal [N/2-1:0] Cmid;
	xreal [N/4-1:0] Cfin;
	
	//xreal sel;
	xreal VDD;	

	xbit clk_xb;
	//xreal clk;

// clock generation
clk_gen     #(.freq(5e8)) I0 (.out(clk_xb));
//transition  #(.value1(1.0), .value0(0.0)) I1 (.in(clk_xb), .out(clk));

//---- supply voltage generation
vsource     #(.dc(1.0), .mode("dc")) I_VDD (.pos(VDD), .neg(`ground), .in(`ground));

//---- MUX
//mux16to8	#(.WP(20), .WN(10))
//            MUX1 (.out(out), .in1(in1), .in2(in2), .sel(sel), .VDD(VDD));


tgfa_8bit 	#(.WP(20), .WN(10)) FA4 (.Sout(mid4), .Cout(Cmid[3]), .A(in7), .B(in8), .Cin(`ground), .VDD(VDD));
tgfa_8bit 	#(.WP(20), .WN(10)) FA3 (.Sout(mid3), .Cout(Cmid[2]), .A(in5), .B(in6), .Cin(`ground), .VDD(VDD));
tgfa_8bit 	#(.WP(20), .WN(10)) FA2 (.Sout(mid2), .Cout(Cmid[1]), .A(in3), .B(in4), .Cin(`ground), .VDD(VDD));
tgfa_8bit 	#(.WP(20), .WN(10)) FA1 (.Sout(mid1), .Cout(Cmid[0]), .A(in1), .B(in2), .Cin(`ground), .VDD(VDD));

tgfa_9bit 	#(.WP(20), .WN(10)) FA6 (.Sout(fin2), .Cout(Cfin[1]), .A({Cmid[3],mid4[N-1:0]}), .B({Cmid[2],mid3[N-1:0]}), .Cin(`ground), .VDD(VDD));
tgfa_9bit 	#(.WP(20), .WN(10)) FA5 (.Sout(fin1), .Cout(Cfin[0]), .A({Cmid[1],mid2[N-1:0]}), .B({Cmid[0],mid1[N-1:0]}), .Cin(`ground), .VDD(VDD));

tgfa_10bit #(.WP(20), .WN(10)) FA7 (.Sout(out[N+1:0]), .Cout(out[N+2]), .A({Cfin[1],fin2[N:0]}), .B({Cfin[0],fin1[N:0]}), .Cin(`ground), .VDD(VDD));


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

