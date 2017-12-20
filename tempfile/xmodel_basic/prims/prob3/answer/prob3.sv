// Problem 3: model a first-order low-pass filter with a pole at 400MHz
// and feed it with step signals of which rise time is 0, 1ns, and 5ns,
// respectively

`include "xmodel.h"

module prob3;
    xreal in0 ,in1, in2;
    xreal out0, out1, out2;

    step_gen    #(.change(1)) p0(in0);
    pwl_gen     #(.data('{0, 0, 1e-9, 1})) p1(in1);
    pwl_gen     #(.data('{0, 0, 5e-9, 1})) p2(in2);

    filter      #(.poles('{4e8, 0})) filter0(.in(in0), .out(out0));
    filter      #(.poles('{4e8, 0})) filter1(.in(in1), .out(out1));
    filter      #(.poles('{4e8, 0})) filter2(.in(in2), .out(out2));

    initial begin
        $xmodel_dumpfile();
        $xmodel_dumpvars();
    end
endmodule

