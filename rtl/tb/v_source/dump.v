module dump();
  initial begin
    $dumpfile ("clb.vcd");
    $dumpvars (0, CLB);
    #1;
  end
endmodule

