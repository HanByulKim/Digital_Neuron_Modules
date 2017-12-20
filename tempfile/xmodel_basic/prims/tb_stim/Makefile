# Makefile ----------------------------------------------------------------

all: runsim plotwave

runsim:
	xmodel tb_stim.sv --top tb_stim

plotwave:
	xwave -a xmodel.jez

clean:
	xmodel --clean
