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
                 output reg [6:0] seg,
                 output reg [3:0] digit
                 );


    parameter state_pause = 0;
    parameter state_count = 1;

   debouncer rst_d();
   debouncer pause_d();
   display_7_seg display();
   timer_seq timer_seq();



endmodule
