module Mux3 (
    input  logic sel1,
    input  logic sel2,
    input  logic a,
    input  logic b,
    input  logic c,
    output logic out
);

  // don't need this because we are using a scanchain now
  // logic sel_bit;
  // always @(posedge clk) begin
  //   if (reset) sel_bit <= 0;
  //   else sel_bit <= sel;
  // end

  always_comb begin
    case({sel2, sel1})
      2'b00: out = a;
      2'b01: out = b;
      2'b10: out = c;
      default: out = 1'bz;
    endcase
  end

endmodule
