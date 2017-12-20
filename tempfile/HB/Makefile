# Makefile
TIMESCALE=10fs/10fs

tb_fa_delay:
	xmodel tb_fa_delay.sv inv_RC.sv e8bit_fa.sv fa.sv --top tb_fa_delay --simtime 200ns --timescale $(TIMESCALE)
	#xwave -a xmodel.jez
clean:
	xmodel --clean --simulator all
