# Makefile ----------------------------------------------------------------
TIMESCALE = 1ps/1ps

tb_inv_xbit:
	xmodel tb_inv_xbit.sv --top tb_inv_xbit --timescale ${TIMESCALE} \
			--simtime 10ns

clean:
	xmodel --clean

