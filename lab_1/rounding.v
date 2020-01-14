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
   reg 		     overflow;
   
   initial
     begin
	E <= 3'b000;
	F <= 4'b0000;
	overflow <= 1'b0;
     end
   
   always @(*)
     begin
	if(significand == 4'b1111 && fifth_bit == 1'b1)
	   overflow <= 1;

	if((exponent + overflow) >= 4'd8) begin
	   E <= 3'b111;
	   F <= 4'b1111;
	end
	else begin
	   if(fifth_bit == 1'b1)
	     F <= significand + 1'b1;
	   else
	     F <= significand;
	   
	end
	
     end
   
   

endmodule
