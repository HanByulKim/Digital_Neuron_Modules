# Makefile ----------------------------------------------------------------
all: runsim

runsim:
	${XMODEL_HOME}/example/bin/jtran.py --t_lock 1e-6 --freq_ref 93.75e6 \
	    --freq_max 20e6 --freq_min 0.2e6 --num_sweep 15 \
	    --cmd models/dpll.f --source tb_jtran.sv.empy \
	    --var tb_jtran.clk_fb

plotwave:
	eog tb_jtran.png

clean:
	\rm -rf tb_jtran tb_jtran.ml tb_jtran.png
