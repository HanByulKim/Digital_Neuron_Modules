
`include "xmodel.h"

module tb_diffamp (
    `output_xreal outp,
    `output_xreal outn
);

// signal declarations
xreal inp, inn;
xreal vdd, tail;

// stimuli generation
sin_gen     #(.amp(0.1), .offset(1.5), .freq(1e+09)) XP3 (.out(inp));
dc_gen      #(.value(1.5)) XP2 (.out(inn));
vsource     #(.mode("dc"), .dc(3)) V0 (.neg(`ground), .pos(vdd), .in(`ground));

// instance declarations
nmosfet     #(.Vth(0.5), .Kp(0.01)) M0 (.g(inp), .d(outn), .b(tail), .s(tail));
nmosfet     #(.Vth(0.5), .Kp(0.01)) M1 (.g(inn), .d(outp), .b(tail), .s(tail));
resistor    #(.R(1000)) R1 (.neg(outp), .pos(vdd));
resistor    #(.R(1000)) R0 (.neg(outn), .pos(vdd));
isource     #(.mode("dc"), .dc(0.001))
            I0 (.neg(`ground), .pos(tail), .in(`ground));

// dump statements
initial begin
    $xmodel_dumpfile();
    $xmodel_dumpvars();
end

endmodule   // tb_diffamp

