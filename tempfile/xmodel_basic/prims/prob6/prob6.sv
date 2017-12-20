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
    
    // DESCRIBE FUNCTIONALITY OF y = abs(in) 
    // ...
    
    // DESCRIBE FUNCTIONALITY OF x = limit(y, [0.05, 0.9])
    // ...

    // GENERATE A 100-kHZ CLOCK OF WHICH DUTY CYCLE VARIES AS x    
    // ...
    
    // dump statements
    initial begin
        $xmodel_dumpfile();
        $xmodel_dumpvars();
    end

endmodule
