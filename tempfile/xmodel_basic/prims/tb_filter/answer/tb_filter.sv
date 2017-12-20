
`include "xmodel.h"

module tb_filter();
    
    xreal       in_signal, out_signal;

    step_gen    #(.delay(30e-9), .init_value(0.0), .change(1.0))
                in_sig_gen(in_signal);
    filter      #(.poles('{10e6, 0, 100e6, 0}))
                filter(.out(out_signal), .in(in_signal));

    initial begin
        $xmodel_dumpfile();
        $xmodel_dumpvars();
    end

endmodule
