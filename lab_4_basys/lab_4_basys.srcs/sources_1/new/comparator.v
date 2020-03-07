`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 03/07/2020 02:22:13 PM
// Design Name: 
// Module Name: comparator
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


// Outputs the larger signed input.
module comparator(a, a_idx, b, b_idx, out, out_idx);
    
    `include "definitions.v"
    
    input signed [weight_width-1:0] a;
    input [3:0] a_idx;
    
    input signed [weight_width-1:0] b;
    input [3:0] b_idx;
    
    output signed [weight_width-1:0] out;
    output [3:0] out_idx;
    
    assign out     = (a > b) ? a : b;
    assign out_idx = (a > b) ? a_idx : b_idx;
    
endmodule
