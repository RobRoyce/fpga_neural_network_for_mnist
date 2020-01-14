`timescale 1ns / 1ps
`default_nettype none
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:59:00 01/14/2020 
// Design Name: 
// Module Name:    significand_extractor 
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
module significand_extractor(
	input wire  [11:0] D,           // Two's complement encoded input
	input wire  [2:0]  exponent,    // Exponent of the input
	output wire [3:0]  significand, // Significand extracted from D
	output wire fifth_bit		     // Rounding bit
    );

	reg [11:0] D_norm;
	
	always @(*)
	begin
		if(exponent == 0)
		begin
			D_norm <= D << 12'b0000_0000_0001;
		end
		else
		begin
			D_norm <= D >> (exponent - 4'b0001);
		end
	end
	
	assign significand = D_norm[4:1];
	assign fifth_bit = D_norm[0] & (exponent != 4'b0000);

endmodule
