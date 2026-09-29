# Pequeño apunte del TP

## Definiciones

### Flags
Las flags son bits de estado (de un bit cada uno) que la AlU calcula junto con el resultado de una operacion y que indican 
las propiedades de ese resultado (y que no aparecen mirando solo el numero).

En este TP tenemos Z, N, C y V.

Z(zero): vale 1 si el resultado da exactamente cero. Se calcula con un comparador que compara resultado con la constante 0.

N(negativo): vale 1 si el resultado es negativo (interepretado en complemento a 2, solo tiene que ver el MSB).

C(carry): indica el acarreo/prestamo en aritmetica unsigned.

V(overflow): indica si hay overflow (desborde) en aritmetica signed.

-en ADD: si al sumar dos numeros de 32 bits el resultado necesita un bit 33, entonces se sale del tango unsigned, entonces
C=1.

-en SUB: indica prestamo, si A < B, restar A-B requiere pedir prestado.

-en AND/OR: no tiene sentido tener acarreo/prestamo por eso queda fijo en 0.

## Ejercicio 1

En este ejercicio la ALU recibe los operand_a, operand_b y opcode a traves de alu_io, luego devuelve result y flags.
Instancia sumador_flags, restador_flags (calculan suma/resta con sus carry/overflow en paralelo sin importar el opcode) 
y ademas comparte un comparador y un negativo para toda la ALU.

El opcode es un selector de 3 bits, le dice que rama tomar. si no toma un valor valido cae en el default del case. Cuando el opcode
es invalido entonces el resultado de los flags es el siguiente: Z=0, N=1, C=0, V=0 (por enunciado).

## Ejercicio 2

Comportamiento: 

dout A y dout B son las salidas de los dos puertos de lectura de reg_file. Apuntan a algun registro (0-31) mediante regA_idx/regB_idx y cada una muestra el contenido de a que registro esta apuntando en ese momento. 

Al comienzo A señala a R1 y por eso dout A = 10, porque R1 = 10. tambien B, al señalar R2, toma su valor que es 20. 

En el siguiente paso A pasa a apuntar a R2, pero no cambia hasta despues del flanco ascendente, esto es porque entre flancos se conserva ese valor. 

Despues escribe 99 en R2 por A pero en el enunciado dice que la lectura es READ-FIRST: si se lee y escribe una posicion en el mismo flanco, entonces dout recibe el contenido anterior. Entonces por eso antes del siguiente flanco sin escritura sigue tomando el valor 20. Luego, pasan todos a valer 99 porque recordemos que A y B apuntan al mismo registro. 

Cualquier lectura de R0 da 0 y cualquier escritura sobre R0 es ignorada. no importa que combinacion de indice/dato/we le pasemos, su valor es inalterable.

## Ejercicio 3

En este ejercicio se conecta la ALU con reg_file.

Tenemos primero un multiplexor que lo que hace es que si el we es 1 entonces que escriba rd y sino que apunte a rs1, que lee el operando. 

[COMPLETAR]

## Ejercicio 4

El modulo registro_orden es un banco de 4 flip-flps. Los campos guardados no cambian al modificar las entrdas con la captura deshabilitada (capture_en = 0). En cada flanco ascendente con capture_en = 1, guarda rs1, rs2, rd y opcode en rs1_q, rs2_q, rd_q y op_q.

Tenemos un reset asincrono, si el rst cambia a 1, no espera a un flanco del clock sino que instantaneamente entra a la rama del reset. Cuando entra a rst todos los registros pasan a 0. 

## Ejercicio 5 

En este ejercicio tenemos la FSM.

Primero se define cada estado (IDLE, FETCH_OPS, EXECTUE, WRITEBACK).

Luego establecemos que si reseteamos entonces el estado pasa a ser IDLE y sino el estado actual pasa a ser el siguiente.

En el primer estado IDLE, si tenemos la señal start en 1, entonces pasamos al siguiente estado FETCH_OPS, sino nos quedamos en el mismo IDLE. Luego el resto de estados se van sucediendo sin ninguna condicion. FETCH_OPS -> EXECUTE -> WRITEBACK -> IDLE.

En IDLE: la unidad está libre, por eso ready = 1. Todavia no termino nada (done=0) porque no está haciendo nada. Y capture_en = start: si en este preciso estado llega un start=1, se habilita la captura.

En FETCH_OPS: la unidad acepto la orden y esta ocupada trayendo los operandos del banco. No puede aceptar otra orden (ready=0), no terminó (done=0), no hay nada que capturar de nuevo (capture_en=0, ya se capturó al entrar acá) y todavía no hay nada que escribir (rf_we=0).

En EXECUTE: la ALU esta calculando con los operandos leidos. Sigue ocupada (ready=0), sigue sin terminar (done=0), y no tiene nada que capturar o escribir.

En WRITEBACK: se cierra el ciclo. done=1 porque el resultado ya es valido en este ciclo. rf_we=1 porque es el momento de escribir ese resultado en el banco. ready sigue en 0 porque tecnicamente la unidad todavia esta en este estado.

## Ejercicio 6

Este ejercicio es unicamente conexion (cableado). Recibe las entradas y entrega las salidas. 

[COMPLETAR RESPUESTAS DEL PDF]

