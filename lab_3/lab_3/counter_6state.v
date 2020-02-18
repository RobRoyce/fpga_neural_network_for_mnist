`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date:    10:22:36 02/13/2020
// Design Name:
// Module Name:    counter_6state
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
module counter_6state(
                      input wire       i_clk,
                      input wire       i_rst,
                      output wire      o_transition,
                      output wire[2:0] o_state
                      );

   parameter transition_state = 5;
	
	reg transition;
	reg [2:0] state;

   initial
     begin
        transition <= 0;
        state      <= 0;
     end

   always @ (posedge i_clk) begin
	
		if (i_rst == 1'b0) begin
			if (state == transition_state) begin
				state <= 3'b0;
				transition <= 1'b1;
			end
			else begin
				state <= state + 3'b1;
				transition <= 1'b0;
			end
		end // if (i_rst == 1'b0)
		
   end // always @ (posedge i_clk)

	assign o_transition = transition & ~i_rst;
	assign o_state[2:0] = state[2:0] & {3{~i_rst}};

endmodule
