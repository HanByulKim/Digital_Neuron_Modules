# Makefile
TIMESCALE=10fs/10fs

tb_ff1_delay:
	xmodel tb_ff1_delay.sv inv_RC.sv tg_RC.sv tg_double_RC.sv ff1.sv --top tb_ff1_delay --simtime 200ns --timescale $(TIMESCALE)

clean:
	xmodel --clean --simulator all
