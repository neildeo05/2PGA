.PHONY: top

VERILATOR= $(shell which verilator)
top:
	$(VERILATOR) -I. -Wall -Wno-fatal --trace --cc --exe --build ./tests/LUTTest.cpp LUT.sv
	./obj_dir/VLUT
