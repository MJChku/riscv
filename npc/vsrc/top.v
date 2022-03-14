module top( input clk, input rst, output reg [15:0] led);

light light_module(clk, rst, led);

endmodule

