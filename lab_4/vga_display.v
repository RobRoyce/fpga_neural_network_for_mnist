`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date:    11:13:07 02/20/2020
// Design Name:
// Module Name:    vga_display
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
module vga_display(
                   input wire        clk,
                   input wire        reset,
                   output wire       hsync,
                   output wire       vsync,
                   output wire       video_on,
                   output wire       p_tick,
                   output wire [9:0] x,
                   output wire [9:0] y
                   );

   //----------------------------------------------------------------------
   // Horizontal measurements
   parameter H_SIZE = 640; // visible screen
   parameter H_LEFT_BRDR = 48; // left border
   parameter H_RIGHT_BRDR = 16; // right border
   parameter H_RETRACE = 96; // delay artifact from CRT monitors (required for compatibility reasons)
   parameter H_MAX = H_SIZE + H_LEFT_BRDR + H_RIGHT_BRDR + H_RETRACE - 1; // total horizontal size (800)
   parameter H_RETRACE_START = H_SIZE + H_RIGHT_BRDR; // where the retrace begins
   parameter H_RETRACE_END = H_SIZE + H_RIGHT_BRDR + H_RETRACE - 1; // where the retrace ends

   //----------------------------------------------------------------------
   // Vertical measurements
   parameter V_SIZE = 480;
   parameter V_TOP_BRDR = 10;
   parameter V_BTM_BRDR = 33;
   parameter V_RETRACE = 2;
   parameter V_MAX = V_SIZE + V_TOP_BRDR + V_BTM_BRDR + V_RETRACE - 1;
   parameter V_RETRACE_START = V_SIZE + V_BTM_BRDR;
   parameter V_RETRACE_END = V_SIZE + V_BTM_BRDR + V_RETRACE - 1;

   //----------------------------------------------------------------------
   // mod 4 counter to reduce the 100MHz clock to 25MHz
   reg [1:0]                        pixel_reg = 2'b00;
   wire [1:0]                       pixel_next;
   wire                             pixel_tick;

   always @(posedge clk, posedge reset)
      if (reset)
        pixel_reg <= 2'b00;
      else
        pixel_reg <= pixel_next;

   assign pixel_next = pixel_reg + 1; // increment pixel reg
   assign pixel_tick = (pixel_reg == 0); // pixel_tick is our 25MHz clock

   //----------------------------------------------------------------------
   // pixel location registers
   reg [9:0]                        h_count;
   reg [9:0]                        h_next;
   reg [9:0]                        v_count;
   reg [9:0]                        v_next;

   //----------------------------------------------------------------------
   // HSync and VSync singals
   reg                              hsync_r;
   reg                              vsync_r;
   wire                             hsync_next;
   wire                             vsync_next;


   //----------------------------------------------------------------------
   // increment pixel location and syncs
   always @(posedge clk, posedge reset)
     if(reset)
       begin
          h_count <= 10'b0;
          v_count <= 10'b0;
          hsync_r <= 1'b0;
          vsync_r <= 1'b0;
       end
     else
       begin
          h_count <= h_next;
          v_count <= v_next;
          hsync_r <= hsync_next;
          vsync_r <= vsync_next;
       end // else: !if(reset)

   //----------------------------------------------------------------------
   // next state logic
   always @(*)
     begin
        h_next = pixel_tick ?
                 (h_count == H_MAX ? 0 : h_count + 1) : h_count;
        v_next = pixel_tick && h_count == H_MAX ?
                 (v_count == V_MAX ? 0 : v_count + 1) : v_count;
     end

   assign hsync_next = (h_count >= H_RETRACE_START) && (h_count <= H_RETRACE_END);
   assign vsync_next = (v_count >= V_RETRACE_START) && (v_count <= V_RETRACE_END);

   //----------------------------------------------------------------------
   // output
   assign hsync = hsync_r;
   assign vsync = vsync_r;

   // x location is the "count"
   assign x = h_count;

   // y location is the "count"
   assign y = v_count;
   assign p_tick = pixel_tick;

   // video is on when pixel location is in visible region
   assign video_on = (h_count < H_SIZE) && (v_count < V_SIZE);


endmodule
