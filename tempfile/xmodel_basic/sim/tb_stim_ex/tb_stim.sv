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

/// Declare variables(signals) here
    //xbit v0; or xreal v0;
    //xbit v1; or xreal v1;
    //xbit v2; or xreal v2;

/// Declare instances to generate v0/v1/v2
    //proper_primitive #(.params1(), ..)    v0_gen(v0);
    //proper_primitive #(.params1(), ..)    v1_gen(v1);
    //proper_primitive #(.params1(), ..)    v2_gen(v2);

/// Declare instances to measure v0/v1/v2
    ///probe_xbit probe_v0(v0); or probe_xreal probe_v0(v0);
    ///probe_xbit probe_v1(v1); or probe_xreal probe_v1(v1);
    ///probe_xbit probe_v2(v2); or probe_xreal probe_v2(v2);

endmodule

