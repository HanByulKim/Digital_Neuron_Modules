
`include "xmodel.h"

module tb_duty_to_clk();
    
    xreal       duty;
    xbit        clk;

    // CREATE A 1-GHZ CLOCK OF WHICH DUTY CYCLE VARIES SINUSOIDALLY
    // BETWEEN 20% AND 80% AT 20MHZ FREQUENCY
    // ...

    initial begin
        $xmodel_dumpfile();
        $xmodel_dumpvars();
    end

    probe_duty  duty_probe(clk);

endmodule
