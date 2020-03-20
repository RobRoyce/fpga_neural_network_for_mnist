`timescale 1ns / 1ps
`default_nettype none
////////////////////////////////////////////////////////////////////////////////
// Hackett, Tyler
// Ristine, Rob
// CSM152A - Winter 2020
// Lab 1
//////////////////////////////////////////////////////////////////////////////////
module fpcvt(
    input wire [11:0] D,
    output wire [3:0]  F,
    output wire [2:0]  E,
    output wire        S
    );
    wire [11:0] SM;
    wire [2:0] exponent;
    wire [3:0] significand;
    wire fifth_bit;
   twos_comp_to_sm_converter twos_comp_converter (
						  .D(D),
						  .S(S),
						  .SM(SM)
						  );
   priority_encoder encoder (
			     .SM(SM),
			     .exponent(exponent)
			     );
   significand_extractor leading_extractor (
					    .SM(SM),
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
		     );
endmodule // fpcvt


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
	// Handle case in which D == -2048 Since the range of the output is
	// [-2048, 2047], we map the magnitude of -2048 to 2047
	if (D == 12'b1000_0000_0000)
	   SM <= 12'b0111_1111_1111;
	// If the sign bit is 1 (<=> D is negative), take complement and
	// increment by 1 to get the magnitude
	else if (D[SIGN_BIT] == 1'b1)
	   SM <= ~D + 12'b0000_0000_0001;
	// If the sign bit is 0 (<=> D is positive), no conversion is necessary
	else
	   SM <= D;
     end // always @ (D)
endmodule // twos_comp_to_sm_converter


module priority_encoder(input wire [11:0] SM, output reg [2:0] exponent);
   always @(SM)
     begin
	casex(SM)
	  12'b01XX_XXXX_XXXX : exponent = 3'b111;
	  12'b001X_XXXX_XXXX : exponent = 3'b110;
	  12'b0001_XXXX_XXXX : exponent = 3'b101;
	  12'b0000_1XXX_XXXX : exponent = 3'b100;
	  12'b0000_01XX_XXXX : exponent = 3'b011;
	  12'b0000_001X_XXXX : exponent = 3'b010;
	  12'b0000_0001_XXXX : exponent = 3'b001;
	  12'b0000_0000_XXXX : exponent = 3'b000;
	  default: exponent = 3'b000;
	endcase // case (SM)
     end // always @ (SM)
endmodule // priority_encoder


module significand_extractor(
	input wire  [11:0] SM,           // Sign-Magnitude input
	input wire  [2:0]  exponent,    // Exponent of the input
	output wire [3:0]  significand, // Significand extracted from SM
	output wire fifth_bit		    // Rounding bit
    );
	reg [11:0] SM_norm;
	always @(*)
	begin
		if(exponent == 0)
			SM_norm = SM << 12'b0000_0000_0001;
		else
			SM_norm = SM >> (exponent - 4'b0001);
	end
	assign significand = SM_norm[4:1];
	assign fifth_bit = SM_norm[0];
endmodule // significand_extractor


module rounding(
    input wire [2:0] exponent,
    input wire [3:0] significand,
    input wire fifth_bit,
    output reg [2:0] E,
    output reg [3:0] F
    );
   initial
     begin
	E = 3'b000;
	F = 4'b0000;
     end
   always @(*)
     begin
	if(fifth_bit == 1'b0)
	  begin
	     F = significand;
	     E = exponent;
	  end
	else if(significand != 4'b1111)
	  begin
	     F = significand + 1'b1;
	     E = exponent;
	  end
	else
	  begin
	     if(exponent != 3'b111)
	       begin
		  F = 4'b1000;
		  E = exponent + 1'b1;
	       end
	     else
	       begin
		  F = 4'b1111;
		  E = 3'b111;
	       end
	  end
     end
endmodule // rounding
