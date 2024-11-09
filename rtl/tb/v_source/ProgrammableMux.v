`default_nettype none `timescale 1ns / 1ns
module ProgrammableMux (
	clk,
	reset,
	sel,
	a,
	b,
	out
);
	input wire clk;
	input wire reset;
	input wire sel;
	input wire a;
	input wire b;
	output wire out;
	reg sel_bit;
	always @(posedge clk)
		if (reset)
			sel_bit <= 0;
		else
			sel_bit <= sel;
	assign out = (sel_bit ? b : a);
endmodule
