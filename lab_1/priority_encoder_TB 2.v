`timescale 1ns / 1ps
`default_nettype none
////////////////////////////////////////////////////////////////////////////////
// Hackett, Tyler
// Ristine, Rob
// CSM152A - Winter 2020
// Lab 1
// ////////////////////////////////////////////////////////////////////////////////

module priority_encoder_TB;

   // Inputs
   reg [11:0] SM;

   // Outputs
   wire [2:0] exponent;

   // Instantiate the Unit Under Test (UUT)
   priority_encoder uut (
			 .SM(SM), 
			 .exponent(exponent)
			 );
   integer    i;
   integer    j;
   

   initial begin
      // Initialize Inputs
      SM = 0;
      i = 0;
      j = 0;
      
      // Wait 100 ns for global reset to finish
      #100;
      
      // Add stimulus here
      // for(i = 0; i < 4'b1100; i = i + 1'b1)
      // 	begin
      // 	   SM[i] <= 1'b1;
      // 	   #10 $display("%t | SM: %b | exponent: %b", $time, SM, exponent);
      // 	end
      
      // #10 SM <= 12'b0000_0000_0000;
      
      // for(i = 4'b1010; i >= 4'b0000; i = i - 2'b10)
      // 	begin
      // 	   SM[i] <= 1'b1;
      // 	   #10 $display("%t | SM: %b | exponent: %b", $time, SM, exponent);
      // 	end
      forever
	begin
	   #100 SM <= 12'b0111_1111_1111;
	   #150 SM <= 12'b0011_1111_1111;
	   #200 SM <= 12'b0001_1111_1111;
	   #250 SM <= 12'b0000_1111_1111;
	   #300 SM <= 12'b0000_0111_1111;
	   #350 SM <= 12'b0000_0011_1111;
	   #400 SM <= 12'b0000_0001_1111;
	   #450 SM <= 12'b0000_0000_1111;
	   #500 SM <= 12'b0000_0000_0111;
	   #500 SM <= 12'b0000_0000_0011;
	   #550 SM <= 12'b0000_0000_0001;
	   #600 SM <= 12'b0000_0000_0000;
	   $finish;
	end	  
   end



endmodule
