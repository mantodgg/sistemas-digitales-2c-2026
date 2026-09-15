module decodificador2a4 (
    input logic [1:0] in,
    output logic [3:0] out
);
    assign out[0] = ~in[1] & ~in[0];
    assign out[1] = ~in[1] & in[0];
    assign out[2] = in[1] & ~in[0];
    assign out[3] = in[1] & in[0];

endmodule

module demux1a4_jerarquico(
    input logic data,
    input logic [1:0] in,
    output logic [3:0] out
);
    logic [3:0]linea;
    
    decodificador2a4 deco(
        .in(in),
        .out(linea)
    );
    
    assign out[0] = data & linea[0];
    assign out[1] = data & linea[1];
    assign out[2] = data & linea[2];
    assign out[3] = data & linea[3];
          
endmodule

module demux1a4_plano (
    input logic data,
    input logic [1:0] in,
    output logic [3:0] out
); 
    assign out[0] = data & ~in[1] & ~in[0];
    assign out[1] = data & ~in[1] & in[0];
    assign out[2] = data & in[1] & ~in[0];
    assign out[3] = data & in[1] & in[0];
    
endmodule