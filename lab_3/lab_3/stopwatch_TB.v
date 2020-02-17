`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date:   15:23:38 02/17/2020
// Design Name:   stopwatch
// Module Name:   /media/psf/iCloud/UCLA/Courses/csm152a/csm152a/lab_3/lab_3/stopwatch_TB.v
// Project Name:  lab_3
// Target Device:
// Tool versions:
// Description:
//
// Verilog Test Fixture created by ISE for module: stopwatch
//
// Dependencies:
//
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
//
////////////////////////////////////////////////////////////////////////////////

module stopwatch_TB;

  // Inputs
  reg pause;
  reg reset;
  reg [1:0] sw;
  reg clk;

  // Outputs
  wire [6:0] seg;
  wire [3:0] digit;

  // Instantiate the Unit Under Test (UUT)
  stopwatch uut (
    .pause(pause),
    .reset(reset),
    .sw(sw),
    .clk(clk),
    .seg(seg),
    .digit(digit)
  );

  initial begin
    // Initialize Inputs
    pause = 0;
    reset = 0;
    sw = 0;
    clk = 0;

    // Wait 100 ns for global reset to finish
    #100;

    // Add stimulus here
     forever begin
        #10 clk = ~clk;
     end

  end // initial begin

endmodule
