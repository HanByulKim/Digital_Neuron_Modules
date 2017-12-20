# Makefile ----------------------------------------------------------------

all: runsim plotwave

runsim:
	xmodel tb_transition.sv --top tb_transition --simtime 10ns

plotwave:
	xwave -a xmodel.jez

clean:
	xmodel --clean

