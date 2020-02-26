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
	 
	 assign s0 = data[2*weight_width-1:1*16] + data[1*weight_width-1:0*16];
	 assign s1 = data[4*weight_width-1:3*16] + data[3*weight_width-1:2*16];
	 
	 assign sum = s0 + s1;

endmodule
