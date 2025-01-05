// CLB Flip Flop

// Asynchronous active-high reset signal
// Asynchronous active-high set signal
module CLBFF (
    input logic S,
    input logic D,
    input logic R,
    input logic clk,
    output logic Q
);

    always @(posedge clk or posedge S or posedge R) begin
        if(R) Q <= 0;
        else if(S) Q <= 1;
        else Q <= D;
    end


endmodule
