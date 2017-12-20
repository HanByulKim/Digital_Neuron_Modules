# Makefile ----------------------------------------------------------------

all: runsim plotwave

runsim:
	xmodel tb_duty_to_clk.sv --top tb_duty_to_clk --simtime 100ns

plotwave:
	xwave -a xmodel.jez

clean:
	xmodel --clean

