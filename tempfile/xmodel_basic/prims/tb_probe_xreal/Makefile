# Makefile ----------------------------------------------------------------
TIMESCALE = 1ps/1ps

tb_probe_xreal:
	xmodel tb_probe_xreal.sv --top tb_probe_xreal --timescale ${TIMESCALE} \
			--simtime 100ns

clean:
	xmodel --clean

