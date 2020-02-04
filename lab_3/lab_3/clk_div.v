`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:03:25 02/04/2020 
// Design Name: 
// Module Name:    clk_div 
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
module clk_div(
    i_clk,        // Input clock
    o_clk_1hz,    // 1Hz output clk
    o_clk_2hz,    // 2Hz output clk
    o_clk_blink,  // >1Hz output clk
    o_clk_decoder // 50-700hz output clk
    );
    
    input wire i_clk;
    
    output wire o_clk_1hz;
    output wire o_clk_2hz;
    output wire o_clk_blink;
    output wire o_clk_decoder;

    // Prescaler counts. Each count is based
    // On the speed of the previous clock.
    // The decoder_cnt is based on a 100Mhz
    // input i_clk.
    parameter pscl_decoder_cnt = 1_000_000;
    parameter pscl_blink_cnt   = 100_000;
    parameter pscl_2hz_cnt     = 5;
    parameter pscl_1hz_cnt     = 1;
    
    reg [19:0] prescaler_decoder;
    reg [16:0] prescaler_blink;
    reg [2:0]  prescaler_2hz;
    reg        prescaler_1hz;
    
    always @ (posedge clk)
    begin
        
        prescaler_decoder <= prescaler_decoder + 1;
        prescaler_blink   <= prescaler_blink + 1;
        prescaler_2hz     <= prescaler_2hz + 1;
        prescaler_1hz     <= prescaler_1hz + 1;
        
        if(prescaler_decoder == pscl_decoder_cnt)
        begin
            prescaler_decoder <= 0;
        end
    
    end

endmodule
