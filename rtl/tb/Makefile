#SIM ?= icarus
#TOPLEVEL_LANG ?= verilog
#VERILOG_SOURCES += ./v_source/CLB.v ./v_source/LUT.v ./v_source/ProgrammableMux.v
#TOPLEVEL=CLB
#MODULE = test_clb
#
#include $(shell cocotb-config --makefiles)/Makefile.sim
test_clb:
	rm -rf sim_build/
	mkdir sim_build/
	iverilog -o sim_build/sim.vvp -s CLB -s dump -g2012 ./v_source/CLB.v ./v_source/LUT.v ./v_source/ProgrammableMux.v ./v_source/dump.v
	MODULE=test_clb vvp -M $$(cocotb-config --prefix)/cocotb/libs -m libcocotbvpi_icarus sim_build/sim.vvp ! grep failure results.xml
