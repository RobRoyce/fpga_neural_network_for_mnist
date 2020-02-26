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
	reg [16*weight_width-1:0] data;
	
	reg [weight_width-1:0] val;
	
	reg [weight_width-1:0] prod_test;

	// Outputs
	wire [weight_width-1:0] sum;

	// Instantiate the Unit Under Test (UUT)
	parallel_adder_16 uut (
		.data(data), 
		.sum(sum)
	);

	initial begin
		// Initialize Inputs
		data = 0;
		
		val = 2;
		
		data[weight_width-1:0] = val;
		data[16*weight_width-1:15*weight_width] = val;
		
		fp_mult(32000,-16,prod_test);

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		
		data[weight_width-1:0] = val+1;

	end
	
	//always #100 val <= val + 1;
      
endmodule

