// Implementation of a Look-up table in system verilog
module LUT (
    input logic [7:0] mask,
    // input  logic mask[8],
    input logic a,
    input logic b,
    input logic c,
    output logic out
);
  logic sel2[4];
  // Assuming that in the truth table, C is the alternating input (makes it easier when controlling truth tables)
  // Layer 1 muxes
  always_comb begin
    if (c) begin
      sel2[0] = mask[1];
      sel2[1] = mask[3];
      sel2[2] = mask[5];
      sel2[3] = mask[7];
    end else begin
      sel2[0] = mask[0];
      sel2[1] = mask[2];
      sel2[2] = mask[4];
      sel2[3] = mask[6];
    end
  end

  // Layer 2 Muxes
  always_comb begin
    if (~a & ~b) begin
      out = sel2[0];
    end else if (~a & b) begin
      out = sel2[1];
    end else if (a & ~b) begin
      out = sel2[2];
    end else begin
      out = sel2[3];
    end
  end
endmodule
