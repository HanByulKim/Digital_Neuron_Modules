// Problem 1:  compute y = (2x + 3)^2

`include "xmodel.h"

module prob1;
    xreal x, y;
    step_gen #(.init_value(-1), .change(3), .delay(3e-9)) gen_x(x);

    // TODO: implement here

    initial begin
        $xmodel_dumpfile();
        $xmodel_dumpvars();
    end

endmodule
