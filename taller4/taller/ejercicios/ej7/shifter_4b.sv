module shifter_4b (
    input logic [3:0] dato,
    input logic aritmetico,
    output logic [3:0] resultado,
    output logic negativo, zero
);
  // COMPLETAR: desplazar dato una posición a derecha según aritmetico.
  // Reutilizar negativo_4b y zero_4b sobre resultado.
  // En modo lógico, ambos flags deben valer 0.

  logic zero_1, negativo_1;
  logic zero_0, negativo_0;

  assign zero_0 = 1'b0;
  assign negativo_0 = 1'b0;

  always_comb begin
    if (aritmetico) begin
      resultado = {dato[3],dato[3:1]}; 
      zero =  zero_1;
      negativo = negativo_1;
    end else begin
      resultado = {1'b0,dato[3:1]};
      zero = zero_0;
      negativo = negativo_0;
    end
  end

  negativo_4b negativo_4b (
    .dato    (resultado),
    .negativo(negativo_1)
  );

  zero_4b zero_4b (
    .dato(resultado),
    .zero(zero_1)
  );

endmodule
