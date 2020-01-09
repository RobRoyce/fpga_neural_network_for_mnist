`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:28:02 01/09/2020 
// Design Name: 
// Module Name:    counter 
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
module counter(input wire clk, input wire reset, output reg led);
	reg [26:0] a;
	
	always @(posedge clk)
	begin
		if(reset)
			a <= 27'b0;
		else
			a <= a + 1'b1;
		
		if(a == 27'd100_000_000)
			begin
				led <= ~led;
				a <= 27'b0;
			end
		end

endmodule
