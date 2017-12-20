# Makefile
TIMESCALE=10fs/10fs

tb_mux_delay:
	xmodel tb_mux_delay.sv inv_RC.sv mux16to8.sv mux2to1.sv --top tb_mux_delay --simtime 1us --timescale $(TIMESCALE)

clean:
	xmodel --clean --simulator all
