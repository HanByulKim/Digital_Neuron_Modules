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
    
    // non-uniform ADC
    pwl_func    #(.data('{threshold[0]-1, -1,
                          threshold[0], 0.0,
                          threshold[1], 1.0,
                          threshold[2], 2.0,
                          threshold[3], 3.0,
                          threshold[4], 4.0,
                          threshold[5], 5.0,
                          threshold[6], 6.0,
                          threshold[6]+1, 7.0}))
                inst_pwl (.out(adc_in), .in(in));
    adc         #(.num_bit(3), .value_lsb(1), .value_max(-1), .value_min(-0.5))
                inst_adc (.out(adc_out[2:0]), .in(adc_in));
    xbit_to_bit #(.width(3))
                conn_out (.out(out[2:0]), .in(adc_out[2:0]));
    
    // measure statements
    initial begin
        $xmodel_dumpfile();
        $xmodel_dumpvars();
    end

endmodule
