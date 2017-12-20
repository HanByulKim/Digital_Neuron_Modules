/*----------------------------------------------------------------------
MODULE digital_lf_fd.v

= Purpose =
A PLL digital loop filter with a frequency acquisition aid.

= Description =
The digital loop filter has a basic PI-controller with an integral gain Ki
and a proportional gain Kp.

    out[n] = Kp*in[n] + Ki*sum(j=1..n-1) in[j]

= Parameters =
||'''NAME'''||'''TYPE'''||'''DESCRIPTION'''||'''UNIT'''||'''DEFAULT'''||
|| Kp || integer || proportional gain || None || 32 ||
|| Ki || integer || integral gain || None || 1 ||
|| Kf || integer || FD gain || None || 256 ||

= Revisions =
$Author$
$DateTIme$
----------------------------------------------------------------------*/

`include "xmodel.h"

module digital_lf_fd #(
    `parameter_integer(Kp, 32),         // proportional gain
    `parameter_integer(Ki, 1),          // integral gain
    `parameter_integer(Kf, 256),        // FD gain
    `parameter_integer(init_value, 13'b1_0000_0000_0000)
                                        // initial ctrl value
)(
    input signed [3:0] in,              // timing error input
    input fup, fdn,                     // frequency detector input
    output reg [12:0] out,              // control output
    input clk,                          // triggering clock
    input reset                         // reset signal
);

    // variables
    reg     [12:0]  acc;
    wire    [12:0]  in_ext;

    // digital filter
    assign in_ext = {{9{in[3]}}, in};

    always @(posedge clk or reset) begin
        if (reset) begin
            acc <= init_value;
        end
        else begin
            acc <= acc + Ki*in_ext + Kf*fup - Kf*fdn;
        end
    end

    always @(reset or acc or in_ext) begin
        if(reset) begin
            out = init_value;
        end
        else begin
            out = Kp*in_ext + acc;
        end
    end

endmodule
