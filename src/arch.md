# 2PGA (2 CLB's interconnected in a leader follower configuration)
Allows you to implement state machines with extra combinational logic.


# Configuration
Since advanced switch blocks and routing interconnect take up a lot of space, in an effort to save space, I have decided to only use one routing track, two CLBs, to connection boxes, two I/O pads, and 0 switch boxes. This is essentially a singular row-based FPGA.



# CLB Design
  * Derived from combination of 2 diagrams (from the patent, and from the datasheet)
  * Each CLB's inputs can either come from the I/O block, or the other CLB
  * The CLB's outputs can either go to an I/O block, or the other CLB


  Some of the datapath muxes are interesting:
    - The outputs are determined by two programmable muxes
      - choose between G (top lut input), F (bottom lut input), and Q (output of the S/R flip-flop)
    - Q is presented from the flip flop, and could also have a latched output (not implemented)
    - Interestingly enough, the input to D is simply the output of F (bottom lut output)
    - The clock input depends on a mux that chooses between the top lut output, the input C, and an external clock input K






## Sources
 - [OpenFPGA flip-flop standard cell](https://github.com/lnis-uofu/OpenFPGA/blob/68433d3a38d8a320bf1136bbdc78bb634642e82e/openfpga_flow/openfpga_cell_library/verilog/dff.v)
  - [GDS3D Viewer](https://github.com/trilomix/GDS3D?tab=readme-ov-file)