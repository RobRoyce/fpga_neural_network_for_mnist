`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:20:50 02/27/2020
// Design Name:   simple_nn
// Module Name:   /home/matt/csm152a/lab_4/simple_nn_tb.v
// Project Name:  lab_4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: simple_nn
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module simple_nn_tb;

	`include "definitions.v"

	// Inputs
	reg[1:0] Sw;
	wire Led;

	// Instantiate the Unit Under Test (UUT)
	simple_nn uut (
		.Sw(Sw),
		.Led(Led)
	);

	initial begin
	
		Sw = 2'b00;
		#100;
		Sw = 2'b01;
		#100;
		Sw = 2'b10;
		#100;
		Sw = 2'b11;

	end
      
endmodule

