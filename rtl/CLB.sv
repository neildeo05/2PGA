module CLB (
    input logic clk,
    input logic reset,
    input logic [5:0] input_configuration_word,
    input logic [15:0] lut_configuration_word,
    input logic [2:0] flip_flop_configuration_word,
    input logic [1:0] output_configuration_word,
    input logic A,
    input logic B,
    input logic C,
    input logic D,
    output wire x,
    output wire y
);

  logic inputs[4];
  always @(posedge clk) begin
    inputs <= {A, B, C, D};
  end
  logic [2:0] ic_top = input_configuration_word[2:0];
  logic [2:0] ic_bot = input_configuration_word[5:3];
  logic [2:0] top_lut_inps;
  logic [2:0] bot_lut_inps;
  logic f;
  logic g;

  // Input configuration

  genvar i;
  generate
    for (i = 0; i < 3; i++) begin : gen_p1
      ProgrammableMux p1 (
          .clk(clk),
          .reset(reset),
          .sel(ic_top[i]),
          .a(inputs[i]),
          .b(inputs[i+1]),
          .out(top_lut_inps[i])
      );
    end
    for (i = 0; i < 3; i++) begin : gen_p2
      ProgrammableMux p2 (
          .clk(clk),
          .reset(reset),
          .sel(ic_bot[i]),
          .a(inputs[i]),
          .b(inputs[i+1]),
          .out(bot_lut_inps[i])
      );
    end
  endgenerate

  // LUT Configuration
  logic [7:0] top_lut_mask;
  logic [7:0] bot_lut_mask;
  always @(posedge clk) begin
    if (reset) begin
      top_lut_mask <= 8'b0;
      bot_lut_mask <= 8'b0;
    end else begin
      top_lut_mask <= lut_configuration_word[7:0];
      bot_lut_mask <= lut_configuration_word[15:8];
    end
  end
  LUT top_lut (
      .mask(top_lut_mask),
      .a(top_lut_inps[0]),
      .b(top_lut_inps[1]),
      .c(top_lut_inps[2]),
      .out(f)
  );
  LUT bot_lut (
      .mask(bot_lut_mask),
      .a(bot_lut_inps[0]),
      .b(bot_lut_inps[1]),
      .c(bot_lut_inps[2]),
      .out(g)
  );


  // Flip Flop Configuration
  // Output Configuration

  ProgrammableMux p3 (
      .clk(clk),
      .reset(reset),
      .sel(output_configuration_word[0]),
      .a(f),
      .b(g),
      .out(x)
  );
  ProgrammableMux p4 (
      .clk(clk),
      .reset(reset),
      .sel(output_configuration_word[1]),
      .a(f),
      .b(g),
      .out(y)
  );







endmodule
