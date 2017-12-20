# Makefile
TIMESCALE=10fs/10fs

tb_tgfa_8bit_delay:
	xmodel tb_tgmux16_delay.sv inv_RC.sv tg_RC.sv tg_double_RC.sv tgmux16.sv tgmux2.sv --top tb_tgmux16_delay --simtime 200ns --timescale $(TIMESCALE)

clean:
	xmodel --clean --simulator all
