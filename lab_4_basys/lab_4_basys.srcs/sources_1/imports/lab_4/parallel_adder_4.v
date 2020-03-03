`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:44:23 02/24/2020 
// Design Name: 
// Module Name:    parallel_adder_4 
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
module parallel_adder_4(
			data,
		   sum
    );
	 
	 `include "definitions.v"
	 
	 input  [4*weight_width-1:0] data;
	 output [weight_width-1:0] sum;
	 
	 wire [weight_width-1:0] s0;
	 wire [weight_width-1:0] s1;
	 
	 assign s0 = data[weight_width+:weight_width] + data[0+:weight_width];
	 assign s1 = data[3*weight_width+:weight_width] + data[2*weight_width+:weight_width];
	 
	 assign sum = s0 + s1;

endmodule
