// Taller 0 · Ejercicio 3
// Interpretar el circuito del enunciado e implementarlo.

module circuito_ej3 (
    input  logic a,
    input  logic b,
    output logic y
);

  logic p,q;

  assign p = ~a & b; 
  assign q = a & ~b;
  assign y = p | q;

endmodule

