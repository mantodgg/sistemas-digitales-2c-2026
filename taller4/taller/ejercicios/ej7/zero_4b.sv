module zero_4b (
    input logic [3:0] dato,
    output logic zero
);
  // COMPLETAR: Indicar si dato es cero.
  assign zero = dato == 0000;

endmodule
