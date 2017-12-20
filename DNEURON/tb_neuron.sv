/*----------------------------------------------------------------------
TESTBENCH tb_neuron.sv

= Purpose =
A testbench for the digital neuron model.

= Description =
The testbench feeds a random data to the digital neuron and checks whether
its output is matched to that of a reference neuron model. 
----------------------------------------------------------------------*/

module tb_neuron;

//---- signal declarations
// convention: add '_xb' suffix for xbit signals and '_xr' suffix for xreal signals
wire CK1, CK2; 
xbit CK1_xb, CK2_xb;
xreal CK1_xr, CK2_xr;
xreal VDD;
reg [7:0] D0, D1, D2, D3, D4, D5, D6, D7;
xreal [7:0] D0_xr, D1_xr, D2_xr, D3_xr, D4_xr, D5_xr, D6_xr, D7_xr;
wire [7:0] Q, Q_ref;
xreal [7:0] Q_xr;

//---- parameter definitions
parameter real f_CK1 = 100e6;
parameter real f_CK2 = 1e9;
parameter real Rdrv = 5e3;
parameter real Cdrv = 1e-15;
parameter real Cload = 20e-15;

//---- clocks generation
// CK1: 100MHz, CK2: frequency of your choice (e.g. 1GHz)
clk_gen     #(.freq(f_CK1)) I_CK1 (.out(CK1_xb));
clk_gen     #(.freq(f_CK2)) I_CK2 (.out(CK2_xb));
xbit_to_bit #(.width(2)) CONN_CK (.in({CK1_xb, CK2_xb}), .out({CK1, CK2}));

//---- supply voltage generation
vsource     #(.dc(1.0), .mode("dc")) I_VDD (.pos(VDD), .neg(`ground), .in(`ground));

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

//---- circuit model
bit_to_xreal_var #(.width(8), .Rout(Rdrv), .Cout(Cdrv)) CONN_D0 (.in(D0), .out(D0_xr), .level1(VDD), .level0(`ground));
bit_to_xreal_var #(.width(8), .Rout(Rdrv), .Cout(Cdrv)) CONN_D1 (.in(D1), .out(D1_xr), .level1(VDD), .level0(`ground));
bit_to_xreal_var #(.width(8), .Rout(Rdrv), .Cout(Cdrv)) CONN_D2 (.in(D2), .out(D2_xr), .level1(VDD), .level0(`ground));
bit_to_xreal_var #(.width(8), .Rout(Rdrv), .Cout(Cdrv)) CONN_D3 (.in(D3), .out(D3_xr), .level1(VDD), .level0(`ground));
bit_to_xreal_var #(.width(8), .Rout(Rdrv), .Cout(Cdrv)) CONN_D4 (.in(D4), .out(D4_xr), .level1(VDD), .level0(`ground));
bit_to_xreal_var #(.width(8), .Rout(Rdrv), .Cout(Cdrv)) CONN_D5 (.in(D5), .out(D5_xr), .level1(VDD), .level0(`ground));
bit_to_xreal_var #(.width(8), .Rout(Rdrv), .Cout(Cdrv)) CONN_D6 (.in(D6), .out(D6_xr), .level1(VDD), .level0(`ground));
bit_to_xreal_var #(.width(8), .Rout(Rdrv), .Cout(Cdrv)) CONN_D7 (.in(D7), .out(D7_xr), .level1(VDD), .level0(`ground));
bit_to_xreal_var #(.width(1), .Rout(Rdrv), .Cout(Cdrv)) CONN_CK1 (.in(CK1), .out(CK1_xr), .level1(VDD), .level0(`ground));
bit_to_xreal_var #(.width(1), .Rout(Rdrv), .Cout(Cdrv)) CONN_CK2 (.in(CK2), .out(CK2_xr), .level1(VDD), .level0(`ground));

neuron_ckt I_CKT (.D0_xr, .D1_xr, .D2_xr, .D3_xr, .D4_xr, .D5_xr, .D6_xr, .D7_xr, .Q_xr, .CK1_xr, .CK2_xr, .VDD);

capacitor        #(.C(Cload)) C0[7:0] (.pos(Q_xr), .neg(`ground));
xreal_to_bit_var #(.width(8)) CONN_Q (.in(Q_xr), .out(Q), .level1(VDD), .level0(`ground));

//---- output check
int pass=0, fail=0;
always @(posedge CK1) begin
    if (Q == Q_ref) pass++;
    else begin
        $display($time, ": ERROR detected: %b vs. %b", Q, Q_ref);
        fail++;
    end
end

final begin
    $display("NUMBER OF ERRORS: %d out of %d\n", fail, pass+fail);
end

//---- waveform recording
initial begin
    $xmodel_dumpfile("tb_neuron.fsdb");
    $xmodel_dumpvars();
end


endmodule

