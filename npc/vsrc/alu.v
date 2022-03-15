module alu #(WIDTH = 4) (
    input [2:0] selector,
    input [WIDTH-1: 0] A,
    input [WIDTH-1: 0] B,
    output reg [WIDTH-1:0] result,
    output reg overflow,
    output reg carry,
    output reg zero
);

  reg carry_in;
  reg [WIDTH-1:0] sub_B;
  always@(*) begin        
    carry_in = 1'b0;
    sub_B = 0;
    carry = 0;
    zero = 0;
    overflow = 0;
    result = 0;
    case(selector)
        3'b000: begin  
            {carry, result} = A+B+{{(WIDTH-1){1'b0}},carry_in};
            overflow = (A[WIDTH-1] == B[WIDTH-1]) && (result[WIDTH-1] != A[WIDTH-1]);
            zero = ~(| result); //overflow and zero, is it possible?
        end
        3'b001: begin
            sub_B = {WIDTH{~carry_in}} ^ B;
            {carry, result} = A + sub_B + {{(WIDTH-1){1'b0}},~carry_in};
            overflow = (A[WIDTH-1] == sub_B[WIDTH-1]) && (result[WIDTH-1] != A[WIDTH-1]);
            carry = carry ^ (~carry_in); // sub xor carry is carry for sub;
            zero = ~(| result);
        end
        3'b010: result = {WIDTH{1'b1}} ^ B;
        3'b011: result = A & B;
        3'b100: result = A | B;
        3'b101: result = A ^ B;
        3'b110: begin
            sub_B = {WIDTH{~carry_in}} ^ B;
            {carry, result} = A + sub_B + {{(WIDTH-1){1'b0}},~carry_in};
            overflow = (A[WIDTH-1] == sub_B[WIDTH-1]) && (result[WIDTH-1] != A[WIDTH-1]);
            zero = ~(| result);
            result = {{(WIDTH-1){1'b0}}, result[WIDTH-1] ^ overflow};
        end
        3'b111: begin
            sub_B = {WIDTH{~carry_in}} ^ B;
            {carry, result} = A + sub_B + {{(WIDTH-1){1'b0}},~carry_in};
            overflow = (A[WIDTH-1] == sub_B[WIDTH-1]) && (result[WIDTH-1] != A[WIDTH-1]);
            zero = ~(| result);
            result = {{(WIDTH-1){1'b0}}, zero & ~overflow} ; //carry is 0 when zero;
        end
    endcase 
  end

endmodule