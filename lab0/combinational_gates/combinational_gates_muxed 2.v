/*
 * Module: Multiplexed combinational gates
 * 
 * Filename: combinational_gates_muxed.v
 * Version: 1.0
 *
 * Author: Cejo Konuparamban Lonappan
 *
 * Description: RTL for implementing eight combinational gates with the 
 * outputs of the gates multiplexed using an 8:1 Multiplexer. The gates
 * implemented are NAND, AND, NOR, OR, XOR, XNOR, NOT, and a non-inverting
 * buffer. 
 */

module combinational_gates_muxed (led, sw);

// Input and output declaration
input  [4:0] sw;  // Inputs sw[4:2] are unused
output reg led; // Outputs led[7:1] are unused

// Declaring wires for the eight two inpuit basic gates	
wire nand_out;    // Mux 3'b111 
wire  and_out;    // Mux 3'b110
wire  nor_out;    // Mux 3'b101
wire   or_out;    // Mux 3'b100
wire  xor_out;    // Mux 3'b011
wire xnor_out;    // Mux 3'b010
wire buff_out;    // Mux 3'b001
wire  not_out;    // Mux 3'b000

wire [7:0] MuxIn; 
wire [2:0] SelectIn;

// Generate outputs for the eight gates
assign nand_out = ~(sw[0] & sw[1]); // 3'b111
assign  and_out =   sw[0] & sw[1];  // 3'b110
assign  nor_out = ~(sw[0] | sw[1]); // 3'b101
assign   or_out =   sw[0] | sw[1];  // 3'b100
assign  xor_out =   sw[0] ^ sw[1];  // 3'b011
assign xnor_out =   sw[0] ^~ sw[1]; // 3'b010
assign buff_out =    sw[0];         // 3'b001
assign  not_out =   ~sw[0];         // 3'b000

assign MuxIn = {nand_out, and_out, nor_out, or_out, xor_out, xnor_out, buff_out, not_out};

// Assigning select input lines for the multiplexer using switch lines SW7, SW6, and SW5
assign SelectIn = sw[4:2];

// Output multiplexer
always @(MuxIn, SelectIn)
	led = MuxIn[SelectIn]; 

endmodule // nexys3
