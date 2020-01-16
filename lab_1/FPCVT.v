`timescale 1ns / 1ps
`default_nettype none
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:58:18 01/16/2020 
// Design Name: 
// Module Name:    FPCVT 
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
module FPCVT(
    input wire [11:0] D,
    output reg [3:0]  F,
    output reg [2:0]  E,
    output reg        S
    );
    
    initial
    begin
    
        //F = 0;
        //E = 0;
        //S = 0;
    
    end
    
    wire [11:0] SM;
    wire [2:0] exponent;
    wire [3:0] significand;
    wire fifth_bit;

	twos_comp_to_sm_converter twos_comp_converter (
		.D(D), 
		.S(S), 
		.SM(SM)
	);

   /*priority_encoder encoder (
			 .SM(SM), 
			 .exponent(exponent)
			 );
         
	significand_extractor leading_extractor (
		.D(SM), 
		.exponent(exponent), 
		.significand(significand), 
		.fifth_bit(fifth_bit)
	);
   
   rounding rounder (
		 .exponent(exponent), 
		 .significand(significand), 
		 .fifth_bit(fifth_bit), 
		 .E(E), 
		 .F(F)
		 );*/

endmodule
