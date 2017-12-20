# Makefile ----------------------------------------------------------------
SOURCES = models/full_adder.sv models/add4_fa.sv tb_add4_fa.sv

all: runsim

runsim:
	xmodel $(SOURCES) --top tb_add4_fa

clean:
	xmodel --clean

