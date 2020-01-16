`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:07:37 01/16/2020
// Design Name:   FPCVT
// Module Name:   C:/Users/152/Desktop/csm152a/lab_1/FPCVT_TB.v
// Project Name:  lab_1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: FPCVT
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module FPCVT_TB;

	// Inputs
	reg [11:0] D;

	// Outputs
	wire [3:0] F;
	wire [2:0] E;
	wire S;

	// Instantiate the Unit Under Test (UUT)
	FPCVT uut (
		.D(D), 
		.F(F), 
		.E(E), 
		.S(S)
	);

	initial begin
		// Initialize Inputs
		D = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
    
    always
    begin
        #10 D <= D + 1'b1;
    end
      
endmodule

