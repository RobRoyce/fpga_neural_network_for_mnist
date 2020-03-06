`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 03/05/2020 02:10:29 PM
// Design Name: 
// Module Name: mult_tb
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


module mult_tb(

    );
    
    `include "definitions.v"
    
    reg [weight_width-1:0] a = 16'h0c61;
    reg [weight_width-1:0] b = 16'hffa2;
    
    wire [weight_width-1:0] prod;
    
    fp_multiplier mult(
            .a(a),
            .b(b),
            .prod(prod)
    );
    
    
endmodule
