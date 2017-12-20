
`include "xmodel.h"

module tb_compare();
    
    xreal       in_signal, ref_signal;
    xbit        trig_signal, out_signal;

    sin_gen     #(.freq(100e6), .offset(1), .amp(2))
                in_sig_gen(in_signal);
    dc_gen      #(.value(1))
                ref_sig_gen(ref_signal);
    pulse_gen   #(.width(3.5e-9), .period(7e-9))
                trig_sig_gen(trig_signal);
    
    compare     #(.threshold(0))
                slice(.out(out_signal), .trig(trig_signal),
                      .in(in_signal), .in_ref(ref_signal));

    probe_xreal #(.format("jezascii"))  in_probe(in_signal);
    probe_xreal #(.format("jezascii"))  ref_probe(ref_signal);
    probe_xbit  #(.format("jezascii"))  trig_probe(trig_signal);
    probe_xbit  #(.format("jezascii"))  out_probe(out_signal);

endmodule
