/*----------------------------------------------------------------------
MODULE mon_full_adder_2

= Purpose =
An output monitor for module full_adder

= Description =
Using an always statement instead of the initial statement in order
to dump the results whenever they are updated.
----------------------------------------------------------------------*/

module mon_full_adder_2 (
    input Sout, Cout
);

always @(Sout or Cout) begin
    $display("Sout = ", Sout);
    $display("Cout = ", Cout);
end

endmodule

