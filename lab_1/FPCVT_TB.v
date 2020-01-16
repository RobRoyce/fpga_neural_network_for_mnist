`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:07:37 01/16/2020
// Design Name:   FPCVT
// Module Name:   C:/Users/152/Desktop/csm152a/lab_1/FPCVT_TB.v
// Project Name:  lab_1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: FPCVT
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module FPCVT_TB;

   // Inputs
   reg [11:0] D;

   // Outputs
   wire [3:0] F;
   wire [2:0] E;
   wire       S;

   // Instantiate the Unit Under Test (UUT)
   FPCVT uut (
	      .D(D), 
	      .F(F), 
	      .E(E), 
	      .S(S)
	      );

   initial begin
      // Initialize Inputs
      $timeformat(-9,3,"ns",5);
      D = 0;

      // Wait 100 ns for global reset to finish
      #100;

      // Add stimulus here
      forever
	begin
	   // Begin provided test cases
	   $display("Begin provided test cases");	   
	   #10 D <= 12'b0111_0100_0000; #1 $display("%t | D: %b_%b_%b | SEF: %b_%b_%b", $time, D[11:8], D[7:4], D[3:0], S, E, F);
	   #10 D <= 12'b0111_1111_1111; #1 $display("%t | D: %b_%b_%b | SEF: %b_%b_%b", $time, D[11:8], D[7:4], D[3:0], S, E, F);
	   #10 D <= 12'b1000_0000_0010; #1 $display("%t | D: %b_%b_%b | SEF: %b_%b_%b", $time, D[11:8], D[7:4], D[3:0], S, E, F);
	   #10 D <= 12'b1111_1010_0101; #1 $display("%t | D: %b_%b_%b | SEF: %b_%b_%b", $time, D[11:8], D[7:4], D[3:0], S, E, F);
	   #10 D <= 12'b1000_1000_1010; #1 $display("%t | D: %b_%b_%b | SEF: %b_%b_%b", $time, D[11:8], D[7:4], D[3:0], S, E, F);
	   #10 D <= 12'b1001_1100_1111; #1 $display("%t | D: %b_%b_%b | SEF: %b_%b_%b", $time, D[11:8], D[7:4], D[3:0], S, E, F);
	   #10 D <= 12'b0111_1111_1111; #1 $display("%t | D: %b_%b_%b | SEF: %b_%b_%b", $time, D[11:8], D[7:4], D[3:0], S, E, F);

	   // Begin custom test cases
	   $display("Begin custom test cases");
	   #10 D <= 12'b0000_0000_0000;
	   #10 D <= 12'b0000_1111_0000;
	   #10 D <= 12'b1111_0000_1111;
	   #10 D <= 12'b1111_1111_1111;
	   #10 D <= 12'b0111_1111_1111;
	   #10 D <= 12'b0000_0000_0000;
	   #10 D <= 12'b1000_0000_0000;
	   $finish();
	   
	end

   end
   


   /*   12'b0111_0100_0000	1856	8'b0111_1111
    12'b0111_1111_1111	2047	8'b0111_1111
    12'b1000_0000_0010
    -2046	8'b1111_1111
    12'b1000_1000_1010
    -1910	8'b1111_1111
    12'b1001_1100_1111	 -1585	8'b1111_1100 
    12'b1111_1010_0101	 -91	8'b1011_1011 */
   
endmodule

