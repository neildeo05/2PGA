#!/usr/bin/python3


# TODO:
  # implement BLIFLatch
  # Fix unorthodox ordering issue
  # Add support for 1,2 inputs
import bitstring
import subprocess
from sys import argv
import re

class BLIFGate:
  def __init__(self, inputs, outputs, cover):
    self.inputs = inputs
    self.outputs = outputs
    self.cover = cover
    self.on_set = None
    self.off_set = None
  @staticmethod
  def substitute_dont_cares(cover_input, full_set: set):
    sub0 = re.sub(r'-', '0', cover_input, count=1)
    sub1 = re.sub(r'-', '1', cover_input, count=1)
    if '-' in sub0:
      BLIFGate.substitute_dont_cares(sub0, full_set)
    if '-' in sub1:
      BLIFGate.substitute_dont_cares(sub1, full_set)
    else:
      full_set.add(bitstring.Bits('0b'+sub0))
      full_set.add(bitstring.Bits('0b'+sub1))


  def parse_on_off_set(self):
    on_list = []
    off_list = []
    on_set = set()
    off_set = set()
    for idx, i in enumerate(self.cover):
      input_set = set()
      cover_input = i[0]
      if '-' in cover_input:
        BLIFGate.substitute_dont_cares(cover_input, input_set)
      else:
        input_set.add(bitstring.Bits('0b'+cover_input))
      if int(i[1]):
        on_list.extend(tuple((p, int(i[1])) for p in list(input_set)))
      else:
        off_list.extend(tuple((p,int(i[1])) for p in list(input_set)))

    self.on_set = set(on_list)
    self.off_set = set(off_list)




  def __repr__(self):
    return f"(INPUTS = {self.inputs} -> OUT = {self.outputs}; COVER:{self.cover})"

class BLIFModel:
  def __init__(self, model_name, model_inputs, model_outputs, model_clock, gates, latches):
    self.model_name = model_name
    self.model_inputs = model_inputs
    self.model_outputs = model_outputs
    self.model_clock = model_clock
    self.gates = gates
    self.latches = latches
    self.truth_table = []
  def cover_to_truth_table(self, nbits=3):
    cubes_one = ['0b'+f'{a}' for a in range(0, 2)]
    cubes_two = ['0b'+f'{a}'+f'{b}' for a in range(0, 2) for b in range(0,2)]
    cubes_three = ['0b'+f'{a}'+f'{b}'+f'{c}' for a in range(0, 2) for b in range(0,2) for c in range(0,2)]
    all_possible_cubes = [cubes_one, cubes_two, cubes_three]
    for i in self.gates:
      truth_table = []
      i.parse_on_off_set()
      on_cover = 1 if len(i.off_set) == 0 else 0;
      for j in all_possible_cubes[nbits-1]:
        cube = bitstring.Bits(j)
        if on_cover:
          if (cube,1) not in i.on_set:
            truth_table.append((cube,0))
          else:
            truth_table.append((cube,1))
        else:
          if(cube,0) not in i.off_set:
            truth_table.append((cube,1))
          else:
            truth_table.append((cube, 0))
      self.truth_table.append(truth_table)

  def __repr__(self):
    return f"MODEL {self.model_name}, with inputs {self.model_inputs}, and outputs {self.model_outputs}, with clock {self.model_clock}\nGATES: {self.gates}"

def get_cover_count(words, idx):
  cnt = idx
  i = words[cnt]
  while(i[0][0] != '.'):
    cnt+=1
    i = words[cnt]
  return cnt

def parse_blif(filename):
  model = None
  with open(filename, 'r') as f:
    # Ignore empty lines or comments
    model_name, model_inputs, model_outputs = None, None, None
    gates = []
    lines = [k for k in [i for i in f.read().split('\n') if len(i) != 0] if k[0] != '#']
    words = [i.split() for i in lines]
    for idx, i in enumerate(words):
#      print(i)
      if i[0] == '.model':
        model_name = i[1]
      elif i[0] == '.inputs':
        model_inputs = i[1:]
      elif i[0] == '.outputs':
        model_outputs = i[1:]
      elif i[0] == '.names':
        till = get_cover_count(words, idx+1)
        gates.append(BLIFGate(i[1:-1], i[-1], words[idx+1:till]))
      elif i[0] == '.end':
        break
    model = BLIFModel(model_name, model_inputs, model_outputs,None,gates, None)
  return model


if __name__ == '__main__':
  subprocess.run(['berkeley-abc', '-f',argv[1]])
  blif_model = parse_blif(argv[2])
  blif_model.cover_to_truth_table(nbits=3)
  for i in blif_model.truth_table:
    mask = []
    for j in i:
      mask.append(j[-1])
    print(mask)

# Example Truth Table Generator with SymPy
# A, B, C = symbols('A B C')
# expr = And(Or(And(A, B), C), Or(A, B))
# tt = truth_table(expr, [A,B,C])
# for i in tt:
#     print(i[0], int(bool(i[1])))
