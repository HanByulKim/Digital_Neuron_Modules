# Makefile ----------------------------------------------------------------
TIMESCALE = 1ps/1ps

tb_pwl:
	xmodel tb_pwl.sv --top tb_pwl --timescale ${TIMESCALE} \
			--simtime 50ns

clean:
	xmodel --clean

