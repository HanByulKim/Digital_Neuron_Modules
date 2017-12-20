
`include "xmodel.h"

module tb_transition();
    
    xreal       out_signal;
    xbit        in_signal;

    pulse_gen   #(.width(200e-12), .period(400e-12))
                in_sig_gen(in_signal);

    // CONVERT THE INPUT XBIT-TYPE SIGNAL TO AN XREAL-TYPE
    // SIGNAL SWINGING BETWEEN -0.5 AND 0.5 AND WITH RISETIME
    // OF 37ps AND FALLTIME OF 22ps
    // ...

    initial begin
        $xmodel_dumpfile();
        $xmodel_dumpvars();
    end

endmodule
