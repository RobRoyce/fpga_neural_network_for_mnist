-makelib xcelium_lib/xpm -sv \
  "/home/parallels/Xilinx/Vivado/2019.2/data/ip/xpm/xpm_memory/hdl/xpm_memory.sv" \
-endlib
-makelib xcelium_lib/xpm \
  "/home/parallels/Xilinx/Vivado/2019.2/data/ip/xpm/xpm_VCOMP.vhd" \
-endlib
-makelib xcelium_lib/blk_mem_gen_v8_4_4 \
  "../../../ipstatic/simulation/blk_mem_gen_v8_4.v" \
-endlib
-makelib xcelium_lib/xil_defaultlib \
  "../../../../lab_4_basys.srcs/sources_1/ip/blk_mem_input_weights_7/sim/blk_mem_input_weights_7.v" \
-endlib
-makelib xcelium_lib/xil_defaultlib \
  glbl.v
-endlib

