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
                 input wire reset,
                 input wire pause,
                 input wire sel,
                 input wire adj,
                 output wire [13:0] time_
);

   //////////////////////////////////////////////////////////////////////
   wire                     sec_ones_en;
   wire                     sec_tens_en;
   wire                     min_ones_en;
   wire                     min_tens_en;


   assign sec_ones_en = clk_1hz;

   counter_10state sec_ones_counter(
                                   .i_clk(sec_ones_en),
                                   .i_rst(reset),
                                   .o_transition(sec_tens_en),
                                   .o_state(time_[3:0])
                                   );
   counter_6state sec_tens_counter(
                                    .i_clk(sec_tens_en),
                                    .i_rst(reset),
                                    .o_transition(min_ones_en),
                                    .o_state(time_[6:4])
                                    );
   counter_10state min_ones_counter(
                                   .i_clk(min_ones_en),
                                   .i_rst(reset),
                                   .o_transition(min_tens_en),
                                   .o_state(time_[10:7])
                                   );
   counter_6state min_tens_counter(
                                    .i_clk(min_tens_en),
                                    .i_rst(reset),
                                    .o_state(time_[13:11])
                                    );

endmodule
