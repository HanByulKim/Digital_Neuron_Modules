
`include "xmodel.h"

module tb_slice();
    
    xreal       in_signal, ref_signal;
    xbit        out_signal;

    // GENERATE A SINUSOID SIGNAL WITH 2V AMPLITUDE AND 1V OFFSET
    // AND SLICE IT AT 0.5V
    // ...

    initial begin
        $xmodel_dumpfile();
        $xmodel_dumpvars();
    end

endmodule
