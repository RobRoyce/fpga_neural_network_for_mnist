`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 03/02/2020 08:37:36 PM
// Design Name: 
// Module Name: debouncer_TB
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module debouncer_TB();

   reg clk = 0;
   reg signal = 0;
   wire state, trans_dn, trans_up;

   debouncer UUT(
                 .i_clk(clk),
                 .i_signal(signal),
                 .o_state(state),
                 .o_trans_dn(trans_dn),
                 .o_trans_up(trans_up)
                 );
   initial
     begin
        #1000000 signal <= ~signal;
        #1000 signal <= ~signal;
        #2000 signal <= ~signal;
        #1000 signal <= ~signal;
        #100000 signal <= ~signal;
        #2000 signal <= ~signal;
        #20000 signal <= ~signal;
        #30000 signal <= ~signal;
        #1000000 signal <= ~signal;
        #10000000 signal <= ~signal;
        #10000000 signal <= ~signal;

     end

   always
     #10 clk <= ~clk;

endmodule
