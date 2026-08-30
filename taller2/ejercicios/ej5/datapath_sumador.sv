module datapath_sumador (
    input  logic       clk,
    input  logic       rst,
    input  logic [3:0] force_in,
    input  logic       we_a,
    input  logic       we_b,
    input  logic       we_s,
    output logic [3:0] r_a,
    output logic [3:0] r_b,
    output logic [3:0] r_s,
    output logic       cout
);
  //basicamente hacemos el registro de a y de b y luego los sumamos. luego de sumarlos hacemos 
  //el registro del resultado, lo nombramos s. (por eso tenemos 3 registros y una suma)
  logic [3:0] suma;

  registro_4b registro_r_a (
    .clk(clk),
    .rst(rst),
    .we (we_a),
    .din(force_in),
    .q  (r_a) 
  );

  registro_4b registro_r_b (
    .clk(clk),
    .rst(rst),
    .we (we_b),
    .din(force_in),
    .q  (r_b)
  );
  
  registro_4b registro_r_s (
    .clk(clk),
    .rst(rst),
    .we (we_s),
    .din(suma),
    .q  (r_s)
  );

  sumador_4b sumador (
    .a   (r_a),
    .b   (r_b),
    .cin (0),
    .sum (suma),
    .cout(cout)
  );
endmodule
