
`include "xmodel.h"

module tb_add();
    
    xreal       signal1, signal2, out;

    sin_gen     #(.delay(10e-9), .freq(50e6), .amp(1.0))
                sig1_gen(signal1);
    sin_gen     #(.delay(10e-9), .freq(500e6), .amp(0.2))
                sig2_gen(signal2);

    // ADD A PRIMITIVE HERE TO ADD signal1 AND signal2

    probe_xreal sig1_probe(signal1);
    probe_xreal sig2_probe(signal2);
    probe_xreal  out_probe(out);

endmodule
