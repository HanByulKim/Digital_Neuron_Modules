# Makefile ----------------------------------------------------------------
SOURCES = models/tdc_ideal.sv models/tdc_dline.sv tb_tdc.sv

all: runsim plotwave

runsim: 
	xmodel ${SOURCES} --top tb_tdc --simtime 2us

plotwave:
	xwave -a xmodel.jez

clean:
	xmodel --clean

