module ChainFF(
    input logic cfg_clk,
    input logic cfg_en,
    input logic D,
    output logic scan_q,
    output logic q
);
    always @(negedge cfg_en) q <= scan_q;
    always @(posedge cfg_clk) begin
        if(cfg_en) scan_q <= D;
        // else q <= scan_q;
    end
    // assign q = (~cfg_en) & scan_q;
endmodule
