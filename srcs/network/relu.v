`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:32:03 02/26/2020 
// Design Name: 
// Module Name:    relu 
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
module relu(
					in,
					out
    );
	 
	 `include "definitions.v"
	 
	 input wire signed [weight_width-1:0] in;
	 
	 output wire signed [weight_width-1:0] out;
	 
	 wire is_pos;
	 
	 assign is_pos = ~in[weight_width-1];
	 
	 assign out = in & {weight_width{is_pos}};

endmodule
