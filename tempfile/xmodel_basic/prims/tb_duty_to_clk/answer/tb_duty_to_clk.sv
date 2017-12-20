
`include "xmodel.h"

module tb_duty_to_clk();
    
    xreal       duty;
    xbit        clk;

    sin_gen     #(.freq(20e6), .offset(0.5), .amp(0.3))
                inst_duty (.out(duty));
    duty_to_clk #(.freq(1.0e9))
                inst_clk (.out(clk), .in(duty));

    initial begin
        $xmodel_dumpfile();
        $xmodel_dumpvars();
    end

    probe_duty  duty_probe(clk);

endmodule
