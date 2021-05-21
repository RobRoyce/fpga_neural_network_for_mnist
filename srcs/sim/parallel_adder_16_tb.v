`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:59:57 02/25/2020
// Design Name:   parallel_adder_16
// Module Name:   /home/matt/Xilinx/New Folder/test_ml/parallel_adder_16_tb.v
// Project Name:  test_ml
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

module parallel_adder_16_tb;

	`include "definitions.v"

	// Inputs
	wire [16*weight_width-1:0] data;

	// Outputs
	wire [weight_width-1:0] sum;
	
	reg [weight_width-1:0] fp_vals [0:15];
	
	// "Flatten/pack" the weighted_fp_vals array into data register
	genvar i;
	generate
	begin
		for (i=0; i<16; i=i+1) 
		begin
			assign data[weight_width*(i+1)-1:weight_width*i] = fp_vals[i];
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
		
		$readmemb("random_weights", fp_vals);

		// Wait 100 ns for global reset to finish
		#100;

	end
	
	//always #100 val <= val + 1;
      
endmodule

