# Makefile ----------------------------------------------------------------
SOURCES = models/full_adder.sv tb_full_adder_2.sv stm_full_adder_2.sv mon_full_adder_2.sv 

all: runsim 

runsim:
	xmodel $(SOURCES) --top tb_full_adder_2

clean:
	xmodel --clean

