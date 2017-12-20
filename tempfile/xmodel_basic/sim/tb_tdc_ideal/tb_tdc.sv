/*----------------------------------------------------------------------
TESTBENCH tb_tdc.sv

= Purpose =

A testbench for comparing the time-to-digital characteristics of 
various TDCs.

= Description =

The testbench feeds two clocks with a slowly varying phase difference
and measures the TDC's outputs. 

= Revisions =

$Author$
$DateTIme$
$Id$
----------------------------------------------------------------------*/

`include "xmodel.h"

module tb_tdc();

    parameter real fcenter = 93.75e6;   // center frequency
    parameter real Ktdc = 50;           // TDC gain
    parameter integer Nbit = 4;         // TDC resolution

    xreal   rphase;
    xreal   fbphase;
    xbit    rclk, fbclk;
    wire    signed [3:0] dcode_ideal;
    real    dcode_ideal_r;
    xreal   dcode_ideal_xreal;

    // stimuli
    dc_gen          #(.value(0.0))
                    rphase_gen(rphase); 
    pwl_gen         #(.data('{100e-9, -0.2*(2*M_PI), 1300e-9, 0.2*(2*M_PI)}))
                    fbphase_gen(fbphase);

    phase_to_clk    #(.num_phase(1), .freq(fcenter))
                    rclk_gen(.in(rphase), .out(rclk));
    phase_to_clk    #(.num_phase(1), .freq(fcenter))
                    fbclk_gen(.in(fbphase), .out(fbclk));

    // DUT (device-under-test)
    tdc_ideal       #(.fcenter(fcenter), .Ktdc(Ktdc), .Nbit(Nbit))
                    dut_ideal(.clk_ref(rclk), .clk_fb(fbclk), .out(dcode_ideal));

    // measurements
    always @(dcode_ideal) dcode_ideal_r = real'(dcode_ideal);
    real_to_xreal   conn1 (.in(dcode_ideal_r), .out(dcode_ideal_xreal));

    initial begin
        $xmodel_dumpfile();
        $xmodel_dumpvars(rphase, fbphase, dcode_ideal_xreal);
    end

endmodule
