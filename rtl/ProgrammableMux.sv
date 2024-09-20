module ProgrammableMux (
    input  logic clk,
    input  logic reset,
    input  logic sel,
    input  logic a,
    input  logic b,
    output logic out
);

  logic sel_bit;
  always @(posedge clk) begin
    if (reset) sel_bit <= 0;
    else sel_bit <= sel;
  end

  assign out = (sel_bit) ? b : a;

endmodule
