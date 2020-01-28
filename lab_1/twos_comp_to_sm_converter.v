`timescale 1ns / 1ps
`default_nettype none
////////////////////////////////////////////////////////////////////////////////
// Hackett, Tyler
// Ristine, Rob
// CSM152A - Winter 2020
// Lab 1
//
// Design Name:   twos_comp_to_sm_converter
// Module Name:   /lab_1/twos_comp_to_sm_converter.v
////////////////////////////////////////////////////////////////////////////////


module twos_comp_to_sm_converter(input wire [11:0] D, output reg S, output reg signed [11:0] SM);
   // D is the two's complement input
   // S is the sign bit, taken from the MSB of D
   // SM is the sign-magnitude representation of D
   parameter integer SIGN_BIT = 11;
   
   initial
     begin
	S <= 0;
	SM <= 0;
     end
   
   always @(D)
     begin
	S <= D[SIGN_BIT];

	// Handle case in which D == -2048
	// Since the range of the output is [-2048, 2047], we map the magnitude of -2048 to 2047
	if (D == 12'b1000_0000_0000)
	   SM <= 12'b0111_1111_1111;

	// If the sign bit is 1 (<=> D is negative), take complement and increment by 1 to get the magnitude
	else if (D[SIGN_BIT] == 1'b1)
	   SM <= ~D + 12'b0000_0000_0001;

	// If the sign bit is 0 (<=> D is positive), no conversion is necessary
	else
	   SM <= D;

     end // always @ (D)
      
endmodule
