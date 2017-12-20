
`include "xmodel.h"

module tb_limit();
    
    xreal       in_signal, out_signal;

    sin_gen     #(.freq(100e6), .amp(5.0))
                sig1_gen(in_signal);
    // ADD A PRIMITIVE HERE TO LIMIT THE SIGNAL BETWEEN -2 AND 3
    // ...

    initial begin
        $xmodel_dumpfile();
        $xmodel_dumpvars();
    end

endmodule
