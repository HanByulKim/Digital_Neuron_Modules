
`include "xmodel.h"

module tb_slice();
    
    xreal       in_signal, ref_signal;
    xbit        out_signal;

    sin_gen     #(.freq(100e6), .offset(1.0), .amp(2.0))
                in_sig_gen(in_signal);
    dc_gen      #(.value(0.5))
                ref_sig_gen(ref_signal);
    slice       #(.threshold(0.0))
                slice(.out(out_signal), .in(in_signal), .in_ref(ref_signal));

    initial begin
        $xmodel_dumpfile();
        $xmodel_dumpvars();
    end

endmodule
