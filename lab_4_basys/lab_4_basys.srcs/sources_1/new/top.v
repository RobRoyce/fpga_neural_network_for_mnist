`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date: 03/02/2020 06:38:10 PM
// Design Name:
// Module Name: top
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

//----------------------------------------------------------------------
// Global Parameters
`define IMAGE_DATA_HEIGHT = 28
`define IMAGE_DATA_WIDTH = 28
`define IMAGE_DEPTH = IMAGE_DATA_HEIGHT * IMAGE_DATA_WIDTH
`define IMAGE_SCALE_FACTOR = 17
`define SCREEN_HEIGHT = 480
`define SCREEN_WIDTH = 640


module top(
           input wire        clk,
           input wire        reset, // sw[15]
           input wire        btnC,
           input wire        btnU,
           input wire        btnL,
           input wire        btnR,
           input wire        btnD,
           output wire [6:0] seg,
           output wire [3:0] an,
           output wire [3:0] vgaRed,
           output wire [3:0] vgaGreen,
           output wire [3:0] vgaBlue,
           output wire       Hsync,
           output wire       Vsync
           );
   wire                      image_data; // shared image between NN and display


   //----------------------------------------------------------------------
   // Buttons and switches (suffix '_d' implies debounced)
   wire                      btnC_d, btnU_d, btnD_d, btnL_d, btnR_d, // inputs
                             reset_d, // global reset



   clk_div clk_divider(.clk(clk), .reset(reset_d), .pix_clk(pix_clk));

   gfx_top graphics_top(.i_clk(clk),
                        .i_reset(reset_d),
                        .o_image_data(image_data),
                        .vgaRed(vgaRed),
                        .vgaGreen(vgaGreen),
                        .vgaBlue(vgaBlue),
                        .Hsync(Hsync),
                        .Vsync(Vsync),
                        .seg(seg),
                        .an(an)
                        );



   //----------------------------------------------------------------------
   // Debounced inputs
   debouncer btnC_deb(
                      .i_clk(clk),
                      .i_signal(btnC),
                      .o_state(),
                      .o_trans_dn(btnC_d),
                      .o_trans_up()
                      );

   debouncer btnU_deb(
                      .i_clk(clk),
                      .i_signal(btnU),
                      .o_state(),
                      .o_trans_dn(btnU_d),
                      .o_trans_up()
                      );

   debouncer btnL_deb(
                      .i_clk(clk),
                      .i_signal(btnL),
                      .o_state(),
                      .o_trans_dn(btnL_d),
                      .o_trans_up()
                      );

   debouncer btnR_deb(
                      .i_clk(clk),
                      .i_signal(btnR),
                      .o_state(),
                      .o_trans_dn(btnR_d),
                      .o_trans_up()
                      );

   debouncer btnD_deb(
                      .i_clk(clk),
                      .i_signal(btnD),
                      .o_state(),
                      .o_trans_dn(btnD_d),
                      .o_trans_up()
                      );

   debouncer reset_deb(
                       .i_clk(clk),
                       .i_signal(reset),
                       .o_state(reset_d),
                       .o_trans_dn(),
                       .o_trans_up()
                       );

endmodule
