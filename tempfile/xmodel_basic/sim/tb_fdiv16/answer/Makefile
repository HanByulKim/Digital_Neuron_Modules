# Makefile ----------------------------------------------------------------
SOURCES = -f models/dpll.f tb_fdiv16.sv fdiv16_async_retimed.sv

all: runsim plotwave

runsim:
	xmodel ${SOURCES} --top tb_fdiv16 --simtime 100ns

plotwave:
	xwave -a xmodel.jez

clean:
	xmodel --clean

