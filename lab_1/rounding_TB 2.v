`timescale 1ns / 1ps
////////////////////////////////////////////////////////////////////////////////
// Hackett, Tyler
// Ristine, Rob
// CSM152A - Winter 2020
// Lab 1
////////////////////////////////////////////////////////////////////////////////
module rounding_TB;

   // Inputs
   reg [2:0] exponent;
   reg [3:0] significand;
   reg 	     fifth_bit;

   // Outputs
   wire [2:0] E;
   wire [3:0] F;

   // Test Variables
   integer i;
   integer j;
   integer k;
   wire [24:0] float;
   assign float = F*(2'd2**E);
   
   // Instantiate the Unit Under Test (UUT)
   rounding uut (
		 .exponent(exponent), 
		 .significand(significand), 
		 .fifth_bit(fifth_bit), 
		 .E(E), 
		 .F(F)
		 );
   
   initial begin
      // Initialize Inputs
      exponent = 0;
      significand = 0;
      fifth_bit = 0;
      i <= 0;
      j <= 0;
      k <= 0;
      $timeformat(-9, 2, "ns", 10);
      // Wait 100 ns for global reset to finish
      #100;
      
      // Add stimulus here
      for(i=0; i<=4'b1111; i=i+1)
	begin
	   significand <= i;
	for(j=0; j<=3'b111; j=j+1)
	  begin
	     exponent <= j;
	  for(k=0; k<=1'b1; k=k+1)
	    begin
	       #4;
	       fifth_bit <= k;
	       #1 $display("%t | Sig: %b, Exp: %b, 5th: %b | F: %b, E: %b | Float: %f", 
			   $time, significand, exponent, fifth_bit, F, E, float);
	    end
	  end
	end
   end // initial begin

   always @(*)
     if( significand == 4'b1111 && fifth_bit == 1'b1)
       $display("%t | exp: %b, F: %b, E: %b", $time, exponent, F, E);
   
   
endmodule

