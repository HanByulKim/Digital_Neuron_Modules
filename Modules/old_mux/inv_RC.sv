/*----------------------------------------------------------------------
MODULE inv_RC.sv

= Purpose =
An RC model of a static CMOS inverter.

= Description =
The switches with resistances and capacitances model the functionality
of the logic gates as well as their timing and power characteristics.
----------------------------------------------------------------------*/

module inv_RC #(
    parameter real WP = 20,     // pmos size in lambdas
    parameter real WN = 10      // nmos size in lambdas
)(
    output xreal Y,
    input xreal A,
    input xreal VDD
);

parameter real Rp = 40e3 * 2 / WP;
parameter real Rn = 20e3 * 2 / WN;
parameter real Cin = 2e-15*(WP+WN)*0.0225;
parameter real Cout = 2e-15*(WP+WN)*0.0225;

xbit A_xb;

capacitor   #(.C(Cin))  C1 (.pos(A), .neg(`ground));
capacitor   #(.C(Cout)) C2 (.pos(Y), .neg(`ground));

xreal_to_xbit_var   CONN_A(.in(A), .out(A_xb), .level1(VDD), .level0(`ground));
switch      #(.R0(Rp), .R1(`INFINITY)) SW_P (.ctrl(A_xb), .pos(VDD), .neg(Y));
switch      #(.R0(`INFINITY), .R1(Rn)) SW_N (.ctrl(A_xb), .pos(Y), .neg(`ground));

endmodule

