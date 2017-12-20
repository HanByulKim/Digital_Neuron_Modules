# Makefile ----------------------------------------------------------------

all: runsim plotwave

runsim:
	xmodel tb_poly_func.sv --top tb_poly_func --simtime 100ns

plotwave:
	xwave -a xmodel.jez

clean:
	xmodel --clean

