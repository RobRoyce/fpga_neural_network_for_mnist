`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:43:51 02/27/2020 
// Design Name: 
// Module Name:    simple_nn 
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
module simple_nn(
		//input clk,
		input [1:0] Sw,
		output Led
    );
	 
	 `include "definitions.v"
	 
	 parameter l1_num_neurons = 2; //Input layer
	 parameter l2_num_neurons = 2; //Hidden layer
	 parameter l3_num_neurons = 1; //Output layer
	 
	 wire[weight_width-1:0] inputs[0:l1_num_neurons-1];
	 wire[l1_num_neurons*weight_width-1:0] l1_weighted[0:l2_num_neurons-1];
	 
	 reg[l1_num_neurons*weight_width-1:0] l1_wts   [0:l2_num_neurons-1];
	 reg[weight_width-1:0]            l1_biases[0:l2_num_neurons-1];
	 
	 wire[l1_num_neurons*weight_width-1:0] l2_weighted[0:l3_num_neurons-1];
	 
	 reg[l2_num_neurons*weight_width-1:0] l2_wts   [0:l3_num_neurons-1];
	 reg[weight_width-1:0]            l2_biases[0:l3_num_neurons-1];
	 
	 wire[weight_width-1:0] l2_sums[0:l2_num_neurons-1];
	 wire[weight_width-1:0] l2_neurons[0:l2_num_neurons-1];
	 
	 wire[weight_width-1:0] l3_sums[0:l3_num_neurons-1];
	 wire[weight_width-1:0] l3_neurons[0:l3_num_neurons-1];
	 
	 assign inputs[0] = {{weight_width-decimal_place-1{1'b0}}, Sw[0], {decimal_place{1'b0}}};
	 assign inputs[1] = {{weight_width-decimal_place-1{1'b0}}, Sw[1], {decimal_place{1'b0}}};
	 
	 assign Led = |l3_neurons[0][weight_width-1:decimal_place-1];
	 
	 initial
	 begin
			
			//TODO initialize biases and weights.
			$readmemb("scripts/python/weights_l1_data", l1_wts);
			$readmemb("scripts/python/biases_l1_data", l1_biases);
			
			$readmemb("scripts/python/weights_l2_data", l2_wts);
			$readmemb("scripts/python/biases_l2_data", l2_biases);
			
	 end
	 
	 genvar i;
	 genvar j;
	 
	 //Generate weighted inputs to the hidden layer
	 generate
	 
		for(i = 0; i < l1_num_neurons; i = i+1)
		begin : gen_mult_l1_i
		
			for(j = 0; j < l2_num_neurons; j = j+1)
			begin : gen_mult_l1_j
			
				fp_multiplier fp_mult_l1(
							.a(inputs[i]),
							.b(l1_wts[j][i*weight_width+:weight_width]),
							.prod(l1_weighted[j][i*weight_width+:weight_width])
				);
			
			end
		
		end
		
	 endgenerate
	 
	 //Generate adders and activation modules for hidden layer
	 generate
	 
		for(i = 0; i < l2_num_neurons; i = i+1)
		begin : gen_adders_l1_l2
		
			parallel_adder_4 pa_4_l2(
						.data({l1_weighted[i], l1_biases[i], {weight_width{1'b0}}}),
						.sum(l2_sums[l2_num_neurons-1-i])
			);
			
			relu relu_l2(
					.in(l2_sums[i]),
					.out(l2_neurons[i])
			);
		
		end
		
	 endgenerate
	 
	 // Generate weighted inputs to the output layer
	 generate
	 
		for(i = 0; i < l2_num_neurons; i = i+1)
		begin : gen_mult_l2_i
		
			for(j = 0; j < l3_num_neurons; j = j+1)
			begin : gen_mult_l2_j
			
				fp_multiplier fp_mult_l2(
							.a(l2_neurons[i]),
							.b(l2_wts[j][i*weight_width+:weight_width]),
							.prod(l2_weighted[j][i*weight_width+:weight_width])
				);
			
			end
		
		end
	 
	 endgenerate
	 
	 //Generate adders and activation modules for hidden layer
	 generate
	 
		for(i = 0; i < l3_num_neurons; i = i+1)
		begin : gen_adders_l2_l3
		
			parallel_adder_4 pa_4_l3(
						.data({l2_weighted[i], l2_biases[i], {weight_width{1'b0}}}),
						.sum(l3_sums[l3_num_neurons-1-i])
			);
			
			relu relu_l3(
					.in(l3_sums[i]),
					.out(l3_neurons[i])
			);
		
		end
		
	 endgenerate
	 
	 


endmodule
