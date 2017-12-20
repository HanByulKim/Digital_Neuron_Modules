# Makefile
TIMESCALE=10fs/10fs

tb_neuron_ref:
	xmodel tb_neuron_ref.sv neuron_ref.sv --top tb_neuron_ref --simtime 1us --timescale $(TIMESCALE)

tb_neuron:
	xmodel tb_neuron.sv neuron_ref.sv neuron_ckt.sv --top tb_neuron --simtime 1us --timescale $(TIMESCALE)

tb_inv_delay:
	xmodel tb_inv_delay.sv inv_RC.sv --top tb_inv_delay --simtime 100ns --timescale $(TIMESCALE)

clean:
	xmodel --clean --simulator all
