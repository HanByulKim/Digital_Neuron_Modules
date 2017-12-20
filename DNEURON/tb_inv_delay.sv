/*----------------------------------------------------------------------
TESTBENCH tb_inv_delay.sv

= Purpose =
A testbench for an inverter RC model.

= Description =
The testbench feeds a random data to the digital neuron and checks whether
its output is matched to that of a reference neuron model. 
----------------------------------------------------------------------*/

module tb_inv_delay;

//---- signal declarations
xbit in_xb;
xreal in, a, b, c, d;
xreal VDD;

//---- input generation
clk_gen     #(.freq(100e6)) I0 (.out(in_xb));
transition  #(.value1(1.0), .value0(0.0)) I1 (.in(in_xb), .out(in));

//---- supply voltage generation
vsource     #(.dc(1.0), .mode("dc")) I_VDD (.pos(VDD), .neg(`ground), .in(`ground));

//---- chain of inverters
parameter real fanout = 4.0;

inv_RC      #(.WP(20), .WN(10))
            INV0 (.A(in), .Y(a), .VDD(VDD));
inv_RC      #(.WP(20*fanout), .WN(10*fanout))
            INV1 (.A(a), .Y(b), .VDD(VDD));
inv_RC      #(.WP(20*fanout*fanout), .WN(10*fanout*fanout))
            INV2 (.A(b), .Y(c), .VDD(VDD));
inv_RC      #(.WP(20*fanout*fanout*fanout), .WN(10*fanout*fanout*fanout))
            INV3 (.A(c), .Y(d), .VDD(VDD));

//---- delay measurement
xbit trig_a, trig_b;
real delay;

trig_cross  #(.threshold(0.5)) TRIG_a (.in(a), .out(trig_a));
trig_cross  #(.threshold(0.5)) TRIG_b (.in(b), .out(trig_b));
meas_delay  MEAS0 (.from(trig_a), .to(trig_b), .out(delay));

always @(delay) begin
    if ($time > 0) $display("MEASURED DELAY (fanout of %f) = ", fanout, delay);
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
    $xmodel_dumpfile("tb_inv_delay.fsdb");
    $xmodel_dumpvars();
end

endmodule

