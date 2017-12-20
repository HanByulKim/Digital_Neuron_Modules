module fa_RC #(
    parameter real WP = 20,     // pmos size in lambdas
    parameter real WN = 10      // nmos size in lambdas
)(
    output xreal Sout,
	output xreal Caout,
    input xreal A,
	input xreal B,
	input xreal Cain,
    input xreal VDD
);

// double stack
parameter real Rp = 40e3 * 2 / (2*WP);
parameter real Rn = 20e3 * 2 / (2*WN);
parameter real Cin = 2e-15*(WP+WN)*0.0225;
parameter real Coutp = 2e-15*2*WP*0.0225;
parameter real Coutn = 2e-15*2*WN*0.0225;

// triple stack
parameter real Rpt = 40e3 * 2 / (43);
parameter real Rnt = 40e3 * 2 / (23);
parameter real Cint = 2e-15*(43+23)*0.0225;
parameter real Couttp = 2e-15*(43)*0.0225;
parameter real Couttn = 2e-15*(23)*0.0225;

xbit A_xb;
xbit B_xb;
xbit Cin_xb;
xbit center1_xb;
xreal center1;
xreal center2;
xreal com1, com2, com3, com4, com5, com6, com7, com8, com9, com10;
/***************/

xreal_to_xbit_var	CONN_A(.in(A), .out(A_xb), .level1(VDD), .level0(`ground));
xreal_to_xbit_var   CONN_B(.in(B), .out(B_xb), .level1(VDD), .level0(`ground));
xreal_to_xbit_var   CONN_C(.in(Cain), .out(Cin_xb), .level1(VDD), .level0(`ground));
xreal_to_xbit_var	CONN_CENTER(.in(center1), .out(center1_xb), .level1(VDD), .level0(`ground));

//**1**//
switch		#(.R0(Rp), .R1(`INFINITY)) P1 (.ctrl(A_xb), .pos(VDD), .neg(com1));
switch		#(.R0(Rp), .R1(`INFINITY)) P2 (.ctrl(B_xb), .pos(VDD), .neg(com1));
switch		#(.R0(Rp), .R1(`INFINITY)) P3 (.ctrl(Cin_xb), .pos(com1), .neg(center1));

switch		#(.R0(`INFINITY), .R1(Rn)) P4 (.ctrl(Cin_xb), .pos(center1), .neg(com2));
switch		#(.R0(`INFINITY), .R1(Rn)) P5 (.ctrl(A_xb), .pos(com2), .neg(`ground));
switch		#(.R0(`INFINITY), .R1(Rn)) P6 (.ctrl(B_xb), .pos(com2), .neg(`ground));

// Cin
capacitor	#(.C(Cin)) C1 (.pos(A), .neg(`ground));
capacitor	#(.C(Cin)) C2 (.pos(B), .neg(`ground));
capacitor	#(.C(Cin)) C3 (.pos(Cain), .neg(`ground));
// Cout
capacitor   #(.C(4*Coutp)) CO1 (.pos(com1), .neg(`ground));
capacitor   #(.C(1*Coutp + 1*Coutn)) CO2 (.pos(center1), .neg(`ground));
capacitor   #(.C(4*Coutn)) CO3 (.pos(com2), .neg(`ground));

//**2**//
switch		#(.R0(Rp), .R1(`INFINITY)) P7 (.ctrl(B_xb), .pos(VDD), .neg(com3));
switch		#(.R0(Rp), .R1(`INFINITY)) P8 (.ctrl(A_xb), .pos(com3), .neg(center1));

switch		#(.R0(`INFINITY), .R1(Rn)) P9 (.ctrl(A_xb), .pos(center1), .neg(com4));
switch		#(.R0(`INFINITY), .R1(Rn)) P10 (.ctrl(B_xb), .pos(com4), .neg(`ground));

// Cin
capacitor	#(.C(Cin)) C4 (.pos(A), .neg(`ground));
capacitor	#(.C(Cin)) C5 (.pos(B), .neg(`ground));
// Cout
capacitor   #(.C(3*Coutp)) CO4 (.pos(com3), .neg(`ground));
capacitor   #(.C(1*Coutp + 1*Coutn)) CO5 (.pos(center1), .neg(`ground));
capacitor   #(.C(3*Coutn)) CO6 (.pos(com4), .neg(`ground));

