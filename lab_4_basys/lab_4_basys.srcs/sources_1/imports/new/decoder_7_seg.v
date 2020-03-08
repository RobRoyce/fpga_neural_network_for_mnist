`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 12/20/2019 03:48:15 PM
// Design Name: 
// Module Name: decoder_7_seg
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


module decoder_7_seg(input clk, [3:0] digit, output reg [6:0] seg);

    initial
        seg <= 7'b1111111;

    always @(posedge clk)
    begin       
        // MSB -> LSB <----> GFEDCBA
        // A -> F <----> from top segment moving clockwise 
        // G is the middle segment
        // dp is the decimal point
        case(digit)
            4'd0: seg <= 7'b1000000;
            4'd1: seg <= 7'b1111001;
            4'd2: seg <= 7'b0100100;
            4'd3: seg <= 7'b0110000;
            4'd4: seg <= 7'b0011001;
            4'd5: seg <= 7'b0010010;
            4'd6: seg <= 7'b0000010;
            4'd7: seg <= 7'b1111000;
            4'd8: seg <= 7'b0000000;
            4'd9: seg <= 7'b0011000;
            default: seg <= 7'b1111111;
        endcase
    end
endmodule
