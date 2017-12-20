
`include "xmodel.h"

module tb_limit();
    
    xreal       in_signal, out_signal;

    sin_gen     #(.freq(100e6), .amp(5.0))
                sig1_gen(in_signal);
    limit       #(.upper_limit(3), .lower_limit(-2))
                limit(.out(out_signal), .in(in_signal));

    initial begin
        $xmodel_dumpfile();
        $xmodel_dumpvars();
    end

endmodule
