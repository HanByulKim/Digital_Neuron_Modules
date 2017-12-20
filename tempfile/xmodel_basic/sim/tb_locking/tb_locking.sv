/*----------------------------------------------------------------------
MODULE tb_locking.sv

= Purpose =
A testbench to observe the locking transient behavior of a digital PLL.

= Description =
The testbench observes the locking transient behavior (frequency & phase)
of the digital PLL output clock.

= Revisions =
$Author$
$DateTIme$
----------------------------------------------------------------------*/

`include "xmodel.h"

module tb_locking();	

    parameter real freq_ref = 93.75e6;  // reference frequency

    // variables
    xbit clk_ref, clk_out, clk_fb;
    bit reset;

    // stimuli
    clk_gen     #(.freq(freq_ref)) clk_gen(clk_ref);

    initial begin
        reset = 1;
        #(80ns) reset = 0;
    end

    // DUT (device-under-test) digital PLL
    dpll        #(.init_value(13'b0_1110_0000_0000))
                dut(.clk_ref(clk_ref), .clk_out(clk_out),
                    .clk_fb(clk_fb), .reset(reset));

    // measurement
    probe_xbit  probe_ref(clk_ref);
    probe_xbit  probe_out(clk_out);
    probe_xbit  probe_fb(clk_fb);
    probe_freq  probe_freq(clk_out);
    probe_phase #(.freq(freq_ref*16), .phase_wrap(1)) probe_phase(clk_out);

endmodule
