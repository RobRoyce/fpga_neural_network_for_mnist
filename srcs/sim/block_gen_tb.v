`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 03/02/2020 09:39:36 PM
// Design Name: 
// Module Name: block_gen_tb
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


module block_gen_tb(

    );
    
    reg clk;
    
    reg [9:0] addr;
    
    wire [15:0] data;
    
    blk_mem_gen_0 w0(
            .clka(clk),
            .addra(addr),
            .douta(data)
    );
    
    initial
    begin
            
        clk <= 0;
        addr <= 0;
    end
    
    always #10 clk <= ~clk;
    
    always #50 addr <= addr + 1;
    
endmodule
