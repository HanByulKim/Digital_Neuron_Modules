/*----------------------------------------------------------------------
MODULE dco_lin.sv

= Purpose =
A digitally-controlled oscillator with a linear D-to-f characteristic.

= Description =
The input digital code is first converted into a frequency using a
linear equation. Then the frequency is converted to a clock using
a freq_to_clk translator.
 
= Parameters =
||'''NAME'''||'''TYPE'''||'''DESCRIPTION'''||'''UNIT'''||'''DEFAULT'''||
|| fcenter || real || DCO center frequency || Hz || 1.5e9 ||
|| Kdco || real || DCO gain || Hz/step || 150.0e3 ||
|| Nbit || integer || DCO resolution || bit || 10 ||
|| PN_fcenter || real || phase noise center freuquency || Hz || -1.0 ||
|| PN_foffset || real || phase noise offset frequency || Hz || -1.0 ||
|| PN_dbc || real || phase noise measured in dBc || dBc/Hz || 1.0 ||

= Revisions =
$Author$
$DateTIme$
$Id$
----------------------------------------------------------------------*/

`include "xmodel.h"

module dco_lin #(
    `parameter_real(fcenter, 1.5e9),    // DCO center frequency
    `parameter_real(Kdco, 150.0e3),     // DCO gain (Hz/step)
    `parameter_integer(Nbit, 13),       // DCO resolution (bit)
    `parameter_real(PN_fcenter, fcenter),   // phase noise center frequency
    `parameter_real(PN_foffset, 1.0e6), // phase noise offset frequency
    `parameter_real(PN_dbc, -100.0)     // phase noise measured in dBc
)(
    `output_xbit out,                   // output clock
    `input_bit [Nbit-1:0] in	        // input code
);

    // variables
    real freq;
    xreal freq_xr;  

    // digital-to-frequency conversion (linear)
    always @(in) begin
        freq = fcenter + Kdco*real'(in - `pow(2, Nbit-1));
    end

    real_to_xreal conn(.in(freq), .out(freq_xr));

    // frequency-to-clock conversion
    freq_to_clk #(.num_phase(1), .PN_foffset(PN_foffset),
                  .PN_fcenter(PN_fcenter), .PN_dbc(PN_dbc))
                freq2clk(.out(out), .in(freq_xr));

endmodule
