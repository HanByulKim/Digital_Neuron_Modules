/*----------------------------------------------------------------------
TESTBENCH tb_bin2therm.sv

= Purpose =
Checking the functionality of bin2therm module.

= Description =
Creates a sequentially increasing 5-bit code and checks the result.

= Revisions =
$Author$
$DateTIme$
----------------------------------------------------------------------*/

module tb_bin2therm();

    reg [4:0] in;
    wire [30:0] out;
    reg [30:0] out_ref;
    integer i; 

    // module under test
    bin2therm   dut(.in(in), .out(out));

    initial begin
        for (i=0; i<32; i++) begin
            in = i;
            out_ref = (1<<i) - 1;
            #10;

            if (out == out_ref) 
                $display("in = %b: out = %b (CORRECT)", in, out);
            else
                $display("in = %b: out = %b (WRONG)", in, out);
        end
    end

endmodule

