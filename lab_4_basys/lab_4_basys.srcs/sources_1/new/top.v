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
           input wire         clk,
           input wire         reset, // sw[15]
           input wire [2:0]   color_sel, // sw[2:0]
           input wire         btnC,
           input wire         btnU,
           input wire         btnL,
           input wire         btnR,
           input wire         btnD,
           input wire         PS2Clk,
           input wire         PS2Data,
           output wire [6:0]  seg,
           output wire [3:0]  an,
           output wire [3:0]  vgaRed,
           output wire [3:0]  vgaGreen,
           output wire [3:0]  vgaBlue,
           output wire [15:0] led,
           output wire        Hsync,
           output wire        Vsync
           );

   clk_div clk_div(
                   .i_clk(clk),
                   .i_reset(reset_d),
                   .o_pix_clk(pix_clk),
                   .o_cycle_clk(cycle_clk)
                   );



   //----------------------------------------------------------------------
   // MNIST Image Storage
   reg [783:0]                image_data; // shared image between NN and display
   wire [27:0]                mnist_d; // read bus from ROM to image_data
   reg [7:0]                  mnist_a; // to access various images in ROM
   reg [2:0]                  mnist_current_image; // keep track of which image we're on
   wire                       pix_clk;   // 25MHz pixel clock
   wire                       cycle_clk; // 0.2Hz (5 second) clock to cycle images

   reg                        cycle_led;
   assign led[0] = cycle_clk;


   integer                    i;


   initial
     begin
        image_data <= 784'b0;
        mnist_a <= 8'b0;
        mnist_current_image <= 3'b0;
        cycle_led <= 1'b0;
     end

   mnist_rom mnist_images(.a(mnist_a), .spo(mnist_d));


   always @(posedge cycle_clk)
     begin : cycle
        for(integer i = 0; i < 28; i = i + 1)
          begin
             mnist_a = 1 % 28;
             image_data[i * 28 +: 28] = mnist_d;
          end
     end






   gfx_top graphics_top(.i_clk(clk),
                        .i_pix_clk(pix_clk),
                        .i_reset(reset_d),
                        .i_color_sel(color_sel),
                        .i_image_data(image_data),
                        .rgb({vgaRed, vgaGreen, vgaBlue}),
                        .Hsync(Hsync),
                        .Vsync(Vsync),
                        .seg(seg),
                        .an(an)
                        );






   
   //----------------------------------------------------------------------
   // Buttons and switches (suffix '_d' implies debounced)
   wire                      btnC_d, btnU_d, btnD_d, btnL_d, btnR_d, // inputs
                             reset_d; // global reset
   
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
