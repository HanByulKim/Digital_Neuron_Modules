
`include "xmodel.h"

module tb_rc_filter();

    // signal declarations
    xreal in1, in2, out1, out2;
    xreal n1, n2;

    // stimuli generation    
    step_gen #(.init_value(0.0), .change(1), .delay(1e-08)) XP0 (.out(in1));
    step_gen #(.init_value(0.0), .change(1), .delay(1e-08)) XP4 (.out(in2));

    // RC filter in circuit-level models
    resistor    #(.R(10000)) R0 (.neg(out1), .pos(in1));
    capacitor   #(.C(1e-13)) C0 (.neg(`ground), .pos(out1));

    resistor    #(.R(10000)) R1 (.neg(n1), .pos(in2));
    resistor    #(.R(10000)) R2 (.neg(n2), .pos(n1));
    resistor    #(.R(10000)) R3 (.neg(out2), .pos(n2));
    capacitor   #(.C(1e-13)) C1 (.neg(`ground), .pos(n1));
    capacitor   #(.C(1e-13)) C2 (.neg(`ground), .pos(n2));
    capacitor   #(.C(1e-13)) C3 (.neg(`ground), .pos(out2));
    
    // dump statements
    initial begin
        $xmodel_dumpfile();
        $xmodel_dumpvars();
    end

endmodule
