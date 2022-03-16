module freq_1s(
    input clk,
    output reg clk_1s
);
    reg [24:0] count_clk;
    always@(posedge clk) begin
        if(count_clk == 25'd24999999) begin 
            count_clk <= 0;
            clk_1s <= ~clk_1s;
        end
        else 
            count_clk <= count_clk+1;
    end
endmodule