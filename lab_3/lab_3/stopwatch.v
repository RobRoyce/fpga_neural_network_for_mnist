`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date:    09:57:53 02/04/2020
// Design Name:
// Module Name:    stopwatch
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
module stopwatch(
                 input wire        pause, // Start/Stop
                 input wire        reset, // Reset
                 input wire [1:0]  sw,
                 input wire        clk,
                 output wire [6:0] seg,
                 output wire [3:0] digit
                 );


   parameter state_pause = 0;
   parameter state_count = 1;

   //////////////////////////////////////////////////////////////////////
     // Wires
   wire                            clk_1hz;
   wire                            clk_2hz;
   wire                            clk_blink;
   wire                            clk_display;
   wire                            rst_btn;
   wire                            rst_state;
   wire                            pause_btn;
   wire                            sel_state;
   wire                            sel_trans;
   wire                            adj_state;
   wire                            adj_trans;
   wire [13:0]                     time_;
   //////////////////////////////////////////////////////////////////////


   //////////////////////////////////////////////////////////////////////
   clk_div divider(.i_clk(clk),
                   .o_clk_1hz(clk_1hz),
                   .o_clk_2hz(clk_2hz),
                   .o_clk_blink(clk_blink));

   debouncer rst_d(.clk(clk),
                   .trans_dn(rst_btn),
                   .state(rst_state),
                   .switch_input(reset));

   debouncer pause_d(.clk(clk),
                     .trans_dn(pause_btn),
                     .switch_input(pause));

   debouncer sel_d(.clk(clk),
                   .state(sel_state),
                   .switch_input(sw[0]),
                   .trans_dn(sel_trans));

   debouncer adj_d(.clk(clk),
                   .state(adj_state),
                   .switch_input(sw[1]),
                   .trans_dn(adj_trans));

   display_7_seg display(.clk(clk),
                         .clk_blink(clk_blink),
                         .sel(sel_state || sel_trans),
                         .adj(adj_state || adj_trans),
                         .units(time_[3:0]),
                         .tens({1'b0, time_[6:4]}),
                         .hundreds(time_[10:7]),
                         .thousands({1'b0, time_[13:11]}),
                         .seg(seg),
                         .digit(digit));

   timer_seq timer_seq(.clk(clk),
                       .clk_1hz(clk_1hz),
                       .clk_2hz(clk_2hz),
                       .pause(pause_btn),
                       .reset(rst_btn || rst_state),
                       .sel(sel_state || sel_trans),
                       .adj(adj_state || adj_trans),
                       .time_(time_));
endmodule
