/*----------------------------------------------------------------------
MODULE nand2_RC.sv

= Purpose =
An RC model of a static CMOS 2-input NAND gate.

= Description =
The switches with resistances and capacitances model the functionality
of the logic gates as well as their timing and power characteristics.
----------------------------------------------------------------------*/

module nand2_RC #(
    parameter real WP = 20,     // pmos size in lambdas
    parameter real WN = 20      // nmos size in lambdas
)(
    output xreal Y,
    input xreal A,
    input xreal B,
    input xreal VDD
);

parameter real Rp = 40e3 * 2 / WP;
parameter real Rn = 20e3 * 2 / WN;
parameter real Cin = 2e-15*(WP+WN)*0.0225;
parameter real Cout = 2e-15*(2*WP+WN)*0.0225;
parameter real Cmid = 2e-15*(3*WN)*0.0225;

xbit A_xb, B_xb;
xreal mid;

capacitor   #(.C(Cin))  C1 (.pos(A), .neg(`ground));
capacitor   #(.C(Cin))  C2 (.pos(B), .neg(`ground));
capacitor   #(.C(Cout)) C3 (.pos(Y), .neg(`ground));
capacitor   #(.C(Cmid)) C4 (.pos(mid), .neg(`ground));

xreal_to_xbit_var   CONN_A(.in(A), .out(A_xb), .level1(VDD), .level0(`ground));
xreal_to_xbit_var   CONN_B(.in(B), .out(B_xb), .level1(VDD), .level0(`ground));
switch      #(.R0(Rp), .R1(`INFINITY)) SW_PA (.ctrl(A_xb), .pos(VDD), .neg(Y));
switch      #(.R0(Rp), .R1(`INFINITY)) SW_PB (.ctrl(B_xb), .pos(VDD), .neg(Y));
switch      #(.R0(`INFINITY), .R1(Rn)) SW_NA (.ctrl(A_xb), .pos(Y), .neg(mid));
switch      #(.R0(`INFINITY), .R1(Rn)) SW_NB (.ctrl(B_xb), .pos(mid), .neg(`ground));

endmodule

