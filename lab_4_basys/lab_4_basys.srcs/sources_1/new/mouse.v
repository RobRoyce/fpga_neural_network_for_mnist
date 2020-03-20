`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 03/16/2020 07:48:00 PM
// Design Name: 
// Module Name: mouse
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


module mouse_top(
                 input wire        i_clk,
                 input wire        i_reset,
                 input wire        i_PS2Clk,
                 input wire        i_PS2Data,
                 output wire       o_valid,
                 output wire       o_mouse_up,
                 output wire       o_mouse_dn,
                 output wire       o_mouse_lt,
                 output wire       o_mouse_rt,
                 output wire       o_mouse_sel,
                 output wire       o_mouse_rst,
                 output wire [4:0] o_mouse_x,
                 output wire [4:0] o_mouse_y
                 );
   reg [43:0]                 fifo;
   reg [5:0]                  counter;
   reg                        valid;
   reg                        l_click;
   reg                        r_click;
   reg                        x_sign;
   reg                        y_sign;
   reg [4:0]                  x;
   reg [4:0]                  y;

   wire [10:0]                word1;
   wire [10:0]                word2;
   wire [10:0]                word3;
   wire [10:0]                word4;

   assign o_mouse_x = x;
   assign o_mouse_y = y;
   assign word1 = fifo[33 +: 11];
   assign word2 = fifo[22 +: 11];
   assign word3 = fifo[11 +: 11];
   assign word4 = fifo[0 +: 11];

   initial
     begin
        fifo <= 44'b0;
        counter <= 6'b0;
        valid <= 1'b0;
        l_click <= 1'b0;
        r_click <= 1'b0;
        x_sign <= 1'b0;
        y_sign <= 1'b0;
        x <= 5'b0;
        y <= 5'b0;
     end

   always @(negedge i_PS2Clk)
     begin
        fifo <= {fifo, i_PS2Data};
        counter <= counter + 6'b1;

        case(counter)
          6'd43:
            begin
               valid <= 1'b1;
               counter <= 6'b0;
            end
          default:
            valid <= 1'b0;
        endcase
     end // always @ (negedge i_clk)

   reg [23:0]                 x_slow;
   reg [23:0]                 y_slow;

   always @(posedge i_clk)
     begin
        if(valid)
          begin
             x_slow <= (word2[9 -: 8] > 8'd64) + x_slow;
             y_slow <= (word3[9 -: 8] > 8'd64) + y_slow;
             l_click <= word4[8];
             l_click <= word4[9];

             x <= x_slow >> 19;
             y <= y_slow >> 19;
          end
     end // always @ (posedge clk)

   debouncer l_click_deb(
                         .i_clk(i_clk),
                         .i_signal(l_click),
                         .o_state(),
                         .o_trans_dn(),
                         .o_trans_up()
                         );
   debouncer r_click_deb(
                         .i_clk(i_clk),
                         .i_signal(r_click),
                         .o_state(),
                         .o_trans_dn(),
                         .o_trans_up()
                         );
endmodule
