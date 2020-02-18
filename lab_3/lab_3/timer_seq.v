`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date:    23:03:23 02/16/2020
// Design Name:
// Module Name:    timer_seq
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
module timer_seq(
                 input wire         clk,
                 input wire         clk_1hz,
                 input wire         clk_2hz,
                 input wire         reset,
                 input wire         pause,
                 input wire         sel,
                 input wire         adj,
                 output wire [13:0] time_
                 );

   wire                             sec_ones_en;
   wire                             sec_tens_en;
   wire                             min_ones_en;
   wire                             min_tens_en;
   wire                             sec_to_min_trans;

   reg                              sec_ones_clock;
   reg                              min_ones_clock;

   reg                              pause_state;
   reg                              timer_state;

   initial begin
      pause_state <= 1'b0;
      sec_ones_clock <= 1'b0;
      min_ones_clock <= 1'b0;
   end


   assign sec_ones_en = sec_ones_clock;
   assign min_ones_en = min_ones_clock;

   always @(posedge clk) begin
      if(pause && !adj)
        pause_state <= ~pause_state;
		else if(time_[13:0] == 14'b10110011011001)
		  pause_state <= 1;

      case({sel, adj, pause_state})
        //////////////////////////////////////////////////////////////////////
  // Normal Mode
        3'b000: begin
           sec_ones_clock <= clk_1hz;
           min_ones_clock <= sec_to_min_trans;
        end
        3'b100: begin
           sec_ones_clock <= clk_1hz;
           min_ones_clock <= sec_to_min_trans;
        end

        //////////////////////////////////////////////////////////////////////
        // Paused Mode (note: only need to pause seconds to pause whole clock)
        3'b001: sec_ones_clock <= 1'b0;
        3'b101: sec_ones_clock <= 1'b0;


        //////////////////////////////////////////////////////////////////////
        // Adjust Mode with minutes selected
        3'b010: begin
           sec_ones_clock <= 1'b0;
           min_ones_clock <= clk_2hz;
        end
        3'b011: begin
           sec_ones_clock <= 1'b0;
           min_ones_clock <= clk_2hz;
        end

        //////////////////////////////////////////////////////////////////////
        // Adjust mode with seconds selected
        3'b110: begin
           sec_ones_clock <= clk_2hz;
           min_ones_clock <= 1'b0;
        end
        3'b111: begin
           sec_ones_clock <= clk_2hz;
           min_ones_clock <= 1'b0;
        end

        //////////////////////////////////////////////////////////////////////
        // Default behavior (run normally)
        default: begin
           sec_ones_clock <= clk_1hz;
           min_ones_clock <= sec_to_min_trans;
        end
      endcase
   end


   counter_10state sec_ones_counter(
                                    .i_clk(sec_ones_en),
                                    .i_rst(reset),
                                    .o_transition(sec_tens_en),
                                    .o_state(time_[3:0])
                                    );
   counter_6state sec_tens_counter(
                                   .i_clk(sec_tens_en),
                                   .i_rst(reset),
                                   .o_transition(sec_to_min_trans),
                                   .o_state(time_[6:4])
                                   );
   counter_10state min_ones_counter(
                                    .i_clk(min_ones_en),
                                    .i_rst(reset),
                                    .o_transition(min_tens_en),
                                    .o_state(time_[10:7])
                                    );
   counter_6state min_tens_counter(
                                   .i_clk(min_tens_en),
                                   .i_rst(reset),
                                   .o_state(time_[13:11])
                                   );

endmodule
