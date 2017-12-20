/*----------------------------------------------------------------------
MODULE tdc_ideal.sv

= Purpose =
An ideal time-to-digital converter model.

= Description =
The delay between the two input clocks is converted into a digital code
using a combination of clk_to_delay and adc modules.
 
= Parameters =
||'''NAME'''||'''TYPE'''||'''DESCRIPTION'''||'''UNIT'''||'''DEFAULT'''||
|| fcenter || real || center frequency || Hz || 93.75e6 ||
|| Ktdc || real || TDC gain || steps/UI || 50 ||
|| Nbit || integer || TDC resolution || bit || 4 ||

= Revisions =
$Author$
$DateTIme$
$Id$
----------------------------------------------------------------------*/

`include "xmodel.h"

module tdc_ideal #(
    `parameter_real(fcenter, 93.75e6),  // center frequency (Hz)
    `parameter_real(Ktdc, 50),          // TDC gain (steps/UI)
    `parameter_integer(Nbit, 4)         // TDC resolution (bit)
)(
    `input_xbit clk_ref,                // reference clock input
    `input_xbit clk_fb,                 // feedback clock input
    output signed [Nbit-1:0] out        // timing error output
);

    // internal parameters
    parameter real unit_delay = 1.0/fcenter/Ktdc;

    // variables
    xreal delay;
    xbit [Nbit-1:0] dout_xb;
    bit [Nbit-1:0] dout;

    // clock-to-delay conversion
    clk_to_delay    clk2delay(.trig(clk_ref), .in(clk_fb), .out(delay));

    // delay-to-digital conversion
    adc             #(.num_bit(Nbit), .value_min(-unit_delay*(1<<(Nbit-1))),
                      .value_lsb(unit_delay))
                    delay2dig(.in(delay), .out(dout_xb));

    // xbit-to-bit conversion
    xbit_to_bit     #(.width(Nbit))
                    conn(.in(dout_xb), .out(dout));

    // range adjustment
    assign out = dout - (1<<(Nbit-1));

endmodule
