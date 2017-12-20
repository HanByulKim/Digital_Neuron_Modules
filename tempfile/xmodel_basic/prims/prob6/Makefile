# Makefile ----------------------------------------------------------------

all: runsim plotwave

runsim:
	xmodel prob6.sv --top prob6 --timescale 1ns/1ns --simtime 20ms

plotwave:
	xwave -a xmodel.jez

clean:
	xmodel --clean

