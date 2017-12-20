# Makefile ----------------------------------------------------------------

all: runsim plotwave

runsim:
	xmodel tb_stim.sv --top tb_stim --simtime 50ns

plotwave:
	xwave -a xmodel.jez

clean:
	xmodel --clean
