`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date: 12/22/2019 04:01:03 PM
// Design Name:
// Module Name: display_7_seg
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


module display_7_seg
    (input clk, input [3:0] units, tens, hundreds, thousands,
    output [6:0] seg, output reg [3:0] digit);

    // 4-bit register that will be assigned to the 4-bit number to be decoded
    // for the digit currently being processed
    reg [3:0] digit_data;

    // 2-bit counter used to keep track of which digit is currently being displayed
    reg [1:0] digit_posn;

    // 24-bit counter used to divide the clk in order to set refresh rate
    reg [23:0] prescaler;

    // Decoder used to turn the 4-bit digit_data into a 7-bit segment pattern
    decoder_7_seg decoder(.clk(clk), .seg(seg), .digit(digit_data));


    initial
        begin
            digit <= 4'b0000;
            digit_data <= 0;
            digit_posn <= 0;
            prescaler <= 0;
        end

    always @(posedge clk)
    begin
        prescaler <= prescaler + 24'd1; // Add 1 (in 24-bit pattern) to prescaler
        if (prescaler == 24'd500000)     // evaluates to true every 500Hz (clock cycles)
        begin
            prescaler <= 0;
            digit_posn <= digit_posn + 2'd1; // Increment digit position
            if (digit_posn == 0)
            begin
                digit_data <= units;
                digit <= 4'b1110;
            end else if (digit_posn == 2'd1)
            begin
               digit_data <= tens;
               digit <= 4'b1101;
            end else if (digit_posn == 2'd2)
            begin
                digit_data <= hundreds;
                digit <= 4'b1011;
            end else if (digit_posn == 2'd3)
            begin
                digit_data <= thousands;
                digit <= 4'b0111;
            end
        end
    end
endmodule
