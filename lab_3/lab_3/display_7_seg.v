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


module display_7_seg(
                     input wire        clk,
                     input wire        clk_blink,
                     input wire        adj,
                     input wire        sel,
                     input wire [3:0]  units,
                     input wire [3:0]  tens,
                     input wire [3:0]  hundreds,
                     input wire [3:0]  thousands,
                     output wire [6:0] seg,
                     output reg [3:0]  digit
                     );

   // 4-bit register that will be assigned to the 4-bit number to be decoded
   // for the digit currently being processed
   reg [3:0]                           digit_data;

   // 2-bit counter used to keep track of which digit is currently being displayed
   reg [1:0]                           digit_posn;

   // 24-bit counter used to divide the clk in order to set refresh rate
   reg [18:0]                          prescaler;
   parameter display_speed = 19'd500_000;
   parameter blink_speed = 25'd1_000_000;


   // Decoder used to turn the 4-bit digit_data into a 7-bit segment pattern
   decoder_7_seg decoder(.clk(clk), .seg(seg), .digit(digit_data));


   reg                                 sec_active;
   reg                                 min_active;
   
   wire                                sec_should_display;
   wire                                min_should_display;


   assign sec_should_display = sec_active || (!sec_active && clk_blink);
   assign min_should_display = min_active || (!min_active && clk_blink);

   initial
     begin
        digit <= 4'b0000;
        digit_data <= 0;
        digit_posn <= 0;
        prescaler <= 0;
        sec_active <= 0;
        min_active <= 0;
     end

   always @(posedge clk) begin
      casex({sel, adj})
        2'bx0: begin
           sec_active <= 1'b1;
           min_active <= 1'b1;
        end
        2'b01: begin
           sec_active <= 1'b1;
           min_active <= 1'b0;
        end
        2'b11: begin
           sec_active <= 1'b0;
           min_active <= 1'b1;
        end
      endcase
   end

   always @(posedge clk)
     begin
        prescaler <= prescaler + 19'd1; // Add 1 (in 24-bit pattern) to prescaler
        if (prescaler == display_speed)     // evaluates to true every 500Hz (clock cycles)
          begin
             prescaler <= 0;
             digit_posn <= digit_posn + 2'd1; // Increment digit position
             if (digit_posn == 0)
               begin
                  digit_data <= units;
                  if(sec_should_display) digit <= 4'b1110;
                  else digit <= 4'b1111;
               end
             else if (digit_posn == 4'd1)
               begin
                  digit_data <= tens;
                  if(sec_should_display) digit <= 4'b1101;
                  else digit <= 4'b1111;
               end
             else if (digit_posn == 4'd2)
               begin
                  digit_data <= hundreds;
                  if(min_should_display) digit <= 4'b1011;
                  else digit <= 4'b1111;
               end
             else if (digit_posn == 4'd3)
               begin
                  digit_data <= thousands;
                  if(min_should_display) digit <= 4'b0111;
                  else digit <= 4'b1111;
               end
          end
     end
endmodule
