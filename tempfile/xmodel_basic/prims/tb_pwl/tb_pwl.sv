
`include "xmodel.h"

module tb_pwl();
    
    xreal       signal;

    pwl_gen     #(.data('{0.0, 0.0, 10e-9, 0.0, 20e-9, 1.0}))
                my_gen(signal);

    probe_xreal #(.format("jezascii"))  my_probe(signal);

endmodule
