module ff_d (
    input  logic clk,
    input  logic rst,
    input  logic d,
    output logic q
);

  always_ff @(posedge clk) begin
    if (rst) begin //si rst es 1 entonces:
      q = 0; //q pasa a valer 0
    end else begin //de otra manera
      q <= d; //q pasa a valer d
    end
  end
endmodule

