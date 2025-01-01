// Combinational Logic Block (with config scan chain)
module CLB (
    // input logic cfg_clk,
    input logic clk,
    input logic cfg_en,
    input logic cfg_in,
    input logic reset,
    input logic A,
    input logic B,
    input logic C,
    input logic D,
    output wire x,
    output wire y
);
    logic [26:0] configuration_word;

    // assign the intermediary signals to the configuration word
    logic [5:0] input_configuration_word = configuration_word[5:0];
    logic [15:0] lut_configuration_word = configuration_word[21:6];
    logic [2:0] flip_flop_configuration_word = configuration_word[24:22];
    logic [1:0] output_configuration_word = configuration_word[26:25];
    logic [2:0] ic_top = input_configuration_word[2:0];
    logic [2:0] ic_bot = input_configuration_word[5:3];
    logic [2:0] top_lut_inps;
    logic [2:0] bot_lut_inps;
    logic f;
    logic g;
    logic inputs[4];


    assign inputs[0] = A;
    assign inputs[1] = B;
    assign inputs[2] = C;
    assign inputs[3] = D;
    // always @(posedge clk) begin
    //   inputs[0] <= A;
    //   inputs[1] <= B;
    //   inputs[2] <= C;
    //   inputs[3] <= D;
    // end
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
    // Flip-flop configuration (Doesn't include the INV, or EN signals (don't feel like there is a point to that for this tiny impl))


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



    ConfigChain #(27) cc(.cfg_clk(clk), .cfg_en(cfg_en), .cfg_head(cfg_in), .out(configuration_word));
endmodule
