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
                 input wire       pause, // Start/Stop
                 input wire       reset, // Reset
                 input wire [1:0] sw,
                 input wire       clk,
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
   wire                           clk_decoder;
   wire                           rst_btn;
   wire                           pause_btn;
   wire                           sel;
   wire                           adj;
   wire [13:0]                    time_;

   assign sel = sw[0];
   assign adj = sw[1];
   //////////////////////////////////////////////////////////////////////

   //////////////////////////////////////////////////////////////////////
   // Regs
   
   //////////////////////////////////////////////////////////////////////

   clk_div divider(
                   .i_clk(clk),
                   .o_clk_1hz(clk_1hz),
                   .o_clk_2hz(clk_2hz),
                   .o_clk_blink(clk_blink),
                   .o_clk_decoder(clk_decoder)
                   );

   debouncer rst_d(
                   .clk(clk),
                   .trans_dn(rst_btn),
                   .switch_input(reset)
                   );
   debouncer pause_d(
                     .clk(clk),
                     .trans_dn(pause_btn),
                     .switch_input(pause)
                     );

   display_7_seg display(
                         .clk(clk),
                         .units({1'b0, time_[2:0]}),
                         .tens(time_[6:3]),
                         .hundreds({1'b0, time_[9:7]}),
                         .thousands(time_[13:10]),
                         .seg(seg),
                         .digit(digit)
                         );

   timer_seq timer_seq(
                       .clk(clk),
                       .clk_1hz(clk_1hz),
                       .clk_2hz(clk_2hz),
                       .rst(rst_btn),
                       .pause(pause_btn),
                       .sel(sel),
                       .adj(adj),
                       .time_(time_)
                       );
endmodule
