`define ARRAY(x) [x-1:0]
module General_Multiplexier #(NR_KEY=2, KEY_LEN=1, DATA_LEN=1,HAS_DEFAULT=0)
( output reg `ARRAY(DATA_LEN) out,
  input `ARRAY(KEY_LEN) key,
  input `ARRAY(DATA_LEN) default_out,
  input `ARRAY(NR_KEY*(DATA_LEN+KEY_LEN)) lut
);

    localparam PAIR_LEN = KEY_LEN + DATA_LEN;

    wire `ARRAY(PAIR_LEN) pair_list `ARRAY(NR_KEY);
    wire `ARRAY(DATA_LEN) data_list `ARRAY(NR_KEY);
    wire `ARRAY(KEY_LEN) key_list `ARRAY(NR_KEY);

    generate 
        for (genvar i = 0; i < NR_KEY; i++) begin
            assign pair_list[i] = lut[(i+1)*PAIR_LEN-1:i*PAIR_LEN];
            assign key_list[i] = pair_list[i][PAIR_LEN-1:DATA_LEN];
            assign data_list[i] = pair_list[i][DATA_LEN-1:0];
        end
    endgenerate

    reg `ARRAY(DATA_LEN) lut_out;
    reg hit;
    always@(*) begin
        lut_out = 0;
        hit = 0;
        for(int i = 0; i < NR_KEY; i++) begin
            lut_out = lut_out | ( {DATA_LEN{key==key_list[i]}} & data_list[i] );
            hit = hit | ( key==key_list[i] );      
        end
        out = HAS_DEFAULT ? ( hit ? lut_out: default_out) : lut_out;
    end

endmodule
