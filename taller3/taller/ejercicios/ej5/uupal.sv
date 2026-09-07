module uupal (
    input  logic       clk,
    input  logic       rst,
    input  logic [3:0] force_in,
    input  logic       force_en,
    input  logic       we0,
    input  logic       we1,
    input  logic       we2,
    input  logic       we3,
    input  logic [1:0] src_a,
    input  logic [1:0] src_b,
    input  logic       load_op_a,
    input  logic       load_op_b,
    input  logic [1:0] op,
    output logic [3:0] r0,
    output logic [3:0] r1,
    output logic [3:0] r2,
    output logic [3:0] r3,
    output logic [3:0] operand_a,
    output logic [3:0] operand_b,
    output logic [3:0] and_value,
    output logic [3:0] or_value,
    output logic [3:0] result
);
  logic [3:0]bus_a, bus_b;

  assign bus_a = 
    (src_a == 2'b00) ? r0 : 
    (src_a == 2'b01) ? r1 :
    (src_a == 2'b10) ? r2 :
    r3;

  assign bus_b =
    (src_b == 2'b00) ? r0 : 
    (src_b == 2'b01) ? r1 :
    (src_b == 2'b10) ? r2 :
    r3;

  registro_4b registro_4b_a (
    .clk(clk),
    .rst(rst),
    .we (load_op_a),
    .din(bus_a),
    .q  (operand_a)
  );

  registro_4b registro_4b_b (
    .clk(clk),
    .rst(rst),
    .we (load_op_b),
    .din(bus_b),
    .q  (operand_b)
  );

  compuerta_and_4b compuerta_and_4b (
    .a     (operand_a),
    .b     (operand_b),
    .result(and_value)
  );
  
  compuerta_or_4b compuerta_or_4b (
    .a     (operand_a),
    .b     (operand_b),
    .result(or_value)
  );

  sumador_4b sumador_4b (
    .a   (operand_a),
    .b   (operand_b),
    .cin (0),
    .sum (sum),
    .cout(cout)
  );

  restador_4b restador_4b (
    .a   (operand_a),
    .b   (operand_b),
    .bin (0),
    .diff(diff),
    .bout(bout)
  );

  



  endmodule

  

  // Completar de manera estructural:
  // 1. mux src_a -> bus de lectura A; mux src_b -> bus de lectura B;
  // 2. registros operand_a y operand_b (load_op_a / load_op_b);
  // 3. AND y OR de 4 bits e instancias sumador_4b y restador_4b;
  // 4. mux op -> result;
  // 5. mux force_en: force_in vs result -> bus de escritura;
  // 6. cuatro registro_4b (r0..r3) con we0..we3.;


