/*Ejercicio 5:
Diseñar un bloque combinacional con una entrada de datos data, una selección sel[1:0] y cuatro
salidas out[3:0]. La salida seleccionada debe tomar el valor de data; las otras tres deben valer 0*/

module ejercicio5 (
    input logic data,
    input logic [1:0] sel,
    output logic [3:0] out 
);
    always_comb begin 
        out = 4'b0000
        case (sel)
            2'b00 : out[0] = data; 
            2'b01 : out[1] = data;
            2'b10 : out[2] = data;
            2'b11 : out[3] = data;   
        endcase
    end
endmodule

module demux1a4 (
    input logic data,
    input logic [1:0] sel,
    output logic [3:0] out 
);
    assign out[0] = data & ~sel[0] & ~sel[1];
    assign out[1] = data & ~sel[0] & sel[1];
    assign out[2] = data & sel[0] & ~sel[1];
    assign out[3] = data & sel[0] & sel[1];
endmodule