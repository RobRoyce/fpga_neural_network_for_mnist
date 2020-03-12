// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2019.2 (lin64) Build 2708876 Wed Nov  6 21:39:14 MST 2019
// Date        : Fri Mar  6 21:11:04 2020
// Host        : robuntu running 64-bit Ubuntu 18.04.4 LTS
// Command     : write_verilog -force -mode synth_stub
//               /media/psf/iCloud/UCLA/Courses/csm152a/csm152a/lab_4_basys/lab_4_basys.srcs/sources_1/ip/rom_8x784/rom_8x784_stub.v
// Design      : rom_8x784
// Purpose     : Stub declaration of top-level module interface
// Device      : xc7a35tcpg236-1
// --------------------------------------------------------------------------------

// This empty module with port declaration file causes synthesis tools to infer a black box for IP.
// The synthesis directives are for Synopsys Synplify support to prevent IO buffer insertion.
// Please paste the declaration into a Verilog source file or add the file as an additional source.
(* x_core_info = "dist_mem_gen_v8_0_13,Vivado 2019.2" *)
module rom_8x784(a, spo)
/* synthesis syn_black_box black_box_pad_pin="a[3:0],spo[783:0]" */;
  input [3:0]a;
  output [783:0]spo;
endmodule
