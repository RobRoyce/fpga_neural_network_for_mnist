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
                 input wire          i_clk,
                 input wire          i_reset,
                 input wire          i_active,
                 input wire [783:0]  i_image_data,
                 input wire [9:0]    i_x, // current pixel x
                 input wire [8:0]    i_y, // current pixel y
                 input wire [4:0]    i_row, // bitmap index
                 input wire [4:0]    i_col, // bitmap index
                 output reg [11:0]   o_rgb, // pixel color
                 output reg          o_image_on // signal to draw
                 );

   localparam SCALE = 16;
   localparam SHIFT = 4;
   localparam X_LEFT = 96;
   localparam X_RIGHT = 544;
   localparam Y_TOP = 16;
   localparam Y_BTM = 464;


   reg [11:0]                        color_reg;

   reg [9:0]                         x_trans;
   reg [8:0]                         y_trans;

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
             // TODO: reset bitmap to all 0's
             color_reg = 0;
             x_trans = 0;
             y_trans = 0;
          end

        else
          begin
             if(i_active)
               if(i_x >= X_LEFT && i_x <= X_RIGHT && i_y >= Y_TOP && i_y <= Y_BTM)
                 begin
                    x_trans = (i_x - X_LEFT) >> SHIFT;
                    y_trans = (i_y - Y_TOP) >> SHIFT;

                    case(i_image_data[((x_trans * 28) + y_trans)])
                      1'b0: color_reg = 12'h000;
                      1'b1: color_reg = 12'hDDD;
                    endcase
                    o_rgb = color_reg;
                    o_image_on = 1'b1;
                 end // if (i_x >= X_LEFT && i_x <= X_RIGHT && i_y >= Y_TOP && i_y <= Y_BTM)
               else
                 o_image_on <= 1'b0;
          end // else: !if(i_reset)
     end // always @ (posedge i_clk)
endmodule
