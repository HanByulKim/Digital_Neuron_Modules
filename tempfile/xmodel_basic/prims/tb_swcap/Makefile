# Makefile ----------------------------------------------------------------

all: runsim plotwave

runsim:
	xmodel tb_swcap.sv --top tb_swcap --simtime 50ns

plotwave:
	xwave -a xmodel.jez

clean:
	xmodel --clean

