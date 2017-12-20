/*----------------------------------------------------------------------
TESTBENCH tb_dco.sv

= Purpose =

A testbench for comparing the D-to-f characteristics of the linear and
exponential DCOs. 

= Description =

The testbench feeds a slowly increasing digital code to the DCOs and 
measures their output frequencies.

= Revisions =

$Author$
$DateTIme$
$Id$
----------------------------------------------------------------------*/

`include "xmodel.h"

module tb_dco();

    bit [12:0] dcode;
    bit [12:0] inc;
    xbit clk_lin, clk_exp;
    real dcode_r;

    // stimuli
    initial begin
        dcode = 13'b0_0000_0000_0000;
        inc = 13'b0_0000_0000_0001;

        while (dcode < 13'b1_1111_1111_1111) begin
            #(1ns);
            dcode = dcode + inc;
        end

        $finish;
    end

    always @(dcode) dcode_r = real'(dcode);

    // DUT (device-under-test)
    dco_lin         dut_lin(.in(dcode), .out(clk_lin));
    dco_exp         dut_exp(.in(dcode), .out(clk_exp));

    // measurements
    probe_real  prb_in(dcode_r);
    probe_freq  prb_freq_lin(clk_lin);
    probe_freq  prb_freq_exp(clk_exp);
    
endmodule
