# Makefile ----------------------------------------------------------------
SOURCES = models/dco_lin.sv models/dco_exp.sv tb_dco.sv

all: runsim plotwave

runsim: 
	xmodel ${SOURCES} --top tb_dco --simtime 10us

plotwave:
	xwave -a xmodel.jez

clean:
	xmodel --clean

