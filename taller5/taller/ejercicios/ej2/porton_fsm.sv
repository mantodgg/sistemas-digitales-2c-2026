module porton_fsm_long (
    input logic clk, input logic rst, input logic button,
    input logic [1:0] posicion,
    output logic subir, output logic bajar,
    output logic abierto, output logic cerrado
);
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
        S0: if (button & posicion != 11) next_state = S1;
        S1: next_state = S2;
        S2: if (button & posicion != 00) next_state = S3;
        S3: next_state = S0;
        default: next_state = S0;
      endcase
    end

    assign cerrado = current_state == S0;
    assign subir = current_state == S1;
    assign abierto = current_state == S2;
    assign bajar = current_state == S3;
    
endmodule
    

