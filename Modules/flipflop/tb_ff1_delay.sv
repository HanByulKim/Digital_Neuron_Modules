/*----------------------------------------------------------------------
TESTBENCH tb_1bit_ff_delay.sv

= Purpose =
A testbench for an 1-bit-flipflop RC model.

= Description =
The testbench feeds a random data to the digital neuron and checks whether
its output is matched to that of a reference neuron model. 
----------------------------------------------------------------------*/

module tb_ff1_delay;

//---- signal declarations
xbit ck_xb, ckb_xb, ck2_xb, in_clk_xb;
xreal d, q, ck, ckb;
xreal VDD;

//---- input generation
clk_gen     #(.freq(100e6)) CK (.out(ck_xb));
clk_gen     #(.freq(100e6), .init_phase(3.14)) CKB (.out(ckb_xb));
clk_gen     #(.freq(222e6)) CK2 (.out(ck2_xb));
//real in_clk_re;
xbit_to_xreal conv1 (.in(ck_xb), .out(ck));
xbit_to_xreal conv2 (.in(ckb_xb), .out(ckb));

pat_gen #(.data({0,1,0,1,0,0,1}), .repeat_num(100)) trig_clk(.trig(ck2_xb), .out(in_clk_xb));
xbit_to_xreal conv3 (.in(in_clk_xb), .out(d));
//xbit_to_real conv1(.in(in_clk_xb), .out(in_clk_re));
//real_to_xreal conv2(.in(in_clk_re), .out(d));

//---- supply voltage generation
vsource     #(.dc(1.0), .mode("dc")) I_VDD (.pos(VDD), .neg(`ground), .in(`ground));

//---- flipflop

//parameter real fanout = 4.0;

ff1 #(.WP(20), .WN(10))
    FF0 (.Q(q), .D(d), .CK(ck), .CKB(ckb), .VDD(VDD));

//---- delay measurement
xbit trig_a, trig_b;
real delay;

trig_cross  #(.threshold(0.5)) TRIG_a (.in(d), .out(trig_a));
trig_cross  #(.threshold(0.5)) TRIG_b (.in(q), .out(trig_b));
meas_delay  MEAS0 (.from(trig_a), .to(trig_b), .out(delay));

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

//---- waveform recording
initial begin
    $xmodel_dumpfile("tb_ff1_delay.fsdb");
    $xmodel_dumpvars();
end

endmodule

