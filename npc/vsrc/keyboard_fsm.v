module keyboard_fsm(
    input clk,
    input reset,
    input [7:0] raw,
    output reg [7:0] key_pressed
);

    parameter[1:0] S1=0, S2=1, S3=2, S4=3;
    reg [1:0] state_din=S1, state_dout=S1;
    reg [7:0] keyboard_dout;
    wire state_wen;
    SimReg #(2) state(clk, reset,  state_din, state_dout, state_wen); //reset default value?

    assign state_wen = 1; //write enable

    General_Multiplexier  #(4, 2, 2, 1) fsm1 (state_din, state_dout, 2'd0, {
        S1, (raw != 8'hF0 && raw != 8'h0) ? S2 : S1,
        S2, (raw == 8'hF0) ? S3 : S1,
        S3, (raw != 8'hF0) ? S4 : S1,
        S4, S1
        }
    );

    always@(posedge clk) begin
        if(state_dout == S1) 
            keyboard_dout <= raw;
        else   
            keyboard_dout <= keyboard_dout;

        if(state_dout == S4)
            key_pressed <= keyboard_dout;
        else
            key_pressed <= 8'b0;
    end
    
endmodule

