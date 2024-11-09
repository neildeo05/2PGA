# Wilton Switch Implementation

A wilton switch is a disjoint switch with all of the tracks rotated.

## Switch structure
Top corresponds to side 0
Left corresponds to side 1
Bottom corresponds to side 2
Right corresponds to side 3

Bottom and top have pin labels increasing from left to right
Left and right have pin labels increasing from top to bottom

## Connnection Formulas
Connecting Side 0 -> 2:
   i0 = i2
Connecting Side 1 -> 3:
   i1 = i3
Connecting Side 0 -> 1:
   i1 = (4-i0) % 4
Connecting Side 1 -> 2:
   i2 = (i1+1) % 4
Connecting Side 2 -> 3:
   i3 = ((2 * 4) - 2 - i2) % 4
Connecting Side 3 -> 0:
   i0 = (i3 + 1) % 4


## Generated Connections
Side 0->2:
0 -> 0
1 -> 1
2 -> 2
3 -> 3

Side 1->3:
0 -> 0
1 -> 1
2 -> 2
3 -> 3

Side 0 ->1:
0 -> 0
1 -> 3
2 -> 2
3 -> 1

Side 1 -> 2
0 -> 1
1 -> 2
2 -> 3
3 -> 0

Side 2 -> 3:
0 -> 2
1 -> 1
2 -> 0
3 -> 3

Side 3 -> 0:
0 -> 1
1 -> 2
2 -> 3
3 -> 0
## Configuration
```Verilog
int side0_pin_inps[4] = {1'bz, side1[(4-i)%4], side2[i], side3[(i+1)%4]};
int side1_pin_inps[4] = {1'bz, side0[(4-i)%4], side2[(i+1)%4], side3[i]};
int side2_pin_inps[4] = {1'bz, side0[i], side1[(i+1)%4], side3[((2*4)-2-i)%4]};
int side3_pin_inps[4] = {1'bz, side0[(i+1)%4], side1[i], side2[((2*4)-2-i)%4]};
```

32 Configuration Bits:


8 bits per side:
Config word 1:
76543210
xxxxxx01

This means that Side0[0] gets Side1[0]. This also means that Side0[0] can't be read from, and Side1[0] can't be written to
