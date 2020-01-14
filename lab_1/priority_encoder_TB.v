`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Robert Royce Ristine
// CSM152A - Winter 2020
// Lab 1
// ////////////////////////////////////////////////////////////////////////////////

module priority_encoder_TB;

	// Inputs
	reg signed [11:0] D;

	// Outputs
	wire [2:0] Q;

	// Instantiate the Unit Under Test (UUT)
	priority_encoder uut (
		.D(D), 
		.Q(Q)
	);

	initial begin
	   // Initialize Inputs
	   D = 0;

	   // Wait 100 ns for global reset to finish
	   #100;
           
	   // Add stimulus here
	   $monitor("Q assigned: %b (%2)", Q, Q);
	end

   always 
     fork
	#100 D <= 12'b0111_1111_1111;
	#150 D <= 12'b0011_1111_1111;
	#200 D <= 12'b0001_1111_1111;
	#250 D <= 12'b0000_1111_1111;
	#300 D <= 12'b0000_0111_1111;
	#350 D <= 12'b0000_0011_1111;
	#400 D <= 12'b0000_0001_1111;
	#450 D <= 12'b0000_0000_1111;
	#500 D <= 12'b0000_0000_0111;
	#500 D <= 12'b0000_0000_0011;
	#550 D <= 12'b0000_0000_0001;
	#600 D <= 12'b0000_0000_0000;
     join	  
   
      
endmodule

000111111111 >> 4
  = 000000011111

    12-3-5
