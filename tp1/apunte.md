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

Primero declaramos los cables regA_idx que es un cablde de 5 bits que lleva el numero de registro (0 a 31) que va a usar el puerto A del banco de registros. Luego rf_rs1_data y rf_rs2_data son cables de 32 bits, que llevan los numeros que lee el banco, uno por cada puerto. rf significa "register file" y rs1 y rs2 "primer y segundo operando", data "dato".

alu_if alu_io ();
alu u_alu (.alu_io(alu_io));

La primera linea lo que hace es crea una interfaz que es un paquete de cables agrupados. dentro tenemos operand_a, operand_b, opcode, result y flags. En vez de declarar una por una se declara toda desde alu_io.

Luego la segunda lo que hace es crear la ALU, con el nombre u_alu, y la enchufa con este primer paquete de cables (de arriba).

Tenemos un multiplexor que lo que hace es que si el we es 1 entonces que escriba rd y sino que apunte a rs1, que lee el operando.
Es decir, el puerto A del banco tiene un solo indice y se usa para dos cosas. Mientras no se escribe, hay que leer rs1 que es el primer operando, sino se apunta a rd (destino), esta linea elige como dijimos antes, segun rf_we.

Ahora creamos el banco de registros reg_file u_reg_file (). Entonces dividamos entre puerto A y B:

Puerto A (lee rs1 y también escribe rd):
.regA_idx(regA_idx): el índice sale del mux del bloque 3. (cuando esta leyendo rs1 y cuando esta escribiendo toma r2)
.regA_din(result): lo que se escribiría por A es el result de la ALU.
.regA_dout(rf_rs1_data): lo que el banco lee por A va al cable rf_rs1_data.
.regA_we(rf_we): el permiso de escritura es rf_we. Es la misma señal que maneja el mux, por eso el índice y el permiso cambian juntos.

Puerto B (solo lee rs2):

.regB_idx(rs2): siempre apunta a rs2.
.regB_dout(rf_rs2_data): lo leído va a rf_rs2_data.
.regB_we(1'b0): el permiso de escritura está fijo en 0, nunca escribe.
.regB_din(32'b0): como nunca escribe, el dato de entrada no importa, pero la patita pide algo, así que se le pone cero.

Esto quiere decir que mientras el rf_we = 0 entonces ambos puertos leen (A a rs1 y B a rs2) y luego a la hora de la escritura (rf_we = 1) unicamente A escribe a rd y B sigue leyendo rs2. 

Cuando pide verificar que R5 <- R1 + R2 con R1 = 10 y R2 = 20, basicamente nos esta diciendo que en el banco de registros quede R5 = 30. Y que luego quede R6 <- R5 - R1 entonces nos deberia quedar R6 = 20. Hay que hacerlo sin que se altere el origen 

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

El top_module instancia la FSM, el registro de orden y el datapath:
- La FSM recibe start y entrega ready y done (salidas externas) y capture_en y rf_we (internas).
- El registro de orden recibe los campos externos (rs1, rs2, rd, opcode) y capture_en, y entrega la version capturada (rs1_q, rs2_q, rd_q, op_q).
- El datapath recibe los campos capturados y rf_we, y entrega alu_flags. result queda interno.
- clk y rst llegan a la FSM, al registro de orden y al banco (dentro del datapath). La ALU no los recibe porque es combinacional.

Valores en R5 <- R1 + R2 (R1=10, R2=20):
- FETCH_OPS: regA_idx=1, result todavia no valido.
- EXECUTE: regA_idx=1, result=30.
- WRITEBACK: regA_idx=5, result=30.
