`timescale 1ns / 1ps
`default_nettype none
//////////////////////////////////////////////////////////////////////////////////
// Robert Royce Ristine
// CSM152A - Winter 2020
// Lab 1
// Module Name:    priority_encoder 
//
//////////////////////////////////////////////////////////////////////////////////
module priority_encoder(input wire [11:0] SM, output reg [2:0] exponent);
   // 
   always @(SM)
     begin
	casex(SM)
	  12'b01XX_XXXX_XXXX : exponent <= 3'b111;
	  12'b001X_XXXX_XXXX : exponent <= 3'b110;
	  12'b0001_XXXX_XXXX : exponent <= 3'b101;
	  12'b0000_1XXX_XXXX : exponent <= 3'b100;
	  12'b0000_01XX_XXXX : exponent <= 3'b011;
	  12'b0000_001X_XXXX : exponent <= 3'b010;
	  12'b0000_0001_XXXX : exponent <= 3'b001;
	  12'b0000_0000_XXXX : exponent <= 3'b000;
	  default: exponent <= 3'b000;
	endcase // case (SM)
     end // always @ (SM)
   
endmodule   

