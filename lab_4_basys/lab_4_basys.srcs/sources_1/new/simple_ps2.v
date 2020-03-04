`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 03/03/2020 09:40:15 AM
// Design Name: 
// Module Name: simple_ps2
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


module simple_ps2(
    output reg PS2Clk,
    input PS2Data,
    output [15:0] led
    );
    
    reg [15:0] data;
    
    always @(negedge PS2Clk)
    begin
    
        data <= {data, PS2Data};    
        
    end
    
endmodule
