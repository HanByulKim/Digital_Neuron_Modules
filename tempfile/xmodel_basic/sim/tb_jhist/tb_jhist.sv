/*----------------------------------------------------------------------
MODULE tb_jhist.sv

= Purpose =
A testbench to measure jitter histogram of the PLL.

= Description =
The testbench collects the statistical data on the output clock jitter
once the PLL reaches a lock. 

= Revisions =
$Author$
$DateTIme$
----------------------------------------------------------------------*/

`include "xmodel.h"

module tb_jhist();	

    parameter real freq_ref = 93.75e6;      // reference frequency
    parameter real RJ_rms = 10.0e-12;       // reference clk RMS random jitter
    parameter real t_lock = 1e-6;           // PLL lock time

    // variables
    xbit clk_ref, clk_out, clk_fb;
    bit reset;

    // stimuli
    clk_gen     #(.freq(freq_ref), .RJ_rms(RJ_rms)) clk_gen(clk_ref);

    initial begin
        reset = 1;
        #(80ns) reset = 0;
    end

    // DUT (device-under-test) digital PLL
    dpll        dut(.clk_ref(clk_ref), .clk_out(clk_out),
                    .clk_fb(clk_fb), .reset(reset));

    // measurement
    probe_xbit  #(.start(t_lock)) probe_out(clk_out);
    probe_xbit  #(.start(t_lock)) probe_fb(clk_fb);
    probe_phase #(.freq(freq_ref*16), .start(t_lock))
                probe_phase(clk_out);

endmodule
