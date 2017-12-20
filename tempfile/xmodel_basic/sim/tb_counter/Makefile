# Makefile ----------------------------------------------------------------
SOURCES = models/counter.sv tb_counter.sv

all: runsim plotwave

runsim:
	xmodel $(SOURCES) --top tb_counter

plotwave:
	xwave -a xmodel.jez

clean:
	xmodel --clean

