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
           input wire         mode, // sw[14]
           input wire [2:0]   color_sel, // sw[2:0]
           input wire         btnL,
           input wire         btnR,
           input wire         btnU,
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

   //----------------------------------------------------------------------
   // Clocks
   wire                       user_mode;
   wire                       pix_clk;   // 25MHz pixel clock
   wire                       nn_clk;    // 50MHz nn clock

   // Debounced input (prefixed with d_)
   wire                       d_btnL, d_btnR, d_btnU, d_reset, d_mode;


   //----------------------------------------------------------------------
   // MNIST Image Storage
   wire [3:0]                 nn_output;
   wire [783:0]               image_rom;
   wire [783:0]               image_rom_data_bus; // shared image between NN and display
   reg [3:0]                  image_rom_address; // current location in ROM

   assign led[3:0] = image_rom_address; // display current image number on LED's

   wire [783:0]                image_data;
   reg [783:0]                draw_data;
   reg [783:0]                active_mnist;

   initial
     begin
        image_rom_address <= 4'h0;
        draw_data <= 784'b0;
     end

   always @(posedge clk)
     begin
        if(d_reset)
          image_rom_address <= 4'h0;
        case(user_mode)
          1'b0: // draw mode
            begin
               active_mnist <= draw_data;
            end
         1'b1: // image mode
           begin
              active_mnist <= image_data;
           end
        endcase
     end

   //----------------------------------------------------------------------
   // Sub modules
   clk_div clk_div(
                   .i_clk(clk),
                   .i_reset(d_reset),
                   .o_25MHz_clk(pix_clk),
                   .o_50MHz_clk(nn_clk)
                   );

   rom_16x784 mnist_dataset(
                           .a(image_rom_address),
                           .spo(image_data)
                           );

   mnist_network nn_top(
                        .clk(nn_clk),
                        .image(active_mnist),
                        .prediction(nn_output)
                        );

   gfx_top graphics_top(.i_clk(clk),
                        .i_pix_clk(pix_clk),
                        .i_reset(d_reset),
                        .i_color_sel(color_sel),
                        .i_image_data(active_mnist),
                        .x_pos(mouse_x),
                        .y_pos(mouse_y),
                        .i_l_click(l_click),
                        .i_r_click(r_click),
                        .rgb({vgaRed, vgaGreen, vgaBlue}),
                        .Hsync(Hsync),
                        .Vsync(Vsync)
                        );

   user_input user_input(
                         .i_clk(clk),
                         .i_reset(d_reset),
                         .i_PS2Clk(PS2Clk),
                         .i_PS2Data(PS2Data),
                         .i_btnL(d_btnL),
                         .i_btnR(d_btnR),
                         .i_mode(d_mode),
                         .o_mode(),
                         .o_cursor_addr(),
                         .o_rom_addr()
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
                      .o_trans_dn(d_btnL),
                      .o_trans_up()
                      );

   debouncer btnR_deb(
                      .i_clk(clk),
                      .i_signal(btnR),
                      .o_state(),
                      .o_trans_dn(d_btnR),
                      .o_trans_up()
                      );

   debouncer btnU_deb(
                      .i_clk(clk),
                      .i_signal(btnU),
                      .o_state(),
                      .o_trans_dn(d_btnU),
                      .o_trans_up()
                      );

   debouncer reset_deb(
                       .i_clk(clk),
                       .i_signal(reset),
                       .o_state(d_reset),
                       .o_trans_dn(),
                       .o_trans_up()
                       );

   debouncer mode_deb(
                       .i_clk(clk),
                       .i_signal(mode),
                       .o_state(d_mode),
                       .o_trans_dn(),
                       .o_trans_up()
                       );

endmodule
