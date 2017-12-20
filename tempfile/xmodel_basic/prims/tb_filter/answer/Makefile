# Makefile ----------------------------------------------------------------

all: runsim plotwave

runsim:
	xmodel tb_filter.sv --top tb_filter --simtime 100ns

plotwave:
	xwave -a xmodel.jez

clean:
	xmodel --clean

