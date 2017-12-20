/*----------------------------------------------------------------------
TESTBENCH tb_stim.sv

= Purpose =
A first example on XMODEL: playing with stimulus sources

= Description =
A sin_gen stimulus generates an exponentially-decaying sine wave.

= Revisions =
$Author$
$DateTIme$
----------------------------------------------------------------------*/

`include "xmodel.h"

module tb_stim();

    xreal signal;

    sin_gen #(.delay(10e-9), .offset(0.5), .damp(0.05e9),
              .amp(1.0), .freq(0.5e9), .init_phase(0.5*M_PI))
            my_gen(signal);

    probe_xreal #(.format("jezascii")) my_probe(signal);

endmodule
