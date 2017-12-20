/*----------------------------------------------------------------------
TESTBENCH tb_neuron_ref.sv

= Purpose =
A testbench for the reference digital neuron model.

= Description =
The testbench feeds a random data to the digital neuron. 
----------------------------------------------------------------------*/

module tb_neuron_ref;

//---- signal declarations
wire CK1;
xbit CK1_xb;
reg [7:0] D0, D1, D2, D3, D4, D5, D6, D7;
wire [7:0] Q_ref;

//---- parameter definitions
parameter real f_CK1 = 100e6;

//---- clocks generation
clk_gen     #(.freq(f_CK1)) I_CK1 (.out(CK1_xb));
xbit_to_bit #(.width(1)) CONN_CK1 (.in(CK1_xb), .out(CK1));

//---- input data generation
always @(posedge CK1) begin
    D0 = $random;
    D1 = $random;
    D2 = $random;
    D3 = $random;
    D4 = $random;
    D5 = $random;
    D6 = $random;
    D7 = $random;
end

//---- reference model
neuron_ref I_REF (.D0, .D1, .D2, .D3, .D4, .D5, .D6, .D7, .Q(Q_ref));

//---- output check
always @(posedge CK1) begin
    $display($time, ": OUTPUT = %b", Q_ref);
end

//---- waveform recording
initial begin
    $xmodel_dumpfile("tb_neuron_ref.fsdb");
    $xmodel_dumpvars();
end

endmodule

