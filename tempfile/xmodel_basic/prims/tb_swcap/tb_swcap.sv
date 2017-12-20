`include "xmodel.h"

module tb_swcap #(
    parameter real R = 10,		    // resistance
    parameter real C = 1e-11,		// capacitance
    parameter real Rload = 1000		// load resistance
)(
    `output_xreal out
);

// signal declarations
xbit clk, clkb;
xreal in, n1, n2;

// stimuli generation
pulse_gen   #(.init_value(0), .period(2e-09), .width(9e-10), .delay(0.0))
            XP3 (.out(clk));
pulse_gen   #(.init_value(0), .period(2e-09), .width(9e-10), .delay(1e-09))
            XP4 (.out(clkb));
vsource     #(.mode("dc"), .dc(5)) V0 (.neg(`ground), .pos(in), .in(`ground));

// switched-capacitor converter 
switch      #(.R1(R), .R0(`INFINITY)) SW3 (.neg(n2), .pos(out), .ctrl(clk));
switch      #(.R1(R), .R0(`INFINITY)) SW2 (.neg(n1), .pos(out), .ctrl(clkb));
switch      #(.R1(R), .R0(`INFINITY)) SW1 (.neg(`ground), .pos(n2), .ctrl(clkb));
switch      #(.R1(R), .R0(`INFINITY)) SW0 (.neg(n1), .pos(in), .ctrl(clk));
capacitor   #(.C(C), .ic(0.0)) C1 (.neg(`ground), .pos(out));
capacitor   #(.C(C), .ic(0.0)) C0 (.neg(n2), .pos(n1));

// output load
resistor    #(.R(Rload)) R2 (.neg(`ground), .pos(out));

// inline dump statements
initial begin
    $xmodel_dumpfile();
    $xmodel_dumpvars();
end

endmodule   // tb_swcap

