/*----------------------------------------------------------------------
MODULE mux2to1.sv

= Purpose =
An RC model of a static CMOS mux from 2 inputs to 1 output.

= Description =
The switches with resistances and capacitances model the functionality
of the logic gates as well as their timing and power characteristics.
----------------------------------------------------------------------*/

module tgmux2 #(
    parameter real WP = 20,     // pmos size in lambdas
    parameter real WN = 10      // nmos size in lambdas
)(
    output xreal Y,
    input xreal D0, D1, SEL,
    input xreal VDD
);

	xreal n;

	inv_RC 	#(.WP(WP), .WN(WN))
			INV1 (.A(SEL), .Y(n), .VDD(VDD));

	tg_double_RC    #(.WP(WP), .WN(WN))
                    TGD1 (.S(Y), .D1(D0), .D2(D1), .CKN1(SEL), .CKN2(n), .CKP1(n), .VDD(VDD)); 
   
endmodule

