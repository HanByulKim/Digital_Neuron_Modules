# Makefile ----------------------------------------------------------------

all: runsim plotwave

runsim:
	xmodel prob1.sv --top prob1 --simtime 10ns

plotwave:
	xwave -a xmodel.jez

clean:
	xmodel --clean

