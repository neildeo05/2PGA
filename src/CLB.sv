// Combinational Logic Block (with config scan chain)
module CLB (
    input logic cfg_clk,
    input logic cfg_en,
    input logic cfg_in,
    input logic reset,
    input logic A,
    input logic B,
    input logic C,
    input logic D,
    input logic clb_clk,
    output wire x,
    output wire y
);
    parameter int CONFIG_SIZE = 37;
    logic [CONFIG_SIZE - 1:0] configuration_word;

    // assign the intermediary signals to the configuration word
    logic d_configuration_word = configuration_word[0];
    logic [5:0] input_configuration_word = configuration_word[6:1];
    logic [15:0] lut_configuration_word = configuration_word[22:7];
    logic [9:0] flip_flop_configuration_word = configuration_word[32:23];
    logic [3:0] output_configuration_word = configuration_word[36:33];

    // logic [1:0] output_configuration_word = configuration_word[27:26];
    logic [2:0] ic_top = input_configuration_word[2:0];
    logic [2:0] ic_bot = input_configuration_word[5:3];
    logic [2:0] top_lut_inps;
    logic [2:0] bot_lut_inps;
    logic ENS = flip_flop_configuration_word[4];
    logic ENR = flip_flop_configuration_word[5];
    logic ENC = flip_flop_configuration_word[6];
    logic INVS = flip_flop_configuration_word[7];
    logic INVR = flip_flop_configuration_word[8];
    logic INVC = flip_flop_configuration_word[9];
    logic f;
    logic g;
    logic inputs[4];
    // flip flop signals
    logic FF_K;
    logic FF_S;
    logic FF_D = f;
    logic FF_R;
    logic FF_Q;


    assign inputs[0] = A;
    assign inputs[1] = B;
    assign inputs[2] = C;
    assign inputs[3] = (d_configuration_word) ? D : FF_Q;

  // Input configuration
    genvar i;
    generate
      for (i = 0; i < 3; i++) begin : gen_p1
        Mux p1 (
            .sel(ic_top[i]),
            .a(inputs[i]),
            .b(inputs[i+1]),
            .out(top_lut_inps[i])
        );
      end
      for (i = 0; i < 3; i++) begin : gen_p2
        Mux p2 (
            .sel(ic_bot[i]),
            .a(inputs[i]),
            .b(inputs[i+1]),
            .out(bot_lut_inps[i])
        );
      end
    endgenerate
    LUT top_lut (
        .mask(lut_configuration_word[7:0]),
        .a(top_lut_inps[0]),
        .b(top_lut_inps[1]),
        .c(top_lut_inps[2]),
        .out(f)
    );
    LUT bot_lut (
        .mask(lut_configuration_word[15:8]),
        .a(bot_lut_inps[0]),
        .b(bot_lut_inps[1]),
        .c(bot_lut_inps[2]),
        .out(g)
    );
    // Flip-flop configuration

    // reset signal mux
    Mux p3 (
      .sel(flip_flop_configuration_word[0]),
      .a(f),
      .b(inputs[3]),
      .out(FF_R)
    );
    // Set signal mux
    Mux p4 (
      .sel(flip_flop_configuration_word[1]),
      .a(g),
      .b(inputs[0]),
      .out(FF_S)
    );

    // Clock singal mux
    // chooses between external clock signal K, top lut output, or input C
    Mux3 p5 (
      .sel1(flip_flop_configuration_word[2]),
      .sel2(flip_flop_configuration_word[3]),
      .a(g),
      .b(inputs[2]),
      .c(clb_clk),
      .out(FF_K)
    );

    CLBFF ff(
      .clk(((FF_K ^ INVC) & ENC)),
      .S(((FF_S ^ INVS) & ENS)),
      .D(FF_D),
      .R(((FF_R ^ INVR) & ENR)),
      .Q(FF_Q)
    );

    Mux3 p6 (
        .sel1(output_configuration_word[0]),
        .sel2(output_configuration_word[1]),
        .a(f),
        .b(g),
        .c(FF_Q),
        .out(x)
    );
    Mux3 p7 (
        .sel1(output_configuration_word[2]),
        .sel2(output_configuration_word[3]),
        .a(f),
        .b(g),
        .c(FF_Q),
        .out(y)
    );



    ConfigChain #(CONFIG_SIZE) cc(.cfg_clk(cfg_clk), .cfg_en(cfg_en), .cfg_head(cfg_in), .out(configuration_word));
endmodule
