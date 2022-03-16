module shift_reg #(WIDTH=8)(
    input clk,
    input [2:0] ctl,
    input [WIDTH-1:0] din,
    output reg [WIDTH-1:0] dout
);

    always@(posedge clk) begin

        case(ctl)
        
            3'b000: dout <= 0;
            3'b001: dout <= din;
            3'b010: dout <= { dout[0] , dout[WIDTH-1:1]};
            3'b011: dout <= { dout[WIDTH-2:0], dout[WIDTH-1]};
            3'b100: dout <= { dout[WIDTH-1], dout[WIDTH-1:1]};
            3'b101: dout <= 0; //I didn't implement this
            3'b110: dout <= { ^{dout[4], dout[3], dout[2], dout[0]}, dout[WIDTH-1:1]};
            3'b111: dout <= { dout[WIDTH-2:0], ^{dout[4], dout[3], dout[2], dout[0]}}; //wrong implementation 
        
        endcase
    end

endmodule 

