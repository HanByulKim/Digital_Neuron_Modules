// Problem 4: implement an ADC with non-uniform threshold levels 

`include "xmodel.h"

module prob4 ();

    parameter real threshold[0:6] = '{0.5,1.1,1.8,2.5,3.2,4,4.7};
    
    // signal declarations
    xreal in;
    xreal adc_in;
    xbit [2:0] adc_out;
    wire [2:0] out;
    
    // stimuli generation
    sin_gen     #(.offset(2.5), .amp(2.5), .freq(1e6), .init_phase(-1.57))
                inst_sin (.out(in));

    // DESCRIBE AN ADC WITH NON-UNIFORM THRESHOLDS HERE
    // ... 
    
    // measure statements
    initial begin
        $xmodel_dumpfile();
        $xmodel_dumpvars();
    end

endmodule
