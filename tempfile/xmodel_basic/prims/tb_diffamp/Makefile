# Makefile ----------------------------------------------------------------

all: runsim plotwave

runsim:
	xmodel tb_diffamp.sv --top tb_diffamp --simtime 10ns

plotwave:
	xwave -a xmodel.jez

clean:
	xmodel --clean

