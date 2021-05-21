-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2019.2 (lin64) Build 2708876 Wed Nov  6 21:39:14 MST 2019
-- Date        : Fri Mar  6 21:11:04 2020
-- Host        : robuntu running 64-bit Ubuntu 18.04.4 LTS
-- Command     : write_vhdl -force -mode synth_stub
--               /media/psf/iCloud/UCLA/Courses/csm152a/csm152a/lab_4_basys/lab_4_basys.srcs/sources_1/ip/rom_8x784/rom_8x784_stub.vhdl
-- Design      : rom_8x784
-- Purpose     : Stub declaration of top-level module interface
-- Device      : xc7a35tcpg236-1
-- --------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity rom_8x784 is
  Port ( 
    a : in STD_LOGIC_VECTOR ( 3 downto 0 );
    spo : out STD_LOGIC_VECTOR ( 783 downto 0 )
  );

end rom_8x784;

architecture stub of rom_8x784 is
attribute syn_black_box : boolean;
attribute black_box_pad_pin : string;
attribute syn_black_box of stub : architecture is true;
attribute black_box_pad_pin of stub : architecture is "a[3:0],spo[783:0]";
attribute x_core_info : string;
attribute x_core_info of stub : architecture is "dist_mem_gen_v8_0_13,Vivado 2019.2";
begin
end;
