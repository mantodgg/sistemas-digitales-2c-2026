module restador_completo (
    input  logic a,
    input  logic b,
    input  logic bin,
    output logic diff,
    output logic bout
);
  logic d1, b1, b2;
  // instanciar dos restador_simple y armar bout
  restador_simple rs1 (
    .a(a),
    .b(b),
    .diff(d1),
    .bout(b1)
  );

  restador_simple rs2 (
    .a(d1),
    .b(bin),
    .diff(diff),
    .bout(b2)
  );

  assign bout = b1 | b2;
endmodule
