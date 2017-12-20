# Makefile ----------------------------------------------------------------

all: runsim plotwave

runsim:
	xmodel tb_limit.sv --top tb_limit --simtime 100ns

plotwave:
	xwave -a xmodel.jez

clean:
	xmodel --clean

