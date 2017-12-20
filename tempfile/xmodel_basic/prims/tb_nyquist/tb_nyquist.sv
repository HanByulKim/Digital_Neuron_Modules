/*----------------------------------------------------------------------
TESTBENCH tb_nyquist.sv

= Purpose =
A testbench to learn an application of xmodel primitives.

= Description =
The testbench visualizes a basic concept of Nyquist frequency by
lowering a sampling clock frequency and probing the sampled signal.

----------------------------------------------------------------------*/

`include "xmodel.h"

module tb_nyquist();

    xbit clk;
    xreal in, out, freq;

    sin_gen #(.freq(100e6)) sin_gen0(in);

    pwl_gen #(.data('{20.0e-9,2e9,80.0e-9,200e6})) pwl_gen0(freq);
    freq_to_clk freq_to_clk0(.out(clk), .in(freq));

    sample  sampler(.out(out), .in(in), .trig(clk));

    initial begin
        $xmodel_dumpfile();
        $xmodel_dumpvars();
    end

endmodule


