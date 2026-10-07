module registro_4b (
    input logic clk,
    input logic reset,
    input logic write_enable,
    input logic [3:0]data_in,
    output logic [3:0]data_out
);

    always_ff @( posedge clk ) begin
        if (reset)
            data_out <= 4'b0000;
        else if (write_enable)
            data_out <= data_in;
    end
endmodule 