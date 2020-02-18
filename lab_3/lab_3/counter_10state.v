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
                       input wire i_clk,
                       input wire i_rst,
                       output wire o_transition,
                       output wire [3:0] o_state
                       );

   parameter transition_state = 9;
	
	reg transition;
	reg [3:0] state;

   initial begin
        transition <= 1'b0;
        state      <= 4'b0;
   end

   always @ (posedge i_clk) begin	
		
		if (state == transition_state) begin
			state <= 4'b0;
			transition <= 1'b1;
		end
		else begin
			state <= state + 4'b1;
			transition <= 1'b0;
		end
			
   end // always @ (posedge i_clk)
	
	assign o_transition = transition & (~i_rst);
	assign o_state[3:0] = state[3:0] & {4{~i_rst}};

endmodule
