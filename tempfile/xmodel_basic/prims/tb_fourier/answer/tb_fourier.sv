/*----------------------------------------------------------------------
TESTBENCH tb_fourier.sv

= Purpose =
A testbench to learn an application of xmodel primitives.

= Description =
The testbench visualizes a basic concept of Fourier series by
creating a square-like wave with a number of sine waves.
----------------------------------------------------------------------*/

`include "xmodel.h"

module tb_fourier();

    xreal signal1, signal2, signal3, signal4, sum;

    sin_gen #(.amp(1.0/1), .freq(100e6)) sin_gen1(signal1);
    sin_gen #(.amp(1.0/3), .freq(300e6)) sin_gen2(signal2);
    sin_gen #(.amp(1.0/5), .freq(500e6)) sin_gen3(signal3);
    sin_gen #(.amp(1.0/7), .freq(700e6)) sin_gen4(signal4);

    add     #(.num_in(4), .scale('{1.0,1.0,1.0,1.0}))
            fourier_sum(.in({signal1,signal2,signal3,signal4}), .out(sum));

    initial begin
        $xmodel_dumpfile();
        $xmodel_dumpvars();
    end

endmodule


