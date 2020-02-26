`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:51:13 02/25/2020 
// Design Name: 
// Module Name:    parallel_adder_16 
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
module parallel_adder_16(
			data,
			sum
		);

	 `include "definitions.v";
	 
	 input  [16*weight_width-1:0]data;
	 output [weight_width-1:0] sum;
	 
	 wire [4*weight_width-1:0] p_sum; //Partial sums
	 
	 genvar i;
	 generate
	 
		for (i = 0; i < 4; i = i +1)
		begin : generate_adders
			
			parallel_adder_4 pa_4(
					.data(data[4*(i+1)*weight_width-1:4*i*weight_width]),
					.sum(p_sum[(i+1)*weight_width-1:i*weight_width])
			);
			
		end
	 
	 endgenerate
	 
	 parallel_adder_4 pa_4_last(
				.data(p_sum),
				.sum(sum)
	 );
	 


endmodule
