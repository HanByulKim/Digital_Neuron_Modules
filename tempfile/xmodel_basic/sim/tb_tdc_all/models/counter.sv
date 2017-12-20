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

// DESCRIBE THE FUNCTIONALITY OF THE UP/DOWN COUNTER HERE
always @(posedge clk) begin
    // ... 
end

endmodule

