/*----------------------------------------------------------------------
MODULE fdiv16_async.sv

= Purpose =
An asynchronous divide-by-16 frequency divider.

= Description =
The frequency divider is realized as a chain of 4 toggle flip-flops.

= Parameters =
||'''NAME'''||'''TYPE'''||'''DESCRIPTION'''    ||'''UNIT'''||'''DEFAULT'''||
|| tcq_ff   || real     || clk-to-q delay of each flip-flop || seconds  || 40e-12 ||

= Revisions =
$Author$
$DateTIme$
$Id$
----------------------------------------------------------------------*/

`include "xmodel.h"

module fdiv16_async #(
    `parameter_real(tcq_ff, 40e-12) // clk-to-q delay of each flip-flop
)(
    `input_xbit in,                 // input clock
    `output_xbit out                // output divided clock
);   

    xbit    [2:0]   div;            // internal divider state

    // 4-bit ripple counter
    tff_fdiv16  #(.delay_cq(tcq_ff), .init_value(0))
                ff_3(.in(div[2]), .out(out));
    tff_fdiv16  #(.delay_cq(tcq_ff), .init_value(0))
                ff_2(.in(div[1]), .out(div[2]));
    tff_fdiv16  #(.delay_cq(tcq_ff), .init_value(0))
                ff_1(.in(div[0]), .out(div[1]));
    tff_fdiv16  #(.delay_cq(tcq_ff), .init_value(0))
                ff_0(.in(in), .out(div[0]));

endmodule

/*----------------------------------------------------------------------
SUBMODULE tff_fdiv16

Toggle flip-flop for the frequency divider.
----------------------------------------------------------------------*/

module tff_fdiv16 #(
    `parameter_real(delay_cq, 40e-12),  // clk-to-q delay
    `parameter_logic(init_value, 1'b0)  // initial value
)(
    `input_xbit in,
    `output_xbit out
);

    xbit outb;
    dff_xbit    #(.delay_cq(delay_cq), .init_value(init_value))
                ff(.clk(in), .d(outb), .q(out));
    inv_xbit    inv(.in(out), .out(outb));

endmodule

