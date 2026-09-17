module contador_posicion (
    input logic clk, input logic rst,
    input logic subir, input logic bajar,
    output logic [1:0] posicion
);
  // COMPLETAR: contador saturado entre 0 (cerrado) y 3 (abierto).
  
    always_ff @(posedge clk or posedge rst) begin
      if (rst)
        posicion <= 2'b00;
      else if (subir & (posicion != 2'b11))
        posicion <= posicion + 1;
      else if (bajar & (posicion != 2'b00))
        posicion <= posicion - 1;
    end
  
endmodule
