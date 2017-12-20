/*----------------------------------------------------------------------
TESTBENCH tb_dll.sv

= Purpose =
A testbench to learn an application of xmodel primitives.

= Description =
The testbench simulates a basic model of delay-locked loop including 
phase detector, loop filter and delay line, by generating an input clock 
and measuring delay of the output clock.

----------------------------------------------------------------------*/

`include "xmodel.h"

module tb_dll();

    xbit clk_in, clk_out, q;
    xreal delay, q_xr;

    clk_gen     #(.freq(1.5e9)) clk_gen0(clk_in);

    dff_xbit    #(.init_value(1'b0)) phase_detector(.q(q), .d(clk_out), .clk(clk_in));
    transition  #(.value0(-1), .value1(1)) d2a(.out(q_xr), .in(q));
    integ       #(.init_value(1.0e-9), .scale(0.01)) loop_filter(.out(delay), .in(q_xr));
    delay_to_clk delay_line(.out(clk_out), .trig(clk_in), .in(delay));

    probe_delay prb3 (.trig(clk_in), .in(clk_out));

    initial begin
        $xmodel_dumpfile();
        $xmodel_dumpvars(clk_in, clk_out);
    end

endmodule


