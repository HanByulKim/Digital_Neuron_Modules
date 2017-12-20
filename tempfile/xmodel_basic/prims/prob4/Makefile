# Makefile ----------------------------------------------------------------

all: runsim plotwave

runsim:
	xmodel prob4.sv --top prob4 --simtime 1us

plotwave:
	xwave -a xmodel.jez

clean:
	xmodel --clean

