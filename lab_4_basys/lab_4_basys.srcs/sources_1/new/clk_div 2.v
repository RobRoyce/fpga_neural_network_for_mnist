`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date: 03/02/2020 07:37:06 PM
// Design Name:
// Module Name: clk_div
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


module clk_div(
               input wire i_clk,
               input wire i_reset,
               output reg o_50MHz_clk, // 50MHz nn clock
               output reg o_25MHz_clk // 25MHz pixel clock
               );
   reg [15:0]             pix_cnt;

   initial
     begin
        pix_cnt <= 0;
        o_25MHz_clk <= 1'b0;
        o_50MHz_clk <= 1'b0;
     end

   always @(posedge i_clk)
     if(i_reset)
       begin
          o_50MHz_clk <= 1'b0;
          o_25MHz_clk <= 1'b0;
       end
     else
       begin
          {o_25MHz_clk, pix_cnt} <= pix_cnt + 16'h4000; // 25MHz
          o_50MHz_clk <= ~o_50MHz_clk;
       end
endmodule
