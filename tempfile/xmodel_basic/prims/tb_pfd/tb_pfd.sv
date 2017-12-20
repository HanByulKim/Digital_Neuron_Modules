`include "xmodel.h"

module tb_pfd (
    `output_xbit up,
    `output_xbit dn
);
    
    // signal declarations
    xbit clk1, clk2, rst;
    
    // stimuli generation
    pulse_gen   #(.init_value(0), .period(2e-09), .width(1e-09), .delay(0.0))
                inst_clk1 (.out(clk1));
    pulse_gen   #(.init_value(0), .period(1.9e-09), .width(1e-09), .delay(9e-09))
                inst_clk2 (.out(clk2));
    
    // pulse frequency detector (PFD) 
    dff_rst_async_xbit  inst_up (.clk(clk1), .d(`one_xbit), .rst(rst), .q(up));
    dff_rst_async_xbit  inst_dn (.clk(clk2), .d(`one_xbit), .rst(rst), .q(dn));
    and_xbit            #(.num_in(2), .delay(1e-10))
                        inst_and (.out(rst), .in({up,dn}));
    
    // dump statements
    initial begin
        $xmodel_dumpfile();
        $xmodel_dumpvars();
    end
    
endmodule   // tb_pfd

