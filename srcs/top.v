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

module top(
           input wire         clk,
           input wire         reset, // sw[15]
           input wire [2:0]   color_sel, // sw[2:0]
           input wire         btnL,
           input wire         btnR,
           output wire [6:0]  seg,
           output wire [3:0]  an,
           output wire [3:0]  vgaRed,
           output wire [3:0]  vgaGreen,
           output wire [3:0]  vgaBlue,
           output wire [15:0] led,
           output wire        Hsync,
           output wire        Vsync
           );

   //----------------------------------------------------------------------
   // Clocks and Debounced Input
   wire                       pix_clk;   // 25MHz pixel clock
   wire                       nn_clk;    // 50MHz nn clock
   wire                       i_btnL, i_btnR, i_reset;
   wire [3:0]                 nn_output;


   //----------------------------------------------------------------------
   // MNIST Image Storage
   wire [783:0]               image_rom_data_bus; // shared image between NN and display
   reg [3:0]                  image_rom_address; // current location in ROM
   assign led[3:0] = image_rom_address; // display current image number on LED's

   initial
     image_rom_address <= 4'h0;

   always @(posedge clk)
     if(i_reset)
       image_rom_address <= 4'h0;
     else
       if(i_btnR)
         image_rom_address <= image_rom_address == 4'hF ? 4'h0 : image_rom_address + 4'h1;
       else if(i_btnL)
         image_rom_address <= image_rom_address == 4'h0 ? 4'hF : image_rom_address - 4'h1;

   //----------------------------------------------------------------------
   // Sub modules
   clk_div clk_div(
                   .i_clk(clk),
                   .i_reset(i_reset),
                   .o_25MHz_clk(pix_clk),
                   .o_50MHz_clk(nn_clk)
                   );

   rom_16x784 mnist_dataset(
                           .a(image_rom_address),
                           .spo(image_rom_data_bus)
                           );

   mnist_network nn_top(
                        .clk(nn_clk),
                        .image(image_rom_data_bus),
                        .prediction(nn_output)
                        );

   gfx_top graphics_top(.i_clk(clk),
                        .i_pix_clk(pix_clk),
                        .i_reset(i_reset),
                        .i_color_sel(color_sel),
                        .i_image_data(image_rom_data_bus),
                        .rgb({vgaRed, vgaGreen, vgaBlue}),
                        .Hsync(Hsync),
                        .Vsync(Vsync)
                        );

   display_7_seg ss_display(
                            .i_clk(clk),
                            .i_units(nn_output),
                            .i_tens(4'b1111),
                            .i_hundreds(4'b1111),
                            .i_thousands(4'b1111),
                            .o_seg(seg),
                            .o_digit(an)
                            );



   //----------------------------------------------------------------------
   // Debounced inputs
   debouncer btnL_deb(
                      .i_clk(clk),
                      .i_signal(btnL),
                      .o_state(),
                      .o_trans_dn(i_btnL),
                      .o_trans_up()
                      );

   debouncer btnR_deb(
                      .i_clk(clk),
                      .i_signal(btnR),
                      .o_state(),
                      .o_trans_dn(i_btnR),
                      .o_trans_up()
                      );

   debouncer reset_deb(
                       .i_clk(clk),
                       .i_signal(reset),
                       .o_state(i_reset),
                       .o_trans_dn(),
                       .o_trans_up()
                       );

endmodule
