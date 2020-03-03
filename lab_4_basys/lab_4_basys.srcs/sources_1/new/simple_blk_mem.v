`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 03/02/2020 10:03:14 PM
// Design Name: 
// Module Name: simple_blk_mem
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


module simple_blk_mem(input clk,
                      input btnC,
                      output [15:0] led
                    );

    reg [9:0] addr;

    blk_mem_gen_0 w0(
        .clka(clk),
        .addra(addr),
        .douta(led)
    );
    
    always @(posedge clk)
    begin
    
        if(btnC)
            addr <= addr + 1;
    
    end



endmodule
