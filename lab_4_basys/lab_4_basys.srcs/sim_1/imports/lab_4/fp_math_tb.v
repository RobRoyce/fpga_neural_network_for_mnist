`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:55:47 02/25/2020
// Design Name:   parallel_adder_16
// Module Name:   /home/matt/csm152a/lab_4/fp_math_tb.v
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

module fp_math_tb;

	`include "definitions.v"

	// Inputs
	wire [16*weight_width-1:0] data;
	
	reg [weight_width-1:0] val;

	// Outputs
	wire [weight_width-1:0] sum;
	
	reg [weight_width-1:0] fp_vals [0:15];
	reg [weight_width-1:0] weights [0:15];
	
	reg [weight_width-1:0] weighted_fp_vals [0:15];
	
	integer midx;
	
	// "Flatten/pack" the weighted_fp_vals array into data register
	genvar i;
	generate
	begin
		for (i=0; i<16; i=i+1) 
		begin
			assign data[weight_width*(i+1)-1:weight_width*i] = weighted_fp_vals[i];
		end
	end
	endgenerate

	// Instantiate the Unit Under Test (UUT)
	parallel_adder_16 uut (
		.data(data), 
		.sum(sum)
	);

	initial begin
		// Initialize Inputs
		
		$readmemb("random_fp_vals", fp_vals);
		$readmemb("random_weights", weights);

		// Wait 100 ns for global reset to finish
		#100;
		
		for (midx = 0; midx < 16; midx = midx + 1)
		begin
			fp_mult(fp_vals[midx], weights[midx], weighted_fp_vals[midx]);
		end
        
		// Add stimulus here

	end
      
endmodule

