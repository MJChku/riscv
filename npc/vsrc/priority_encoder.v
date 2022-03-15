module priority_encoder 
#(INPUT_LEN = 8, OUT_LEN = 3)
(
  input enable,
  input [INPUT_LEN-1:0] x,
  output reg [OUT_LEN-1:0] y,
  output reg indicate
);
    always@(*) begin
        y = 0;
        indicate = 0;
        if(enable) begin
            for (int i = 0; i < INPUT_LEN; i++) begin
                if (x[i] == 1) begin y = i[OUT_LEN-1:0]; indicate = 1; end
            end

        end
        else begin
            y = 0;
            indicate = 0;
        end
    end

endmodule

module priority_encoder8_3(
  input enable,
  input [7:0] x,
  output reg [2:0] y,
  output reg indicate );

  priority_encoder #(8, 3) pencoder(enable, x, y, indicate);
endmodule