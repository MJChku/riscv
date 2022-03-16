module lfsr (
    input clk,
    input [2:0] ctl,
    input [7:0] din,
    output reg[6:0] hex0,
    output reg[6:0] hex1 
);
    reg sig_1s;
    freq_1s freq(clk, sig_1s);
    reg [7:0] dout;
    shift_reg #(8) sreg (sig_1s, ctl, din, dout);
    bcd7seg seg1 (dout[3:0], hex0);
    bcd7seg seg2 (dout[7:4], hex1);

endmodule