
`include "xmodel.h"

module tb_poly_func();
    
    xreal       in_signal, out_signal;

    pwl_gen     #(.data('{0.0,-10, 100e-9,10}))
                in_sig_gen(in_signal);
    poly_func   #(.data('{11, -8, 2}))
                poly_func_sig(.out(out_signal), .in(in_signal));

    initial begin
        $xmodel_dumpfile();
        $xmodel_dumpvars();
    end

endmodule
