module ConfigChain #(parameter int SZ = 16)(
    input logic cfg_clk,
    input logic cfg_en,
    input logic cfg_head,
    output logic [SZ-1:0] out
);
    logic [SZ:0] chain;
    assign chain[0] = cfg_head;
    generate
        genvar i;
        for(i = 0; i < SZ; i++) begin : g_cf1
            ChainFF cf(.cfg_clk(cfg_clk), .cfg_en(cfg_en), .D(chain[i]), .scan_q(chain[i+1]), .q(out[i]));
        end
    endgenerate
endmodule
