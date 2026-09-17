module porton_fsm (
    input  logic clk,
    input  logic rst,
    input  logic button,
    output logic cerrado,
    output logic abriendo,
    output logic abierto,
    output logic cerrando
);
  // COMPLETAR: FSM Moore con estados CERRADO, ABRIENDO, ABIERTO y CERRANDO.
    typedef enum logic [1:0] {  
      S0, //cerrado
      S1, //abriendo
      S2, //abierto
      S3 //cerrando
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
        S1: next_state = S2;
        S2: if (button) next_state = S3;
        S3: next_state = S0;
        default: next_state = S0;
      endcase
    end

    assign cerrado = current_state == S0;
    assign abriendo = current_state == S1;
    assign abierto = current_state == S2;
    assign cerrando = current_state == S3;
    
endmodule

