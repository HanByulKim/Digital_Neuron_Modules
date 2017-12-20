/*----------------------------------------------------------------------
MODULE tb_counter 

= Purpose =
A testbench for 4-bit up/down counter

= Description =
In this exercise, you will learn a basic form of testbench which
supplies stimuli to the DUT and monitors its output.
----------------------------------------------------------------------*/

module tb_counter ();

// signal declarations
reg  clk, up_dnb;
wire [3:0] count;

// stimuli generation
initial clk = 0;
always #(0.5ns) clk = ~clk;

initial up_dnb = 0;
always begin
    up_dnb = 1;
    #(6ns);
    up_dnb = 0;
    #(5ns);
end

// output monitoring
always @(posedge clk) begin
    $display("up_dnb = %b: count = %b (%d)", up_dnb, count, count);
end

// instance declarations
counter     DUT (.clk(clk), .up_dnb(up_dnb), .count(count));

// dump statements
initial begin
    $xmodel_dumpfile("xmodel.jez");
    $xmodel_dumpvars("level=0");
end

endmodule   // tb_counter

