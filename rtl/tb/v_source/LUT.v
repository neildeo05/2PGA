`default_nettype none `timescale 1ns / 1ns
module LUT (
	mask,
	a,
	b,
	c,
	out
);
	input wire [7:0] mask;
	input wire a;
	input wire b;
	input wire c;
	output reg out;
	reg sel2 [0:3];
	always @(*)
		if (c) begin
			sel2[0] = mask[1];
			sel2[1] = mask[3];
			sel2[2] = mask[5];
			sel2[3] = mask[7];
		end
		else begin
			sel2[0] = mask[0];
			sel2[1] = mask[2];
			sel2[2] = mask[4];
			sel2[3] = mask[6];
		end
	always @(*)
		if (~a & ~b)
			out = sel2[0];
		else if (~a & b)
			out = sel2[1];
		else if (a & ~b)
			out = sel2[2];
		else
			out = sel2[3];
endmodule
