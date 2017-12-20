# Makefile ----------------------------------------------------------------

all: runsim plotwave

runsim:
	xmodel tb_dll.sv --top tb_dll --simtime 100ns

plotwave:
	xwave -a xmodel.jez

clean:
	xmodel --clean

