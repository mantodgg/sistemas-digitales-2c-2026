module inversor_cond (
    input  logic [3:0] x,
    input  logic       ctrl,
    output logic [3:0] y
);
  // completar
    assign y = ctrl ? ~x : x; //literalmente si ctrl es 0 entonces es 
endmodule                     //el inverso de x (NOT x) y si es 1, x.
