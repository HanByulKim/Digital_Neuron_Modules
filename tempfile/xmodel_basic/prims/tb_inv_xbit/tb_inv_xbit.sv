
`include "xmodel.h"

module tb_inv_xbit();
    
    xbit        out_signal, in_signal;

    pulse_gen   #(.width(200e-12), .period(400e-12))
                in_sig_gen(in_signal);

    inv_xbit    #(.delay(120e-12))
                inv_xbit(.out(out_signal), .in(in_signal));

    probe_xbit  #(.format("jezascii"))  in_probe(in_signal);
    probe_xbit  #(.format("jezascii"))  out_probe(out_signal);

endmodule
