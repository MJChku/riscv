module exp2(
  input enable,
  input [7:0] x,
  output reg led0, 
  output reg led1, 
  output reg led2, 
  output reg led4, 
  output reg [6:0] hex0
); 
//    reg [2:0] y;
//    reg indicate;
   priority_encoder8_3 pencoder_instance (enable, x, {led0, led1, led2}, led4);
//    assign led4 = indicate;
//    assign {led0, led1, led2} = y;

   bcd7seg bcd_instance ({1'b0, led0, led1, led2}, hex0);

endmodule