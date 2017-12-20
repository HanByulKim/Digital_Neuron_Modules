/*----------------------------------------------------------------------
MODULE mux2to1.sv

= Purpose =
An RC model of a static CMOS mux from 2 inputs to 1 output.

= Description =
The switches with resistances and capacitances model the functionality
of the logic gates as well as their timing and power characteristics.
----------------------------------------------------------------------*/

module new_mux_RC #(
    parameter real WP = 20,     // pmos size in lambdas
    parameter real WN = 10,      // nmos size in lambdas
	parameter real WPS = 20
)(
    output xreal Y,
    input xreal D0, SEL,
    input xreal VDD
);

parameter real Rp = 40e3 * 2 / WP;
parameter real Rn = 20e3 * 2 / WN;
parameter real Rps = 40e3 * 2 / WPS;
parameter real Rp_half = Rp / 2;
parameter real Rn_half = Rn / 2;

parameter real Cin = 2*2e-15*(WP+WN)*0.0225;
parameter real Cinp = 2*2e-15*(WP)*0.0225;
parameter real Cinn = 2*2e-15*(WN)*0.0225;
parameter real Cin2 = 2e-15*(WPS)*0.0225;	// single stack

parameter real Cout = 2*2e-15*(WP+WN)*0.0225;	// double stack output junction
parameter real Cout2 = 2e-15*(WPS)*0.0225;	// single stack junction

parameter real Cp_d = 2*2e-15*(2*WP)*0.0225;	// double p junction
parameter real Cn_d = 2*2e-15*(2*WN)*0.0225;	// double n junction

parameter real C_basic = 2*2e-15*WN*0.0225;

xreal SEL_b;
xreal D0_p;
xreal D0_n;
xreal Y_b;

xbit D0_xb;
xbit SEL_xb;
xbit SEL_b_xb;

inv_RC inv1(.A(SEL), .Y(SEL_b), .VDD(VDD));

capacitor   #(.C(Cin)) C1(.pos(D0), .neg(`ground));
capacitor	#(.C(Cinp)) C2(.pos(SEL), .neg(`ground));
capacitor	#(.C(Cinn)) C3(.pos(SEL_b), .neg(`ground));
capacitor	#(.C(Cin2)) C4(.pos(SEL_b), .neg(`ground));

capacitor	#(.C(Cn_d)) C5(.pos(D0_n), .neg(`ground));
capacitor	#(.C(Cp_d)) C7(.pos(D0_p), .neg(`ground));

capacitor	#(.C(Cout)) C9(.pos(Y), .neg(`ground));
capacitor	#(.C(Cout2)) C10(.pos(Y), .neg(`ground));

xreal_to_xbit_var   CONN_D0(.in(D0), .out(D0_xb), .level1(VDD), .level0(`ground));
xreal_to_xbit_var   CONN_SEL(.in(SEL), .out(SEL_xb), .level1(VDD), .level0(`ground));
xreal_to_xbit_var   CONN_SEL_B(.in(SEL_b), .out(SEL_b_xb), .level1(VDD), .level0(`ground));

//1st
switch      #(.R0(Rp_half), .R1(`INFINITY)) SW_D0_P1 (.ctrl(D0_xb), .pos(VDD), .neg(D0_p));
switch      #(.R0(Rp_half), .R1(`INFINITY)) SW_D0_P2 (.ctrl(SEL_xb), .pos(D0_p), .neg(Y_b));

switch      #(.R0(`INFINITY), .R1(Rn_half)) SW_D0_N1 (.ctrl(SEL_b_xb), .pos(Y_b), .neg(D0_n));
switch      #(.R0(`INFINITY), .R1(Rn_half)) SW_D0_N2 (.ctrl(D0_xb), .pos(D0_n), .neg(`ground));

//2nd
switch      #(.R0(Rps), .R1(`INFINITY)) SW_SEL_P (.ctrl(SEL_b_xb), .pos(VDD), .neg(Y_b));
//

inv_RC inv2(.A(Y_b), .Y(Y), .VDD(VDD));

endmodule

