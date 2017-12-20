# Makefile
TIMESCALE=10fs/10fs

tb_tgfa_8bit_delay:
	xmodel tb_tgfa_8bit_delay.sv inv_RC.sv tg_RC.sv tg_double_RC.sv tgfa_8bit.sv tgfa.sv --top tb_tgfa_8bit_delay --simtime 200ns --timescale $(TIMESCALE)

clean:
	xmodel --clean --simulator all
