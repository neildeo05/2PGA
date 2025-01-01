module ProgrammableMux (
    input  logic clk,
    input  logic reset,
    input  logic sel,
    input  logic a,
    input  logic b,
    output logic out
);

  // don't need this because we are using a scanchain now
  // logic sel_bit;
  // always @(posedge clk) begin
  //   if (reset) sel_bit <= 0;
  //   else sel_bit <= sel;
  // end

  assign out = (sel) ? b : a;

endmodule
