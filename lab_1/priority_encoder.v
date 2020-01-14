`timescale 1ns / 1ps
`default_nettype none
//////////////////////////////////////////////////////////////////////////////////
// Robert Royce Ristine
// CSM152A - Winter 2020
// Lab 1
// Module Name:    priority_encoder 
//
//////////////////////////////////////////////////////////////////////////////////
module priority_encoder(input wire signed [11:0] D, output reg [2:0] exponent);
   parameter integer SIGN_BIT = 11;
   reg [11:0] sign_check;  
   
   always @(D)
     begin
	$display("D: %b", D);
	casex(D)
	  12'b01XX_XXXX_XXXX : exponent <= 3'b111;
	  12'b001X_XXXX_XXXX : exponent <= 3'b110;
	  12'b0001_XXXX_XXXX : exponent <= 3'b101;
	  12'b0000_1XXX_XXXX : exponent <= 3'b100;
	  12'b0000_01XX_XXXX : exponent <= 3'b011;
	  12'b0000_001X_XXXX : exponent <= 3'b010;
	  12'b0000_0001_XXXX : exponent <= 3'b001;
	  12'b0000_0000_XXXX : exponent <= 3'b000;
	  default: begin
	     $display("case(D) hit default");
	     exponent <= 3'b001;
	  end
	  
	endcase // case (D)
     end // always @ (D)
   
endmodule