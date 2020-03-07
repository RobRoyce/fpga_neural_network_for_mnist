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
	 output [2*weight_width-1:0] sum;
	 
	 wire [4*(weight_width+2)-1:0] p_sum; //Partial sums
	 
	 genvar i;
	 generate
	 
		for (i = 0; i < 4; i = i +1)
		begin : generate_adders
			
			parallel_adder_4 pa_4(
					.data(data[4*i*weight_width+:4*weight_width]),
					.sum(p_sum[i*(weight_width+2)+:(weight_width+2)])
			);
			
		end
	 
	 endgenerate
	 
//	 parallel_adder_4 pa_4_last(
//				.data(p_sum),
//				.sum(sum)
//	 );

     assign sum = { {(weight_width-2){p_sum[weight_width+1]}}, p_sum[0+:weight_width+2] } + 
                  { {(weight_width-2){p_sum[2*(weight_width+2)-1]}}, p_sum[(weight_width+2)+:weight_width+2] } + 
                  { {(weight_width-2){p_sum[3*(weight_width+2)-1]}}, p_sum[2*(weight_width+2)+:weight_width+2] } + 
                  { {(weight_width-2){p_sum[4*(weight_width+2)-1]}}, p_sum[3*(weight_width+2)+:weight_width+2] };
	 


endmodule
