`timescale 1ns / 1ps
`default_nettype none
//////////////////////////////////////////////////////////////////////////////////
// Robert Royce Ristine
// CSM152A - Winter 2020
// Lab 1
// Module Name:    priority_encoder 
//
//////////////////////////////////////////////////////////////////////////////////
module priority_encoder(input wire signed [11:0] D, output reg [2:0] Q);
   parameter integer SIGN_BIT = 11;
   reg [11:0] sign_check;  
   
   always @(D)
     begin
	// if(D[SIGN_BIT] == 1'b1)
	//   sign_check <= ~D;
	// else
	//   sign_check <= D;
	$monitor("D: %b (%d)", D, D);
	casex(D)
	  12'b01XX_XXXX_XXXX : Q <= 3'b111;
	  12'b001X_XXXX_XXXX : Q <= 3'b110;
	  12'b0001_XXXX_XXXX : Q <= 3'b101;
	  12'b0000_1XXX_XXXX : Q <= 3'b100;
	  12'b0000_01XX_XXXX : Q <= 3'b011;
	  12'b0000_001X_XXXX : Q <= 3'b010;
	  12'b0000_0001_XXXX : Q <= 3'b001;
	  12'b0000_0000_XXXX : Q <= 3'b000;
	  default: begin
	     $display("case(D) hit default");
	     Q <= 3'b001;
	  end
	  
	endcase // case (D)
     end // always @ (D)
   
endmodule
