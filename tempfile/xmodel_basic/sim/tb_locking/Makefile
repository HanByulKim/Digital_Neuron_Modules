# Makefile ----------------------------------------------------------------
SOURCES = -f models/dpll.f tb_locking.sv

all: runsim plotwave

runsim:
	xmodel ${SOURCES} --top tb_locking --simtime 4us

plotwave:
	xwave -a xmodel.jez

clean:
	xmodel --clean

