/*----------------------------------------------------------------------
TESTBENCH tb_fdiv16.sv

= Purpose =

A testbench for comparing the operation of two versions of divided-by-16
frequency dividers: fdiv16_sync and fdiv16_async.

= Description =

The testbench feeds a 2-GHz clock into the frequency dividers and observes
the output clocks.

= Revisions =

$Author$
$DateTIme$
$Id$
----------------------------------------------------------------------*/

`include "xmodel.h"

module tb_fdiv16();

    parameter real  freq_in = 2e9;      // input clock frequency

    xbit clk_in;
    xbit div_async, div_sync;

    // stimuli
    clk_gen         #(.freq(freq_in))   clk_gen(.out(clk_in));

    // DUT (device-under-test)
    fdiv16_async    dut_async(.in(clk_in), .out(div_async));
    fdiv16_sync     dut_sync(.in(clk_in), .out(div_sync));

    // measurements
    initial begin
        $xmodel_dumpfile();
        $xmodel_dumpvars(clk_in, div_async, div_sync);
    end
    
endmodule
