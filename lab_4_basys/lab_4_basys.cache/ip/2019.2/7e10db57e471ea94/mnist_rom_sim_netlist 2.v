// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2019.2 (lin64) Build 2708876 Wed Nov  6 21:39:14 MST 2019
// Date        : Fri Mar  6 14:37:57 2020
// Host        : robuntu running 64-bit Ubuntu 18.04.4 LTS
// Command     : write_verilog -force -mode funcsim -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix
//               decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ mnist_rom_sim_netlist.v
// Design      : mnist_rom
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7a35tcpg236-1
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "mnist_rom,dist_mem_gen_v8_0_13,{}" *) (* downgradeipidentifiedwarnings = "yes" *) (* x_core_info = "dist_mem_gen_v8_0_13,Vivado 2019.2" *) 
(* NotValidForBitStream *)
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix
   (a,
    spo);
  input [7:0]a;
  output [27:0]spo;

  wire [7:0]a;
  wire [27:0]spo;
  wire [27:0]NLW_U0_dpo_UNCONNECTED;
  wire [27:0]NLW_U0_qdpo_UNCONNECTED;
  wire [27:0]NLW_U0_qspo_UNCONNECTED;

  (* C_FAMILY = "artix7" *) 
  (* C_HAS_D = "0" *) 
  (* C_HAS_DPO = "0" *) 
  (* C_HAS_DPRA = "0" *) 
  (* C_HAS_I_CE = "0" *) 
  (* C_HAS_QDPO = "0" *) 
  (* C_HAS_QDPO_CE = "0" *) 
  (* C_HAS_QDPO_CLK = "0" *) 
  (* C_HAS_QDPO_RST = "0" *) 
  (* C_HAS_QDPO_SRST = "0" *) 
  (* C_HAS_WE = "0" *) 
  (* C_MEM_TYPE = "0" *) 
  (* C_PIPELINE_STAGES = "0" *) 
  (* C_QCE_JOINED = "0" *) 
  (* C_QUALIFY_WE = "0" *) 
  (* C_REG_DPRA_INPUT = "0" *) 
  (* c_addr_width = "8" *) 
  (* c_default_data = "0" *) 
  (* c_depth = "224" *) 
  (* c_elaboration_dir = "./" *) 
  (* c_has_clk = "0" *) 
  (* c_has_qspo = "0" *) 
  (* c_has_qspo_ce = "0" *) 
  (* c_has_qspo_rst = "0" *) 
  (* c_has_qspo_srst = "0" *) 
  (* c_has_spo = "1" *) 
  (* c_mem_init_file = "mnist_rom.mif" *) 
  (* c_parser_type = "1" *) 
  (* c_read_mif = "1" *) 
  (* c_reg_a_d_inputs = "0" *) 
  (* c_sync_enable = "1" *) 
  (* c_width = "28" *) 
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_dist_mem_gen_v8_0_13 U0
       (.a(a),
        .clk(1'b0),
        .d({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .dpo(NLW_U0_dpo_UNCONNECTED[27:0]),
        .dpra({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .i_ce(1'b1),
        .qdpo(NLW_U0_qdpo_UNCONNECTED[27:0]),
        .qdpo_ce(1'b1),
        .qdpo_clk(1'b0),
        .qdpo_rst(1'b0),
        .qdpo_srst(1'b0),
        .qspo(NLW_U0_qspo_UNCONNECTED[27:0]),
        .qspo_ce(1'b1),
        .qspo_rst(1'b0),
        .qspo_srst(1'b0),
        .spo(spo),
        .we(1'b0));
endmodule

(* C_ADDR_WIDTH = "8" *) (* C_DEFAULT_DATA = "0" *) (* C_DEPTH = "224" *) 
(* C_ELABORATION_DIR = "./" *) (* C_FAMILY = "artix7" *) (* C_HAS_CLK = "0" *) 
(* C_HAS_D = "0" *) (* C_HAS_DPO = "0" *) (* C_HAS_DPRA = "0" *) 
(* C_HAS_I_CE = "0" *) (* C_HAS_QDPO = "0" *) (* C_HAS_QDPO_CE = "0" *) 
(* C_HAS_QDPO_CLK = "0" *) (* C_HAS_QDPO_RST = "0" *) (* C_HAS_QDPO_SRST = "0" *) 
(* C_HAS_QSPO = "0" *) (* C_HAS_QSPO_CE = "0" *) (* C_HAS_QSPO_RST = "0" *) 
(* C_HAS_QSPO_SRST = "0" *) (* C_HAS_SPO = "1" *) (* C_HAS_WE = "0" *) 
(* C_MEM_INIT_FILE = "mnist_rom.mif" *) (* C_MEM_TYPE = "0" *) (* C_PARSER_TYPE = "1" *) 
(* C_PIPELINE_STAGES = "0" *) (* C_QCE_JOINED = "0" *) (* C_QUALIFY_WE = "0" *) 
(* C_READ_MIF = "1" *) (* C_REG_A_D_INPUTS = "0" *) (* C_REG_DPRA_INPUT = "0" *) 
(* C_SYNC_ENABLE = "1" *) (* C_WIDTH = "28" *) 
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_dist_mem_gen_v8_0_13
   (a,
    d,
    dpra,
    clk,
    we,
    i_ce,
    qspo_ce,
    qdpo_ce,
    qdpo_clk,
    qspo_rst,
    qdpo_rst,
    qspo_srst,
    qdpo_srst,
    spo,
    dpo,
    qspo,
    qdpo);
  input [7:0]a;
  input [27:0]d;
  input [7:0]dpra;
  input clk;
  input we;
  input i_ce;
  input qspo_ce;
  input qdpo_ce;
  input qdpo_clk;
  input qspo_rst;
  input qdpo_rst;
  input qspo_srst;
  input qdpo_srst;
  output [27:0]spo;
  output [27:0]dpo;
  output [27:0]qspo;
  output [27:0]qdpo;

  wire \<const0> ;
  wire [7:0]a;
  wire [22:4]\^spo ;

  assign dpo[27] = \<const0> ;
  assign dpo[26] = \<const0> ;
  assign dpo[25] = \<const0> ;
  assign dpo[24] = \<const0> ;
  assign dpo[23] = \<const0> ;
  assign dpo[22] = \<const0> ;
  assign dpo[21] = \<const0> ;
  assign dpo[20] = \<const0> ;
  assign dpo[19] = \<const0> ;
  assign dpo[18] = \<const0> ;
  assign dpo[17] = \<const0> ;
  assign dpo[16] = \<const0> ;
  assign dpo[15] = \<const0> ;
  assign dpo[14] = \<const0> ;
  assign dpo[13] = \<const0> ;
  assign dpo[12] = \<const0> ;
  assign dpo[11] = \<const0> ;
  assign dpo[10] = \<const0> ;
  assign dpo[9] = \<const0> ;
  assign dpo[8] = \<const0> ;
  assign dpo[7] = \<const0> ;
  assign dpo[6] = \<const0> ;
  assign dpo[5] = \<const0> ;
  assign dpo[4] = \<const0> ;
  assign dpo[3] = \<const0> ;
  assign dpo[2] = \<const0> ;
  assign dpo[1] = \<const0> ;
  assign dpo[0] = \<const0> ;
  assign qdpo[27] = \<const0> ;
  assign qdpo[26] = \<const0> ;
  assign qdpo[25] = \<const0> ;
  assign qdpo[24] = \<const0> ;
  assign qdpo[23] = \<const0> ;
  assign qdpo[22] = \<const0> ;
  assign qdpo[21] = \<const0> ;
  assign qdpo[20] = \<const0> ;
  assign qdpo[19] = \<const0> ;
  assign qdpo[18] = \<const0> ;
  assign qdpo[17] = \<const0> ;
  assign qdpo[16] = \<const0> ;
  assign qdpo[15] = \<const0> ;
  assign qdpo[14] = \<const0> ;
  assign qdpo[13] = \<const0> ;
  assign qdpo[12] = \<const0> ;
  assign qdpo[11] = \<const0> ;
  assign qdpo[10] = \<const0> ;
  assign qdpo[9] = \<const0> ;
  assign qdpo[8] = \<const0> ;
  assign qdpo[7] = \<const0> ;
  assign qdpo[6] = \<const0> ;
  assign qdpo[5] = \<const0> ;
  assign qdpo[4] = \<const0> ;
  assign qdpo[3] = \<const0> ;
  assign qdpo[2] = \<const0> ;
  assign qdpo[1] = \<const0> ;
  assign qdpo[0] = \<const0> ;
  assign qspo[27] = \<const0> ;
  assign qspo[26] = \<const0> ;
  assign qspo[25] = \<const0> ;
  assign qspo[24] = \<const0> ;
  assign qspo[23] = \<const0> ;
  assign qspo[22] = \<const0> ;
  assign qspo[21] = \<const0> ;
  assign qspo[20] = \<const0> ;
  assign qspo[19] = \<const0> ;
  assign qspo[18] = \<const0> ;
  assign qspo[17] = \<const0> ;
  assign qspo[16] = \<const0> ;
  assign qspo[15] = \<const0> ;
  assign qspo[14] = \<const0> ;
  assign qspo[13] = \<const0> ;
  assign qspo[12] = \<const0> ;
  assign qspo[11] = \<const0> ;
  assign qspo[10] = \<const0> ;
  assign qspo[9] = \<const0> ;
  assign qspo[8] = \<const0> ;
  assign qspo[7] = \<const0> ;
  assign qspo[6] = \<const0> ;
  assign qspo[5] = \<const0> ;
  assign qspo[4] = \<const0> ;
  assign qspo[3] = \<const0> ;
  assign qspo[2] = \<const0> ;
  assign qspo[1] = \<const0> ;
  assign qspo[0] = \<const0> ;
  assign spo[27] = \<const0> ;
  assign spo[26] = \<const0> ;
  assign spo[25] = \<const0> ;
  assign spo[24] = \<const0> ;
  assign spo[23] = \<const0> ;
  assign spo[22:4] = \^spo [22:4];
  assign spo[3] = \<const0> ;
  assign spo[2] = \<const0> ;
  assign spo[1] = \<const0> ;
  assign spo[0] = \<const0> ;
  GND GND
       (.G(\<const0> ));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_dist_mem_gen_v8_0_13_synth \synth_options.dist_mem_inst 
       (.a(a),
        .spo(\^spo ));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_dist_mem_gen_v8_0_13_synth
   (spo,
    a);
  output [18:0]spo;
  input [7:0]a;

  wire [7:0]a;
  wire [18:0]spo;

  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_rom \gen_rom.rom_inst 
       (.a(a),
        .spo(spo));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_rom
   (spo,
    a);
  output [18:0]spo;
  input [7:0]a;

  wire [7:0]a;
  wire [18:0]spo;
  wire \spo[10]_INST_0_i_1_n_0 ;
  wire \spo[10]_INST_0_i_2_n_0 ;
  wire \spo[10]_INST_0_i_3_n_0 ;
  wire \spo[10]_INST_0_i_4_n_0 ;
  wire \spo[10]_INST_0_i_5_n_0 ;
  wire \spo[10]_INST_0_i_6_n_0 ;
  wire \spo[11]_INST_0_i_1_n_0 ;
  wire \spo[11]_INST_0_i_2_n_0 ;
  wire \spo[11]_INST_0_i_3_n_0 ;
  wire \spo[11]_INST_0_i_4_n_0 ;
  wire \spo[11]_INST_0_i_5_n_0 ;
  wire \spo[11]_INST_0_i_6_n_0 ;
  wire \spo[12]_INST_0_i_1_n_0 ;
  wire \spo[12]_INST_0_i_2_n_0 ;
  wire \spo[12]_INST_0_i_3_n_0 ;
  wire \spo[12]_INST_0_i_4_n_0 ;
  wire \spo[12]_INST_0_i_5_n_0 ;
  wire \spo[12]_INST_0_i_6_n_0 ;
  wire \spo[13]_INST_0_i_1_n_0 ;
  wire \spo[13]_INST_0_i_2_n_0 ;
  wire \spo[13]_INST_0_i_3_n_0 ;
  wire \spo[13]_INST_0_i_4_n_0 ;
  wire \spo[13]_INST_0_i_5_n_0 ;
  wire \spo[13]_INST_0_i_6_n_0 ;
  wire \spo[14]_INST_0_i_1_n_0 ;
  wire \spo[14]_INST_0_i_2_n_0 ;
  wire \spo[14]_INST_0_i_3_n_0 ;
  wire \spo[15]_INST_0_i_1_n_0 ;
  wire \spo[15]_INST_0_i_2_n_0 ;
  wire \spo[15]_INST_0_i_3_n_0 ;
  wire \spo[15]_INST_0_i_4_n_0 ;
  wire \spo[16]_INST_0_i_1_n_0 ;
  wire \spo[16]_INST_0_i_2_n_0 ;
  wire \spo[16]_INST_0_i_3_n_0 ;
  wire \spo[16]_INST_0_i_4_n_0 ;
  wire \spo[16]_INST_0_i_5_n_0 ;
  wire \spo[16]_INST_0_i_6_n_0 ;
  wire \spo[17]_INST_0_i_1_n_0 ;
  wire \spo[17]_INST_0_i_2_n_0 ;
  wire \spo[17]_INST_0_i_3_n_0 ;
  wire \spo[17]_INST_0_i_4_n_0 ;
  wire \spo[17]_INST_0_i_5_n_0 ;
  wire \spo[17]_INST_0_i_6_n_0 ;
  wire \spo[18]_INST_0_i_1_n_0 ;
  wire \spo[18]_INST_0_i_2_n_0 ;
  wire \spo[18]_INST_0_i_3_n_0 ;
  wire \spo[18]_INST_0_i_4_n_0 ;
  wire \spo[18]_INST_0_i_5_n_0 ;
  wire \spo[18]_INST_0_i_6_n_0 ;
  wire \spo[19]_INST_0_i_1_n_0 ;
  wire \spo[19]_INST_0_i_2_n_0 ;
  wire \spo[19]_INST_0_i_3_n_0 ;
  wire \spo[19]_INST_0_i_4_n_0 ;
  wire \spo[19]_INST_0_i_5_n_0 ;
  wire \spo[19]_INST_0_i_6_n_0 ;
  wire \spo[20]_INST_0_i_1_n_0 ;
  wire \spo[20]_INST_0_i_2_n_0 ;
  wire \spo[20]_INST_0_i_3_n_0 ;
  wire \spo[21]_INST_0_i_1_n_0 ;
  wire \spo[21]_INST_0_i_2_n_0 ;
  wire \spo[21]_INST_0_i_3_n_0 ;
  wire \spo[22]_INST_0_i_1_n_0 ;
  wire \spo[22]_INST_0_i_2_n_0 ;
  wire \spo[4]_INST_0_i_1_n_0 ;
  wire \spo[4]_INST_0_i_2_n_0 ;
  wire \spo[5]_INST_0_i_1_n_0 ;
  wire \spo[5]_INST_0_i_2_n_0 ;
  wire \spo[6]_INST_0_i_1_n_0 ;
  wire \spo[6]_INST_0_i_2_n_0 ;
  wire \spo[6]_INST_0_i_3_n_0 ;
  wire \spo[6]_INST_0_i_4_n_0 ;
  wire \spo[6]_INST_0_i_5_n_0 ;
  wire \spo[6]_INST_0_i_6_n_0 ;
  wire \spo[7]_INST_0_i_1_n_0 ;
  wire \spo[7]_INST_0_i_2_n_0 ;
  wire \spo[7]_INST_0_i_3_n_0 ;
  wire \spo[8]_INST_0_i_1_n_0 ;
  wire \spo[8]_INST_0_i_2_n_0 ;
  wire \spo[8]_INST_0_i_3_n_0 ;
  wire \spo[8]_INST_0_i_4_n_0 ;
  wire \spo[9]_INST_0_i_1_n_0 ;
  wire \spo[9]_INST_0_i_2_n_0 ;
  wire \spo[9]_INST_0_i_3_n_0 ;
  wire \spo[9]_INST_0_i_4_n_0 ;
  wire \spo[9]_INST_0_i_5_n_0 ;
  wire \spo[9]_INST_0_i_6_n_0 ;

  MUXF8 \spo[10]_INST_0 
       (.I0(\spo[10]_INST_0_i_1_n_0 ),
        .I1(\spo[10]_INST_0_i_2_n_0 ),
        .O(spo[6]),
        .S(a[5]));
  MUXF7 \spo[10]_INST_0_i_1 
       (.I0(\spo[10]_INST_0_i_3_n_0 ),
        .I1(\spo[10]_INST_0_i_4_n_0 ),
        .O(\spo[10]_INST_0_i_1_n_0 ),
        .S(a[4]));
  MUXF7 \spo[10]_INST_0_i_2 
       (.I0(\spo[10]_INST_0_i_5_n_0 ),
        .I1(\spo[10]_INST_0_i_6_n_0 ),
        .O(\spo[10]_INST_0_i_2_n_0 ),
        .S(a[4]));
  LUT6 #(
    .INIT(64'h8A8230120293020E)) 
    \spo[10]_INST_0_i_3 
       (.I0(a[6]),
        .I1(a[7]),
        .I2(a[2]),
        .I3(a[0]),
        .I4(a[3]),
        .I5(a[1]),
        .O(\spo[10]_INST_0_i_3_n_0 ));
  LUT6 #(
    .INIT(64'h024D044C245824D8)) 
    \spo[10]_INST_0_i_4 
       (.I0(a[6]),
        .I1(a[7]),
        .I2(a[2]),
        .I3(a[3]),
        .I4(a[0]),
        .I5(a[1]),
        .O(\spo[10]_INST_0_i_4_n_0 ));
  LUT6 #(
    .INIT(64'h4000400003110310)) 
    \spo[10]_INST_0_i_5 
       (.I0(a[6]),
        .I1(a[7]),
        .I2(a[2]),
        .I3(a[1]),
        .I4(a[0]),
        .I5(a[3]),
        .O(\spo[10]_INST_0_i_5_n_0 ));
  LUT6 #(
    .INIT(64'h6020602020050105)) 
    \spo[10]_INST_0_i_6 
       (.I0(a[6]),
        .I1(a[7]),
        .I2(a[3]),
        .I3(a[1]),
        .I4(a[0]),
        .I5(a[2]),
        .O(\spo[10]_INST_0_i_6_n_0 ));
  MUXF8 \spo[11]_INST_0 
       (.I0(\spo[11]_INST_0_i_1_n_0 ),
        .I1(\spo[11]_INST_0_i_2_n_0 ),
        .O(spo[7]),
        .S(a[5]));
  MUXF7 \spo[11]_INST_0_i_1 
       (.I0(\spo[11]_INST_0_i_3_n_0 ),
        .I1(\spo[11]_INST_0_i_4_n_0 ),
        .O(\spo[11]_INST_0_i_1_n_0 ),
        .S(a[4]));
  MUXF7 \spo[11]_INST_0_i_2 
       (.I0(\spo[11]_INST_0_i_5_n_0 ),
        .I1(\spo[11]_INST_0_i_6_n_0 ),
        .O(\spo[11]_INST_0_i_2_n_0 ),
        .S(a[4]));
  LUT6 #(
    .INIT(64'h0B0223B11014160E)) 
    \spo[11]_INST_0_i_3 
       (.I0(a[6]),
        .I1(a[7]),
        .I2(a[2]),
        .I3(a[0]),
        .I4(a[1]),
        .I5(a[3]),
        .O(\spo[11]_INST_0_i_3_n_0 ));
  LUT6 #(
    .INIT(64'h646961694C4A4C4A)) 
    \spo[11]_INST_0_i_4 
       (.I0(a[6]),
        .I1(a[7]),
        .I2(a[3]),
        .I3(a[1]),
        .I4(a[0]),
        .I5(a[2]),
        .O(\spo[11]_INST_0_i_4_n_0 ));
  LUT6 #(
    .INIT(64'h4000400003171316)) 
    \spo[11]_INST_0_i_5 
       (.I0(a[6]),
        .I1(a[7]),
        .I2(a[2]),
        .I3(a[1]),
        .I4(a[0]),
        .I5(a[3]),
        .O(\spo[11]_INST_0_i_5_n_0 ));
  LUT6 #(
    .INIT(64'h6060202001010504)) 
    \spo[11]_INST_0_i_6 
       (.I0(a[6]),
        .I1(a[7]),
        .I2(a[3]),
        .I3(a[0]),
        .I4(a[1]),
        .I5(a[2]),
        .O(\spo[11]_INST_0_i_6_n_0 ));
  MUXF8 \spo[12]_INST_0 
       (.I0(\spo[12]_INST_0_i_1_n_0 ),
        .I1(\spo[12]_INST_0_i_2_n_0 ),
        .O(spo[8]),
        .S(a[5]));
  MUXF7 \spo[12]_INST_0_i_1 
       (.I0(\spo[12]_INST_0_i_3_n_0 ),
        .I1(\spo[12]_INST_0_i_4_n_0 ),
        .O(\spo[12]_INST_0_i_1_n_0 ),
        .S(a[4]));
  MUXF7 \spo[12]_INST_0_i_2 
       (.I0(\spo[12]_INST_0_i_5_n_0 ),
        .I1(\spo[12]_INST_0_i_6_n_0 ),
        .O(\spo[12]_INST_0_i_2_n_0 ),
        .S(a[4]));
  LUT6 #(
    .INIT(64'h2BA5041623B0045A)) 
    \spo[12]_INST_0_i_3 
       (.I0(a[6]),
        .I1(a[7]),
        .I2(a[2]),
        .I3(a[1]),
        .I4(a[3]),
        .I5(a[0]),
        .O(\spo[12]_INST_0_i_3_n_0 ));
  LUT6 #(
    .INIT(64'h4849494C4C4E4A42)) 
    \spo[12]_INST_0_i_4 
       (.I0(a[6]),
        .I1(a[7]),
        .I2(a[3]),
        .I3(a[0]),
        .I4(a[1]),
        .I5(a[2]),
        .O(\spo[12]_INST_0_i_4_n_0 ));
  LUT6 #(
    .INIT(64'h4000400003171736)) 
    \spo[12]_INST_0_i_5 
       (.I0(a[6]),
        .I1(a[7]),
        .I2(a[2]),
        .I3(a[1]),
        .I4(a[0]),
        .I5(a[3]),
        .O(\spo[12]_INST_0_i_5_n_0 ));
  LUT6 #(
    .INIT(64'h5020600001050114)) 
    \spo[12]_INST_0_i_6 
       (.I0(a[6]),
        .I1(a[7]),
        .I2(a[2]),
        .I3(a[1]),
        .I4(a[0]),
        .I5(a[3]),
        .O(\spo[12]_INST_0_i_6_n_0 ));
  MUXF8 \spo[13]_INST_0 
       (.I0(\spo[13]_INST_0_i_1_n_0 ),
        .I1(\spo[13]_INST_0_i_2_n_0 ),
        .O(spo[9]),
        .S(a[5]));
  MUXF7 \spo[13]_INST_0_i_1 
       (.I0(\spo[13]_INST_0_i_3_n_0 ),
        .I1(\spo[13]_INST_0_i_4_n_0 ),
        .O(\spo[13]_INST_0_i_1_n_0 ),
        .S(a[4]));
  MUXF7 \spo[13]_INST_0_i_2 
       (.I0(\spo[13]_INST_0_i_5_n_0 ),
        .I1(\spo[13]_INST_0_i_6_n_0 ),
        .O(\spo[13]_INST_0_i_2_n_0 ),
        .S(a[4]));
  LUT6 #(
    .INIT(64'h22154444AB40552A)) 
    \spo[13]_INST_0_i_3 
       (.I0(a[6]),
        .I1(a[7]),
        .I2(a[0]),
        .I3(a[2]),
        .I4(a[3]),
        .I5(a[1]),
        .O(\spo[13]_INST_0_i_3_n_0 ));
  LUT6 #(
    .INIT(64'h082969444C4E0282)) 
    \spo[13]_INST_0_i_4 
       (.I0(a[6]),
        .I1(a[7]),
        .I2(a[3]),
        .I3(a[0]),
        .I4(a[1]),
        .I5(a[2]),
        .O(\spo[13]_INST_0_i_4_n_0 ));
  LUT6 #(
    .INIT(64'h50004000005F1F48)) 
    \spo[13]_INST_0_i_5 
       (.I0(a[6]),
        .I1(a[0]),
        .I2(a[7]),
        .I3(a[2]),
        .I4(a[1]),
        .I5(a[3]),
        .O(\spo[13]_INST_0_i_5_n_0 ));
  LUT6 #(
    .INIT(64'h5600200200150144)) 
    \spo[13]_INST_0_i_6 
       (.I0(a[6]),
        .I1(a[7]),
        .I2(a[0]),
        .I3(a[2]),
        .I4(a[1]),
        .I5(a[3]),
        .O(\spo[13]_INST_0_i_6_n_0 ));
  LUT6 #(
    .INIT(64'hAFA0CFCFAFA0C0C0)) 
    \spo[14]_INST_0 
       (.I0(\spo[15]_INST_0_i_1_n_0 ),
        .I1(\spo[14]_INST_0_i_1_n_0 ),
        .I2(a[5]),
        .I3(\spo[14]_INST_0_i_2_n_0 ),
        .I4(a[4]),
        .I5(\spo[14]_INST_0_i_3_n_0 ),
        .O(spo[10]));
  LUT6 #(
    .INIT(64'h4400400023733500)) 
    \spo[14]_INST_0_i_1 
       (.I0(a[6]),
        .I1(a[7]),
        .I2(a[0]),
        .I3(a[2]),
        .I4(a[1]),
        .I5(a[3]),
        .O(\spo[14]_INST_0_i_1_n_0 ));
  LUT6 #(
    .INIT(64'h296161444C42C282)) 
    \spo[14]_INST_0_i_2 
       (.I0(a[6]),
        .I1(a[7]),
        .I2(a[3]),
        .I3(a[0]),
        .I4(a[1]),
        .I5(a[2]),
        .O(\spo[14]_INST_0_i_2_n_0 ));
  LUT6 #(
    .INIT(64'h2124404084145202)) 
    \spo[14]_INST_0_i_3 
       (.I0(a[6]),
        .I1(a[7]),
        .I2(a[2]),
        .I3(a[0]),
        .I4(a[3]),
        .I5(a[1]),
        .O(\spo[14]_INST_0_i_3_n_0 ));
  LUT6 #(
    .INIT(64'hAFA0CFCFAFA0C0C0)) 
    \spo[15]_INST_0 
       (.I0(\spo[15]_INST_0_i_1_n_0 ),
        .I1(\spo[15]_INST_0_i_2_n_0 ),
        .I2(a[5]),
        .I3(\spo[15]_INST_0_i_3_n_0 ),
        .I4(a[4]),
        .I5(\spo[15]_INST_0_i_4_n_0 ),
        .O(spo[11]));
  LUT6 #(
    .INIT(64'h4600600220550144)) 
    \spo[15]_INST_0_i_1 
       (.I0(a[6]),
        .I1(a[7]),
        .I2(a[0]),
        .I3(a[2]),
        .I4(a[1]),
        .I5(a[3]),
        .O(\spo[15]_INST_0_i_1_n_0 ));
  LUT6 #(
    .INIT(64'h4027401202520252)) 
    \spo[15]_INST_0_i_2 
       (.I0(a[6]),
        .I1(a[7]),
        .I2(a[2]),
        .I3(a[3]),
        .I4(a[0]),
        .I5(a[1]),
        .O(\spo[15]_INST_0_i_2_n_0 ));
  LUT6 #(
    .INIT(64'h1A055070B082D00A)) 
    \spo[15]_INST_0_i_3 
       (.I0(a[6]),
        .I1(a[0]),
        .I2(a[7]),
        .I3(a[3]),
        .I4(a[1]),
        .I5(a[2]),
        .O(\spo[15]_INST_0_i_3_n_0 ));
  LUT6 #(
    .INIT(64'h248000008055100A)) 
    \spo[15]_INST_0_i_4 
       (.I0(a[6]),
        .I1(a[0]),
        .I2(a[3]),
        .I3(a[7]),
        .I4(a[2]),
        .I5(a[1]),
        .O(\spo[15]_INST_0_i_4_n_0 ));
  MUXF8 \spo[16]_INST_0 
       (.I0(\spo[16]_INST_0_i_1_n_0 ),
        .I1(\spo[16]_INST_0_i_2_n_0 ),
        .O(spo[12]),
        .S(a[5]));
  MUXF7 \spo[16]_INST_0_i_1 
       (.I0(\spo[16]_INST_0_i_3_n_0 ),
        .I1(\spo[16]_INST_0_i_4_n_0 ),
        .O(\spo[16]_INST_0_i_1_n_0 ),
        .S(a[4]));
  MUXF7 \spo[16]_INST_0_i_2 
       (.I0(\spo[16]_INST_0_i_5_n_0 ),
        .I1(\spo[16]_INST_0_i_6_n_0 ),
        .O(\spo[16]_INST_0_i_2_n_0 ),
        .S(a[4]));
  LUT6 #(
    .INIT(64'h8080800000004642)) 
    \spo[16]_INST_0_i_3 
       (.I0(a[6]),
        .I1(a[2]),
        .I2(a[3]),
        .I3(a[0]),
        .I4(a[1]),
        .I5(a[7]),
        .O(\spo[16]_INST_0_i_3_n_0 ));
  LUT6 #(
    .INIT(64'h3833C070C0C03000)) 
    \spo[16]_INST_0_i_4 
       (.I0(a[0]),
        .I1(a[6]),
        .I2(a[7]),
        .I3(a[3]),
        .I4(a[1]),
        .I5(a[2]),
        .O(\spo[16]_INST_0_i_4_n_0 ));
  LUT6 #(
    .INIT(64'h4211421202520056)) 
    \spo[16]_INST_0_i_5 
       (.I0(a[6]),
        .I1(a[7]),
        .I2(a[2]),
        .I3(a[3]),
        .I4(a[0]),
        .I5(a[1]),
        .O(\spo[16]_INST_0_i_5_n_0 ));
  LUT6 #(
    .INIT(64'h4600640220550144)) 
    \spo[16]_INST_0_i_6 
       (.I0(a[6]),
        .I1(a[7]),
        .I2(a[0]),
        .I3(a[2]),
        .I4(a[1]),
        .I5(a[3]),
        .O(\spo[16]_INST_0_i_6_n_0 ));
  MUXF8 \spo[17]_INST_0 
       (.I0(\spo[17]_INST_0_i_1_n_0 ),
        .I1(\spo[17]_INST_0_i_2_n_0 ),
        .O(spo[13]),
        .S(a[5]));
  MUXF7 \spo[17]_INST_0_i_1 
       (.I0(\spo[17]_INST_0_i_3_n_0 ),
        .I1(\spo[17]_INST_0_i_4_n_0 ),
        .O(\spo[17]_INST_0_i_1_n_0 ),
        .S(a[4]));
  MUXF7 \spo[17]_INST_0_i_2 
       (.I0(\spo[17]_INST_0_i_5_n_0 ),
        .I1(\spo[17]_INST_0_i_6_n_0 ),
        .O(\spo[17]_INST_0_i_2_n_0 ),
        .S(a[4]));
  LUT6 #(
    .INIT(64'h8080000000000E42)) 
    \spo[17]_INST_0_i_3 
       (.I0(a[6]),
        .I1(a[2]),
        .I2(a[1]),
        .I3(a[0]),
        .I4(a[3]),
        .I5(a[7]),
        .O(\spo[17]_INST_0_i_3_n_0 ));
  LUT6 #(
    .INIT(64'h45C5858008080848)) 
    \spo[17]_INST_0_i_4 
       (.I0(a[6]),
        .I1(a[7]),
        .I2(a[3]),
        .I3(a[0]),
        .I4(a[1]),
        .I5(a[2]),
        .O(\spo[17]_INST_0_i_4_n_0 ));
  LUT6 #(
    .INIT(64'h4242101200215656)) 
    \spo[17]_INST_0_i_5 
       (.I0(a[6]),
        .I1(a[7]),
        .I2(a[2]),
        .I3(a[0]),
        .I4(a[3]),
        .I5(a[1]),
        .O(\spo[17]_INST_0_i_5_n_0 ));
  LUT6 #(
    .INIT(64'h0640642200554544)) 
    \spo[17]_INST_0_i_6 
       (.I0(a[6]),
        .I1(a[7]),
        .I2(a[0]),
        .I3(a[2]),
        .I4(a[1]),
        .I5(a[3]),
        .O(\spo[17]_INST_0_i_6_n_0 ));
  MUXF8 \spo[18]_INST_0 
       (.I0(\spo[18]_INST_0_i_1_n_0 ),
        .I1(\spo[18]_INST_0_i_2_n_0 ),
        .O(spo[14]),
        .S(a[5]));
  MUXF7 \spo[18]_INST_0_i_1 
       (.I0(\spo[18]_INST_0_i_3_n_0 ),
        .I1(\spo[18]_INST_0_i_4_n_0 ),
        .O(\spo[18]_INST_0_i_1_n_0 ),
        .S(a[4]));
  MUXF7 \spo[18]_INST_0_i_2 
       (.I0(\spo[18]_INST_0_i_5_n_0 ),
        .I1(\spo[18]_INST_0_i_6_n_0 ),
        .O(\spo[18]_INST_0_i_2_n_0 ),
        .S(a[4]));
  LUT6 #(
    .INIT(64'h8000000000002E6A)) 
    \spo[18]_INST_0_i_3 
       (.I0(a[6]),
        .I1(a[2]),
        .I2(a[1]),
        .I3(a[0]),
        .I4(a[3]),
        .I5(a[7]),
        .O(\spo[18]_INST_0_i_3_n_0 ));
  LUT6 #(
    .INIT(64'h0481850108080808)) 
    \spo[18]_INST_0_i_4 
       (.I0(a[6]),
        .I1(a[7]),
        .I2(a[3]),
        .I3(a[1]),
        .I4(a[0]),
        .I5(a[2]),
        .O(\spo[18]_INST_0_i_4_n_0 ));
  LUT6 #(
    .INIT(64'h0001212114145454)) 
    \spo[18]_INST_0_i_5 
       (.I0(a[6]),
        .I1(a[7]),
        .I2(a[2]),
        .I3(a[0]),
        .I4(a[1]),
        .I5(a[3]),
        .O(\spo[18]_INST_0_i_5_n_0 ));
  LUT6 #(
    .INIT(64'h0466644245454554)) 
    \spo[18]_INST_0_i_6 
       (.I0(a[6]),
        .I1(a[7]),
        .I2(a[2]),
        .I3(a[1]),
        .I4(a[0]),
        .I5(a[3]),
        .O(\spo[18]_INST_0_i_6_n_0 ));
  MUXF8 \spo[19]_INST_0 
       (.I0(\spo[19]_INST_0_i_1_n_0 ),
        .I1(\spo[19]_INST_0_i_2_n_0 ),
        .O(spo[15]),
        .S(a[5]));
  MUXF7 \spo[19]_INST_0_i_1 
       (.I0(\spo[19]_INST_0_i_3_n_0 ),
        .I1(\spo[19]_INST_0_i_4_n_0 ),
        .O(\spo[19]_INST_0_i_1_n_0 ),
        .S(a[4]));
  MUXF7 \spo[19]_INST_0_i_2 
       (.I0(\spo[19]_INST_0_i_5_n_0 ),
        .I1(\spo[19]_INST_0_i_6_n_0 ),
        .O(\spo[19]_INST_0_i_2_n_0 ),
        .S(a[4]));
  LUT6 #(
    .INIT(64'h000000000026002A)) 
    \spo[19]_INST_0_i_3 
       (.I0(a[6]),
        .I1(a[2]),
        .I2(a[0]),
        .I3(a[3]),
        .I4(a[1]),
        .I5(a[7]),
        .O(\spo[19]_INST_0_i_3_n_0 ));
  LUT6 #(
    .INIT(64'h0000000001000404)) 
    \spo[19]_INST_0_i_4 
       (.I0(a[7]),
        .I1(a[2]),
        .I2(a[3]),
        .I3(a[0]),
        .I4(a[1]),
        .I5(a[6]),
        .O(\spo[19]_INST_0_i_4_n_0 ));
  LUT6 #(
    .INIT(64'h0705050505505040)) 
    \spo[19]_INST_0_i_5 
       (.I0(a[6]),
        .I1(a[0]),
        .I2(a[7]),
        .I3(a[1]),
        .I4(a[2]),
        .I5(a[3]),
        .O(\spo[19]_INST_0_i_5_n_0 ));
  LUT6 #(
    .INIT(64'h0264446644455551)) 
    \spo[19]_INST_0_i_6 
       (.I0(a[6]),
        .I1(a[7]),
        .I2(a[0]),
        .I3(a[1]),
        .I4(a[2]),
        .I5(a[3]),
        .O(\spo[19]_INST_0_i_6_n_0 ));
  LUT6 #(
    .INIT(64'hA0A0A0A0CFC0C0C0)) 
    \spo[20]_INST_0 
       (.I0(\spo[20]_INST_0_i_1_n_0 ),
        .I1(\spo[20]_INST_0_i_2_n_0 ),
        .I2(a[5]),
        .I3(a[6]),
        .I4(\spo[20]_INST_0_i_3_n_0 ),
        .I5(a[4]),
        .O(spo[16]));
  LUT6 #(
    .INIT(64'h0026666444455111)) 
    \spo[20]_INST_0_i_1 
       (.I0(a[6]),
        .I1(a[7]),
        .I2(a[0]),
        .I3(a[1]),
        .I4(a[2]),
        .I5(a[3]),
        .O(\spo[20]_INST_0_i_1_n_0 ));
  LUT6 #(
    .INIT(64'h000000001004EAAA)) 
    \spo[20]_INST_0_i_2 
       (.I0(a[3]),
        .I1(a[2]),
        .I2(a[1]),
        .I3(a[0]),
        .I4(a[7]),
        .I5(a[6]),
        .O(\spo[20]_INST_0_i_2_n_0 ));
  LUT3 #(
    .INIT(8'h01)) 
    \spo[20]_INST_0_i_3 
       (.I0(a[2]),
        .I1(a[3]),
        .I2(a[7]),
        .O(\spo[20]_INST_0_i_3_n_0 ));
  LUT5 #(
    .INIT(32'hA0A0CFC0)) 
    \spo[21]_INST_0 
       (.I0(\spo[21]_INST_0_i_1_n_0 ),
        .I1(\spo[21]_INST_0_i_2_n_0 ),
        .I2(a[5]),
        .I3(\spo[21]_INST_0_i_3_n_0 ),
        .I4(a[4]),
        .O(spo[17]));
  LUT6 #(
    .INIT(64'h0002540055880055)) 
    \spo[21]_INST_0_i_1 
       (.I0(a[6]),
        .I1(a[1]),
        .I2(a[0]),
        .I3(a[7]),
        .I4(a[3]),
        .I5(a[2]),
        .O(\spo[21]_INST_0_i_1_n_0 ));
  LUT6 #(
    .INIT(64'h0000000055005400)) 
    \spo[21]_INST_0_i_2 
       (.I0(a[7]),
        .I1(a[2]),
        .I2(a[1]),
        .I3(a[3]),
        .I4(a[0]),
        .I5(a[6]),
        .O(\spo[21]_INST_0_i_2_n_0 ));
  LUT6 #(
    .INIT(64'h0000111000000000)) 
    \spo[21]_INST_0_i_3 
       (.I0(a[7]),
        .I1(a[3]),
        .I2(a[0]),
        .I3(a[1]),
        .I4(a[2]),
        .I5(a[6]),
        .O(\spo[21]_INST_0_i_3_n_0 ));
  LUT5 #(
    .INIT(32'h00004F40)) 
    \spo[22]_INST_0 
       (.I0(a[6]),
        .I1(\spo[22]_INST_0_i_1_n_0 ),
        .I2(a[5]),
        .I3(\spo[22]_INST_0_i_2_n_0 ),
        .I4(a[4]),
        .O(spo[18]));
  (* SOFT_HLUTNM = "soft_lutpair0" *) 
  LUT5 #(
    .INIT(32'h00002000)) 
    \spo[22]_INST_0_i_1 
       (.I0(a[2]),
        .I1(a[0]),
        .I2(a[3]),
        .I3(a[1]),
        .I4(a[7]),
        .O(\spo[22]_INST_0_i_1_n_0 ));
  LUT6 #(
    .INIT(64'h0000011000000000)) 
    \spo[22]_INST_0_i_2 
       (.I0(a[7]),
        .I1(a[3]),
        .I2(a[0]),
        .I3(a[1]),
        .I4(a[2]),
        .I5(a[6]),
        .O(\spo[22]_INST_0_i_2_n_0 ));
  LUT6 #(
    .INIT(64'h0B08000000000000)) 
    \spo[4]_INST_0 
       (.I0(\spo[4]_INST_0_i_1_n_0 ),
        .I1(a[5]),
        .I2(a[6]),
        .I3(\spo[4]_INST_0_i_2_n_0 ),
        .I4(a[7]),
        .I5(a[4]),
        .O(spo[0]));
  (* SOFT_HLUTNM = "soft_lutpair0" *) 
  LUT4 #(
    .INIT(16'h0FE0)) 
    \spo[4]_INST_0_i_1 
       (.I0(a[1]),
        .I1(a[0]),
        .I2(a[2]),
        .I3(a[3]),
        .O(\spo[4]_INST_0_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair1" *) 
  LUT3 #(
    .INIT(8'h04)) 
    \spo[4]_INST_0_i_2 
       (.I0(a[3]),
        .I1(a[1]),
        .I2(a[2]),
        .O(\spo[4]_INST_0_i_2_n_0 ));
  LUT6 #(
    .INIT(64'h8B88888800000000)) 
    \spo[5]_INST_0 
       (.I0(\spo[5]_INST_0_i_1_n_0 ),
        .I1(a[5]),
        .I2(a[6]),
        .I3(\spo[5]_INST_0_i_2_n_0 ),
        .I4(a[7]),
        .I5(a[4]),
        .O(spo[1]));
  LUT6 #(
    .INIT(64'h1414145420000808)) 
    \spo[5]_INST_0_i_1 
       (.I0(a[6]),
        .I1(a[3]),
        .I2(a[2]),
        .I3(a[0]),
        .I4(a[1]),
        .I5(a[7]),
        .O(\spo[5]_INST_0_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair1" *) 
  LUT4 #(
    .INIT(16'h0034)) 
    \spo[5]_INST_0_i_2 
       (.I0(a[0]),
        .I1(a[2]),
        .I2(a[1]),
        .I3(a[3]),
        .O(\spo[5]_INST_0_i_2_n_0 ));
  MUXF8 \spo[6]_INST_0 
       (.I0(\spo[6]_INST_0_i_1_n_0 ),
        .I1(\spo[6]_INST_0_i_2_n_0 ),
        .O(spo[2]),
        .S(a[5]));
  MUXF7 \spo[6]_INST_0_i_1 
       (.I0(\spo[6]_INST_0_i_3_n_0 ),
        .I1(\spo[6]_INST_0_i_4_n_0 ),
        .O(\spo[6]_INST_0_i_1_n_0 ),
        .S(a[4]));
  MUXF7 \spo[6]_INST_0_i_2 
       (.I0(\spo[6]_INST_0_i_5_n_0 ),
        .I1(\spo[6]_INST_0_i_6_n_0 ),
        .O(\spo[6]_INST_0_i_2_n_0 ),
        .S(a[4]));
  LUT6 #(
    .INIT(64'h0000151400000000)) 
    \spo[6]_INST_0_i_3 
       (.I0(a[7]),
        .I1(a[2]),
        .I2(a[1]),
        .I3(a[0]),
        .I4(a[3]),
        .I5(a[6]),
        .O(\spo[6]_INST_0_i_3_n_0 ));
  LUT6 #(
    .INIT(64'h0000000002000808)) 
    \spo[6]_INST_0_i_4 
       (.I0(a[7]),
        .I1(a[2]),
        .I2(a[3]),
        .I3(a[0]),
        .I4(a[1]),
        .I5(a[6]),
        .O(\spo[6]_INST_0_i_4_n_0 ));
  LUT5 #(
    .INIT(32'h00005574)) 
    \spo[6]_INST_0_i_5 
       (.I0(a[6]),
        .I1(a[2]),
        .I2(a[1]),
        .I3(a[3]),
        .I4(a[7]),
        .O(\spo[6]_INST_0_i_5_n_0 ));
  LUT6 #(
    .INIT(64'h1155555400802A00)) 
    \spo[6]_INST_0_i_6 
       (.I0(a[6]),
        .I1(a[1]),
        .I2(a[0]),
        .I3(a[3]),
        .I4(a[2]),
        .I5(a[7]),
        .O(\spo[6]_INST_0_i_6_n_0 ));
  LUT6 #(
    .INIT(64'hAFA0CFCFAFA0C0C0)) 
    \spo[7]_INST_0 
       (.I0(\spo[7]_INST_0_i_1_n_0 ),
        .I1(\spo[8]_INST_0_i_2_n_0 ),
        .I2(a[5]),
        .I3(\spo[7]_INST_0_i_2_n_0 ),
        .I4(a[4]),
        .I5(\spo[7]_INST_0_i_3_n_0 ),
        .O(spo[3]));
  LUT6 #(
    .INIT(64'h0404440462442245)) 
    \spo[7]_INST_0_i_1 
       (.I0(a[6]),
        .I1(a[7]),
        .I2(a[1]),
        .I3(a[3]),
        .I4(a[0]),
        .I5(a[2]),
        .O(\spo[7]_INST_0_i_1_n_0 ));
  LUT6 #(
    .INIT(64'h000000000A080808)) 
    \spo[7]_INST_0_i_2 
       (.I0(a[7]),
        .I1(a[2]),
        .I2(a[3]),
        .I3(a[0]),
        .I4(a[1]),
        .I5(a[6]),
        .O(\spo[7]_INST_0_i_2_n_0 ));
  LUT6 #(
    .INIT(64'h0800155400000000)) 
    \spo[7]_INST_0_i_3 
       (.I0(a[3]),
        .I1(a[0]),
        .I2(a[1]),
        .I3(a[2]),
        .I4(a[7]),
        .I5(a[6]),
        .O(\spo[7]_INST_0_i_3_n_0 ));
  LUT6 #(
    .INIT(64'hAFA0CFCFAFA0C0C0)) 
    \spo[8]_INST_0 
       (.I0(\spo[8]_INST_0_i_1_n_0 ),
        .I1(\spo[8]_INST_0_i_2_n_0 ),
        .I2(a[5]),
        .I3(\spo[8]_INST_0_i_3_n_0 ),
        .I4(a[4]),
        .I5(\spo[8]_INST_0_i_4_n_0 ),
        .O(spo[4]));
  LUT6 #(
    .INIT(64'h504A00000A081055)) 
    \spo[8]_INST_0_i_1 
       (.I0(a[6]),
        .I1(a[0]),
        .I2(a[7]),
        .I3(a[1]),
        .I4(a[3]),
        .I5(a[2]),
        .O(\spo[8]_INST_0_i_1_n_0 ));
  LUT6 #(
    .INIT(64'h5111111111113130)) 
    \spo[8]_INST_0_i_2 
       (.I0(a[6]),
        .I1(a[7]),
        .I2(a[1]),
        .I3(a[0]),
        .I4(a[3]),
        .I5(a[2]),
        .O(\spo[8]_INST_0_i_2_n_0 ));
  LUT6 #(
    .INIT(64'h0000000031212161)) 
    \spo[8]_INST_0_i_3 
       (.I0(a[2]),
        .I1(a[3]),
        .I2(a[7]),
        .I3(a[0]),
        .I4(a[1]),
        .I5(a[6]),
        .O(\spo[8]_INST_0_i_3_n_0 ));
  LUT6 #(
    .INIT(64'h4000C00030CC04CC)) 
    \spo[8]_INST_0_i_4 
       (.I0(a[0]),
        .I1(a[6]),
        .I2(a[2]),
        .I3(a[3]),
        .I4(a[1]),
        .I5(a[7]),
        .O(\spo[8]_INST_0_i_4_n_0 ));
  MUXF8 \spo[9]_INST_0 
       (.I0(\spo[9]_INST_0_i_1_n_0 ),
        .I1(\spo[9]_INST_0_i_2_n_0 ),
        .O(spo[5]),
        .S(a[5]));
  MUXF7 \spo[9]_INST_0_i_1 
       (.I0(\spo[9]_INST_0_i_3_n_0 ),
        .I1(\spo[9]_INST_0_i_4_n_0 ),
        .O(\spo[9]_INST_0_i_1_n_0 ),
        .S(a[4]));
  MUXF7 \spo[9]_INST_0_i_2 
       (.I0(\spo[9]_INST_0_i_5_n_0 ),
        .I1(\spo[9]_INST_0_i_6_n_0 ),
        .O(\spo[9]_INST_0_i_2_n_0 ),
        .S(a[4]));
  LUT6 #(
    .INIT(64'hA888000206668AA2)) 
    \spo[9]_INST_0_i_3 
       (.I0(a[6]),
        .I1(a[2]),
        .I2(a[0]),
        .I3(a[1]),
        .I4(a[3]),
        .I5(a[7]),
        .O(\spo[9]_INST_0_i_3_n_0 ));
  LUT6 #(
    .INIT(64'h0020004444554588)) 
    \spo[9]_INST_0_i_4 
       (.I0(a[6]),
        .I1(a[7]),
        .I2(a[0]),
        .I3(a[2]),
        .I4(a[1]),
        .I5(a[3]),
        .O(\spo[9]_INST_0_i_4_n_0 ));
  LUT6 #(
    .INIT(64'h5000400003010310)) 
    \spo[9]_INST_0_i_5 
       (.I0(a[6]),
        .I1(a[7]),
        .I2(a[2]),
        .I3(a[1]),
        .I4(a[0]),
        .I5(a[3]),
        .O(\spo[9]_INST_0_i_5_n_0 ));
  LUT6 #(
    .INIT(64'h520A000008001055)) 
    \spo[9]_INST_0_i_6 
       (.I0(a[6]),
        .I1(a[0]),
        .I2(a[7]),
        .I3(a[1]),
        .I4(a[3]),
        .I5(a[2]),
        .O(\spo[9]_INST_0_i_6_n_0 ));
endmodule
`ifndef GLBL
`define GLBL
`timescale  1 ps / 1 ps

module glbl ();

    parameter ROC_WIDTH = 100000;
    parameter TOC_WIDTH = 0;

//--------   STARTUP Globals --------------
    wire GSR;
    wire GTS;
    wire GWE;
    wire PRLD;
    tri1 p_up_tmp;
    tri (weak1, strong0) PLL_LOCKG = p_up_tmp;

    wire PROGB_GLBL;
    wire CCLKO_GLBL;
    wire FCSBO_GLBL;
    wire [3:0] DO_GLBL;
    wire [3:0] DI_GLBL;
   
    reg GSR_int;
    reg GTS_int;
    reg PRLD_int;

//--------   JTAG Globals --------------
    wire JTAG_TDO_GLBL;
    wire JTAG_TCK_GLBL;
    wire JTAG_TDI_GLBL;
    wire JTAG_TMS_GLBL;
    wire JTAG_TRST_GLBL;

    reg JTAG_CAPTURE_GLBL;
    reg JTAG_RESET_GLBL;
    reg JTAG_SHIFT_GLBL;
    reg JTAG_UPDATE_GLBL;
    reg JTAG_RUNTEST_GLBL;

    reg JTAG_SEL1_GLBL = 0;
    reg JTAG_SEL2_GLBL = 0 ;
    reg JTAG_SEL3_GLBL = 0;
    reg JTAG_SEL4_GLBL = 0;

    reg JTAG_USER_TDO1_GLBL = 1'bz;
    reg JTAG_USER_TDO2_GLBL = 1'bz;
    reg JTAG_USER_TDO3_GLBL = 1'bz;
    reg JTAG_USER_TDO4_GLBL = 1'bz;

    assign (strong1, weak0) GSR = GSR_int;
    assign (strong1, weak0) GTS = GTS_int;
    assign (weak1, weak0) PRLD = PRLD_int;

    initial begin
	GSR_int = 1'b1;
	PRLD_int = 1'b1;
	#(ROC_WIDTH)
	GSR_int = 1'b0;
	PRLD_int = 1'b0;
    end

    initial begin
	GTS_int = 1'b1;
	#(TOC_WIDTH)
	GTS_int = 1'b0;
    end

endmodule
`endif
