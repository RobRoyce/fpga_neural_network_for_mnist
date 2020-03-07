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
   // MNIST Image Storage
   wire                       btnC_d, btnU_d, btnD_d, btnL_d, btnR_d, reset_d;
   reg [783:0]                image_data; // TODO: delete
   wire [783:0]               image_shared_vec; // shared image between NN and display
   wire [27:0]                mnist_d; // read bus from ROM to image_data
   reg [7:0]                  mnist_a; // to access various images in ROM
   reg [2:0]                  mnist_current; // keep track of which image we're on
   reg [2:0]                  mnist_next;
   reg                        mnist_trans;
   wire                       pix_clk;   // 25MHz pixel clock
   wire                       cycle_clk; // 0.2Hz (5 second) clock to cycle images
   assign led[2:0] = mnist_current;

   clk_div clk_div(
                   .i_clk(clk),
                   .i_reset(reset_d),
                   .o_pix_clk(pix_clk),
                   .o_cycle_clk(cycle_clk)
                   );


   initial
     begin
        image_data <= 784'd0;
        mnist_a <= 8'b0;
        mnist_current <= 3'b0;
        mnist_next <= 3'b0;
        mnist_trans <= 1'b0; // goes high right after transition
     end

   rom_8x784 mnist_dataset(
                           .a(mnist_ba),
                           .spo(mnist_bd)
                           );

   mnist_rom mnist_images(
                          .a(mnist_a),
                          .spo(mnist_d)
                          );

   always @(posedge clk)
     begin
        // Populate the image data
        image_data[(mnist_a*28)+27 -: 28] <= mnist_d[27:0];
     end

   always @(posedge clk)
     begin
        // If address has reached max, reset it
        if(mnist_a == 8'd27)
          mnist_a <= 8'd0;
        else
          // otherwise increment
          mnist_a <= mnist_a + 8'b1;
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
