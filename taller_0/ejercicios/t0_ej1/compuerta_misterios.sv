// Taller 0 · Ejercicio 1
// Abrir, sintetizar y explorar.

module compuerta_misterios (
    input  logic a, // entrada de variables.
    output logic y // salida de variables.
);

  assign y = ~a; // el assign describe como sera el valor de salida.
                 // en este caso hace que el output sea NOT a.
endmodule // fin del modulo


