`timescale 1ns / 1ps
`default_nettype none
////////////////////////////////////////////////////////////////////////////////
// Hackett, Tyler
// Ristine, Rob
// CSM152A - Winter 2020
// Lab 1
//////////////////////////////////////////////////////////////////////////////////
module significand_extractor(
	input wire  [11:0] D,           // Sign-Magnitude input
	input wire  [2:0]  exponent,    // Exponent of the input
	output wire [3:0]  significand, // Significand extracted from D
	output wire fifth_bit		    // Rounding bit
    );

	reg [11:0] D_norm;
	
	always @(*)
	begin
		if(exponent == 0)
			D_norm = D << 12'b0000_0000_0001;
		else
			D_norm = D >> (exponent - 4'b0001);
	end
	
	assign significand = D_norm[4:1];
	assign fifth_bit = D_norm[0];

endmodule
