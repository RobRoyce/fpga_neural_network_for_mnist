`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 03/07/2020 02:25:08 PM
// Design Name: 
// Module Name: comparator_10
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


module comparator_10(in, out, out_idx);

    `include "definitions.v"
    
    input  signed [10*weight_width-1:0] in;
    output signed [weight_width-1:0] out;
    output [3:0] out_idx;
    
    wire signed [weight_width-1:0] largest_s1[0:4];
    wire signed [weight_width-1:0] largest_s2[0:1];
    wire signed [weight_width-1:0] largest_s3[0:1];
    
    wire signed [3:0] largest_s1_idx[0:4];
    wire signed [3:0] largest_s2_idx[0:1];
    wire signed [3:0] largest_s3_idx[0:1];
    
    
    comparator cmp_s1_0(
        .a(in[0+:weight_width]),
        .a_idx(4'b0000),
        .b(in[weight_width+:weight_width]),
        .b_idx(4'b0001),
        .out(largest_s1[0]),
        .out_idx(largest_s1_idx[0])
    );
    
    comparator cmp_s1_1(
        .a(in[2*weight_width+:weight_width]),
        .a_idx(4'b0010),
        .b(in[3*weight_width+:weight_width]),
        .b_idx(4'b0011),
        .out(largest_s1[1]),
        .out_idx(largest_s1_idx[1])
    );
    
    comparator cmp_s1_2(
        .a(in[4*weight_width+:weight_width]),
        .a_idx(4'b0100),
        .b(in[5*weight_width+:weight_width]),
        .b_idx(4'b0101),
        .out(largest_s1[2]),
        .out_idx(largest_s1_idx[2])
    );
    
    comparator cmp_s1_3(
        .a(in[6*weight_width+:weight_width]),
        .a_idx(4'b0110),
        .b(in[7*weight_width+:weight_width]),
        .b_idx(4'b0111),
        .out(largest_s1[3]),
        .out_idx(largest_s1_idx[3])
    );
    
    comparator cmp_s1_4(
        .a(in[8*weight_width+:weight_width]),
        .a_idx(4'b1000),
        .b(in[9*weight_width+:weight_width]),
        .b_idx(4'b1001),
        .out(largest_s1[4]),
        .out_idx(largest_s1_idx[4])
    );
    
    comparator cmp_s2_0(
        .a(largest_s1[0]),
        .a_idx(largest_s1_idx[0]),
        .b(largest_s1[1]),
        .b_idx(largest_s1_idx[1]),
        .out(largest_s2[0]),
        .out_idx(largest_s2_idx[0])
    );
    
    comparator cmp_s2_1(
        .a(largest_s1[2]),
        .a_idx(largest_s1_idx[2]),
        .b(largest_s1[3]),
        .b_idx(largest_s1_idx[3]),
        .out(largest_s2[1]),
        .out_idx(largest_s2_idx[1])
    );
    
    comparator cmp_s3_0(
        .a(largest_s2[0]),
        .a_idx(largest_s2_idx[0]),
        .b(largest_s2[1]),
        .b_idx(largest_s2_idx[1]),
        .out(largest_s3[0]),
        .out_idx(largest_s3_idx[0])
    );
    
    comparator cmp_s3_1(
        .a(largest_s2[1]),
        .a_idx(largest_s2_idx[1]),
        .b(largest_s1[4]),
        .b_idx(largest_s1_idx[4]),
        .out(largest_s3[1]),
        .out_idx(largest_s3_idx[1])
    );
    
    comparator cmp_s4(
        .a(largest_s3[0]),
        .a_idx(largest_s3_idx[0]),
        .b(largest_s3[1]),
        .b_idx(largest_s3_idx[1]),
        .out(out),
        .out_idx(out_idx)
    );
    
endmodule
