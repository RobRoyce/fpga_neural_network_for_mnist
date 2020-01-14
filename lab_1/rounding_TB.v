`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:14:32 01/14/2020
// Design Name:   rounding
// Module Name:   /home/parallels/ucla/csm152a/labs/csm152a/lab_1/rounding_TB.v
// Project Name:  lab_1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: rounding
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module rounding_TB;

   // Inputs
   reg [2:0] exponent;
   reg [3:0] significand;
   reg 	     fifth_bit;

   // Outputs
   wire [2:0] E;
   wire [3:0] F;

   // Instantiate the Unit Under Test (UUT)
   rounding uut (
		 .exponent(exponent), 
		 .significand(significand), 
		 .fifth_bit(fifth_bit), 
		 .E(E), 
		 .F(F)
		 );
   integer    i;
   integer    j;
   
   initial begin
      // Initialize Inputs
      exponent = 0;
      significand = 0;
      fifth_bit = 0;
      i <= 0;
      j <= 0;
      // Wait 100 ns for global reset to finish
      #100;
      
      // Add stimulus here
      
   end
   
   
   always
     begin
	for(i = 0; i <= 4'b1111; i = i + 1)
	  begin
	     #10 significand <= i;
	  end
	for(j = 0; j <= 4'b1111; j = j + 1)
	  begin
	     #10 exponent <= exponent + 1'b1;
	  end
	
     end // always
   
   

   
endmodule

