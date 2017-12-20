# XWAVE command script

load_file('xmodel.jez')
set_current_window(0)
add_analysis_page("Histogram")
plot_jhist('W0:tb_jhist.clk_out', 1.5e9, 100, stat=True)
