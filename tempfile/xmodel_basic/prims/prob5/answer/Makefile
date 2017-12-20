# Makefile ----------------------------------------------------------------

all: runsim plotwave

runsim:
	xmodel prob5.sv --top prob5 --simtime 300us

plotwave:
	xwave -a xmodel.jez

clean:
	xmodel --clean

