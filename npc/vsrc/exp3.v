module exp3(
    input [2:0] selector,
    input [3:0] A,
    input [3:0] B,
    output reg [3:0] result,
    output reg overflow,
    output reg carry,
    output reg zero);

alu #(4) alu_instance (
    selector, A, B, result, overflow, carry, zero
);

endmodule