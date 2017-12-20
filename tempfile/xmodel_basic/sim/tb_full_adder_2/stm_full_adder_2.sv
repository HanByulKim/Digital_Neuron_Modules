/*----------------------------------------------------------------------
MODULE stm_full_adder_2

= Purpose =
A stimulus generator for module full_adder

= Description =
Periodically generating random values for the input signals.
----------------------------------------------------------------------*/

module stm_full_adder_2 (
    output reg A, B, Cin
);

always begin
    A = $urandom_range(1);
    B = $urandom_range(1);
    Cin = $urandom_range(1);
        
    $display("A    = ", A);
    $display("B    = ", B);
    $display("Cin  = ", Cin);
    
    #10;
end

endmodule

