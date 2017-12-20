// Problem 3: model a first-order low-pass filter with a pole at 400MHz
// and feed it with step signals of which rise time is 0, 1ns, and 5ns,
// respectively

`include "xmodel.h"

module prob3;

    // DESCRIBE THE INPUT STEP SIGNALS HERE
    // ...

    // DESCRIBE THE FILTER HERE
    // ...

    initial begin
        $xmodel_dumpfile();
        $xmodel_dumpvars();
    end

endmodule
