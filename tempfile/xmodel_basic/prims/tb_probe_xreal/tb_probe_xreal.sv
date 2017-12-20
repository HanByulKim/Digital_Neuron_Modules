
`include "xmodel.h"

module tb_probe_xreal();
    
    xreal       signal;

    sin_gen     #(.freq(100e6))
                my_gen(signal);

    probe_xreal #(.format("jezascii"), .start(1e-9), .filename("test.jez"))  my_probe(signal);

endmodule
