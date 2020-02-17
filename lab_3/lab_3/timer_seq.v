`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date:    23:03:23 02/16/2020
// Design Name:
// Module Name:    timer_seq
// Project Name:
// Target Devices:
// Tool versions:
// Description:
//
// Dependencies:
//
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
//
//////////////////////////////////////////////////////////////////////////////////
module timer_seq(
                 input wire clk,
                 input wire clk_1hz,
                 input wire clk_2hz,
                 input wire rst,
                 input wire pause,
                 input wire sel,
                 input wire adj,
                 output wire [13:0] time_
);

   reg [2:0]                sec_ones_reg;
   reg [3:0]                sec_tens_reg;
   reg [2:0]                min_ones_reg;
   reg [3:0]                min_tens_reg;
   wire                     sec_ones_en;
   wire                     sec_tens_en;
   wire                     min_ones_en;
   wire                     min_tens_en;


   assign sec_ones_en = (!pause && clk_1hz);



   counter_6state sec_ones_counter(
                                   .i_clk(clk_1hz),
                                   .i_clk_en(sec_ones_en),
                                   .i_rst(rst),
                                   .o_transition(sec_tens_en),
                                   .o_state(time_[2:0])
                                   );
   // counter_10state sec_tens_counter();
   // counter_6state min_ones_counter();
   // counter_10state min_tens_counter();




endmodule
