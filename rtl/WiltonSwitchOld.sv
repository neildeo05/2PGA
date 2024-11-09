module WiltonSwitch (
    input logic clk,
    input logic reset,
    input logic [7:0] configuration_word[4],
    inout [3:0] side0,
    inout [3:0] side1,
    inout [3:0] side2,
    inout [3:0] side3
);
  logic [7:0] conf[4];
  always @(posedge clk) begin
    conf <= configuration_word;
  end
  genvar i;
  generate
    for (i = 0; i < 4; i++) begin
      wire [3:0] side0_pin_inps = {side1[(4-i)%4], side2[i], side3[(i+1)%4], 1'bz};
      wire [3:0] side1_pin_inps = {side0[(4-i)%4], side2[(i+1)%4], side3[i], 1'bz};
      wire [3:0] side2_pin_inps = {side0[i], side1[(i+1)%4], side3[((2*4)-2-i)%4], 1'bz};
      wire [3:0] side3_pin_inps = {side0[(i+1)%4], side1[i], side2[((2*4)-2-i)%4], 1'bz};
      SwitchMux #(4) sm0 (
          .clk(clk),
          .reset(reset),
          .inputs('{side0_pin_inps[0], side0_pin_inps[1], side0_pin_inps[2], side0_pin_inps[3]}),
          .sel(conf[i][1:0]),
          .out(side0[i])
      );
      SwitchMux #(4) sm1 (
          .clk(clk),
          .reset(reset),
          .inputs('{side1_pin_inps[0], side1_pin_inps[1], side1_pin_inps[2], side1_pin_inps[3]}),
          .sel(conf[i][3:2]),
          .out(side1[i])
      );
      SwitchMux #(4) sm2 (
          .clk(clk),
          .reset(reset),
          .inputs('{side2_pin_inps[0], side2_pin_inps[1], side2_pin_inps[2], side2_pin_inps[3]}),
          .sel(conf[i][5:4]),
          .out(side2[i])
      );
      SwitchMux #(4) sm3 (
          .clk(clk),
          .reset(reset),
          .inputs('{side3_pin_inps[0], side3_pin_inps[1], side3_pin_inps[2], side3_pin_inps[3]}),
          .sel(conf[i][7:6]),
          .out(side3[i])
      );

    end
  endgenerate






endmodule
