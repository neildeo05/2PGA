# 2PGA (2 CLB's interconnected in a leader follower configuration)
Allows you to implement state machines with extra combinational logic.


# Configuration
Since advanced switch blocks and routing interconnect take up a lot of space, in an effort to save space, I have decided to only use one routing track, two CLBs, to connection boxes, two I/O pads, and 0 switch boxes. This is essentially a singular row-based FPGA.



# CLB Design
  * Same as XC2064 CLBs with scan chain configuration
  * Each CLB's inputs can either come from the I/O block, or the other CLB
  * The CLB's outputs can either go to an I/O block, or the other CLB