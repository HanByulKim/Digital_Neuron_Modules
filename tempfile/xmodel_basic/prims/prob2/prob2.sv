// Problem 2: model an ideal op-amp with gain of 2
// and its output limited between +5 and -5V

`include "xmodel.h"

module prob2;
    xreal x, y;
    sin_gen #(.freq(1e9), .amp(3)) gen_x(x);

    // TODO: implement here

    initial begin
        $xmodel_dumpfile();
        $xmodel_dumpvars();
    end
endmodule
