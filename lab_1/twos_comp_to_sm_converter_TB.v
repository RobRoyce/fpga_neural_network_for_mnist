`timescale 1ns / 1ps
`default_nettype none
////////////////////////////////////////////////////////////////////////////////
// Robert Royce Ristine
// CSM152A - Winter 2020
// Lab 1
//
// Design Name:   twos_comp_to_sm_converter
// Module Name:   /home/parallels/ucla/csm152a/labs/lab_1/twos_comp_to_sm_converter_TB.v
// Verilog Test Fixture created by ISE for module: twos_comp_to_sm_converter
////////////////////////////////////////////////////////////////////////////////

module twos_comp_to_sm_converter_TB;

	// Inputs
	reg signed [11:0] D;

	// Outputs
	wire S;
	wire signed [11:0] SM;

	// Instantiate the Unit Under Test (UUT)
	twos_comp_to_sm_converter uut (
		.D(D), 
		.S(S), 
		.SM(SM)
	);

	initial 
	  begin
	     // Initialize Inputs
	     D = 0;

	     // Wait 100 ns for global reset to finish
	     #100;
	  end // initial begin

   always
     fork // Use fork so that delays are absolute (not relative to each other)
	#100 D <= 12'b0000_0000_0000;
	#110 $display("Setting D <= %b (%d), sign bit: %b, SM: %b (%d)", D, D, D[11], SM, SM);
	#110 if(SM == 12'b0000_0000_0000) $display("Test 1 SUCCESS"); else $display("Test 1 FAILURE");
		
	#180 D <= 12'b0101_0101_0101;
	#190 $display("Setting D <= %b (%d), sign bit: %b, SM: %b (%d)", D, D, D[11], SM, SM);
	#190 if(SM == D) $display("Test 2 SUCCESS"); else $display("Test 2 FAILURE");
	
	#260 D <= 12'b0000_0011_1111;
	#270 $display("Setting D <= %b (%d), sign bit: %b, SM: %b (%d)", D, D, D[11], SM, SM);
	#270 if(SM == D) $display("Test 3 SUCCESS"); else $display("Test 3 FAILURE");

	#350 D <= 12'b1000_0000_0000;
	#360 $display("Setting D <= %b (%d), sign bit: %b, SM: %b (%d)", D, D, D[11], SM, SM);
	#360 if(SM == 12'b0000_0000_0000) $display("Test 4 SUCCESS"); else $display("Test 4 FAILURE");
	
	#420 D <= 12'b1111_1111_1111;
	#430 $display("Setting D <= %b (%d), sign bit: %b, SM: %b (%d)", D, D, D[11], SM, SM);
	#430 if(SM == 12'b0000_0000_0001) $display("Test 5 SUCCESS"); else $display("Test 5 FAILURE");

	#500 D <= 12'b1111_0000_1111;
	#510 $display("Setting D <= %b (%d), sign bit: %b, SM: %b (%d)", D, D, D[11], SM, SM);
	#510 if(SM == 12'd241) $display("Test 6 SUCCESS"); else $display("Test 6 FAILURE");

	#570 D <= 12'b1010_1010_1010;
	#580 $display("Setting D <= %b (%d), sign bit: %b, SM: %b (%d)", D, D, D[11], SM, SM);
	#580 if(SM == 12'd1366) $display("Test 7 SUCCESS"); else $display("Test 7 FAILURE");

	#640 D <= -12'd325;
	#650 $display("Setting D <= %b (%d), sign bit: %b, SM: %b (%d)", D, D, D[11], SM, SM);
	#650 if(SM == 12'd325) $display("Test 8 SUCCESS"); else $display("Test 8 FAILURE");

	#710 D <= -12'd2048;
	#720 $display("Setting D <= %b (%d), sign bit: %b, SM: %b (%d)", D, D, D[11], SM, SM);
	#720 if(SM == 12'd0) $display("Test 9 SUCCESS"); else $display("Test 9 FAILURE");

	#800 D <= 12'd2048;
	#810 $display("Setting D <= %b (%d), sign bit: %b, SM: %b (%d)", D, D, D[11], SM, SM);
	#810 if(SM == 12'd0) $display("Test 10 SUCCESS"); else $display("Test 10 FAILURE");

	#900 D <= 12'd250;
	#910 $display("Setting D <= %b (%d), sign bit: %b, SM: %b (%d)", D, D, D[11], SM, SM);
	#910 if(SM == 12'd250) $display("Test 10 SUCCESS"); else $display("Test 10 FAILURE");

	#1000 D <= -12'd2047;
	#1010 $display("Setting D <= %b (%d), sign bit: %b, SM: %b (%d)", D, D, D[11], SM, SM);
	#1010 if(SM == 12'd2047) $display("Test 10 SUCCESS"); else $display("Test 10 FAILURE");		
     join
   
      
endmodule

