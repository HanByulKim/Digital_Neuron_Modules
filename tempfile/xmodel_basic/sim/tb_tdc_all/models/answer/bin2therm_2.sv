/*----------------------------------------------------------------------
MODULE bin2therm.sv

= Purpose =
A binary-to-thermometer code converter.

= Description =
A 5-bit binary-coded input ranging from 5'b00000 (0) to 5'b11111 (31) is
translated to a 32-bit thermometer-coded output ranging from
31'b0000...0000 (0) to 31'b1111...1111 (31).

= Revisions =
$Author$
$DateTIme$
$Id$
----------------------------------------------------------------------*/

module bin2therm (
    input [4:0] in,                     // binary-coded input
    output reg [30:0] out               // thermometer-coded output
);

integer i;

always @(in) begin
    for(i=0; i<32; i++) begin
        out[i] = (in > i) ? 1 : 0;
    end
end

endmodule

