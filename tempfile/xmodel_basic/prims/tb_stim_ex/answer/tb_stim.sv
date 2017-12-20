/*----------------------------------------------------------------------
TESTBENCH tb_stim.sv

= Purpose =

An exercise of using stimulus and measure primitives in XMODEL.

= Revisions =
$Author$
$DateTIme$
----------------------------------------------------------------------*/

`include "xmodel.h"

module tb_stim();

    // variables (signals)
    xreal v0;
    xreal v1;
    xbit v2; 

    // instances to generate v0/v1/v2
    pwl_gen     #(.data('{10e-9, 1, 20e-9, 2, 35e-9, -0.5, 40e-9, 0.2}))
                v0_gen(v0);
    step_gen    #(.init_value(0.4), .change(0.4), .delay(10e-9))
                v1_gen(v1);
    pulse_gen   #(.init_value(1), .delay(10e-9), .width(10e-9), .period(30e-9))
                v2_gen(v2);

    // instances to measure v0/v1/v2
    probe_xreal probe_v0(v0);
    probe_xreal probe_v1(v1);
    probe_xbit  probe_v2(v2);

endmodule
