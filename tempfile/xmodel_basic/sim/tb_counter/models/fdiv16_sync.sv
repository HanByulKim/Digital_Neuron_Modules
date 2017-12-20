/*----------------------------------------------------------------------
MODULE fdiv16_sync.sv

= Purpose =
A synchronous divide-by-16 frequency divider.

= Description =
The frequency divider is realized as a 4-bit synchronous counter.

= Parameters =
||'''NAME'''||'''TYPE'''||'''DESCRIPTION'''    ||'''UNIT'''||'''DEFAULT'''||
|| tcq_ff   || real     || clk-to-q delay of each flip-flop || seconds  || 40e-12 ||

= Revisions =
$Author$
$DateTIme$
$Id$
----------------------------------------------------------------------*/

`include "xmodel.h"

module fdiv16_sync #(
    `parameter_real(tcq_ff, 40e-12) // clk-to-q delay of each flip-flop
)(
    `input_xbit in,                 // input clock
    `output_xbit out                // output divided clock
);   

    wire    [3:0]   div;
    wire    [3:0]   next;
    xbit    [2:0]   div_xb;

    // counter logic
    assign next = div + 1;

    // synchronizing FFs
    dff_fdiv16  #(.delay_cq(tcq_ff), .init_value(0))
                ff_3(.clk(in), .in(next[3]), .out(div[3]), .out_xbit(out));
    dff_fdiv16  #(.delay_cq(tcq_ff), .init_value(1))
                ff_2(.clk(in), .in(next[2]), .out(div[2]), .out_xbit(div_xb[2]));
    dff_fdiv16  #(.delay_cq(tcq_ff), .init_value(1))
                ff_1(.clk(in), .in(next[1]), .out(div[1]), .out_xbit(div_xb[1]));
    dff_fdiv16  #(.delay_cq(tcq_ff), .init_value(1))
                ff_0(.clk(in), .in(next[0]), .out(div[0]), .out_xbit(div_xb[0]));

endmodule

/*----------------------------------------------------------------------
SUBMODULE dff_fdiv16

D-flip-flop with bit-type input/output for the frequency divider.
----------------------------------------------------------------------*/

module dff_fdiv16 #(
    `parameter_real(delay_cq, 40e-12),  // clk-to-q delay
    `parameter_logic(init_value, 1'b0)  // initial value
)(
    `input_xbit clk,
    input in,
    output out,
    `output_xbit out_xbit
);

    xbit in_xbit;

    bit_to_xbit conn1(.in(in), .out(in_xbit));
    dff_xbit    #(.delay_cq(delay_cq), .init_value(init_value))
                ff(.clk(clk), .d(in_xbit), .q(out_xbit));
    xbit_to_bit conn2(.in(out_xbit), .out(out));

endmodule


