`timescale 10ns / 1ns
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date: 03/02/2020 07:41:25 PM
// Design Name:
// Module Name: clk_div_TB
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


module clk_div_TB();
   reg clk = 0;
   reg reset = 0;
   wire pix_clk;
   wire nn_clk;

   clk_div UUT(
               .i_clk(clk),
               .i_reset(reset),
               .o_25MHz_clk(pix_clk),
               .o_50MHz_clk(nn_clk)
               );

   initial
     begin
        #1 reset <= 1'b0;

        forever
          #1 clk <= ~clk;
     end

endmodule
