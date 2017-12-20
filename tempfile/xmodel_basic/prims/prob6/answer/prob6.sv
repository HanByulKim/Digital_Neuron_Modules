// Problem 6: generate a 100-kHz clock whose duty varies as x
// x is a clipped signal of y within the range of [0.05 and 0.9]
// y is the absolute value of a 60-Hz, unit-amplitude sinusoid

`include "xmodel.h"

module prob6;

    xreal x, y;
    xreal in, in_neg;
    xbit in_sign, out;
    
    // signal generation
    sin_gen #(.amp(1.0), .freq(60)) XP0 (.out(in));
    
    // y = abs(in) 
    scale   #(.scale(-1.0))
            XP6 (.out(in_neg), .in(in));
    select  #(.width_sel(1), .num_in(2))
            XP5 (.sel(in_sign), .out(y), .in({in_neg,in}));
    slice   #(.threshold(0.0)) XP2 (.in_ref(in), .out(in_sign), .in(`ground));
    
    // x = limit(y, [0.05, 0.9])
    limit   #(.lower_limit(0.05), .upper_limit(0.9))
            XP1 (.out(x), .in(y));
    
    // clock generation
    duty_to_clk #(.freq(100e3)) XP7 (.out(out), .in(x));
    
    // dump statements
    initial begin
        $xmodel_dumpfile();
        $xmodel_dumpvars();
    end

endmodule
