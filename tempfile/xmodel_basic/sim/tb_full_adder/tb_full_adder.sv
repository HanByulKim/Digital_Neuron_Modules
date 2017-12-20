/*----------------------------------------------------------------------
TESTBENCH tb_full_adder.sv

= Purpose =
A testbench for full_adder cell.

= Description =
The stimuli generator assigns samples values to the DUT's input
and the output monitor displays the resulting DUT's output.
----------------------------------------------------------------------*/

module tb_full_adder ();

    // signal declarations
    reg A, B, Cin;
    wire Cout, Sout;

    // stimuli generation and output monitoring
    initial begin
        A = 1;
        B = 0;
        Cin = 1;
    
        $display("A    = ", A);
        $display("B    = ", B);
        $display("Cin  = ", Cin);

        #10;
        $display("Sout = ", Sout);
        $display("Cout = ", Cout);
    end

    // instance declarations
    full_adder      DUT (.A(A), .B(B), .Cin(Cin), .Sout(Sout), .Cout(Cout));

endmodule

