module timer (
    input clk,
    input enable,
    input pause,
    input reset,
    output reg [6:0] hex0,
    output reg [6:0] hex1
);

    reg sig_1s;
    freq_1s freq(clk, sig_1s);
    reg [6:0] counter;

    reg [3:0] num0;
    reg [3:0] num1; 

    initial begin
        counter = 0;
        num0 = 0;
        num1 = 0;
    end

    bcd7seg seg1 (num0, hex0);
    bcd7seg seg2 (num1, hex1);

    always@(posedge sig_1s) begin
        if(enable) begin
            if(counter == 99) 
                counter <= pause ? counter : 0;
            else
                counter <= reset ? 0: (pause ? counter : counter+1);
            num0 <= counter[3:0];
            num1 <= {1'b0, counter[6:4]};
        end
    end

endmodule