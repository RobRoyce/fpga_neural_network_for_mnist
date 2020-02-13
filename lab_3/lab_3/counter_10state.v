`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:14:43 02/13/2020 
// Design Name: 
// Module Name:    counter_10state 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module counter_10state(
    i_clk,
    i_clk_en,
    i_rst,
    o_transition,
    o_state
    );
    
    parameter transition_state = 9;

    input wire i_clk;
    input wire i_clk_en;
    input wire i_rst;
    
    output reg o_transition;
    output reg [3:0] o_state;
    
    initial
    begin
        o_transition <= 0;
        o_state      <= 0;
    end
    
    always @ (posedge i_clk)
    begin
        if (i_rst == 1)
        begin
            o_state      <= 0;
            o_transition <= 0;
        end
    end
    
    always @ (posedge i_clk_en)
    begin
        if (i_rst == 0)
        begin
        
            if (o_state == transition_state)
            begin
                o_state <= 0;
                o_transition <= 1;
            end
            else
            begin
                o_state <= o_state + 1;
                o_transition <= 0;
            end
        end
    end


endmodule
