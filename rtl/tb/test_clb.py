import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, FallingEdge, ClockCycles, Timer
import random

async def reset(dut):
  dut.reset.value = 1
  await ClockCycles(dut.clk, 10);
  dut.reset.value = 0
  await ClockCycles(dut.clk, 10);


@cocotb.test()
async def test_clb(dut):
  clock = Clock(dut.clk, 100);
  cocotb.start_soon(clock.start())
  input_configuration_word = 0b10010
  lut_configuration_word = 0b1101100011011000
  output_configuration_word = 0b01
  # await reset(dut)
  dut.input_configuration_word.value = input_configuration_word
  dut.lut_configuration_word.value = lut_configuration_word
  dut.output_configuration_word.value = output_configuration_word
  dut.A.value = 0
  dut.B.value = 1
  dut.C.value = 0
  dut.D.value = 1
  for cycle in range(10):
      dut.clk.value = 0
      await Timer(1)
      dut.clk.value = 1
      await Timer(1)

  # await ClockCycles(dut.clk, 10);

  print(dut.A.value)
  print(dut.B.value)
  print(dut.C.value)
  print(dut.D.value)
  print(dut.x.value)
  print(dut.y.value)
