# Makefile
TIMESCALE=10fs/10fs

tb_tgfa_8bit_delay:
	xmodel inv_RC.sv tg_double_RC.sv tgfa_10bit.sv tgfa_8bit.sv tgfa_9bit.sv tgfa.sv tgha.sv tgmux16.sv tgmux2.sv tg_RC.sv tb_totalneuron.sv --top tb_totalneuron --simtime 200ns --timescale $(TIMESCALE)

clean:
	xmodel --clean --simulator all
