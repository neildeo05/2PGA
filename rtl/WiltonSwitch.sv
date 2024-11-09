// Wilton Switch Implementation
module WiltonSwitch (
    input logic clk,
    input logic reset,
    input [3:0] port_designations[4],
    input [7:0] route[4],
    inout [3:0] side0,
    inout [3:0] side1,
    input [3:0] side1_inp,
    inout [3:0] side2,
    inout [3:0] side3
);


  logic [7:0] port_config [4];
  logic [3:0] desig_config[4];
  always @(posedge clk) begin
    desig_config <= port_designations;
    port_config  <= route;
  end


  genvar i;
  generate
    for (i = 0; i < 4; i++) begin
      wire [3:0] side0_pin_inps = {side1[(4-i)%4], side2[i], side3[(i+1)%4], 1'bz};
      // SwitchMux #(4) sm0 (
      //     .clk(clk),
      //     .reset(reset),
      //     .enable(desig_config[0][i]),
      //     .inputs('{side0_pin_inps[0], side0_pin_inps[1], side0_pin_inps[2], side0_pin_inps[3]}),
      //     .sel(port_config[i][1:0]),
      //     .out(side0[i])
      // );
    end
  endgenerate
endmodule
