module seq_mult (/*AUTOARG*/
   // Outputs
   o_data, o_valid,
   // Inputs
   i_data_a, i_data_b, i_valid, clk, rst
   );

`include "seq_definitions.v"
   //////////////////////////////////////////////////////////////////////
   // The seq_mult module is effectively a clone of the seq_add module
   //
   output [alu_width-1:0] o_data;
   output                 o_valid;

   input  [alu_width-1:0] i_data_a;
   input  [alu_width-1:0] i_data_b;
   input                  i_valid;

   input                  clk;
   input                  rst;

   assign o_valid = i_valid;
   assign o_data  = i_data_a * i_data_b;

endmodule // seq_mult
