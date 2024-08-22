module test (
    a,
    b,
    c,
    out1,
    out2
);
  input wire a;
  input wire b;
  input wire c;
  output wire out1;
  output wire out2;
  assign out1 = c ? b : a;
  assign out2 = a | (b & c);
endmodule
