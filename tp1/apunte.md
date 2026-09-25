# Pequeño apunte del TP

## Definiciones

### Flags
Las flags son bits de estado (de un bit cada uno) que la AlU calcula junto con el resultado de una operacion y que indican 
las propiedades de ese resultado (y que no aparecen mirando solo el numero).

En este TP tenemos Z, N, C y V.
Z(zero): vale 1 si el resultado da exactamente cero. Se calcula con un comparador que compara resultado con la constante 0.
N(negativo): vale 1 si el resultado es negativo (interepretado en complemento a 2, solo tiene que ver el MSB).
C(carry): indica el acarreo/prestamo en aritmetica unsigned.
-en ADD: si al sumar dos numeros de 32 bits el resultado necesita un bit 33, entonces se sale del tango unsigned, entonces
C=1.
-en SUB: indica prestamo, si A < B, restar A-B requiere pedir prestado.
-en AND/OR: no tiene sentido tener acarreo/prestamo por eso queda fijo en 0.

## Ejercicio 1

En este ejercicio la ALU recibe los operand_a, operand_b y opcode a traves de alu_io, luego devuelve result y flags.
Instancia sumador_flags, restador_flags (calculan suma/resta con sus carry/overflow en paralelo sin importar el opcode) 
y ademas comparte un comparador y un negativo para toda la ALU.



