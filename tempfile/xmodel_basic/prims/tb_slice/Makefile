# Makefile ----------------------------------------------------------------

all: runsim plotwave

runsim:
	xmodel tb_slice.sv --top tb_slice --simtime 100ns

plotwave:
	xwave -a xmodel.jez

clean:
	xmodel --clean

