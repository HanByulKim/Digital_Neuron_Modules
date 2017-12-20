# Makefile ----------------------------------------------------------------
SOURCES = models/full_adder.sv tb_full_adder.sv

all: runsim 

runsim:
	xmodel $(SOURCES) --top tb_full_adder 

clean:
	xmodel --clean

