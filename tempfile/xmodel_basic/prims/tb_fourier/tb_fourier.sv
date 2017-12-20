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

    // GENERATE FOUR HARMONIC SINUSOIDS AND SUM THEM UP
    // ...

    initial begin
        $xmodel_dumpfile();
        $xmodel_dumpvars();
    end

endmodule


