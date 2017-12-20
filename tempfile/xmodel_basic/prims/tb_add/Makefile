# Makefile ----------------------------------------------------------------

all: runsim plotwave

runsim:
	xmodel tb_add.sv --top tb_add --simtime 100ns

plotwave:
	xwave -a xmodel.jez

clean:
	xmodel --clean

