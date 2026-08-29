module registro_1b (
    input  logic clk,
    input  logic rst,
    input  logic we,
    input  logic din,
    output logic q
);
/*
primero lo hice de esta forma pero creo que es mejor hacerlo usando el module del ejercicio anterior

  // completar: instanciar ff_d y un mux (we ? din : q)
  always_ff @(posedge clk) begin
    if (rst) begin
      q = 0;
    end else begin
      q <= we ? din : q; //si we es igual a 1 (true) entonces entonces pasa a din, sino pasa a q
    end    
  end
endmodule
*/ 

  logic new_d;
  assign new_d = we ? din : q;  
  ff_d ff_d (
    .clk(clk),
    .rst(rst),
    .d  (new_d),
    .q  (q)
  );
endmodule
