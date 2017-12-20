# Makefile ----------------------------------------------------------------
SOURCES = models/bin2therm.sv tb_bin2therm.sv

all: runsim

runsim:
	xmodel ${SOURCES} --top tb_bin2therm

clean:
	xmodel --clean
