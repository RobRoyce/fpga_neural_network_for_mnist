// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2019.2 (lin64) Build 2708876 Wed Nov  6 21:39:14 MST 2019
// Date        : Sat Mar  7 18:13:16 2020
// Host        : robuntu running 64-bit Ubuntu 18.04.4 LTS
// Command     : write_verilog -force -mode synth_stub -rename_top blk_mem_input_weights_15 -prefix
//               blk_mem_input_weights_15_ blk_mem_input_weights_15_stub.v
// Design      : blk_mem_input_weights_15
// Purpose     : Stub declaration of top-level module interface
// Device      : xc7a35tcpg236-1
// --------------------------------------------------------------------------------

// This empty module with port declaration file causes synthesis tools to infer a black box for IP.
// The synthesis directives are for Synopsys Synplify support to prevent IO buffer insertion.
// Please paste the declaration into a Verilog source file or add the file as an additional source.
(* x_core_info = "blk_mem_gen_v8_4_4,Vivado 2019.2" *)
module blk_mem_input_weights_15(clka, addra, douta)
/* synthesis syn_black_box black_box_pad_pin="clka,addra[9:0],douta[15:0]" */;
  input clka;
  input [9:0]addra;
  output [15:0]douta;
endmodule
