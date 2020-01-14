`timescale 1ns / 1ps
`default_nettype none
////////////////////////////////////////////////////////////////////////////////
// Robert Royce Ristine
// CSM152A - Winter 2020
// Lab 1
//
// Design Name:   twos_comp_to_sm_converter
// Module Name:   /home/parallels/ucla/csm152a/labs/lab_1/twos_comp_to_sm_converter.v
////////////////////////////////////////////////////////////////////////////////


module twos_comp_to_sm_converter(input wire signed [11:0] D, output reg S, output reg signed [11:0] SM);
   parameter integer SIGN_BIT = 11;
   
   initial
	begin
	   S <= 0;
	   SM <= 0;
	end
   
   always @(D)
     begin
	S <= D[SIGN_BIT];
	
	if (D == 12'b1000_0000_0000) begin
	   SM <= 12'b0111_1111_1111;
	end else if (D[SIGN_BIT] == 1'b1) begin
	   SM <= ~D + 12'b0000_0000_0001;
	end else begin
	   SM <= D;
	end
     end // always @ (D)
      
endmodule
