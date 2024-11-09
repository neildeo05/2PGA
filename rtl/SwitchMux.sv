module SwitchMux #(
    parameter INPUTS = 4
) (
    input logic clk,
    input logic reset,
    input logic enable,
    input logic inputs[INPUTS],
    input logic [$clog2(INPUTS)-1:0] sel,
    output logic out
);


  logic [$clog2(INPUTS)-1:0] sel_bits;
  always @(posedge clk) begin
    if (reset) sel_bits <= 0;
    else begin
      if (enable) sel_bits <= sel;
    end
  end
  assign out = inputs[sel_bits];
endmodule
