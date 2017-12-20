/*----------------------------------------------------------------------
MODULE neuron_ref.sv

= Purpose =
A reference model for a digital neuron.

= Description =
A Verilog functional model of a neuron that adds eight 8-bit inputs
and produces a rectified linear (ReLU) output.
----------------------------------------------------------------------*/

module neuron_ref (
    input [7:0] D0, D1, D2, D3, D4, D5, D6, D7,
    output [7:0] Q
);

wire [10:0] S;

assign S = D0 + D1 + D2 + D3 + D4 + D5 + D6 + D7;
assign Q = (S[10]) ? 8'b0 : S[9:2];

endmodule

