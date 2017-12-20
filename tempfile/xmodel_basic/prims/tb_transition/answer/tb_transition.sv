
`include "xmodel.h"

module tb_transition();
    
    xreal       out_signal;
    xbit        in_signal;

    pulse_gen   #(.width(200e-12), .period(400e-12))
                in_sig_gen(in_signal);

    transition  #(.value0(-0.5), .value1(0.5),
                  .rise_time(37e-12), .fall_time(22e-12))
                transition(.out(out_signal), .in(in_signal));

    initial begin
        $xmodel_dumpfile();
        $xmodel_dumpvars();
    end

endmodule
