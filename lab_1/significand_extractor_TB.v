`timescale 1ns / 1ps
`default_nettype none
////////////////////////////////////////////////////////////////////////////////
// Tyler Hackett
// CSM152A - Winter 2020
// Lab 1
// ////////////////////////////////////////////////////////////////////////////////

module significand_extractor_TB;

	// Inputs
	reg [11:0] D;
	reg [2:0] exponent;

	// Outputs
	wire [3:0] significand;
	wire fifth_bit;

	// Instantiate the Unit Under Test (UUT)
	significand_extractor uut (
		.D(D), 
		.exponent(exponent), 
		.significand(significand), 
		.fifth_bit(fifth_bit)
	);

	initial begin
		// Initialize Inputs
		D = 1;
		exponent = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
	
	always
	begin
		#10 D <= D + 1;
		
		if(D == 12'b0000_0000_0000)
			exponent <= exponent + 1;
			
		
	end
      
endmodule

