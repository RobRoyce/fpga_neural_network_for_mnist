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
   wire                           clk_1hz;
   wire                           clk_2hz;
   wire                           clk_blink;
   wire                           clk_display;
   wire                           rst_btn;
   wire                           rst_state;
   wire                           pause_btn;
	wire									 sel_db;
	wire								    adj_db;
   wire                           sel;
   wire                           adj;
   wire [13:0]                    time_;

   assign sel = sw[0];
   assign adj = sw[1];
   //////////////////////////////////////////////////////////////////////

   
   //////////////////////////////////////////////////////////////////////

   clk_div divider(
                   .i_clk(clk),
                   .o_clk_1hz(clk_1hz),
                   .o_clk_2hz(clk_2hz),
                   .o_clk_blink(clk_blink),
                   .o_clk_display(clk_display)
                   );

   debouncer rst_d(
                   .clk(clk),
                   .trans_dn(rst_btn),
                   .state(rst_state),
                   .switch_input(reset)
                   );
   debouncer pause_d(
                     .clk(clk),
                     .trans_dn(pause_btn),
                     .switch_input(pause)
                     );
   debouncer sel_d(
                     .clk(clk),
                     .state(sel_db),
                     .switch_input(sel)
                     );
   debouncer adj_d(
                     .clk(clk),
                     .state(adj_db),
                     .switch_input(adj)
                     );

   display_7_seg display(
                         .clk(clk),
                         .clk_blink(clk_blink),
                         .sel(sel_db),
                         .adj(adj_db),
                         .units(time_[3:0]),
                         .tens({1'b0, time_[6:4]}),
                         .hundreds(time_[10:7]),
                         .thousands({1'b0, time_[13:11]}),
                         .seg(seg),
                         .digit(digit)
                         );

   timer_seq timer_seq(
                       .clk(clk),
                       .clk_1hz(clk_1hz),
                       .clk_2hz(clk_2hz),
                       .reset(rst_btn || rst_state),
                       .pause(pause_btn),
                       .sel(sel_db),
                       .adj(adj_db),
                       .time_(time_)
                       );
endmodule
