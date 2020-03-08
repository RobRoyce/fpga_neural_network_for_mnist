-makelib ies_lib/xpm -sv \
  "/home/parallels/Xilinx/Vivado/2019.2/data/ip/xpm/xpm_memory/hdl/xpm_memory.sv" \
-endlib
-makelib ies_lib/xpm \
  "/home/parallels/Xilinx/Vivado/2019.2/data/ip/xpm/xpm_VCOMP.vhd" \
-endlib
-makelib ies_lib/dist_mem_gen_v8_0_13 \
  "../../../ipstatic/simulation/dist_mem_gen_v8_0.v" \
-endlib
-makelib ies_lib/xil_defaultlib \
  "../../../../lab_4_basys.srcs/sources_1/ip/rom_16x784/sim/rom_16x784.v" \
-endlib
-makelib ies_lib/xil_defaultlib \
  glbl.v
-endlib

