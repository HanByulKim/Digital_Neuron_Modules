/*----------------------------------------------------------------------
MODULE counter

= Purpose =
A 4-bit up/down counter model in Verilog

= Description =
In this exercise, you will practice using the procedural statements 
in Verilog.
----------------------------------------------------------------------*/

module counter (
    output reg [3:0] count,
    input up_dnb,
    input clk
);

initial count = 0;

always @(posedge clk) begin
    if (up_dnb) count <= count + 1;
    else count <= count - 1;
end

endmodule

