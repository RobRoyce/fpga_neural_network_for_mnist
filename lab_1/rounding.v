`timescale 1ns / 1ps
`default_nettype none
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:05:40 01/14/2020 
// Design Name: 
// Module Name:    rounding 
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
module rounding(
    input wire [2:0] exponent,
    input wire [3:0] significand,
    input wire fifth_bit,
    output reg [2:0] E,
    output reg [3:0] F
    );
   
   initial
     begin
	E <= 3'b000;
	F <= 4'b0000;
     end
   
   always @(*)
     begin
	if(fifth_bit == 1'b0)
	  begin
	     F <= significand;
	     E <= exponent;
	  end
	else if(significand != 4'b1111)
	  begin
	     F <= significand + 1'b1;
	     E <= exponent;
	  end
	else
	  begin
	     if(exponent != 3'b111)
	       begin
		  F <= 4'b1000;
		  E <= exponent + 1'b1;		 
	       end
	     else
	       begin
		  F <= 4'b1111;
		  E <= 3'b111;
	       end	     
	  end
     end
   
   

endmodule
