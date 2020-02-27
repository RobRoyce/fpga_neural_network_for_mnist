`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:33:15 02/26/2020 
// Design Name: 
// Module Name:    fp_multiplier 
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
module fp_multiplier(
							a,
							b,
							prod
	);
	
	`include "definitions.v"
	
	input  signed [weight_width-1:0] a;
	input  signed [weight_width-1:0] b;
	output signed [weight_width-1:0] prod;
	
	wire signed [2*weight_width-1:0] int_prod; // Local storage of a * b

	assign int_prod = a * b;
	assign prod = int_prod >> decimal_place;

endmodule
