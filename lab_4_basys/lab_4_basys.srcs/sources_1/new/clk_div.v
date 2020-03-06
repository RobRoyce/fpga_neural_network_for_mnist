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
               output reg o_pix_clk, // 25MHz pixel clock
               output reg o_cycle_clk // 0.2Hz cycle clock
               );
   reg [15:0]             pix_cnt;
   reg [28:0]             cycle_cnt; // 100MHz / 0.2Hz = 500_000_000


   initial
     begin
        o_pix_clk <= 1'b0;
        o_cycle_clk <= 1'b0;
     end

   always @(posedge i_clk)
     begin
        if(i_reset)
          begin
             o_pix_clk <= 1'b0;
             o_cycle_clk <= 1'b0;
          end
        else
          begin
             // divide by 4: (2^16)/4 = 0x4000
             {o_pix_clk, pix_cnt} <= pix_cnt + 16'h4000;


             // Cycle Clock - 5 second timer to transition images
             cycle_cnt <= cycle_cnt + 29'b1;
             if(cycle_cnt == 29'd500_000_000)
               begin
                  o_cycle_clk <= 1'b1;
                  cycle_cnt <= 29'b0;
               end
             // leave it on for a little bit (testing, TODO: change this)
             else if(cycle_cnt == 29'd50_000)
               o_cycle_clk <= 1'b0;
          end
     end
endmodule
