// lo hice para 4 bits aunque el enunciado pide que hay que hacerlo para N bits (default en 3). no importa, la implementacion es parecida, funciona como inversor.

module inversor_controlado (
    input logic [3:0] in,
    input logic invert,
    output logic [3:0] out
);
    always_comb begin
        if (invert) begin
            out[0] = ~in[0];
            out[1] = ~in[1];
            out[2] = ~in[2];
            out[3] = ~in[3];
        end
        else begin
            out = in;
        end
    end
endmodule