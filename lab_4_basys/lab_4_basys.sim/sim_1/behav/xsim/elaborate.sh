#!/bin/bash -f
# ****************************************************************************
# Vivado (TM) v2019.2 (64-bit)
#
# Filename    : elaborate.sh
# Simulator   : Xilinx Vivado Simulator
# Description : Script for elaborating the compiled design
#
# Generated by Vivado on Thu Mar 05 00:28:18 PST 2020
# SW Build 2708876 on Wed Nov  6 21:39:14 MST 2019
#
# Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
#
# usage: elaborate.sh
#
# ****************************************************************************
set -Eeuo pipefail
echo "xelab -wto f70fb3d04a774a4c83032112ff5f034b --incr --debug typical --relax --mt 8 -L blk_mem_gen_v8_4_4 -L xil_defaultlib -L unisims_ver -L unimacro_ver -L secureip -L xpm --snapshot mnist_network_tb_behav xil_defaultlib.mnist_network_tb xil_defaultlib.glbl -log elaborate.log"
xelab -wto f70fb3d04a774a4c83032112ff5f034b --incr --debug typical --relax --mt 8 -L blk_mem_gen_v8_4_4 -L xil_defaultlib -L unisims_ver -L unimacro_ver -L secureip -L xpm --snapshot mnist_network_tb_behav xil_defaultlib.mnist_network_tb xil_defaultlib.glbl -log elaborate.log

