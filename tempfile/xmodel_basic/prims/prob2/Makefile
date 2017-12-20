# Makefile ----------------------------------------------------------------

all: runsim plotwave

runsim:
	xmodel prob2.sv --top prob2 --simtime 10ns

plotwave:
	xwave -a xmodel.jez

clean:
	xmodel --clean

