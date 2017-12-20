# Makefile ----------------------------------------------------------------
SOURCES = -f models/dpll.f tb_jhist.sv

all: runsim plotwave

runsim:
	xmodel ${SOURCES} --top tb_jhist --simtime 25us --stat

plotwave:
	xwave -c cmd.py

clean:
	xmodel --clean
	\rm -Rf *.png
