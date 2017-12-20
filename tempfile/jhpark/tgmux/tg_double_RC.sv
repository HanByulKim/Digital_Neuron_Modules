/*----------------------------------------------------------------------
MODULE inv_RC.sv

= Purpose =
An RC model of a static CMOS inverter.

= Description =
The switches with resistances and capacitances model the functionality
of the logic gates as well as their timing and power characteristics.
----------------------------------------------------------------------*/

module tg_double_RC #(
    parameter real WP = 20,     // pmos size in lambdas
    parameter real WN = 10      // nmos size in lambdas
)(
    output xreal S,
    input xreal D1,
	input xreal D2,
	input xreal CKN1,
	input xreal CKN2,
	input xreal CKP1,
	input xreal CKP2,
    input xreal VDD
);

parameter real Rp = 40e3 * 2 / WP;
parameter real Rn = 20e3 * 2 / WN;
parameter real Cin = 1.5*2e-15*(WP+WN)*0.0225;
parameter real Cout = 1.5*2e-15*(WP+WN)*0.0225;

xbit CKN_xb1;
xbit CKN_xb2;
xbit CKP_xb1;
xbit CKP_xb2;

capacitor   #(.C(Cin))  C1 (.pos(D1), .neg(`ground));
capacitor   #(.C(Cin))  C2 (.pos(D2), .neg(`ground));
capacitor   #(.C(2*Cout)) C3 (.pos(S), .neg(`ground));

xreal_to_xbit_var   CONN_CKN1 (.in(CKN1), .out(CKN_xb1), .level1(VDD), .level0(`ground));
xreal_to_xbit_var	CONN_CKP1 (.in(CKP1), .out(CKP_xb1), .level1(VDD), .level0(`ground));
xreal_to_xbit_var   CONN_CKN2 (.in(CKN2), .out(CKN_xb2), .level1(VDD), .level0(`ground));
xreal_to_xbit_var	CONN_CKP2 (.in(CKP2), .out(CKP_xb2), .level1(VDD), .level0(`ground));

switch      #(.R0(Rp), .R1(`INFINITY)) SW_P1 (.ctrl(CKP_xb1), .pos(D1), .neg(S));
switch      #(.R0(`INFINITY), .R1(Rn)) SW_N1 (.ctrl(CKN_xb1), .pos(D1), .neg(S));
switch      #(.R0(Rp), .R1(`INFINITY)) SW_P2 (.ctrl(CKP_xb2), .pos(D2), .neg(S));
switch      #(.R0(`INFINITY), .R1(Rn)) SW_N2 (.ctrl(CKN_xb2), .pos(D2), .neg(S));

endmodule
