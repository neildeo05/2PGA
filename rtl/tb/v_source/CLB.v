`default_nettype none `timescale 1ns / 1ns
module CLB (
	clk,
	reset,
	input_configuration_word,
	lut_configuration_word,
	flip_flop_configuration_word,
	output_configuration_word,
	A,
	B,
	C,
	D,
	x,
	y
);
	input wire clk;
	input wire reset;
	input wire [5:0] input_configuration_word;
	input wire [15:0] lut_configuration_word;
	input wire [2:0] flip_flop_configuration_word;
	input wire [1:0] output_configuration_word;
	input wire A;
	input wire B;
	input wire C;
	input wire D;
	output wire x;
	output wire y;
	reg inputs [0:3];
	always @(posedge clk) begin
		inputs[0] <= A;
		inputs[1] <= B;
		inputs[2] <= C;
		inputs[3] <= D;
	end
	reg [2:0] ic_top = input_configuration_word[2:0];
	reg [2:0] ic_bot = input_configuration_word[5:3];
	wire [2:0] top_lut_inps;
	wire [2:0] bot_lut_inps;
	wire f;
	wire g;
	genvar _gv_i_1;
	generate
		for (_gv_i_1 = 0; _gv_i_1 < 3; _gv_i_1 = _gv_i_1 + 1) begin : gen_p1
			localparam i = _gv_i_1;
			ProgrammableMux p1(
				.clk(clk),
				.reset(reset),
				.sel(ic_top[i]),
				.a(inputs[i]),
				.b(inputs[i + 1]),
				.out(top_lut_inps[i])
			);
		end
		for (_gv_i_1 = 0; _gv_i_1 < 3; _gv_i_1 = _gv_i_1 + 1) begin : gen_p2
			localparam i = _gv_i_1;
			ProgrammableMux p2(
				.clk(clk),
				.reset(reset),
				.sel(ic_bot[i]),
				.a(inputs[i]),
				.b(inputs[i + 1]),
				.out(bot_lut_inps[i])
			);
		end
	endgenerate
	reg [7:0] top_lut_mask;
	reg [7:0] bot_lut_mask;
	always @(posedge clk)
		if (reset) begin
			top_lut_mask <= 8'b00000000;
			bot_lut_mask <= 8'b00000000;
		end
		else begin
			top_lut_mask <= lut_configuration_word[7:0];
			bot_lut_mask <= lut_configuration_word[15:8];
		end
	LUT top_lut(
		.mask(top_lut_mask),
		.a(top_lut_inps[0]),
		.b(top_lut_inps[1]),
		.c(top_lut_inps[2]),
		.out(f)
	);
	LUT bot_lut(
		.mask(bot_lut_mask),
		.a(bot_lut_inps[0]),
		.b(bot_lut_inps[1]),
		.c(bot_lut_inps[2]),
		.out(g)
	);
	ProgrammableMux p3(
		.clk(clk),
		.reset(reset),
		.sel(output_configuration_word[0]),
		.a(f),
		.b(g),
		.out(x)
	);
	ProgrammableMux p4(
		.clk(clk),
		.reset(reset),
		.sel(output_configuration_word[1]),
		.a(f),
		.b(g),
		.out(y)
	);
endmodule
