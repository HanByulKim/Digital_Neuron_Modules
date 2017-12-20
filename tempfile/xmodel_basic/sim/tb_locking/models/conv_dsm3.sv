/*----------------------------------------------------------------------
MODEL conv_dsm3.sv

= Purpose =
A converter to achieve a 13-bit effective resolution with 10-bit signal
using a 3rd-order MASH-type delta-sigma modulator.

= Revisions =
$Id$
$Authors$
$DateTime$
----------------------------------------------------------------------*/

module conv_dsm3(
    input [12:0] in,            // input from loop filter
    output [9:0] out,           // output after delta sigma modulation
    input clk                   // clock input
);

wire [3:0] dsm_out;

assign out = in[12:3] + {{6{dsm_out[3]}}, dsm_out};

dsm_mash3 dsm_mash3(.din({in[2:0], 7'd0}), .dout(dsm_out), .clk(clk));

endmodule


// 3rd-order MASH-type delta-sigma modulator
module dsm_mash3(
    input [9:0] din,            // digital input 
    output signed [3:0] dout,   // delta sigma modulator output (4-bit)
    input clk                   // clock input
);

wire signed [13:0]  err1, err2, err3;
wire signed [3:0]   dout1, dout2, dout3;

// MASH-type delta-sigma modulator
dsm_mash_unit unit_1(.clk(clk), .din({4'b0000,din}),
                     .nx(dout2), .dout(dout1), .err(err1)); 
dsm_mash_unit unit_2(.clk(clk), .din(err1),
                     .nx(dout3), .dout(dout2), .err(err2)); 
dsm_mash_unit unit_3(.clk(clk), .din(err2),
                     .nx(4'b0), .dout(dout3), .err(err3));

// final output
assign dout = dout1;

endmodule


// MASH-type delta-sigma modulator unit-cell
module dsm_mash_unit (
    input clk,                  // clock input
    input signed [13:0] din,    // signed 1bit, integer 3bit, fraction 10bit
    input signed [3:0] nx,      // signed 1bit, integer 3bit
    output signed [3:0] dout,   // signed 1bit, integer 3bit
    output signed [13:0] err    // signed 1bit, integer 3bit, fraction 10bit
);

wire signed [13:0] sum;
reg signed [13:0] err_d;
reg signed [3:0] nx_d;

// quantizer and error accumulator
assign sum = din + err_d;
assign err = sum - {sum[13:10], 10'b0};
assign dout = sum[13:10] + nx - nx_d;

initial begin
    err_d <= 14'b0;
    nx_d <= 4'b0;
end

always @(posedge clk) begin
    err_d <= err;
    nx_d <= nx;
end

endmodule

