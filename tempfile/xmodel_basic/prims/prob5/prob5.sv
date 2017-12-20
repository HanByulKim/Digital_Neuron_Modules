// Problem 5: sample a 100-kHz sinusoidal input at 110-kHz frequency
// and try to reconstruct the original signal/
// What happens as the sampling frequency changes to 210-kHz, 350-kHz,
// and 10-MHz?

`include "xmodel.h"

module prob5;
    parameter real fsample = 110e3;

    xreal   vin, vsample, vout;
    xbit    clk;

    sin_gen #(.freq(100e3)) sin_gen(vin);
    clk_gen #(.freq(fsample)) clk_gen(clk);

    sample  sampler (.out(vsample), .in(vin), .trig(clk));

    filter  #(.poles('{fsample/2, 0.0, fsample/2, 0.0, fsample/2, 0.0} ))
            filter (.in(vsample), .out(vout));

    initial begin
        $xmodel_dumpfile();
        $xmodel_dumpvars();
    end

endmodule

