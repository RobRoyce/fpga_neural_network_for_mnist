`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 03/06/2020 04:47:46 PM
// Design Name: 
// Module Name: top_TB
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


module top_TB();
   reg clk, reset;

   top UUT(.clk(clk), .reset(reset));

   initial
     begin
        clk <= 1'b0;
        reset <= 1'b0;

        forever
          #10 clk <= ~clk;
     end
endmodule
