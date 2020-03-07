`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date: 03/02/2020 08:04:52 PM
// Design Name:
// Module Name: debouncer
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


module debouncer(
                 input wire i_clk,
                 input wire i_signal,
                 output reg o_state,
                 output wire o_trans_dn,
                 output wire o_trans_up
                 );
   reg                      sync_0;
   reg                      sync_1;
   reg [16:0]               count;
   wire                     idle = (o_state == sync_1);
   wire                     finished = &count;

   initial
     begin
        sync_0 = 1'b0;
        sync_1 = 1'b0;
        o_state = 1'b0;
        count = 17'b0;
     end

   assign o_trans_dn = ~idle & finished & ~o_state;
   assign o_trans_up = ~idle & finished & o_state;

   // sync_0 and sync_1 work in master-slave configuration
   always @(posedge i_clk)
     sync_0 = i_signal;

   always @(posedge i_clk)
     sync_1 = sync_0;

   // check if idle, else increment counter and assign state
   always @(posedge i_clk)
     begin
        if(idle)
          count <= 17'b0;
        else
          begin
             count <= count + 17'b1;
             if(finished)
               o_state <= ~o_state;
          end
     end // always @ (posedge i_clk)
endmodule
