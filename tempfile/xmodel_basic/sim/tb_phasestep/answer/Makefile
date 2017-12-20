# Makefile ----------------------------------------------------------------
SOURCES = -f models/dpll.f tb_phasestep.sv

all: runsim plotwave

runsim:
	xmodel ${SOURCES} --top tb_phasestep --simtime 4us

plotwave:
	xwave -a xmodel.jez

clean:
	xmodel --clean

