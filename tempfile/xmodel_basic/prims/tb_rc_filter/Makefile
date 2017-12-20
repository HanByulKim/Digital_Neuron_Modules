# Makefile ----------------------------------------------------------------

all: runsim plotwave

runsim:
	xmodel tb_rc_filter.sv --top tb_rc_filter --simtime 100ns

plotwave:
	xwave -a xmodel.jez

clean:
	xmodel --clean

