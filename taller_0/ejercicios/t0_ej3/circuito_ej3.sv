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

/*otra posibilidad de hacer el ejercicio
module circuito_ej3_extra (
    input logic a,
    input logic b,
    output logic y
);

  logic p,q;

  assign p = ~(a & b); // no tenemos a AND b 
  assign q = a | b; // pero si tenemos a OR b
  assign y = p & q; // tenemos p AND q (es decir, o bien tenemos a y no b, o tenemos b y no a)

endmodule
*/
