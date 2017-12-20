/*----------------------------------------------------------------------
MODULE tdc_gosc.sv

= Purpose =
A gated-oscillator based time-to-digital converter model.

= Description =
First, a linear phase-frequency detector (PFD) compares the two input
clocks. Then, a pair of gated-oscillators digitize the PFD output pulse
widths.

= Parameters =
||'''NAME'''||'''TYPE'''||'''DESCRIPTION'''||'''UNIT'''||'''DEFAULT'''||
|| fcenter || real || center frequency || Hz || 93.75e6 ||
|| Ktdc || real || TDC gain || steps/UI || 50 ||

= Revisions =
$Author$
$DateTIme$
$Id$
----------------------------------------------------------------------*/

`include "xmodel.h"

module tdc_gosc #(
    `parameter_real(fcenter, 93.75e6),  // center frequency (Hz)
    `parameter_real(Ktdc, 50)           // TDC gain (steps/UI)
)(
    `input_xbit clk_ref,                // reference clock input
    `input_xbit clk_fb,                 // feedback clock input
    output reg signed [3:0] out         // timing error output
);

    // variables
    xbit up, dn;
    xreal freq_up, freq_dn;
    xbit clk_up, clk_dn;
    reg [5:0] count_up, count_dn;
    reg [5:0] up_sample, up_prev;
    reg [5:0] dn_sample, dn_prev;
    reg signed [5:0] dout;

    // phase-frequency detection
    pfd             #(.delay_rst(50e-12))
                    pfd(.clk_ref(clk_ref), .clk_fb(clk_fb), .up(up), .dn(dn));

    // gated oscillators
    transition      #(.value0(0.0), .value1(fcenter*Ktdc))
                    conn_up(.in(up), .out(freq_up));
    transition      #(.value0(0.0), .value1(fcenter*Ktdc))
                    conn_dn(.in(dn), .out(freq_dn));

    freq_to_clk     #(.num_phase(1), .init_phase(0.0))
                    gosc_up(.in(freq_up), .out(clk_up));
    freq_to_clk     #(.num_phase(1), .init_phase(0.0))
                    gosc_dn(.in(freq_dn), .out(clk_dn));

    // counters
    initial count_up = 0;
    always @(posedge `value(clk_up)) begin
        count_up <= count_up + 1;
    end

    initial count_dn = 0;
    always @(posedge `value(clk_dn)) begin
        count_dn <= count_dn + 1;
    end

    // samplers
    always @(posedge `value(clk_ref)) begin
        up_prev <= up_sample;
        up_sample <= count_up;
    end

    always @(posedge `value(clk_fb)) begin
        dn_prev <= dn_sample;
        dn_sample <= count_dn;
    end

    // output
    always @(*) begin
        dout = (up_sample-up_prev) - (dn_sample-dn_prev);
        if (dout > 7) dout = 7;
        if (dout < -8) dout = -8;
    end

    always @(posedge `value(clk_fb)) begin
        out <= dout[3:0];
    end

endmodule
