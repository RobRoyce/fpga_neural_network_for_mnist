`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date:    11:44:37 02/27/2020
// Design Name:
// Module Name:    vga_live_test
// Project Name:
// Target Devices:
// Tool versions:
// Description:
//
// Dependencies:
//
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
//
//////////////////////////////////////////////////////////////////////////////////
module vga_live_test(
                     input wire clk,
                     input wire reset,
                     output wire hsync,
                     output wire vsync,
                     output wire [7:0] rgb,
                     output wire [7:0] sw
                     );
   reg [7:0]                           rgb_r;
   wire                                video_on;

   vga_display vga_uut(
                       .clk(clk),
                       .reset(reset),
                       .hsync(hsync),
                       .vsync(vsync),
                       .video_on(video_on),
                       .p_tick(),
                       .x(),
                       .y()
                       );

   always @(posedge clk, posedge reset)
     begin
        if (reset)
          rgb_r <= 0;
        else
          rgb_r <= sw;
     end

   assign rgb = (video_on) ? rgb_r : 12'b0;
   
endmodule
