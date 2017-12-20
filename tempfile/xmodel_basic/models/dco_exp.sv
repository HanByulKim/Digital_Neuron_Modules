/*----------------------------------------------------------------------
MODULE dco_exp.sv

= Purpose =
A digitally-controlled oscillator with an exponential D-to-f characteristic.

= Description =
The input digital code is first converted into a frequency using an
exponential equation. Then the frequency is converted to a clock using
a freq_to_clk translator.
 
= Parameters =
||'''NAME'''||'''TYPE'''||'''DESCRIPTION'''||'''UNIT'''||'''DEFAULT'''||
|| fcenter || real || DCO center frequency || Hz || 1.5e9 ||
|| Kdco || real || DCO gain || %/step || 0.01 ||
|| Nbit || integer || DCO resolution || bit || 13 ||
|| PN_fcenter || real || phase noise center freuquency || Hz || 1.5e9 ||
|| PN_foffset || real || phase noise offset frequency || Hz || 1.0e6 ||
|| PN_dbc || real || phase noise measured in dBc || dBc/Hz || -100 ||

= Revisions =
$Author$
$DateTIme$
$Id$
----------------------------------------------------------------------*/

`include "xmodel.h"

module dco_exp #(
    `parameter_real(fcenter, 1.5e9),    // DCO center frequency
    `parameter_real(Kdco, 0.01),        // DCO gain (%/step)
    `parameter_integer(Nbit, 13),       // DCO resolution (bit)
    `parameter_real(PN_fcenter, 1.5e9), // phase noise center frequency
    `parameter_real(PN_foffset, 1.0e6), // phase noise offset frequency
    `parameter_real(PN_dbc, -100.0)     // phase noise measured in dBc
)(
    `output_xbit out,                   // output clock
    `input_bit [Nbit-1:0] in	        // input code
);

    // variables
    real freq;
    xreal freq_xr;  

    // digital-to-frequency conversion (exponential)
    always @(in) begin
        // FILL BELOW TO DESCRIBE AN EXPONENTIAL D-to-F CHARACTERISTIC
        // HINT: Use `pow(X, Y) to compute X^Y
        freq = ...;
    end

    real_to_xreal conn(.in(freq), .out(freq_xr));

    // frequency-to-clock conversion
    freq_to_clk #(.num_phase(1), .PN_foffset(PN_foffset),
                  .PN_fcenter(PN_fcenter), .PN_dbc(PN_dbc))
                freq2clk(.out(out), .in(freq_xr));

endmodule
