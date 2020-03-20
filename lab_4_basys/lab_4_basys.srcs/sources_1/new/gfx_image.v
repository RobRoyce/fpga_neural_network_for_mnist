`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date: 03/04/2020 10:54:19 PM
// Design Name:
// Module Name: gfx_image
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


module gfx_image(
                 input wire         i_clk,
                 input wire         i_reset,
                 input wire         i_active,
                 input wire [783:0] i_image_data,
                 input wire [9:0]   i_x, // current pixel x
                 input wire [8:0]   i_y, // current pixel y
                 output reg [11:0]  o_rgb, // pixel color
                 output reg         o_image_on // signal to draw
                 );

   localparam SHIFT = 4; // We shift the image pixels to make them 16 pixels wide/high
   localparam X_LEFT = 96; // left border boundary
   localparam X_RIGHT = 544; // right border boundary
   localparam Y_TOP = 16; // top border boundary
   localparam Y_BTM = 464; // bottom border boundary


   reg [11:0]                       color_reg;

   reg [9:0]                        x_trans;
   reg [8:0]                        y_trans;

   initial
     begin
        o_rgb <= 12'b0;
        o_image_on <= 1'b0;
        color_reg <= 12'h000;
     end

   //----------------------------------------------------------------------
   // Draw logic
   integer i;

   always @(posedge i_clk)
     begin
        if(i_reset)
          begin
             color_reg <= 12'b0;
             x_trans <= 10'b0;
             y_trans <= 9'b0;
          end

        else
          begin
             if(i_active)
               if(i_x >= X_LEFT && i_x <= X_RIGHT && i_y >= Y_TOP && i_y <= Y_BTM)
                 begin
                    // shift image coordinates to find their location in memory
                    x_trans <= (i_x - X_LEFT) >> SHIFT;
                    y_trans <= (i_y - Y_TOP) >> SHIFT;

                    case(i_image_data[(y_trans * 28) + x_trans])
                      1'b0: color_reg <= 12'h000;
                      1'b1: color_reg <= 12'hFFF;
                    endcase

                    o_rgb <= color_reg;
                    o_image_on <= 1'b1;
                 end
               else
                 o_image_on <= 1'b0;
          end
     end
endmodule
