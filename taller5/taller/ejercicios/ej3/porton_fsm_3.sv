module porton_fsm_smart (
    input logic clk, input logic rst, input logic button,
    input logic [1:0] posicion,
    output logic abrir, output logic cerrar, output logic pausa,
    output logic abierto, output logic cerrado
);
  // COMPLETAR: un click inicia; durante el movimiento pausa; desde la pausa
  // otro click inicia el movimiento en la dirección opuesta.
  typedef enum logic [2:0] {  
      S0, //cerrado
      S1, //abriendo
      S2, //abierto
      S3, //cerrando
      S4, //pausa subiendo
      S5 //pausa bajando
    } state_t;

    state_t current_state, next_state;

    always_ff @(posedge clk or posedge rst) begin
      if (rst)
        current_state <= S0;
      else
        current_state <= next_state;
    end

    always_comb begin
      next_state = current_state;

      unique case (current_state)
        S0: if (button) next_state = S1;
        S1: begin
            if (posicion == 2'b11) next_state = S2;
            if (button) next_state = S4;
        end 
        S2: if (button) next_state = S3;
        S3: begin
            if (posicion == 2'b00) next_state = S0;
            if (button) next_state = S5;
        end
        S4: begin
            if (posicion == 2'b11) next_state = S2;
            if (posicion == 2'b00) next_state = S0;
            if (button) next_state = S3;
        end
        S5: begin
            if (posicion == 2'b00) next_state = S0;
            if (posicion == 2'b11) next_state = S3;
            if (button) next_state = S1;
        end
        default: next_state = S0;
      endcase
    end

    assign cerrado = current_state == S0;
    assign abrir = current_state == S1;
    assign abierto = current_state == S2;
    assign cerrar = current_state == S3;
    assign pausa = current_state == S4 | current_state == S5;
endmodule
