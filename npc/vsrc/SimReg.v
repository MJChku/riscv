module SimReg #(WIDTH=8) (
    input clk, reset, 
    output [WIDTH-1:0] din,
    output reg [WIDTH-1:0] dout,
    input en
);

    always@(posedge clk) begin
        if (en) 
            dout <= reset ? 0 : din;
    end

endmodule