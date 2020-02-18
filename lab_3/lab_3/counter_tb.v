`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date:   10:23:31 02/13/2020
// Design Name:   counter_10state
// Module Name:   C:/Users/152/csm152a/lab_3/lab_3/counter_tb.v
// Project Name:  lab_3
// Target Device:
// Tool versions:
// Description:
//
// Verilog Test Fixture created by ISE for module: counter_10state
//
// Dependencies:
//
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
//
////////////////////////////////////////////////////////////////////////////////

module counter_tb;

   // Inputs
   reg i_clk;
   reg i_clk_en;
   reg i_rst;

   // Outputs
   wire transition_10;
   wire [3:0] state_10;

   wire       transition_6;
   wire [2:0] state_6;

   counter_10state uut_10c (
                            .i_clk(i_clk),
                            .i_rst(i_rst),
                            .o_transition(transition_10),
                            .o_state(state_10)
                            );


   // Instantiate the Unit Under Test (UUT)
   counter_6state uut_6c (
                          .i_clk(transition_10),
                          .i_rst(i_rst),
                          .o_transition(transition_6),
                          .o_state(state_6)
                          );
   initial begin
      // Initialize Inputs
      i_clk = 0;
      i_clk_en = 0;
      i_rst = 1;

      // Wait 100 ns for global reset to finish
      #100
        i_rst = 0;

      #210
        i_rst = 1;

      #230
        i_rst = 0;
   end

   always #10 i_clk <= ~i_clk;
   always #20 i_clk_en <= ~i_clk_en;

endmodule
