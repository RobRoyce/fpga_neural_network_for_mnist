`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:42:26 02/24/2020 
// Design Name: 
// Module Name:    parallel_adder_784 
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
module parallel_adder_784(
		input [784*16-1:0] data,
		output [15:0] sum
    );
	 
	 `include "definitions.v"
	
	 wire [49*16-1:0] p_sum; //Partial sums
	 wire [3*16-1:0]  p_sum_s2; //Stage 2 partial sums
	 
	 genvar i;
	 generate
	 
		for (i = 0; i < 49; i = i +1)
		begin : generate_adders
			
			parallel_adder_16 pa_16(
					.data(data[16*(i+1)*16-1:16*i*16]),
					.sum(p_sum[(i+1)*16-1:i*16])
			);
			
		end
	 
	 endgenerate
	 generate
	 
		for (i = 0; i < 3; i = i +1)
		begin : generate_adders_s2
			
			parallel_adder_16 pa_16(
					.data(p_sum[16*(i+1)*16-1:16*i*16]),
					.sum(p_sum_s2[(i+1)*16-1:i*16])
			);
			
		end
	 
	 endgenerate
	 
	 parallel_adder_4 pa_4(
				.data({p_sum_s2, 16'b0000_0000_0000_0000}),
				.sum(sum)
	 );


endmodule
