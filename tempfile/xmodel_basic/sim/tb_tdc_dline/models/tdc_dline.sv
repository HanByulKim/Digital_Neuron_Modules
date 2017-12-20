/*----------------------------------------------------------------------
MODULE tdc_dline.sv

= Purpose =
A delay-line based time-to-digital converter model.

= Description =
The reference clock is oversampled by multiple phases of the feedback
clock to produce a digitized version of their delay difference.
 
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

module tdc_dline #(
    `parameter_real(fcenter, 93.75e6),  // center frequency (Hz)
    `parameter_real(Ktdc, 50)           // TDC gain (steps/UI)
)(
    `input_xbit clk_ref,                // reference clock input
    `input_xbit clk_fb,                 // feedback clock input
    output bit signed [3:0] out         // timing error output
);

    // internal parameters
    parameter real unit_delay = 1.0/fcenter/Ktdc;

    // variables
    xbit rclk;
    xbit [15:0] fbclk;
    xbit [15:0] pd;
    wire [15:0] pd_bit;

    // delay for the reference clock
    delay_xbit      #(.delay(8*unit_delay))
                    delay_ref(.in(clk_ref), .out(rclk));

    // delay for the feedback clock
    delay_xbit      #(.delay(0.5*unit_delay))
                    delay_fb_0(.in(clk_fb), .out(fbclk[0]));
    delay_xbit      #(.delay(unit_delay))
                    delay_fb_1(.in(fbclk[0]), .out(fbclk[1]));
    delay_xbit      #(.delay(unit_delay))
                    delay_fb_2(.in(fbclk[1]), .out(fbclk[2]));
    delay_xbit      #(.delay(unit_delay))
                    delay_fb_3(.in(fbclk[2]), .out(fbclk[3]));
    delay_xbit      #(.delay(unit_delay))
                    delay_fb_4(.in(fbclk[3]), .out(fbclk[4]));
    delay_xbit      #(.delay(unit_delay))
                    delay_fb_5(.in(fbclk[4]), .out(fbclk[5]));
    delay_xbit      #(.delay(unit_delay))
                    delay_fb_6(.in(fbclk[5]), .out(fbclk[6]));
    delay_xbit      #(.delay(unit_delay))
                    delay_fb_7(.in(fbclk[6]), .out(fbclk[7]));
    delay_xbit      #(.delay(unit_delay))
                    delay_fb_8(.in(fbclk[7]), .out(fbclk[8]));
    delay_xbit      #(.delay(unit_delay))
                    delay_fb_9(.in(fbclk[8]), .out(fbclk[9]));
    delay_xbit      #(.delay(unit_delay))
                    delay_fb_10(.in(fbclk[9]), .out(fbclk[10]));
    delay_xbit      #(.delay(unit_delay))
                    delay_fb_11(.in(fbclk[10]), .out(fbclk[11]));
    delay_xbit      #(.delay(unit_delay))
                    delay_fb_12(.in(fbclk[11]), .out(fbclk[12]));
    delay_xbit      #(.delay(unit_delay))
                    delay_fb_13(.in(fbclk[12]), .out(fbclk[13]));
    delay_xbit      #(.delay(unit_delay))
                    delay_fb_14(.in(fbclk[13]), .out(fbclk[14]));
    delay_xbit      #(.delay(unit_delay))
                    delay_fb_15(.in(fbclk[14]), .out(fbclk[15]));

    // samplers
    dff_xbit        sampler_0(.d(rclk), .q(pd[0]), .clk(fbclk[0]));
    dff_xbit        sampler_1(.d(rclk), .q(pd[1]), .clk(fbclk[1]));
    dff_xbit        sampler_2(.d(rclk), .q(pd[2]), .clk(fbclk[2]));
    dff_xbit        sampler_3(.d(rclk), .q(pd[3]), .clk(fbclk[3]));
    dff_xbit        sampler_4(.d(rclk), .q(pd[4]), .clk(fbclk[4]));
    dff_xbit        sampler_5(.d(rclk), .q(pd[5]), .clk(fbclk[5]));
    dff_xbit        sampler_6(.d(rclk), .q(pd[6]), .clk(fbclk[6]));
    dff_xbit        sampler_7(.d(rclk), .q(pd[7]), .clk(fbclk[7]));
    dff_xbit        sampler_8(.d(rclk), .q(pd[8]), .clk(fbclk[8]));
    dff_xbit        sampler_9(.d(rclk), .q(pd[9]), .clk(fbclk[9]));
    dff_xbit        sampler_10(.d(rclk), .q(pd[10]), .clk(fbclk[10]));
    dff_xbit        sampler_11(.d(rclk), .q(pd[11]), .clk(fbclk[11]));
    dff_xbit        sampler_12(.d(rclk), .q(pd[12]), .clk(fbclk[12]));
    dff_xbit        sampler_13(.d(rclk), .q(pd[13]), .clk(fbclk[13]));
    dff_xbit        sampler_14(.d(rclk), .q(pd[14]), .clk(fbclk[14]));
    dff_xbit        sampler_15(.d(rclk), .q(pd[15]), .clk(fbclk[15]));

    // therometer-to-binary conversion
    xbit_to_bit     #(.width(16))
                    conn(.in(pd), .out(pd_bit));

    always @(pd_bit) begin
        if (pd_bit == 16'b0000_0000_0000_0000)
            out = 4'b1000;
        else if (pd_bit == 16'b1111_1111_1111_1111)
            out = 4'b0111;
        else
            // fill the logic expression to compute the output here
            out = ...;
    end

endmodule
