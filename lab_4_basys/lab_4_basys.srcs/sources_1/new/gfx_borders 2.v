`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date: 03/04/2020 08:30:33 PM
// Design Name:
// Module Name: gfx_borders
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


module gfx_borders(
                   input wire        i_clk,
                   input wire        i_active,
                   input wire [9:0]  i_x,
                   input wire [8:0]  i_y,
                   input wire [2:0]  i_color_sel,
                   output reg [11:0] o_rgb,
                   output reg        o_borders_on
                   );

   localparam X_LEFT = 96;
   localparam X_RIGHT = 545;
   localparam Y_TOP = 15;
   localparam Y_BTM = 465;

   initial
     begin
        o_borders_on <= 1'b0;
        o_rgb <= 12'b0;
     end

   always @(posedge i_clk)
     begin
        case(i_color_sel)
          3'b000: o_rgb <= 12'h000; // black
          3'b001: o_rgb <= 12'hF00; // red
          3'b010: o_rgb <= 12'h3F3; // green
          3'b011: o_rgb <= 12'h00F; // blue
          3'b100: o_rgb <= 12'hFF0; // yellow
          3'b101: o_rgb <= 12'h0FF; // aqua
          3'b110: o_rgb <= 12'h808; // purple(?)
          3'b111: o_rgb <= 12'hFFF; // white
          default: o_rgb <= 12'b0000_0000_0000;
        endcase // case (i_color_sw)

        if(i_active)
          // generate borders
          if(i_x <= X_LEFT || i_x >= X_RIGHT || i_y <= Y_TOP || i_y >= Y_BTM)
            o_borders_on <= 1'b1;

          // generate grid
          else if(i_x % 16 == 0 || i_y % 16 == 0)
            o_borders_on <= 1'b1;
        
          else
            o_borders_on <= 1'b0;
     end
endmodule
