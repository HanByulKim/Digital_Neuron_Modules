# Makefile ----------------------------------------------------------------

all: runsim plotwave

runsim:
	xmodel tb_fourier.sv --top tb_fourier --simtime 100ns

plotwave:
	xwave -a xmodel.jez

clean:
	xmodel --clean

