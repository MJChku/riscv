module bcd7seg(
    input [3:0] b,
    output reg [6:0] h
);

    `define const_one 7'b1111111
    always @(*) begin
        case(b)
            4'd0: begin h = 0; h[6] = 1; end
            4'd1: begin h = `const_one; h[1] = 0; h[2] = 0; end
            4'd2: begin h = 0; h[5] = 1; h[2] = 1; end
            4'd3: begin h = 0; h[4] = 1; h[5] = 1; end
            4'd4: begin h = 0; h[0] = 1; h[3] = 1; h[4] = 1; end
            4'd5: begin h = 0; h[1] = 1; h[4] = 1; end
            4'd6: begin h = 0; h[1] = 1; end
            4'd7: begin h = `const_one; h[0] = 0; h[1] = 0; h[2] = 0; end
            4'd8: begin h = 0; end
            4'd9: begin h = 0; h[4] = 1; end
            4'd10: begin h = 0; h[3] = 1; end
            4'd11: begin h = 0; h[0] = 1; h[1] = 1; end
            4'd12: begin h = 0; h[1] = 1; h[2] = 1; h[6] = 1; end 
            4'd13: begin h = 0; h[0] = 1; h[5] = 1; end
            4'd14: begin h = 0; h[1] = 1; h[2] = 1; end
            4'd15: begin h = 0; h[1] = 1; h[2] = 1; h[3] = 1; end
        endcase    
    
    end

endmodule