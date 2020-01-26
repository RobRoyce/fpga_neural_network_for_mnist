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
   wire       S;

   // Instantiate the Unit Under Test (UUT)
   FPCVT uut (
	      .D(D), 
	      .F(F), 
	      .E(E), 
	      .S(S)
	      );

   initial begin
      // Initialize Inputs
      $timeformat(-9,3,"ns",5);
      D = 0;

      // Wait 100 ns for global reset to finish
      #100;

      // Add stimulus here
      forever
	begin

	   // $display("Begin provided test cases");	   
	   // #10 D <= 12'b0111_0100_0000; #1 $display("%t | D: %b_%b_%b | SEF: %b_%b_%b | Expected: 0_111_1111", $time, D[11:8], D[7:4], D[3:0], S, E, F);
	   // #10 D <= 12'b0111_1111_1111; #1 $display("%t | D: %b_%b_%b | SEF: %b_%b_%b | Expected: 0_111_1111", $time, D[11:8], D[7:4], D[3:0], S, E, F);
	   // #10 D <= 12'b1000_0000_0010; #1 $display("%t | D: %b_%b_%b | SEF: %b_%b_%b | Expected: 1_111_1111", $time, D[11:8], D[7:4], D[3:0], S, E, F);
	   // #10 D <= 12'b1000_1000_1010; #1 $display("%t | D: %b_%b_%b | SEF: %b_%b_%b | Expected: 1_111_1111", $time, D[11:8], D[7:4], D[3:0], S, E, F);
	   // #10 D <= 12'b1001_1100_1111; #1 $display("%t | D: %b_%b_%b | SEF: %b_%b_%b | Expected: 1_111_1100", $time, D[11:8], D[7:4], D[3:0], S, E, F);
	   // #10 D <= 12'b1111_1010_0101; #1 $display("%t | D: %b_%b_%b | SEF: %b_%b_%b | Expected: 1_011_1011", $time, D[11:8], D[7:4], D[3:0], S, E, F);

	   // $display("Begin test cases derived from the lab handout");
	   // #10 D <= 12'd422; #1 $display("%t | D: 422 | SEF:%b_%b_%b | In Float: %d | Expected: 416", $time, S, E, F, F*(2**E));
	   // #10 D <= -12'd422; #1 $display("%t | D: -422 | SEF:%b_%b_%b | In Float: %d | Expected: 416", $time, S, E, F, F*(2**E));
	   // #10 D <= 12'b0000_0010_1100; #1 $display("%t | D: %b_%b_%b | SEF:%b_%b_%b | Expected: 0_010_1011", $time, D[11:8], D[7:4], D[3:0], S, E, F);
	   // #10 D <= 12'b0000_0010_1101; #1 $display("%t | D: %b_%b_%b | SEF:%b_%b_%b | Expected: 0_010_1011", $time, D[11:8], D[7:4], D[3:0], S, E, F);
	   // #10 D <= 12'b0000_0010_1110; #1 $display("%t | D: %b_%b_%b | SEF:%b_%b_%b | Expected: 0_010_1100", $time, D[11:8], D[7:4], D[3:0], S, E, F);	   
	   // #10 D <= 12'b0000_0010_1111; #1 $display("%t | D: %b_%b_%b | SEF:%b_%b_%b | Expected: 0_010_1100", $time, D[11:8], D[7:4], D[3:0], S, E, F);
	   // #10 D <= 12'b0000_0111_1111; #1 $display("%t | D: %b_%b_%b | SEF:%b_%b_%b | Expected: 0_100_1000", $time, D[11:8], D[7:4], D[3:0], S, E, F);	   	   
	   
	   // // Begin custom test cases
	   // $display("Begin custom test cases");
	   // #10 D <= 12'd0; #1 $display("%t | D: 0 | SEF: %b_%b_%b | Float: %s%d", $time, S, E, F, (S == 1'b1) ? "-" : "+", F*2**E);
	   // #10 D <= -12'd1; #1 $display("%t | D: -1 | SEF: %b_%b_%b | Float: %s%d", $time, S, E, F, (S == 1'b1) ? "-" : "+", F*2**E);	   
	   // #10 D <= 12'd1; #1 $display("%t | D: 1 | SEF: %b_%b_%b | Float: %s%d", $time, S, E, F, (S == 1'b1) ? "-" : "+", F*2**E);
	   // #10 D <= -12'd2048; #1 $display("%t | D: -2048 | SEF: %b_%b_%b | Float: %s%d", $time, S, E, F, (S == 1'b1) ? "-" : "+", F*2**E);
	   // #10 D <= -12'd2047; #1 $display("%t | D: -2047 | SEF: %b_%b_%b | Float: %s%d", $time, S, E, F, (S == 1'b1) ? "-" : "+", F*2**E);
	   // #10 D <= 12'd2047; #1 $display("%t | D: 2047 | SEF: %b_%b_%b | Float: %s%d", $time, S, E, F, (S == 1'b1) ? "-" : "+", F*2**E);
	   // #10 D <= 12'd422; #1 $display("%t | D: 422 | SEF: %b_%b_%b | Float: %s%d", $time, S, E, F, (S == 1'b1) ? "-" : "+", F*2**E);
	   // #10 D <= -12'd422; #1 $display("%t | D: -422 | SEF: %b_%b_%b | Float: %s%d", $time, S, E, F, (S == 1'b1) ? "-" : "+", F*2**E);

	   #10 D <= 12'b0011_1111_0011;
	   #10 D <= 12'b0111_1000_0001;
	   #10 D <= 12'b0111_1111_1111;
	   #10 D <= 12'b1000_1000_0000;
	   #10 D <= 12'b1000_0000_0000;
	   #10 D <= 12'b0000_0010_0011;
	   #10 D <= 12'b1111_0100_1011;
	   #10 D <= 12'b0101_1111_1011;
	   #10 D <= 12'b0111_0110_0111;
	   #10 $finish();
	   
	end // forever begin
   end // initial begin
endmodule

