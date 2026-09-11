module shifter_4b (
    input logic [3:0] dato,
    input logic aritmetico,
    output logic [3:0] resultado,
    output logic negativo, zero
);
  // COMPLETAR: desplazar dato una posición a derecha según aritmetico.
  // Reutilizar negativo_4b y zero_4b sobre resultado.
  // En modo lógico, ambos flags deben valer 0.

  always_comb begin
    if (aritmetico) begin
      resultado = {1'b1,dato[3:1]}; 
    end else begin
      resultado = {1'b0,dato[3:1]};
    end
  end

  negativo_4b negativo_4b (
    .dato    (resultado),
    .negativo(negativo)
  );

  zero_4b zero_4b (
    .dato(resultado),
    .zero(zero)
  );
  
endmodule
