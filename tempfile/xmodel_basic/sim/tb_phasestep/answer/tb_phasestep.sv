/*----------------------------------------------------------------------
MODULE tb_phasestep.sv

= Purpose =
A testbench to observe the phase step response of a digital PLL.

= Description =
The testbench applies a step change in the input clock phase.

= Revisions =
$Author$
$DateTIme$
----------------------------------------------------------------------*/

`include "xmodel.h"

module tb_phasestep();	

    parameter real freq_ref = 93.75e6;  // reference frequency

    // variables
    xbit clk_ref, clk_out, clk_fb;
    bit reset;

    // stimuli
    xreal step;
    step_gen #(.init_value(0.0), .change(1.0), .delay(2e-6))  step_gen(step);
    phase_to_clk #(.freq(freq_ref)) clk_gen(.in(step), .out(clk_ref));

    initial begin
        reset = 1;
        #(80ns) reset = 0;
    end

    // DUT (device-under-test) digital PLL
    dpll        #(.init_value(13'b1_0000_0000_0000))
                dut(.clk_ref(clk_ref), .clk_out(clk_out),
                    .clk_fb(clk_fb), .reset(reset));

    // measurement
    probe_xbit  probe_ref(clk_ref);
    probe_xbit  probe_out(clk_out);
    probe_freq  probe_freq(clk_out);
    probe_phase #(.freq(freq_ref)) probe_fb_phase(clk_fb);
    probe_phase #(.freq(freq_ref)) probe_ref_phase(clk_ref);

endmodule
