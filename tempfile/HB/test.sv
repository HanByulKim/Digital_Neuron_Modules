`include "xmodel.h"

module test();

	xreal S;
	xreal A;
	xreal B;
	xreal C;
	xreal Cin;
	xreal VDD;

	vsource #(.dc(1.0), .mode("dc")) I_VDD (.pos(VDD), .neg(`ground), .in(`ground));
	dc_gen #(.value(1.0)) my_gen2(A);
	step_gen #(.init_value(0.0), .change(1.0), .delay(5e-9)) my_gen3(B);
	dc_gen #(.value(0.0)) my_gen5(Cin);

	//e8bit_fa fa1(.Sout(S), .Cout(C), .A(A), .B(B), .Cin(Cin), .VDD(VDD));
	fa_RC fa2(.Sout(S), .Caout(C), .A(A), .B(B), .Cain(Cin), .VDD(VDD));

always @(A or B or Cin or C or S) begin
	$display("A = ", A);
	$display("B = ", B);
	$display("Cin = ", Cin);
	$display("Cout = ", C);
	$display("Sout = ", S);
end

//---- waveform recording
initial begin
    $xmodel_dumpfile("test.fsdb");
    $xmodel_dumpvars();
end


endmodule
