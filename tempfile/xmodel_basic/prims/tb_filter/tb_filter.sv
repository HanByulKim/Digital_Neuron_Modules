
`include "xmodel.h"

module tb_filter();
    
    xreal       in_signal, out_signal;

    step_gen    #(.delay(30e-9), .init_value(0.0), .change(1.0))
                in_sig_gen(in_signal);

    // DESCRIBE A FILTER WITH TWO POLES AT 10MHZ AND 100MHZ
    // ...

    initial begin
        $xmodel_dumpfile();
        $xmodel_dumpvars();
    end

endmodule
