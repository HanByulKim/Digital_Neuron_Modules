# Makefile ----------------------------------------------------------------

all: runsim plotwave

runsim:
	xmodel tb_pfd.sv --top tb_pfd --simtime 100ns

plotwave:
	xwave -a xmodel.jez

clean:
	xmodel --clean

