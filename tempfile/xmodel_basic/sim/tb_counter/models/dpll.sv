/*----------------------------------------------------------------------
MODULE dpll.sv

= Purpose =
A digital phase-locked loop model.

= Description =
The digital PLL is composed of a time-to-digital converter (TDC), a digital loopfilter (DLF), a digitally-controlled oscillator (DCO), and a frequency divider (DIV) as shown in the block diagram below.

clk_ref ----->[TDC]----->[DLF]----->[DCO]--+--> clk_out
                ^                          |
                |                          |
        clk_fb  +--------[DIV]<------------+

= Revisions =
$Author$
$DateTIme$
$Id$
----------------------------------------------------------------------*/

`include "xmodel.h"

module dpll (
    `input_xbit clk_ref,                // input clock
    `output_xbit clk_fb,                // feedback clock
    `output_xbit clk_out,               // output clock
    input reset                         // global reset
);

    // internal parameters
    parameter integer init_value = 13'b1_0000_0000_0000;

    // variables
    wire signed [3:0]   terr;
    wire [12:0]         dctrl;

    // time-to-digital converter
    tdc_gosc        tdc(.clk_ref(clk_ref), .clk_fb(clk_fb), .out(terr));

    // digital loop-filter
    digital_lf      #(.Kp(32), .Ki(1), .init_value(init_value))
                    dlf(.in(terr), .out(dctrl), .clk(clk_lf), .reset(reset)); 
    xbit_to_bit     conn(.in(clk_fb), .out(clk_lf));

    // digitally-controlled oscillator
    dco_exp         dco(.in(dctrl), .out(clk_out));

    // frequency divider (/16)
    fdiv16_sync     fdiv(.in(clk_out), .out(clk_fb));

endmodule

