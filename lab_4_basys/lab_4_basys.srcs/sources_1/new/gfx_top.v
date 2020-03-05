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
               input wire        i_clk,
               input wire        i_reset,
               output wire [6:0] seg,
               output wire [3:0] an,
               output wire [3:0] vgaRed,
               output wire [3:0] vgaGreen,
               output wire [3:0] vgaBlue,
               output wire       Hsync,
               output wire       Vsync,
               output wire       o_image_data
               );

   //----------------------------------------------------------------------
   // VGA
   wire                          blanking,  // high within blanking period
                                 active,    // high during active pixel drawing
                                 screenend, // high for one tick at end
                                 animate,   // high for one tick at end of last pix
                                 pix_clk;   // 25MHz clock used for pixel timing
   wire [9:0]                    x;         // current pixel x coordinate
   wire [8:0]                    y;         // current pixel y coordinate
   reg [11:0]                    rbg_reg,   // we're using a double-buffered display scheme
                                 rgb_next;  // used as 2nd buffer for VGA display


   // clk_div clk_divider(
   //                     .clk(i_clk),
   //                     .reset(i_reset),
   //                     .pix_clk(pix_clk)
   //                     );

   // vga640x480 vga_timing_handler(
   //                               .i_clk(i_clk),
   //                               .i_pix_clk(pix_clk),
   //                               .i_reset(i_reset),
   //                               .o_hs(Hsync),
   //                               .o_vs(Vsync),
   //                               .o_blanking(blanking),
   //                               .o_active(active),
   //                               .o_screenend(screenend),
   //                               .o_animate(animate),
   //                               .o_x(x),
   //                               .o_y(y)
   //                               );

   // gfx_bmp bitmap(
   //                .i_clk(i_clk),
   //                .i_reset(i_reset),
   //                .i_we(),
   //                .i_addr(),
   //                .i_data(),
   //                .i_x(x),
   //                .i_y(y)
   //                );


   // gfx_driver graphics_driver(
   //                            .i_clk(i_clk),
   //                            .i_x(x),
   //                            .i_y(y),
   //                            .i_active(active),
   //                            .i_blanking(blanking),
   //                            .i_screenend(screenend),
   //                            .i_animate(animate),
   //                            .o_vgaR(vgaRed),
   //                            .o_vgaG(vgaGreen),
   //                            .o_vgaB(vgaBlue)
   //                            );

endmodule
