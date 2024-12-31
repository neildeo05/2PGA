.PHONY: top

VERILATOR= $(shell which verilator)
HARNESSES= .
OBJ_DIR= obj_dir
TESTS= tests


test_clb:
	$(VERILATOR) -I./src -Wall -Wno-fatal --trace-fst --cc --exe --build ./tests/Test_CLB.cpp ./src/CLB.sv
	$(OBJ_DIR)/VCLB
