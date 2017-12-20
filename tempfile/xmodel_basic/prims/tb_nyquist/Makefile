# Makefile ----------------------------------------------------------------

all: runsim plotwave

runsim:
	xmodel tb_nyquist.sv --top tb_nyquist --simtime 100ns

plotwave:
	xwave -a xmodel.jez

clean:
	xmodel --clean