//** cout **//
inv_RC	    #(.WP(WP), .WN(WN)) inv1 (.Y(Caout), .A(center1), .VDD(VDD));

//**3**//
switch		#(.R0(Rp), .R1(`INFINITY)) P11 (.ctrl(A_xb), .pos(VDD), .neg(com5));
switch		#(.R0(Rp), .R1(`INFINITY)) P12 (.ctrl(B_xb), .pos(VDD), .neg(com5));
switch		#(.R0(Rp), .R1(`INFINITY)) P13 (.ctrl(Cin_xb), .pos(VDD), .neg(com5));
switch		#(.R0(Rp), .R1(`INFINITY)) P14 (.ctrl(center1_xb), .pos(com5), .neg(center2));

switch		#(.R0(`INFINITY), .R1(Rn)) P15 (.ctrl(center1_xb), .pos(center2), .neg(com6));
switch		#(.R0(`INFINITY), .R1(Rn)) P16 (.ctrl(A_xb), .pos(com6), .neg(`ground));
switch		#(.R0(`INFINITY), .R1(Rn)) P17 (.ctrl(B_xb), .pos(com6), .neg(`ground));
switch		#(.R0(`INFINITY), .R1(Rn)) P18 (.ctrl(Cin_xb), .pos(com6), .neg(`ground));

// Cin
capacitor   #(.C(Cin)) C6 (.pos(center1), .neg(`ground));
capacitor   #(.C(Cin)) C7 (.pos(A), .neg(`ground));
capacitor   #(.C(Cin)) C8 (.pos(B), .neg(`ground));
capacitor   #(.C(Cin)) C9 (.pos(Cain), .neg(`ground));
// Cout
capacitor   #(.C(5*Coutp)) CO7 (.pos(com5), .neg(`ground));
capacitor   #(.C(1*Coutp + 1*Coutn)) CO8 (.pos(center2), .neg(`ground));
capacitor   #(.C(5*Coutn)) CO9 (.pos(com6), .neg(`ground));

switch      #(.R0(`INFINITY), .R1(Rnt)) P25 (.ctrl(A_xb), .pos(VDD), .neg(com7));
switch      #(.R0(`INFINITY), .R1(Rnt)) P26 (.ctrl(B_xb), .pos(com7), .neg(com8));
switch      #(.R0(`INFINITY), .R1(Rnt)) P27 (.ctrl(Cin_xb), .pos(com8), .neg(center2));

switch      #(.R0(`INFINITY), .R1(Rnt)) P22 (.ctrl(Cin_xb), .pos(center2), .neg(com9));
switch      #(.R0(`INFINITY), .R1(Rnt)) P23 (.ctrl(B_xb), .pos(com9), .neg(com10));
switch      #(.R0(`INFINITY), .R1(Rnt)) P24 (.ctrl(A_xb), .pos(com10), .neg(`ground));

// Cin
capacitor   #(.C(Cint)) C10 (.pos(A), .neg(`ground));
capacitor   #(.C(Cint)) C11 (.pos(B), .neg(`ground));
capacitor   #(.C(Cint)) C12 (.pos(Cain), .neg(`ground));
// Cout
capacitor   #(.C(3*Couttp)) CO10 (.pos(com7), .neg(`ground));
capacitor   #(.C(3*Couttp)) CO11 (.pos(com8), .neg(`ground));
capacitor   #(.C(1*Couttp + 1*Couttn)) CO12 (.pos(center2), .neg(`ground));
capacitor   #(.C(3*Couttn)) CO13 (.pos(com9), .neg(`ground));
capacitor   #(.C(3*Couttn)) CO14 (.pos(com10), .neg(`ground));

//** sout **//
inv_RC		#(.WP(WP), .WN(WN)) inv2 (.Y(Sout), .A(center2), .VDD(VDD));

endmodule

