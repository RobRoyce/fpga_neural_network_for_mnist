`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:13:07 02/26/2020
// Design Name:   parallel_adder_16
// Module Name:   /home/matt/csm152a/lab_4/neural_network_tb.v
// Project Name:  lab_4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: parallel_adder_16
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module neural_network_tb;

	`include "definitions.v"
	
	reg clk;
	
	//Weights
	reg [num_input_neurons*weight_width-1:0] weights_l1[0:num_hidden_neurons-1];
	reg [num_hidden_neurons*weight_width-1:0] weights_l2[0:num_output_neurons-1];
	
	wire [num_input_neurons*weight_width-1:0] curr_weights_l1;
	wire [num_hidden_neurons*weight_width-1:0] curr_weights_l2;
	
	// Image data pulled from a file
	reg  [weight_width-1:0] image_data[0:num_input_neurons-1];
	// Packed image data
	wire [num_input_neurons*weight_width-1:0] image;
	// image multiplied by current l1 weights
	wire [num_input_neurons*weight_width-1:0] image_weighted;
	
	reg [weight_width-1:0] hidden_neurons[0:num_hidden_neurons-1];
	reg [weight_width-1:0] output_neurons[0:num_output_neurons-1];
	
	wire signed [weight_width-1:0] parallel_sum;
	wire signed [weight_width-1:0] relu_out;
	
	integer hidden_neuron_idx;
	integer output_neuron_idx;
	
	// Step 1: Flatten image_data into image vector
	// This flattened image vector serves as the input to our neural net
	generate
	genvar i;
	begin
		for (i=0; i<num_input_neurons; i=i+1) 
		begin
			assign image[weight_width*i+:weight_width] = image_data[i];
			
			fp_multiplier mult(
					  .a(image[weight_width*i+:weight_width]), 
					  .b(curr_weights_l1[weight_width*i+:weight_width]),
					  .prod(image_weighted[weight_width*i+:weight_width])
			);
		end
	end
	endgenerate
	
	// Step 2: Add the weighted inputs for the current neuron in the hidden layer
	parallel_adder_784 pa_784(
				.data(image_weighted),
				.sum(parallel_sum)
	);
	
	// Step 3: Perform activation function for current hidden neuron
	relu relu_module(
				//.clk(clk),
				.in(parallel_sum),
				.out(relu_out)
	);

	initial begin
		// Initialize Inputs
		
		clk = 0;
		hidden_neuron_idx = 0;
		
		$readmemb("image_data", image_data);
		$readmemb("weight_data_l1", weights_l1, 0, 1);

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
	
	// Select the weights that will be used for the current
	// neuron in the hidden layer
	assign curr_weights_l1 = weights_l1[hidden_neuron_idx];
	
	// Select the weights that will be used for the current
	// neuron in the output layer
	assign curr_weights_l2 = weights_l2[output_neuron_idx];
	
	always #5 clk <= ~clk;
	
	always @(posedge clk)
	begin
		
		if(hidden_neuron_idx > num_hidden_neurons-1)
		begin
			hidden_neuron_idx <= 0;
		end
		else
		begin
			hidden_neuron_idx <= hidden_neuron_idx + 1;
		end
		
		//l1_sums[hidden_neuron_idx] <= parallel_sum;
		hidden_neurons[hidden_neuron_idx] <= relu_out;
	end
      
endmodule

