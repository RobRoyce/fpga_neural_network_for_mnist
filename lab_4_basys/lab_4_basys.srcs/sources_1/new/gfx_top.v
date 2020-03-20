`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date: 03/04/2020 04:57:26 PM
// Design Name:
// Module Name: gfx_top
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


module gfx_top(
               input wire          i_clk,
               input wire          i_reset,
               input wire [2:0]    i_color_sel, // sw[2:0]
               input wire          i_pix_clk,
               input wire [783:0]  i_image_data,
               input wire [4:0]    x_pos,
               input wire [4:0]    y_pos,
               output wire [11:0]  rgb,
               output wire         Hsync,
               output wire         Vsync
               );

   //----------------------------------------------------------------------
   // VGA
   wire                           active;    // high during active pixel drawing
   wire [9:0]                     x;         // current pixel x coordinate
   wire [8:0]                     y;         // current pixel y coordinate

   //----------------------------------------------------------------------
   // Bitmap
   wire [11:0]                    borders_rgb; // border color
   wire [11:0]                    image_rgb;   // image colro
   wire                           borders_on;  // border flag
   wire                           image_on;    // image flag


   reg [11:0]                     rgb_reg,   // we're using a double-buffered display scheme
                                  rgb_next;  // used as 2nd buffer for VGA display

   initial
     begin
        rgb_reg <= 12'b0;
        rgb_next <= 12'b0;
     end


   vga640x480 vga_timing_handler(
                                 .i_clk(i_clk),
                                 .i_pix_clk(i_pix_clk),
                                 .i_reset(i_reset),
                                 .o_hs(Hsync),
                                 .o_vs(Vsync),
                                 .o_blanking(),
                                 .o_active(active),
                                 .o_screenend(),
                                 .o_animate(),
                                 .o_x(x),
                                 .o_y(y)
                                 );

   gfx_borders display_borders(
                               .i_clk(i_clk),
                               .i_active(active),
                               .i_x(x),
                               .i_y(y),
                               .i_color_sel(i_color_sel),
                               .o_rgb(borders_rgb),
                               .o_borders_on(borders_on)
                               );

   gfx_image display_image(
                           .i_clk(i_clk),
                           .i_reset(i_reset),
                           .i_active(active),
                           .i_image_data(i_image_data),
                           .i_x(x),
                           .i_y(y),
                           .x(x_pos),
                           .y(y_pos),
                           .o_rgb(image_rgb),
                           .o_image_on(image_on)
                           );

   always @(*)
     begin
        if(~active)
          rgb_next = 12'b0;

        else if(borders_on)
          rgb_next = borders_rgb;

        else if(image_on)
          rgb_next = image_rgb;

        else
          rgb_next = 12'b0;
     end

   always @(posedge i_clk)
     if(i_pix_clk)
       rgb_reg <= rgb_next;

   assign rgb = rgb_reg;
endmodule
