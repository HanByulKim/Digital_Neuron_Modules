/*----------------------------------------------------------------------
MODULE inv_RC.sv

= Purpose =
An RC model of a static CMOS inverter.

= Description =
The switches with resistances and capacitances model the functionality
of the logic gates as well as their timing and power characteristics.
----------------------------------------------------------------------*/

module tg_RC #(
    parameter real WP = 20,     // pmos size in lambdas
    parameter real WN = 10      // nmos size in lambdas
)(
    output xreal S,
    input xreal D,
	input xreal CKN,
	input xreal CKP,
    input xreal VDD
);

parameter real Rp = 40e3 * 2 / WP;
parameter real Rn = 20e3 * 2 / WN;
parameter real Cin = 1.5*2e-15*(WP+WN)*0.0225;
parameter real Cout = 1.5*2e-15*(WP+WN)*0.0225;

xbit CKN_xb;
xbit CKP_xb;

capacitor   #(.C(Cin))  C1 (.pos(D), .neg(`ground));
capacitor   #(.C(Cout)) C2 (.pos(S), .neg(`ground));

xreal_to_xbit_var   CONN_CKN(.in(CKN), .out(CKN_xb), .level1(VDD), .level0(`ground));
xreal_to_xbit_var	CONN_CKP(.in(CKP), .out(CKP_xb), .level1(VDD), .level0(`ground));
switch      #(.R0(Rp), .R1(`INFINITY)) SW_P (.ctrl(CKP_xb), .pos(D), .neg(S));
switch      #(.R0(`INFINITY), .R1(Rn)) SW_N (.ctrl(CKN_xb), .pos(D), .neg(S));

endmodule
