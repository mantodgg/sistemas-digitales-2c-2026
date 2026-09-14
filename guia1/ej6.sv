/*Un codificador recibe in[3:0]. Una entrada es válida cuando exactamente uno de sus bits vale 
1. Para una entrada válida, code[1:0] indica la posición del bit activo: 0001 produce 00, 0010 
produce 01, 0100 produce 10 y 1000 produce 11. La salida valid vale 1 solo en esos cuatro casos.*/

module codificador (
    input logic [3:0] in,
    output logic [1:0] code,
    output logic valid
);
    assign code = 
        (in == 4'b1000) ? 2'b11 :
        (in == 4'b0100) ? 2'b10 :
        (in == 4'b0010) ? 2'b01 :
        2'b00;
    assign valid = 
        (in == 4'b1000 | in == 4'b0100 | in == 4'b0010 | in == 4'b0001) ? 1 : 0;
endmodule