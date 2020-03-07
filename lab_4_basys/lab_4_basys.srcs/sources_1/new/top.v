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
           input wire         btnC,
           input wire         btnU,
           input wire         btnL,
           input wire         btnR,
           input wire         btnD,
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
   wire                       i_btnC, i_btnU, i_btnD, i_btnL, i_btnR, i_reset;


   //----------------------------------------------------------------------
   // MNIST Image Storage
   wire [783:0]               image_rom_data_bus; // shared image between NN and display
   reg [3:0]                  image_rom_address; // current location in ROM
   reg [3:0]                  image_rom_current; // current ROM image
   reg [3:0]                  image_rom_next; // double buffered
   reg                        image_is_transitioning; // needed for VGA coherence


   initial
     begin
        image_rom_address <= 4'h0;
        image_rom_current <= 4'h0;
        image_rom_next <= 4'h0;
        image_is_transitioning <= 4'h0;
     end

   always @(posedge clk)
     begin
        if(i_reset)
          begin
             image_rom_address <= 4'h0;
             image_is_transitioning <= 4'h0;
          end
        else
             if(i_btnR)
               image_rom_address <= image_rom_address == 4'hF ? 4'h0 : image_rom_address + 4'h1;
             else if(i_btnL)
               image_rom_address <= image_rom_address == 4'h0 ? 4'hF : image_rom_address - 4'h1;
     end

   //----------------------------------------------------------------------
   // Submodules
   clk_div clk_div(
                   .i_clk(clk),
                   .i_reset(i_reset),
                   .o_pix_clk(pix_clk)
                   );

   rom_8x784 mnist_dataset(.a(image_rom_address), .spo(image_rom_data_bus));

   gfx_top graphics_top(.i_clk(clk),
                        .i_pix_clk(pix_clk),
                        .i_reset(i_reset),
                        .i_color_sel(color_sel),
                        .i_image_data(image_rom_data_bus),
                        .rgb({vgaRed, vgaGreen, vgaBlue}),
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
                      .o_trans_dn(i_btnC),
                      .o_trans_up()
                      );

   debouncer btnU_deb(
                      .i_clk(clk),
                      .i_signal(btnU),
                      .o_state(),
                      .o_trans_dn(i_btnU),
                      .o_trans_up()
                      );

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

   debouncer btnD_deb(
                      .i_clk(clk),
                      .i_signal(btnD),
                      .o_state(),
                      .o_trans_dn(i_btnD),
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
