`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date: 03/16/2020 11:54:36 PM
// Design Name:
// Module Name: user_input_TB
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


module user_input_TB();

   reg clk,
       reset,
       valid,
       mouse_up,
       mouse_dn,
       mouse_lt,
       mouse_rt,
       mouse_sel,
       mouse_rst,
       btnL,
       btnR,
       mode;
   wire o_mode;
   wire [9:0] cursor_addr;
   wire [3:0] rom_addr;

   initial
     begin
        clk <= 1'b0;
        reset <= 1'b0;
        valid <= 1'b0;
        mouse_up <= 1'b0;
        mouse_dn <= 1'b0;
        mouse_lt <= 1'b0;
        mouse_rt <= 1'b0;
        mouse_sel <= 1'b0;
        mouse_rst <= 1'b0;
        btnL <= 1'b0;
        btnR <= 1'b0;
        mode <= 1'b1;

        forever
          #10 clk <= ~clk;
     end // initial begin

   always
     begin
        #500 reset <= ~reset;
        #40 reset <= ~reset;
     end

   always
     begin
        #20 valid <= ~valid;
        #400 valid <= ~valid;
        #100 valid <= ~valid;
        #100 valid <= ~valid;
     end

   always
     fork
        #20 mouse_rt <= ~mouse_rt;
        #40 mouse_rt <= ~mouse_rt;
        #70 mouse_rt <= ~mouse_rt;
        #200 mouse_rt <= ~mouse_rt;
     join

   always
     fork
        #10 mouse_dn <= ~mouse_dn;
        #30 mouse_dn <= ~mouse_dn;
        #40 mouse_up <= ~mouse_up;
        #60 mouse_up <= ~mouse_up;
        #70 mouse_dn <= ~mouse_dn;
        #90 mouse_dn <= ~mouse_dn;
        #140 mouse_dn <= ~mouse_dn;
        #160 mouse_dn <= ~mouse_dn;
     join
   user_input user_input(
                         .i_clk(clk),
                         .i_reset(reset),
                         .i_valid(valid),
                         .i_mouse_up(mouse_up),
                         .i_mouse_dn(mouse_dn),
                         .i_mouse_lt(mouse_lt),
                         .i_mouse_rt(mouse_rt),
                         .i_mouse_sel(mouse_sel),
                         .i_mouse_rst(mouse_rst),
                         .i_btnL(btnL),
                         .i_btnR(btnR),
                         .i_mode(mode),
                         .o_mode(o_mode),
                         .o_cursor_addr(cursor_addr),
                         .o_rom_addr(rom_addr)
                         );
endmodule
