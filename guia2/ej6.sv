module registro_8b (
    input logic clk,
    input logic reset,
    input logic load,
    input logic shift,
    input logic serial_in,
    input logic [7:0]data_in,
    output logic [7:0]data_out
);

    always_ff @(posedge clk) begin
        if (reset)
            data_out <= 8'b0;
        else if (load)
            data_out <= data_in;
        else if (shift)
            data_out <= {data_out[6:0], serial_in} 
    end
endmodule