`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date: 03/16/2020 08:29:18 PM
// Design Name:
// Module Name: user_input
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


// This module takes in all relevant user input and produces addresses
// for ROM and cursor position. Also determines active mode (mouse vs image)
module user_input(
                  input wire       i_clk,
                  input wire       i_reset,
                  input wire       i_PS2Clk,
                  input wire       i_PS2Data,
                  input wire       i_btnL,
                  input wire       i_btnR,
                  input wire       i_mode,
                  output reg       o_mode, // 0: image, 1: draw
                  output reg [9:0] o_cursor_addr,
                  output reg [3:0] o_rom_addr
                  );
   localparam GRID = 28;
   reg                             mode_sync_1;
   reg [4:0]                       x_offset, y_offset;

   //----------------------------------------------------------------------
   // Mouse movement and buttons
   wire                            mouse_up,
                                   mouse_dn,
                                   mouse_lt,
                                   mouse_rt,
                                   mouse_sel,
                                   mouse_rst,
                                   mouse_valid;

   initial
     begin
        o_mode <= 1'b0;
        o_cursor_addr <= 10'b0;
        o_rom_addr <= 4'b0;
        mode_sync_1 <= 1'b0;
        x_offset <= 5'b0;
        y_offset <= 5'b0;
     end

   always @(posedge i_clk)
     mode_sync_1 <= i_mode;

   always @(posedge i_clk)
     o_mode <= mode_sync_1;

   always @(posedge i_clk)
     begin
        if(i_reset)
          begin
             o_mode <= 1'b0;
             o_cursor_addr <= 10'b0;
             o_rom_addr <= 4'b0;
             mode_sync_1 <= 1'b0;
             x_offset <= 5'b0;
             y_offset <= 5'b0;
          end
        else if(o_mode && mouse_valid) // if draw-mode
          begin
             x_offset <= (mouse_rt) ? x_offset + 5'b1 :
                         (mouse_lt) ? x_offset - 5'b1 : x_offset;

             y_offset <= (mouse_dn) ? y_offset + 5'b1 :
                         (mouse_up) ? y_offset - 5'b1 : y_offset;

             o_cursor_addr <= (y_offset * GRID) + x_offset;
          end
        else if(!o_mode)
          begin
             if(o_cursor_addr > 10'b0)
               o_cursor_addr <= 10'b0;
          end
     end // always @ (posedge i_clk)

   mouse_top mouse_top(
                       .i_clk(i_clk),
                       .i_reset(i_reset),
                       .i_PS2Clk(i_PS2Clk),
                       .i_PS2Data(i_PS2Data),
                       .o_valid(mouse_valid),
                       .o_mouse_up(mouse_up),
                       .o_mouse_dn(mouse_dn),
                       .o_mouse_lt(mouse_lt),
                       .o_mouse_rt(mouse_rt),
                       .o_mouse_sel(mouse_sel),
                       .o_mouse_rst(mouse_rst)
                       );
endmodule
