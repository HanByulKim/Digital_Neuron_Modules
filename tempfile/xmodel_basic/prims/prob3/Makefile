# Makefile ----------------------------------------------------------------

all: runsim plotwave

runsim:
	xmodel prob3.sv --top prob3 --simtime 10ns

plotwave:
	xwave -a xmodel.jez

clean:
	xmodel --clean

