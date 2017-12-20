/*----------------------------------------------------------------------
MODULE mux2to1.sv

= Purpose =
An RC model of a static CMOS mux from 2 inputs to 1 output.

= Description =
The switches with resistances and capacitances model the functionality
of the logic gates as well as their timing and power characteristics.
----------------------------------------------------------------------*/

module mux_RC #(
    parameter real WP = 20,     // pmos size in lambdas
    parameter real WN = 10      // nmos size in lambdas
)(
    output xreal Y,
    input xreal D0, D1, SEL,
    input xreal VDD
);

parameter real Rp = 40e3 * 2 / WP;
parameter real Rn = 20e3 * 2 / WN;
parameter real Rp_half = Rp/2;
parameter real Rn_half = Rn/2;

parameter real Cin = 2e-15*2*(WP+WN)*0.0225;
parameter real Cout = 2e-15*2*(WP+WN)*0.0225;
parameter real C_basic = 2*2e-15*2*WN*0.0225;

xreal SEL_b;

xreal D0_p;
xreal D0_n;
xreal D1_p;
xreal D1_n;

xbit D0_xb;
xbit D1_xb;
xbit SEL_xb;
xbit SEL_b_xb;

inv_RC inv1(.A(SEL), .Y(SEL_b), .VDD(VDD));

capacitor   #(.C(Cin)) C1 (.pos(D0), .neg(`ground));
capacitor   #(.C(Cin)) C2 (.pos(D1), .neg(`ground));
capacitor	#(.C(Cin)) C3(.pos(SEL), .neg(`ground));
capacitor	#(.C(Cin)) C4(.pos(SEL_b), .neg(`ground));

capacitor	#(.C(3*C_basic)) C5(.pos(D0_n), .neg(`ground));
capacitor	#(.C(3*C_basic)) C6(.pos(D1_n), .neg(`ground));
capacitor	#(.C(6*C_basic)) C7(.pos(D0_p), .neg(`ground));
capacitor	#(.C(6*C_basic)) C8(.pos(D1_p), .neg(`ground));

capacitor	#(.C(6*C_basic)) C9(.pos(Y), .neg(`ground));


xreal_to_xbit_var   CONN_D0(.in(D0), .out(D0_xb), .level1(VDD), .level0(`ground));
xreal_to_xbit_var   CONN_D1(.in(D1), .out(D1_xb), .level1(VDD), .level0(`ground));
xreal_to_xbit_var   CONN_SEL(.in(SEL), .out(SEL_xb), .level1(VDD), .level0(`ground));
xreal_to_xbit_var   CONN_SEL_B(.in(SEL_b), .out(SEL_b_xb), .level1(VDD), .level0(`ground));

switch      #(.R0(Rp_half), .R1(`INFINITY)) SW_D0_P (.ctrl(D0_xb), .pos(VDD), .neg(D0_p));
switch      #(.R0(`INFINITY), .R1(Rn_half)) SW_D0_N (.ctrl(D0_xb), .pos(D0_n), .neg(`ground));
switch      #(.R0(Rp_half), .R1(`INFINITY)) SW_D1_P (.ctrl(D1_xb), .pos(VDD), .neg(D1_p));
switch      #(.R0(`INFINITY), .R1(Rn_half)) SW_D1_N (.ctrl(D1_xb), .pos(D1_n), .neg(`ground));
switch      #(.R0(Rp_half), .R1(`INFINITY)) SW_SEL_P (.ctrl(SEL_xb), .pos(D1_p), .neg(Y));
switch      #(.R0(`INFINITY), .R1(Rn_half)) SW_SEL_N (.ctrl(SEL_xb), .pos(Y), .neg(D0_n));
switch      #(.R0(Rp_half), .R1(`INFINITY)) SW_SEL_B_P (.ctrl(SEL_b_xb), .pos(D0_p), .neg(Y));
switch      #(.R0(`INFINITY), .R1(Rn_half)) SW_SEL_B_N (.ctrl(SEL_b_xb), .pos(Y), .neg(D1_n));

endmodule

