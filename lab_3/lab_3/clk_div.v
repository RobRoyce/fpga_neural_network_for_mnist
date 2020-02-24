`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date:    10:03:25 02/04/2020
// Design Name:
// Module Name:    clk_div
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
module clk_div(
               input wire  i_clk, // Input clock
               output wire o_clk_1hz, // 1Hz output clk
               output wire o_clk_2hz, // 2Hz output clk
               output wire o_clk_blink // >1Hz output clk
               );



   // Prescaler counts. Each count is based
   // On the speed of the previous clock.
   // The display_cnt is based on a 100Mhz
   // input i_clk.
   parameter pscl_blink_cnt   = 5_000_000 - 1; // 10 Hz
   parameter pscl_2hz_cnt     = 25_000_000 - 1;      // 2Hz

   reg [22:0]               prescaler_blink;
   reg [25:0]               prescaler_2hz;

   reg                     clk_1hz;
   reg                     clk_2hz;
   reg                     clk_blink;

   assign o_clk_1hz     = clk_1hz;
   assign o_clk_2hz     = clk_2hz;
   assign o_clk_blink   = clk_blink;

   initial
     begin
        prescaler_blink   <= 0;
        prescaler_2hz     <= 0;

        clk_1hz     <= 0;
        clk_2hz     <= 0;
        clk_blink   <= 0;
     end

   always @ (posedge i_clk)
     begin

        prescaler_blink <= prescaler_blink + 23'b1;
        prescaler_2hz     <= prescaler_2hz + 26'b1;

        if(prescaler_blink == pscl_blink_cnt)
          begin
             prescaler_blink <= 23'b0;
             clk_blink <= ~clk_blink;
          end
	
        if(prescaler_2hz == pscl_2hz_cnt)
          begin
             prescaler_2hz <= 0;
             clk_2hz <= ~clk_2hz;
          end
			 
     end

   always @ (posedge clk_2hz)
     begin
        clk_1hz <= ~clk_1hz;
     end

endmodule
