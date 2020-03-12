-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2019.2 (lin64) Build 2708876 Wed Nov  6 21:39:14 MST 2019
-- Date        : Fri Mar  6 12:37:55 2020
-- Host        : robuntu running 64-bit Ubuntu 18.04.4 LTS
-- Command     : write_vhdl -force -mode funcsim -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix
--               decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ mnist_rom_sim_netlist.vhdl
-- Design      : mnist_rom
-- Purpose     : This VHDL netlist is a functional simulation representation of the design and should not be modified or
--               synthesized. This netlist cannot be used for SDF annotated simulation.
-- Device      : xc7a35tcpg236-1
-- --------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_rom is
  port (
    qspo : out STD_LOGIC_VECTOR ( 18 downto 0 );
    a : in STD_LOGIC_VECTOR ( 7 downto 0 );
    clk : in STD_LOGIC
  );
end decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_rom;

architecture STRUCTURE of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_rom is
  signal a_reg : STD_LOGIC_VECTOR ( 7 downto 0 );
  signal \qspo_int[10]_i_4_n_0\ : STD_LOGIC;
  signal \qspo_int[10]_i_5_n_0\ : STD_LOGIC;
  signal \qspo_int[10]_i_6_n_0\ : STD_LOGIC;
  signal \qspo_int[10]_i_7_n_0\ : STD_LOGIC;
  signal \qspo_int[11]_i_4_n_0\ : STD_LOGIC;
  signal \qspo_int[11]_i_5_n_0\ : STD_LOGIC;
  signal \qspo_int[11]_i_6_n_0\ : STD_LOGIC;
  signal \qspo_int[11]_i_7_n_0\ : STD_LOGIC;
  signal \qspo_int[12]_i_4_n_0\ : STD_LOGIC;
  signal \qspo_int[12]_i_5_n_0\ : STD_LOGIC;
  signal \qspo_int[12]_i_6_n_0\ : STD_LOGIC;
  signal \qspo_int[12]_i_7_n_0\ : STD_LOGIC;
  signal \qspo_int[13]_i_4_n_0\ : STD_LOGIC;
  signal \qspo_int[13]_i_5_n_0\ : STD_LOGIC;
  signal \qspo_int[13]_i_6_n_0\ : STD_LOGIC;
  signal \qspo_int[13]_i_7_n_0\ : STD_LOGIC;
  signal \qspo_int[14]_i_1_n_0\ : STD_LOGIC;
  signal \qspo_int[14]_i_2_n_0\ : STD_LOGIC;
  signal \qspo_int[14]_i_3_n_0\ : STD_LOGIC;
  signal \qspo_int[14]_i_4_n_0\ : STD_LOGIC;
  signal \qspo_int[15]_i_1_n_0\ : STD_LOGIC;
  signal \qspo_int[15]_i_2_n_0\ : STD_LOGIC;
  signal \qspo_int[15]_i_3_n_0\ : STD_LOGIC;
  signal \qspo_int[15]_i_4_n_0\ : STD_LOGIC;
  signal \qspo_int[15]_i_5_n_0\ : STD_LOGIC;
  signal \qspo_int[16]_i_4_n_0\ : STD_LOGIC;
  signal \qspo_int[16]_i_5_n_0\ : STD_LOGIC;
  signal \qspo_int[16]_i_6_n_0\ : STD_LOGIC;
  signal \qspo_int[16]_i_7_n_0\ : STD_LOGIC;
  signal \qspo_int[17]_i_4_n_0\ : STD_LOGIC;
  signal \qspo_int[17]_i_5_n_0\ : STD_LOGIC;
  signal \qspo_int[17]_i_6_n_0\ : STD_LOGIC;
  signal \qspo_int[17]_i_7_n_0\ : STD_LOGIC;
  signal \qspo_int[18]_i_4_n_0\ : STD_LOGIC;
  signal \qspo_int[18]_i_5_n_0\ : STD_LOGIC;
  signal \qspo_int[18]_i_6_n_0\ : STD_LOGIC;
  signal \qspo_int[18]_i_7_n_0\ : STD_LOGIC;
  signal \qspo_int[19]_i_4_n_0\ : STD_LOGIC;
  signal \qspo_int[19]_i_5_n_0\ : STD_LOGIC;
  signal \qspo_int[19]_i_6_n_0\ : STD_LOGIC;
  signal \qspo_int[19]_i_7_n_0\ : STD_LOGIC;
  signal \qspo_int[20]_i_1_n_0\ : STD_LOGIC;
  signal \qspo_int[20]_i_2_n_0\ : STD_LOGIC;
  signal \qspo_int[20]_i_3_n_0\ : STD_LOGIC;
  signal \qspo_int[20]_i_4_n_0\ : STD_LOGIC;
  signal \qspo_int[21]_i_1_n_0\ : STD_LOGIC;
  signal \qspo_int[21]_i_2_n_0\ : STD_LOGIC;
  signal \qspo_int[21]_i_3_n_0\ : STD_LOGIC;
  signal \qspo_int[21]_i_4_n_0\ : STD_LOGIC;
  signal \qspo_int[22]_i_1_n_0\ : STD_LOGIC;
  signal \qspo_int[22]_i_2_n_0\ : STD_LOGIC;
  signal \qspo_int[22]_i_3_n_0\ : STD_LOGIC;
  signal \qspo_int[4]_i_1_n_0\ : STD_LOGIC;
  signal \qspo_int[4]_i_2_n_0\ : STD_LOGIC;
  signal \qspo_int[4]_i_3_n_0\ : STD_LOGIC;
  signal \qspo_int[5]_i_1_n_0\ : STD_LOGIC;
  signal \qspo_int[5]_i_2_n_0\ : STD_LOGIC;
  signal \qspo_int[5]_i_3_n_0\ : STD_LOGIC;
  signal \qspo_int[6]_i_4_n_0\ : STD_LOGIC;
  signal \qspo_int[6]_i_5_n_0\ : STD_LOGIC;
  signal \qspo_int[6]_i_6_n_0\ : STD_LOGIC;
  signal \qspo_int[6]_i_7_n_0\ : STD_LOGIC;
  signal \qspo_int[7]_i_1_n_0\ : STD_LOGIC;
  signal \qspo_int[7]_i_2_n_0\ : STD_LOGIC;
  signal \qspo_int[7]_i_3_n_0\ : STD_LOGIC;
  signal \qspo_int[7]_i_4_n_0\ : STD_LOGIC;
  signal \qspo_int[8]_i_1_n_0\ : STD_LOGIC;
  signal \qspo_int[8]_i_2_n_0\ : STD_LOGIC;
  signal \qspo_int[8]_i_3_n_0\ : STD_LOGIC;
  signal \qspo_int[8]_i_4_n_0\ : STD_LOGIC;
  signal \qspo_int[8]_i_5_n_0\ : STD_LOGIC;
  signal \qspo_int[9]_i_4_n_0\ : STD_LOGIC;
  signal \qspo_int[9]_i_5_n_0\ : STD_LOGIC;
  signal \qspo_int[9]_i_6_n_0\ : STD_LOGIC;
  signal \qspo_int[9]_i_7_n_0\ : STD_LOGIC;
  signal \qspo_int_reg[10]_i_1_n_0\ : STD_LOGIC;
  signal \qspo_int_reg[10]_i_2_n_0\ : STD_LOGIC;
  signal \qspo_int_reg[10]_i_3_n_0\ : STD_LOGIC;
  signal \qspo_int_reg[11]_i_1_n_0\ : STD_LOGIC;
  signal \qspo_int_reg[11]_i_2_n_0\ : STD_LOGIC;
  signal \qspo_int_reg[11]_i_3_n_0\ : STD_LOGIC;
  signal \qspo_int_reg[12]_i_1_n_0\ : STD_LOGIC;
  signal \qspo_int_reg[12]_i_2_n_0\ : STD_LOGIC;
  signal \qspo_int_reg[12]_i_3_n_0\ : STD_LOGIC;
  signal \qspo_int_reg[13]_i_1_n_0\ : STD_LOGIC;
  signal \qspo_int_reg[13]_i_2_n_0\ : STD_LOGIC;
  signal \qspo_int_reg[13]_i_3_n_0\ : STD_LOGIC;
  signal \qspo_int_reg[16]_i_1_n_0\ : STD_LOGIC;
  signal \qspo_int_reg[16]_i_2_n_0\ : STD_LOGIC;
  signal \qspo_int_reg[16]_i_3_n_0\ : STD_LOGIC;
  signal \qspo_int_reg[17]_i_1_n_0\ : STD_LOGIC;
  signal \qspo_int_reg[17]_i_2_n_0\ : STD_LOGIC;
  signal \qspo_int_reg[17]_i_3_n_0\ : STD_LOGIC;
  signal \qspo_int_reg[18]_i_1_n_0\ : STD_LOGIC;
  signal \qspo_int_reg[18]_i_2_n_0\ : STD_LOGIC;
  signal \qspo_int_reg[18]_i_3_n_0\ : STD_LOGIC;
  signal \qspo_int_reg[19]_i_1_n_0\ : STD_LOGIC;
  signal \qspo_int_reg[19]_i_2_n_0\ : STD_LOGIC;
  signal \qspo_int_reg[19]_i_3_n_0\ : STD_LOGIC;
  signal \qspo_int_reg[6]_i_1_n_0\ : STD_LOGIC;
  signal \qspo_int_reg[6]_i_2_n_0\ : STD_LOGIC;
  signal \qspo_int_reg[6]_i_3_n_0\ : STD_LOGIC;
  signal \qspo_int_reg[9]_i_1_n_0\ : STD_LOGIC;
  signal \qspo_int_reg[9]_i_2_n_0\ : STD_LOGIC;
  signal \qspo_int_reg[9]_i_3_n_0\ : STD_LOGIC;
  attribute SOFT_HLUTNM : string;
  attribute SOFT_HLUTNM of \qspo_int[22]_i_2\ : label is "soft_lutpair0";
  attribute SOFT_HLUTNM of \qspo_int[4]_i_2\ : label is "soft_lutpair0";
  attribute SOFT_HLUTNM of \qspo_int[4]_i_3\ : label is "soft_lutpair1";
  attribute SOFT_HLUTNM of \qspo_int[5]_i_3\ : label is "soft_lutpair1";
begin
\a_reg_reg[0]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => clk,
      CE => '1',
      D => a(0),
      Q => a_reg(0),
      R => '0'
    );
\a_reg_reg[1]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => clk,
      CE => '1',
      D => a(1),
      Q => a_reg(1),
      R => '0'
    );
\a_reg_reg[2]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => clk,
      CE => '1',
      D => a(2),
      Q => a_reg(2),
      R => '0'
    );
\a_reg_reg[3]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => clk,
      CE => '1',
      D => a(3),
      Q => a_reg(3),
      R => '0'
    );
\a_reg_reg[4]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => clk,
      CE => '1',
      D => a(4),
      Q => a_reg(4),
      R => '0'
    );
\a_reg_reg[5]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => clk,
      CE => '1',
      D => a(5),
      Q => a_reg(5),
      R => '0'
    );
\a_reg_reg[6]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => clk,
      CE => '1',
      D => a(6),
      Q => a_reg(6),
      R => '0'
    );
\a_reg_reg[7]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => clk,
      CE => '1',
      D => a(7),
      Q => a_reg(7),
      R => '0'
    );
\qspo_int[10]_i_4\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"8A8230120293020E"
    )
        port map (
      I0 => a_reg(6),
      I1 => a_reg(7),
      I2 => a_reg(2),
      I3 => a_reg(0),
      I4 => a_reg(3),
      I5 => a_reg(1),
      O => \qspo_int[10]_i_4_n_0\
    );
\qspo_int[10]_i_5\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"024D044C245824D8"
    )
        port map (
      I0 => a_reg(6),
      I1 => a_reg(7),
      I2 => a_reg(2),
      I3 => a_reg(3),
      I4 => a_reg(0),
      I5 => a_reg(1),
      O => \qspo_int[10]_i_5_n_0\
    );
\qspo_int[10]_i_6\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"4000400003110310"
    )
        port map (
      I0 => a_reg(6),
      I1 => a_reg(7),
      I2 => a_reg(2),
      I3 => a_reg(1),
      I4 => a_reg(0),
      I5 => a_reg(3),
      O => \qspo_int[10]_i_6_n_0\
    );
\qspo_int[10]_i_7\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"6020602020050105"
    )
        port map (
      I0 => a_reg(6),
      I1 => a_reg(7),
      I2 => a_reg(3),
      I3 => a_reg(1),
      I4 => a_reg(0),
      I5 => a_reg(2),
      O => \qspo_int[10]_i_7_n_0\
    );
\qspo_int[11]_i_4\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0B0223B11014160E"
    )
        port map (
      I0 => a_reg(6),
      I1 => a_reg(7),
      I2 => a_reg(2),
      I3 => a_reg(0),
      I4 => a_reg(1),
      I5 => a_reg(3),
      O => \qspo_int[11]_i_4_n_0\
    );
\qspo_int[11]_i_5\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"646961694C4A4C4A"
    )
        port map (
      I0 => a_reg(6),
      I1 => a_reg(7),
      I2 => a_reg(3),
      I3 => a_reg(1),
      I4 => a_reg(0),
      I5 => a_reg(2),
      O => \qspo_int[11]_i_5_n_0\
    );
\qspo_int[11]_i_6\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"4000400003171316"
    )
        port map (
      I0 => a_reg(6),
      I1 => a_reg(7),
      I2 => a_reg(2),
      I3 => a_reg(1),
      I4 => a_reg(0),
      I5 => a_reg(3),
      O => \qspo_int[11]_i_6_n_0\
    );
\qspo_int[11]_i_7\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"6060202001010504"
    )
        port map (
      I0 => a_reg(6),
      I1 => a_reg(7),
      I2 => a_reg(3),
      I3 => a_reg(0),
      I4 => a_reg(1),
      I5 => a_reg(2),
      O => \qspo_int[11]_i_7_n_0\
    );
\qspo_int[12]_i_4\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"2BA5041623B0045A"
    )
        port map (
      I0 => a_reg(6),
      I1 => a_reg(7),
      I2 => a_reg(2),
      I3 => a_reg(1),
      I4 => a_reg(3),
      I5 => a_reg(0),
      O => \qspo_int[12]_i_4_n_0\
    );
\qspo_int[12]_i_5\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"4849494C4C4E4A42"
    )
        port map (
      I0 => a_reg(6),
      I1 => a_reg(7),
      I2 => a_reg(3),
      I3 => a_reg(0),
      I4 => a_reg(1),
      I5 => a_reg(2),
      O => \qspo_int[12]_i_5_n_0\
    );
\qspo_int[12]_i_6\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"4000400003171736"
    )
        port map (
      I0 => a_reg(6),
      I1 => a_reg(7),
      I2 => a_reg(2),
      I3 => a_reg(1),
      I4 => a_reg(0),
      I5 => a_reg(3),
      O => \qspo_int[12]_i_6_n_0\
    );
\qspo_int[12]_i_7\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"5020600001050114"
    )
        port map (
      I0 => a_reg(6),
      I1 => a_reg(7),
      I2 => a_reg(2),
      I3 => a_reg(1),
      I4 => a_reg(0),
      I5 => a_reg(3),
      O => \qspo_int[12]_i_7_n_0\
    );
\qspo_int[13]_i_4\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"22154444AB40552A"
    )
        port map (
      I0 => a_reg(6),
      I1 => a_reg(7),
      I2 => a_reg(0),
      I3 => a_reg(2),
      I4 => a_reg(3),
      I5 => a_reg(1),
      O => \qspo_int[13]_i_4_n_0\
    );
\qspo_int[13]_i_5\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"082969444C4E0282"
    )
        port map (
      I0 => a_reg(6),
      I1 => a_reg(7),
      I2 => a_reg(3),
      I3 => a_reg(0),
      I4 => a_reg(1),
      I5 => a_reg(2),
      O => \qspo_int[13]_i_5_n_0\
    );
\qspo_int[13]_i_6\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"50004000005F1F48"
    )
        port map (
      I0 => a_reg(6),
      I1 => a_reg(0),
      I2 => a_reg(7),
      I3 => a_reg(2),
      I4 => a_reg(1),
      I5 => a_reg(3),
      O => \qspo_int[13]_i_6_n_0\
    );
\qspo_int[13]_i_7\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"5600200200150144"
    )
        port map (
      I0 => a_reg(6),
      I1 => a_reg(7),
      I2 => a_reg(0),
      I3 => a_reg(2),
      I4 => a_reg(1),
      I5 => a_reg(3),
      O => \qspo_int[13]_i_7_n_0\
    );
\qspo_int[14]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AFA0CFCFAFA0C0C0"
    )
        port map (
      I0 => \qspo_int[15]_i_2_n_0\,
      I1 => \qspo_int[14]_i_2_n_0\,
      I2 => a_reg(5),
      I3 => \qspo_int[14]_i_3_n_0\,
      I4 => a_reg(4),
      I5 => \qspo_int[14]_i_4_n_0\,
      O => \qspo_int[14]_i_1_n_0\
    );
\qspo_int[14]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"4400400023733500"
    )
        port map (
      I0 => a_reg(6),
      I1 => a_reg(7),
      I2 => a_reg(0),
      I3 => a_reg(2),
      I4 => a_reg(1),
      I5 => a_reg(3),
      O => \qspo_int[14]_i_2_n_0\
    );
\qspo_int[14]_i_3\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"296161444C42C282"
    )
        port map (
      I0 => a_reg(6),
      I1 => a_reg(7),
      I2 => a_reg(3),
      I3 => a_reg(0),
      I4 => a_reg(1),
      I5 => a_reg(2),
      O => \qspo_int[14]_i_3_n_0\
    );
\qspo_int[14]_i_4\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"2124404084145202"
    )
        port map (
      I0 => a_reg(6),
      I1 => a_reg(7),
      I2 => a_reg(2),
      I3 => a_reg(0),
      I4 => a_reg(3),
      I5 => a_reg(1),
      O => \qspo_int[14]_i_4_n_0\
    );
\qspo_int[15]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AFA0CFCFAFA0C0C0"
    )
        port map (
      I0 => \qspo_int[15]_i_2_n_0\,
      I1 => \qspo_int[15]_i_3_n_0\,
      I2 => a_reg(5),
      I3 => \qspo_int[15]_i_4_n_0\,
      I4 => a_reg(4),
      I5 => \qspo_int[15]_i_5_n_0\,
      O => \qspo_int[15]_i_1_n_0\
    );
\qspo_int[15]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"4600600220550144"
    )
        port map (
      I0 => a_reg(6),
      I1 => a_reg(7),
      I2 => a_reg(0),
      I3 => a_reg(2),
      I4 => a_reg(1),
      I5 => a_reg(3),
      O => \qspo_int[15]_i_2_n_0\
    );
\qspo_int[15]_i_3\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"4027401202520252"
    )
        port map (
      I0 => a_reg(6),
      I1 => a_reg(7),
      I2 => a_reg(2),
      I3 => a_reg(3),
      I4 => a_reg(0),
      I5 => a_reg(1),
      O => \qspo_int[15]_i_3_n_0\
    );
\qspo_int[15]_i_4\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"1A055070B082D00A"
    )
        port map (
      I0 => a_reg(6),
      I1 => a_reg(0),
      I2 => a_reg(7),
      I3 => a_reg(3),
      I4 => a_reg(1),
      I5 => a_reg(2),
      O => \qspo_int[15]_i_4_n_0\
    );
\qspo_int[15]_i_5\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"248000008055100A"
    )
        port map (
      I0 => a_reg(6),
      I1 => a_reg(0),
      I2 => a_reg(3),
      I3 => a_reg(7),
      I4 => a_reg(2),
      I5 => a_reg(1),
      O => \qspo_int[15]_i_5_n_0\
    );
\qspo_int[16]_i_4\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"8080800000004642"
    )
        port map (
      I0 => a_reg(6),
      I1 => a_reg(2),
      I2 => a_reg(3),
      I3 => a_reg(0),
      I4 => a_reg(1),
      I5 => a_reg(7),
      O => \qspo_int[16]_i_4_n_0\
    );
\qspo_int[16]_i_5\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"3833C070C0C03000"
    )
        port map (
      I0 => a_reg(0),
      I1 => a_reg(6),
      I2 => a_reg(7),
      I3 => a_reg(3),
      I4 => a_reg(1),
      I5 => a_reg(2),
      O => \qspo_int[16]_i_5_n_0\
    );
\qspo_int[16]_i_6\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"4211421202520056"
    )
        port map (
      I0 => a_reg(6),
      I1 => a_reg(7),
      I2 => a_reg(2),
      I3 => a_reg(3),
      I4 => a_reg(0),
      I5 => a_reg(1),
      O => \qspo_int[16]_i_6_n_0\
    );
\qspo_int[16]_i_7\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"4600640220550144"
    )
        port map (
      I0 => a_reg(6),
      I1 => a_reg(7),
      I2 => a_reg(0),
      I3 => a_reg(2),
      I4 => a_reg(1),
      I5 => a_reg(3),
      O => \qspo_int[16]_i_7_n_0\
    );
\qspo_int[17]_i_4\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"8080000000000E42"
    )
        port map (
      I0 => a_reg(6),
      I1 => a_reg(2),
      I2 => a_reg(1),
      I3 => a_reg(0),
      I4 => a_reg(3),
      I5 => a_reg(7),
      O => \qspo_int[17]_i_4_n_0\
    );
\qspo_int[17]_i_5\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"45C5858008080848"
    )
        port map (
      I0 => a_reg(6),
      I1 => a_reg(7),
      I2 => a_reg(3),
      I3 => a_reg(0),
      I4 => a_reg(1),
      I5 => a_reg(2),
      O => \qspo_int[17]_i_5_n_0\
    );
\qspo_int[17]_i_6\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"4242101200215656"
    )
        port map (
      I0 => a_reg(6),
      I1 => a_reg(7),
      I2 => a_reg(2),
      I3 => a_reg(0),
      I4 => a_reg(3),
      I5 => a_reg(1),
      O => \qspo_int[17]_i_6_n_0\
    );
\qspo_int[17]_i_7\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0640642200554544"
    )
        port map (
      I0 => a_reg(6),
      I1 => a_reg(7),
      I2 => a_reg(0),
      I3 => a_reg(2),
      I4 => a_reg(1),
      I5 => a_reg(3),
      O => \qspo_int[17]_i_7_n_0\
    );
\qspo_int[18]_i_4\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"8000000000002E6A"
    )
        port map (
      I0 => a_reg(6),
      I1 => a_reg(2),
      I2 => a_reg(1),
      I3 => a_reg(0),
      I4 => a_reg(3),
      I5 => a_reg(7),
      O => \qspo_int[18]_i_4_n_0\
    );
\qspo_int[18]_i_5\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0481850108080808"
    )
        port map (
      I0 => a_reg(6),
      I1 => a_reg(7),
      I2 => a_reg(3),
      I3 => a_reg(1),
      I4 => a_reg(0),
      I5 => a_reg(2),
      O => \qspo_int[18]_i_5_n_0\
    );
\qspo_int[18]_i_6\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0001212114145454"
    )
        port map (
      I0 => a_reg(6),
      I1 => a_reg(7),
      I2 => a_reg(2),
      I3 => a_reg(0),
      I4 => a_reg(1),
      I5 => a_reg(3),
      O => \qspo_int[18]_i_6_n_0\
    );
\qspo_int[18]_i_7\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0466644245454554"
    )
        port map (
      I0 => a_reg(6),
      I1 => a_reg(7),
      I2 => a_reg(2),
      I3 => a_reg(1),
      I4 => a_reg(0),
      I5 => a_reg(3),
      O => \qspo_int[18]_i_7_n_0\
    );
\qspo_int[19]_i_4\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"000000000026002A"
    )
        port map (
      I0 => a_reg(6),
      I1 => a_reg(2),
      I2 => a_reg(0),
      I3 => a_reg(3),
      I4 => a_reg(1),
      I5 => a_reg(7),
      O => \qspo_int[19]_i_4_n_0\
    );
\qspo_int[19]_i_5\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000001000404"
    )
        port map (
      I0 => a_reg(7),
      I1 => a_reg(2),
      I2 => a_reg(3),
      I3 => a_reg(0),
      I4 => a_reg(1),
      I5 => a_reg(6),
      O => \qspo_int[19]_i_5_n_0\
    );
\qspo_int[19]_i_6\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0705050505505040"
    )
        port map (
      I0 => a_reg(6),
      I1 => a_reg(0),
      I2 => a_reg(7),
      I3 => a_reg(1),
      I4 => a_reg(2),
      I5 => a_reg(3),
      O => \qspo_int[19]_i_6_n_0\
    );
\qspo_int[19]_i_7\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0264446644455551"
    )
        port map (
      I0 => a_reg(6),
      I1 => a_reg(7),
      I2 => a_reg(0),
      I3 => a_reg(1),
      I4 => a_reg(2),
      I5 => a_reg(3),
      O => \qspo_int[19]_i_7_n_0\
    );
\qspo_int[20]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"A0A0A0A0CFC0C0C0"
    )
        port map (
      I0 => \qspo_int[20]_i_2_n_0\,
      I1 => \qspo_int[20]_i_3_n_0\,
      I2 => a_reg(5),
      I3 => a_reg(6),
      I4 => \qspo_int[20]_i_4_n_0\,
      I5 => a_reg(4),
      O => \qspo_int[20]_i_1_n_0\
    );
\qspo_int[20]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0026666444455111"
    )
        port map (
      I0 => a_reg(6),
      I1 => a_reg(7),
      I2 => a_reg(0),
      I3 => a_reg(1),
      I4 => a_reg(2),
      I5 => a_reg(3),
      O => \qspo_int[20]_i_2_n_0\
    );
\qspo_int[20]_i_3\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"000000001004EAAA"
    )
        port map (
      I0 => a_reg(3),
      I1 => a_reg(2),
      I2 => a_reg(1),
      I3 => a_reg(0),
      I4 => a_reg(7),
      I5 => a_reg(6),
      O => \qspo_int[20]_i_3_n_0\
    );
\qspo_int[20]_i_4\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"01"
    )
        port map (
      I0 => a_reg(2),
      I1 => a_reg(3),
      I2 => a_reg(7),
      O => \qspo_int[20]_i_4_n_0\
    );
\qspo_int[21]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"A0A0CFC0"
    )
        port map (
      I0 => \qspo_int[21]_i_2_n_0\,
      I1 => \qspo_int[21]_i_3_n_0\,
      I2 => a_reg(5),
      I3 => \qspo_int[21]_i_4_n_0\,
      I4 => a_reg(4),
      O => \qspo_int[21]_i_1_n_0\
    );
\qspo_int[21]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0002540055880055"
    )
        port map (
      I0 => a_reg(6),
      I1 => a_reg(1),
      I2 => a_reg(0),
      I3 => a_reg(7),
      I4 => a_reg(3),
      I5 => a_reg(2),
      O => \qspo_int[21]_i_2_n_0\
    );
\qspo_int[21]_i_3\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000055005400"
    )
        port map (
      I0 => a_reg(7),
      I1 => a_reg(2),
      I2 => a_reg(1),
      I3 => a_reg(3),
      I4 => a_reg(0),
      I5 => a_reg(6),
      O => \qspo_int[21]_i_3_n_0\
    );
\qspo_int[21]_i_4\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000111000000000"
    )
        port map (
      I0 => a_reg(7),
      I1 => a_reg(3),
      I2 => a_reg(0),
      I3 => a_reg(1),
      I4 => a_reg(2),
      I5 => a_reg(6),
      O => \qspo_int[21]_i_4_n_0\
    );
\qspo_int[22]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"00004F40"
    )
        port map (
      I0 => a_reg(6),
      I1 => \qspo_int[22]_i_2_n_0\,
      I2 => a_reg(5),
      I3 => \qspo_int[22]_i_3_n_0\,
      I4 => a_reg(4),
      O => \qspo_int[22]_i_1_n_0\
    );
\qspo_int[22]_i_2\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"00002000"
    )
        port map (
      I0 => a_reg(2),
      I1 => a_reg(0),
      I2 => a_reg(3),
      I3 => a_reg(1),
      I4 => a_reg(7),
      O => \qspo_int[22]_i_2_n_0\
    );
\qspo_int[22]_i_3\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000011000000000"
    )
        port map (
      I0 => a_reg(7),
      I1 => a_reg(3),
      I2 => a_reg(0),
      I3 => a_reg(1),
      I4 => a_reg(2),
      I5 => a_reg(6),
      O => \qspo_int[22]_i_3_n_0\
    );
\qspo_int[4]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0B08000000000000"
    )
        port map (
      I0 => \qspo_int[4]_i_2_n_0\,
      I1 => a_reg(5),
      I2 => a_reg(6),
      I3 => \qspo_int[4]_i_3_n_0\,
      I4 => a_reg(7),
      I5 => a_reg(4),
      O => \qspo_int[4]_i_1_n_0\
    );
\qspo_int[4]_i_2\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"0FE0"
    )
        port map (
      I0 => a_reg(1),
      I1 => a_reg(0),
      I2 => a_reg(2),
      I3 => a_reg(3),
      O => \qspo_int[4]_i_2_n_0\
    );
\qspo_int[4]_i_3\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"04"
    )
        port map (
      I0 => a_reg(3),
      I1 => a_reg(1),
      I2 => a_reg(2),
      O => \qspo_int[4]_i_3_n_0\
    );
\qspo_int[5]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"8B88888800000000"
    )
        port map (
      I0 => \qspo_int[5]_i_2_n_0\,
      I1 => a_reg(5),
      I2 => a_reg(6),
      I3 => \qspo_int[5]_i_3_n_0\,
      I4 => a_reg(7),
      I5 => a_reg(4),
      O => \qspo_int[5]_i_1_n_0\
    );
\qspo_int[5]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"1414145420000808"
    )
        port map (
      I0 => a_reg(6),
      I1 => a_reg(3),
      I2 => a_reg(2),
      I3 => a_reg(0),
      I4 => a_reg(1),
      I5 => a_reg(7),
      O => \qspo_int[5]_i_2_n_0\
    );
\qspo_int[5]_i_3\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"0034"
    )
        port map (
      I0 => a_reg(0),
      I1 => a_reg(2),
      I2 => a_reg(1),
      I3 => a_reg(3),
      O => \qspo_int[5]_i_3_n_0\
    );
\qspo_int[6]_i_4\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000151400000000"
    )
        port map (
      I0 => a_reg(7),
      I1 => a_reg(2),
      I2 => a_reg(1),
      I3 => a_reg(0),
      I4 => a_reg(3),
      I5 => a_reg(6),
      O => \qspo_int[6]_i_4_n_0\
    );
\qspo_int[6]_i_5\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000002000808"
    )
        port map (
      I0 => a_reg(7),
      I1 => a_reg(2),
      I2 => a_reg(3),
      I3 => a_reg(0),
      I4 => a_reg(1),
      I5 => a_reg(6),
      O => \qspo_int[6]_i_5_n_0\
    );
\qspo_int[6]_i_6\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"00005574"
    )
        port map (
      I0 => a_reg(6),
      I1 => a_reg(2),
      I2 => a_reg(1),
      I3 => a_reg(3),
      I4 => a_reg(7),
      O => \qspo_int[6]_i_6_n_0\
    );
\qspo_int[6]_i_7\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"1155555400802A00"
    )
        port map (
      I0 => a_reg(6),
      I1 => a_reg(1),
      I2 => a_reg(0),
      I3 => a_reg(3),
      I4 => a_reg(2),
      I5 => a_reg(7),
      O => \qspo_int[6]_i_7_n_0\
    );
\qspo_int[7]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AFA0CFCFAFA0C0C0"
    )
        port map (
      I0 => \qspo_int[7]_i_2_n_0\,
      I1 => \qspo_int[8]_i_3_n_0\,
      I2 => a_reg(5),
      I3 => \qspo_int[7]_i_3_n_0\,
      I4 => a_reg(4),
      I5 => \qspo_int[7]_i_4_n_0\,
      O => \qspo_int[7]_i_1_n_0\
    );
\qspo_int[7]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0404440462442245"
    )
        port map (
      I0 => a_reg(6),
      I1 => a_reg(7),
      I2 => a_reg(1),
      I3 => a_reg(3),
      I4 => a_reg(0),
      I5 => a_reg(2),
      O => \qspo_int[7]_i_2_n_0\
    );
\qspo_int[7]_i_3\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"000000000A080808"
    )
        port map (
      I0 => a_reg(7),
      I1 => a_reg(2),
      I2 => a_reg(3),
      I3 => a_reg(0),
      I4 => a_reg(1),
      I5 => a_reg(6),
      O => \qspo_int[7]_i_3_n_0\
    );
\qspo_int[7]_i_4\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0800155400000000"
    )
        port map (
      I0 => a_reg(3),
      I1 => a_reg(0),
      I2 => a_reg(1),
      I3 => a_reg(2),
      I4 => a_reg(7),
      I5 => a_reg(6),
      O => \qspo_int[7]_i_4_n_0\
    );
\qspo_int[8]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AFA0CFCFAFA0C0C0"
    )
        port map (
      I0 => \qspo_int[8]_i_2_n_0\,
      I1 => \qspo_int[8]_i_3_n_0\,
      I2 => a_reg(5),
      I3 => \qspo_int[8]_i_4_n_0\,
      I4 => a_reg(4),
      I5 => \qspo_int[8]_i_5_n_0\,
      O => \qspo_int[8]_i_1_n_0\
    );
\qspo_int[8]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"504A00000A081055"
    )
        port map (
      I0 => a_reg(6),
      I1 => a_reg(0),
      I2 => a_reg(7),
      I3 => a_reg(1),
      I4 => a_reg(3),
      I5 => a_reg(2),
      O => \qspo_int[8]_i_2_n_0\
    );
\qspo_int[8]_i_3\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"5111111111113130"
    )
        port map (
      I0 => a_reg(6),
      I1 => a_reg(7),
      I2 => a_reg(1),
      I3 => a_reg(0),
      I4 => a_reg(3),
      I5 => a_reg(2),
      O => \qspo_int[8]_i_3_n_0\
    );
\qspo_int[8]_i_4\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000031212161"
    )
        port map (
      I0 => a_reg(2),
      I1 => a_reg(3),
      I2 => a_reg(7),
      I3 => a_reg(0),
      I4 => a_reg(1),
      I5 => a_reg(6),
      O => \qspo_int[8]_i_4_n_0\
    );
\qspo_int[8]_i_5\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"4000C00030CC04CC"
    )
        port map (
      I0 => a_reg(0),
      I1 => a_reg(6),
      I2 => a_reg(2),
      I3 => a_reg(3),
      I4 => a_reg(1),
      I5 => a_reg(7),
      O => \qspo_int[8]_i_5_n_0\
    );
\qspo_int[9]_i_4\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"A888000206668AA2"
    )
        port map (
      I0 => a_reg(6),
      I1 => a_reg(2),
      I2 => a_reg(0),
      I3 => a_reg(1),
      I4 => a_reg(3),
      I5 => a_reg(7),
      O => \qspo_int[9]_i_4_n_0\
    );
\qspo_int[9]_i_5\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0020004444554588"
    )
        port map (
      I0 => a_reg(6),
      I1 => a_reg(7),
      I2 => a_reg(0),
      I3 => a_reg(2),
      I4 => a_reg(1),
      I5 => a_reg(3),
      O => \qspo_int[9]_i_5_n_0\
    );
\qspo_int[9]_i_6\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"5000400003010310"
    )
        port map (
      I0 => a_reg(6),
      I1 => a_reg(7),
      I2 => a_reg(2),
      I3 => a_reg(1),
      I4 => a_reg(0),
      I5 => a_reg(3),
      O => \qspo_int[9]_i_6_n_0\
    );
\qspo_int[9]_i_7\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"520A000008001055"
    )
        port map (
      I0 => a_reg(6),
      I1 => a_reg(0),
      I2 => a_reg(7),
      I3 => a_reg(1),
      I4 => a_reg(3),
      I5 => a_reg(2),
      O => \qspo_int[9]_i_7_n_0\
    );
\qspo_int_reg[10]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => clk,
      CE => '1',
      D => \qspo_int_reg[10]_i_1_n_0\,
      Q => qspo(6),
      R => '0'
    );
\qspo_int_reg[10]_i_1\: unisim.vcomponents.MUXF8
     port map (
      I0 => \qspo_int_reg[10]_i_2_n_0\,
      I1 => \qspo_int_reg[10]_i_3_n_0\,
      O => \qspo_int_reg[10]_i_1_n_0\,
      S => a_reg(5)
    );
\qspo_int_reg[10]_i_2\: unisim.vcomponents.MUXF7
     port map (
      I0 => \qspo_int[10]_i_4_n_0\,
      I1 => \qspo_int[10]_i_5_n_0\,
      O => \qspo_int_reg[10]_i_2_n_0\,
      S => a_reg(4)
    );
\qspo_int_reg[10]_i_3\: unisim.vcomponents.MUXF7
     port map (
      I0 => \qspo_int[10]_i_6_n_0\,
      I1 => \qspo_int[10]_i_7_n_0\,
      O => \qspo_int_reg[10]_i_3_n_0\,
      S => a_reg(4)
    );
\qspo_int_reg[11]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => clk,
      CE => '1',
      D => \qspo_int_reg[11]_i_1_n_0\,
      Q => qspo(7),
      R => '0'
    );
\qspo_int_reg[11]_i_1\: unisim.vcomponents.MUXF8
     port map (
      I0 => \qspo_int_reg[11]_i_2_n_0\,
      I1 => \qspo_int_reg[11]_i_3_n_0\,
      O => \qspo_int_reg[11]_i_1_n_0\,
      S => a_reg(5)
    );
\qspo_int_reg[11]_i_2\: unisim.vcomponents.MUXF7
     port map (
      I0 => \qspo_int[11]_i_4_n_0\,
      I1 => \qspo_int[11]_i_5_n_0\,
      O => \qspo_int_reg[11]_i_2_n_0\,
      S => a_reg(4)
    );
\qspo_int_reg[11]_i_3\: unisim.vcomponents.MUXF7
     port map (
      I0 => \qspo_int[11]_i_6_n_0\,
      I1 => \qspo_int[11]_i_7_n_0\,
      O => \qspo_int_reg[11]_i_3_n_0\,
      S => a_reg(4)
    );
\qspo_int_reg[12]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => clk,
      CE => '1',
      D => \qspo_int_reg[12]_i_1_n_0\,
      Q => qspo(8),
      R => '0'
    );
\qspo_int_reg[12]_i_1\: unisim.vcomponents.MUXF8
     port map (
      I0 => \qspo_int_reg[12]_i_2_n_0\,
      I1 => \qspo_int_reg[12]_i_3_n_0\,
      O => \qspo_int_reg[12]_i_1_n_0\,
      S => a_reg(5)
    );
\qspo_int_reg[12]_i_2\: unisim.vcomponents.MUXF7
     port map (
      I0 => \qspo_int[12]_i_4_n_0\,
      I1 => \qspo_int[12]_i_5_n_0\,
      O => \qspo_int_reg[12]_i_2_n_0\,
      S => a_reg(4)
    );
\qspo_int_reg[12]_i_3\: unisim.vcomponents.MUXF7
     port map (
      I0 => \qspo_int[12]_i_6_n_0\,
      I1 => \qspo_int[12]_i_7_n_0\,
      O => \qspo_int_reg[12]_i_3_n_0\,
      S => a_reg(4)
    );
\qspo_int_reg[13]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => clk,
      CE => '1',
      D => \qspo_int_reg[13]_i_1_n_0\,
      Q => qspo(9),
      R => '0'
    );
\qspo_int_reg[13]_i_1\: unisim.vcomponents.MUXF8
     port map (
      I0 => \qspo_int_reg[13]_i_2_n_0\,
      I1 => \qspo_int_reg[13]_i_3_n_0\,
      O => \qspo_int_reg[13]_i_1_n_0\,
      S => a_reg(5)
    );
\qspo_int_reg[13]_i_2\: unisim.vcomponents.MUXF7
     port map (
      I0 => \qspo_int[13]_i_4_n_0\,
      I1 => \qspo_int[13]_i_5_n_0\,
      O => \qspo_int_reg[13]_i_2_n_0\,
      S => a_reg(4)
    );
\qspo_int_reg[13]_i_3\: unisim.vcomponents.MUXF7
     port map (
      I0 => \qspo_int[13]_i_6_n_0\,
      I1 => \qspo_int[13]_i_7_n_0\,
      O => \qspo_int_reg[13]_i_3_n_0\,
      S => a_reg(4)
    );
\qspo_int_reg[14]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => clk,
      CE => '1',
      D => \qspo_int[14]_i_1_n_0\,
      Q => qspo(10),
      R => '0'
    );
\qspo_int_reg[15]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => clk,
      CE => '1',
      D => \qspo_int[15]_i_1_n_0\,
      Q => qspo(11),
      R => '0'
    );
\qspo_int_reg[16]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => clk,
      CE => '1',
      D => \qspo_int_reg[16]_i_1_n_0\,
      Q => qspo(12),
      R => '0'
    );
\qspo_int_reg[16]_i_1\: unisim.vcomponents.MUXF8
     port map (
      I0 => \qspo_int_reg[16]_i_2_n_0\,
      I1 => \qspo_int_reg[16]_i_3_n_0\,
      O => \qspo_int_reg[16]_i_1_n_0\,
      S => a_reg(5)
    );
\qspo_int_reg[16]_i_2\: unisim.vcomponents.MUXF7
     port map (
      I0 => \qspo_int[16]_i_4_n_0\,
      I1 => \qspo_int[16]_i_5_n_0\,
      O => \qspo_int_reg[16]_i_2_n_0\,
      S => a_reg(4)
    );
\qspo_int_reg[16]_i_3\: unisim.vcomponents.MUXF7
     port map (
      I0 => \qspo_int[16]_i_6_n_0\,
      I1 => \qspo_int[16]_i_7_n_0\,
      O => \qspo_int_reg[16]_i_3_n_0\,
      S => a_reg(4)
    );
\qspo_int_reg[17]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => clk,
      CE => '1',
      D => \qspo_int_reg[17]_i_1_n_0\,
      Q => qspo(13),
      R => '0'
    );
\qspo_int_reg[17]_i_1\: unisim.vcomponents.MUXF8
     port map (
      I0 => \qspo_int_reg[17]_i_2_n_0\,
      I1 => \qspo_int_reg[17]_i_3_n_0\,
      O => \qspo_int_reg[17]_i_1_n_0\,
      S => a_reg(5)
    );
\qspo_int_reg[17]_i_2\: unisim.vcomponents.MUXF7
     port map (
      I0 => \qspo_int[17]_i_4_n_0\,
      I1 => \qspo_int[17]_i_5_n_0\,
      O => \qspo_int_reg[17]_i_2_n_0\,
      S => a_reg(4)
    );
\qspo_int_reg[17]_i_3\: unisim.vcomponents.MUXF7
     port map (
      I0 => \qspo_int[17]_i_6_n_0\,
      I1 => \qspo_int[17]_i_7_n_0\,
      O => \qspo_int_reg[17]_i_3_n_0\,
      S => a_reg(4)
    );
\qspo_int_reg[18]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => clk,
      CE => '1',
      D => \qspo_int_reg[18]_i_1_n_0\,
      Q => qspo(14),
      R => '0'
    );
\qspo_int_reg[18]_i_1\: unisim.vcomponents.MUXF8
     port map (
      I0 => \qspo_int_reg[18]_i_2_n_0\,
      I1 => \qspo_int_reg[18]_i_3_n_0\,
      O => \qspo_int_reg[18]_i_1_n_0\,
      S => a_reg(5)
    );
\qspo_int_reg[18]_i_2\: unisim.vcomponents.MUXF7
     port map (
      I0 => \qspo_int[18]_i_4_n_0\,
      I1 => \qspo_int[18]_i_5_n_0\,
      O => \qspo_int_reg[18]_i_2_n_0\,
      S => a_reg(4)
    );
\qspo_int_reg[18]_i_3\: unisim.vcomponents.MUXF7
     port map (
      I0 => \qspo_int[18]_i_6_n_0\,
      I1 => \qspo_int[18]_i_7_n_0\,
      O => \qspo_int_reg[18]_i_3_n_0\,
      S => a_reg(4)
    );
\qspo_int_reg[19]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => clk,
      CE => '1',
      D => \qspo_int_reg[19]_i_1_n_0\,
      Q => qspo(15),
      R => '0'
    );
\qspo_int_reg[19]_i_1\: unisim.vcomponents.MUXF8
     port map (
      I0 => \qspo_int_reg[19]_i_2_n_0\,
      I1 => \qspo_int_reg[19]_i_3_n_0\,
      O => \qspo_int_reg[19]_i_1_n_0\,
      S => a_reg(5)
    );
\qspo_int_reg[19]_i_2\: unisim.vcomponents.MUXF7
     port map (
      I0 => \qspo_int[19]_i_4_n_0\,
      I1 => \qspo_int[19]_i_5_n_0\,
      O => \qspo_int_reg[19]_i_2_n_0\,
      S => a_reg(4)
    );
\qspo_int_reg[19]_i_3\: unisim.vcomponents.MUXF7
     port map (
      I0 => \qspo_int[19]_i_6_n_0\,
      I1 => \qspo_int[19]_i_7_n_0\,
      O => \qspo_int_reg[19]_i_3_n_0\,
      S => a_reg(4)
    );
\qspo_int_reg[20]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => clk,
      CE => '1',
      D => \qspo_int[20]_i_1_n_0\,
      Q => qspo(16),
      R => '0'
    );
\qspo_int_reg[21]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => clk,
      CE => '1',
      D => \qspo_int[21]_i_1_n_0\,
      Q => qspo(17),
      R => '0'
    );
\qspo_int_reg[22]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => clk,
      CE => '1',
      D => \qspo_int[22]_i_1_n_0\,
      Q => qspo(18),
      R => '0'
    );
\qspo_int_reg[4]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => clk,
      CE => '1',
      D => \qspo_int[4]_i_1_n_0\,
      Q => qspo(0),
      R => '0'
    );
\qspo_int_reg[5]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => clk,
      CE => '1',
      D => \qspo_int[5]_i_1_n_0\,
      Q => qspo(1),
      R => '0'
    );
\qspo_int_reg[6]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => clk,
      CE => '1',
      D => \qspo_int_reg[6]_i_1_n_0\,
      Q => qspo(2),
      R => '0'
    );
\qspo_int_reg[6]_i_1\: unisim.vcomponents.MUXF8
     port map (
      I0 => \qspo_int_reg[6]_i_2_n_0\,
      I1 => \qspo_int_reg[6]_i_3_n_0\,
      O => \qspo_int_reg[6]_i_1_n_0\,
      S => a_reg(5)
    );
\qspo_int_reg[6]_i_2\: unisim.vcomponents.MUXF7
     port map (
      I0 => \qspo_int[6]_i_4_n_0\,
      I1 => \qspo_int[6]_i_5_n_0\,
      O => \qspo_int_reg[6]_i_2_n_0\,
      S => a_reg(4)
    );
\qspo_int_reg[6]_i_3\: unisim.vcomponents.MUXF7
     port map (
      I0 => \qspo_int[6]_i_6_n_0\,
      I1 => \qspo_int[6]_i_7_n_0\,
      O => \qspo_int_reg[6]_i_3_n_0\,
      S => a_reg(4)
    );
\qspo_int_reg[7]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => clk,
      CE => '1',
      D => \qspo_int[7]_i_1_n_0\,
      Q => qspo(3),
      R => '0'
    );
\qspo_int_reg[8]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => clk,
      CE => '1',
      D => \qspo_int[8]_i_1_n_0\,
      Q => qspo(4),
      R => '0'
    );
\qspo_int_reg[9]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => clk,
      CE => '1',
      D => \qspo_int_reg[9]_i_1_n_0\,
      Q => qspo(5),
      R => '0'
    );
\qspo_int_reg[9]_i_1\: unisim.vcomponents.MUXF8
     port map (
      I0 => \qspo_int_reg[9]_i_2_n_0\,
      I1 => \qspo_int_reg[9]_i_3_n_0\,
      O => \qspo_int_reg[9]_i_1_n_0\,
      S => a_reg(5)
    );
\qspo_int_reg[9]_i_2\: unisim.vcomponents.MUXF7
     port map (
      I0 => \qspo_int[9]_i_4_n_0\,
      I1 => \qspo_int[9]_i_5_n_0\,
      O => \qspo_int_reg[9]_i_2_n_0\,
      S => a_reg(4)
    );
\qspo_int_reg[9]_i_3\: unisim.vcomponents.MUXF7
     port map (
      I0 => \qspo_int[9]_i_6_n_0\,
      I1 => \qspo_int[9]_i_7_n_0\,
      O => \qspo_int_reg[9]_i_3_n_0\,
      S => a_reg(4)
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_dist_mem_gen_v8_0_13_synth is
  port (
    qspo : out STD_LOGIC_VECTOR ( 18 downto 0 );
    a : in STD_LOGIC_VECTOR ( 7 downto 0 );
    clk : in STD_LOGIC
  );
end decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_dist_mem_gen_v8_0_13_synth;

architecture STRUCTURE of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_dist_mem_gen_v8_0_13_synth is
begin
\gen_rom.rom_inst\: entity work.decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_rom
     port map (
      a(7 downto 0) => a(7 downto 0),
      clk => clk,
      qspo(18 downto 0) => qspo(18 downto 0)
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_dist_mem_gen_v8_0_13 is
  port (
    a : in STD_LOGIC_VECTOR ( 7 downto 0 );
    d : in STD_LOGIC_VECTOR ( 27 downto 0 );
    dpra : in STD_LOGIC_VECTOR ( 7 downto 0 );
    clk : in STD_LOGIC;
    we : in STD_LOGIC;
    i_ce : in STD_LOGIC;
    qspo_ce : in STD_LOGIC;
    qdpo_ce : in STD_LOGIC;
    qdpo_clk : in STD_LOGIC;
    qspo_rst : in STD_LOGIC;
    qdpo_rst : in STD_LOGIC;
    qspo_srst : in STD_LOGIC;
    qdpo_srst : in STD_LOGIC;
    spo : out STD_LOGIC_VECTOR ( 27 downto 0 );
    dpo : out STD_LOGIC_VECTOR ( 27 downto 0 );
    qspo : out STD_LOGIC_VECTOR ( 27 downto 0 );
    qdpo : out STD_LOGIC_VECTOR ( 27 downto 0 )
  );
  attribute C_ADDR_WIDTH : integer;
  attribute C_ADDR_WIDTH of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_dist_mem_gen_v8_0_13 : entity is 8;
  attribute C_DEFAULT_DATA : string;
  attribute C_DEFAULT_DATA of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_dist_mem_gen_v8_0_13 : entity is "0";
  attribute C_DEPTH : integer;
  attribute C_DEPTH of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_dist_mem_gen_v8_0_13 : entity is 224;
  attribute C_ELABORATION_DIR : string;
  attribute C_ELABORATION_DIR of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_dist_mem_gen_v8_0_13 : entity is "./";
  attribute C_FAMILY : string;
  attribute C_FAMILY of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_dist_mem_gen_v8_0_13 : entity is "artix7";
  attribute C_HAS_CLK : integer;
  attribute C_HAS_CLK of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_dist_mem_gen_v8_0_13 : entity is 1;
  attribute C_HAS_D : integer;
  attribute C_HAS_D of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_dist_mem_gen_v8_0_13 : entity is 0;
  attribute C_HAS_DPO : integer;
  attribute C_HAS_DPO of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_dist_mem_gen_v8_0_13 : entity is 0;
  attribute C_HAS_DPRA : integer;
  attribute C_HAS_DPRA of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_dist_mem_gen_v8_0_13 : entity is 0;
  attribute C_HAS_I_CE : integer;
  attribute C_HAS_I_CE of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_dist_mem_gen_v8_0_13 : entity is 0;
  attribute C_HAS_QDPO : integer;
  attribute C_HAS_QDPO of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_dist_mem_gen_v8_0_13 : entity is 0;
  attribute C_HAS_QDPO_CE : integer;
  attribute C_HAS_QDPO_CE of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_dist_mem_gen_v8_0_13 : entity is 0;
  attribute C_HAS_QDPO_CLK : integer;
  attribute C_HAS_QDPO_CLK of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_dist_mem_gen_v8_0_13 : entity is 0;
  attribute C_HAS_QDPO_RST : integer;
  attribute C_HAS_QDPO_RST of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_dist_mem_gen_v8_0_13 : entity is 0;
  attribute C_HAS_QDPO_SRST : integer;
  attribute C_HAS_QDPO_SRST of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_dist_mem_gen_v8_0_13 : entity is 0;
  attribute C_HAS_QSPO : integer;
  attribute C_HAS_QSPO of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_dist_mem_gen_v8_0_13 : entity is 1;
  attribute C_HAS_QSPO_CE : integer;
  attribute C_HAS_QSPO_CE of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_dist_mem_gen_v8_0_13 : entity is 0;
  attribute C_HAS_QSPO_RST : integer;
  attribute C_HAS_QSPO_RST of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_dist_mem_gen_v8_0_13 : entity is 0;
  attribute C_HAS_QSPO_SRST : integer;
  attribute C_HAS_QSPO_SRST of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_dist_mem_gen_v8_0_13 : entity is 0;
  attribute C_HAS_SPO : integer;
  attribute C_HAS_SPO of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_dist_mem_gen_v8_0_13 : entity is 0;
  attribute C_HAS_WE : integer;
  attribute C_HAS_WE of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_dist_mem_gen_v8_0_13 : entity is 0;
  attribute C_MEM_INIT_FILE : string;
  attribute C_MEM_INIT_FILE of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_dist_mem_gen_v8_0_13 : entity is "mnist_rom.mif";
  attribute C_MEM_TYPE : integer;
  attribute C_MEM_TYPE of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_dist_mem_gen_v8_0_13 : entity is 0;
  attribute C_PARSER_TYPE : integer;
  attribute C_PARSER_TYPE of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_dist_mem_gen_v8_0_13 : entity is 1;
  attribute C_PIPELINE_STAGES : integer;
  attribute C_PIPELINE_STAGES of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_dist_mem_gen_v8_0_13 : entity is 0;
  attribute C_QCE_JOINED : integer;
  attribute C_QCE_JOINED of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_dist_mem_gen_v8_0_13 : entity is 0;
  attribute C_QUALIFY_WE : integer;
  attribute C_QUALIFY_WE of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_dist_mem_gen_v8_0_13 : entity is 0;
  attribute C_READ_MIF : integer;
  attribute C_READ_MIF of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_dist_mem_gen_v8_0_13 : entity is 1;
  attribute C_REG_A_D_INPUTS : integer;
  attribute C_REG_A_D_INPUTS of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_dist_mem_gen_v8_0_13 : entity is 1;
  attribute C_REG_DPRA_INPUT : integer;
  attribute C_REG_DPRA_INPUT of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_dist_mem_gen_v8_0_13 : entity is 0;
  attribute C_SYNC_ENABLE : integer;
  attribute C_SYNC_ENABLE of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_dist_mem_gen_v8_0_13 : entity is 1;
  attribute C_WIDTH : integer;
  attribute C_WIDTH of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_dist_mem_gen_v8_0_13 : entity is 28;
end decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_dist_mem_gen_v8_0_13;

architecture STRUCTURE of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_dist_mem_gen_v8_0_13 is
  signal \<const0>\ : STD_LOGIC;
  signal \^qspo\ : STD_LOGIC_VECTOR ( 22 downto 4 );
begin
  dpo(27) <= \<const0>\;
  dpo(26) <= \<const0>\;
  dpo(25) <= \<const0>\;
  dpo(24) <= \<const0>\;
  dpo(23) <= \<const0>\;
  dpo(22) <= \<const0>\;
  dpo(21) <= \<const0>\;
  dpo(20) <= \<const0>\;
  dpo(19) <= \<const0>\;
  dpo(18) <= \<const0>\;
  dpo(17) <= \<const0>\;
  dpo(16) <= \<const0>\;
  dpo(15) <= \<const0>\;
  dpo(14) <= \<const0>\;
  dpo(13) <= \<const0>\;
  dpo(12) <= \<const0>\;
  dpo(11) <= \<const0>\;
  dpo(10) <= \<const0>\;
  dpo(9) <= \<const0>\;
  dpo(8) <= \<const0>\;
  dpo(7) <= \<const0>\;
  dpo(6) <= \<const0>\;
  dpo(5) <= \<const0>\;
  dpo(4) <= \<const0>\;
  dpo(3) <= \<const0>\;
  dpo(2) <= \<const0>\;
  dpo(1) <= \<const0>\;
  dpo(0) <= \<const0>\;
  qdpo(27) <= \<const0>\;
  qdpo(26) <= \<const0>\;
  qdpo(25) <= \<const0>\;
  qdpo(24) <= \<const0>\;
  qdpo(23) <= \<const0>\;
  qdpo(22) <= \<const0>\;
  qdpo(21) <= \<const0>\;
  qdpo(20) <= \<const0>\;
  qdpo(19) <= \<const0>\;
  qdpo(18) <= \<const0>\;
  qdpo(17) <= \<const0>\;
  qdpo(16) <= \<const0>\;
  qdpo(15) <= \<const0>\;
  qdpo(14) <= \<const0>\;
  qdpo(13) <= \<const0>\;
  qdpo(12) <= \<const0>\;
  qdpo(11) <= \<const0>\;
  qdpo(10) <= \<const0>\;
  qdpo(9) <= \<const0>\;
  qdpo(8) <= \<const0>\;
  qdpo(7) <= \<const0>\;
  qdpo(6) <= \<const0>\;
  qdpo(5) <= \<const0>\;
  qdpo(4) <= \<const0>\;
  qdpo(3) <= \<const0>\;
  qdpo(2) <= \<const0>\;
  qdpo(1) <= \<const0>\;
  qdpo(0) <= \<const0>\;
  qspo(27) <= \<const0>\;
  qspo(26) <= \<const0>\;
  qspo(25) <= \<const0>\;
  qspo(24) <= \<const0>\;
  qspo(23) <= \<const0>\;
  qspo(22 downto 4) <= \^qspo\(22 downto 4);
  qspo(3) <= \<const0>\;
  qspo(2) <= \<const0>\;
  qspo(1) <= \<const0>\;
  qspo(0) <= \<const0>\;
  spo(27) <= \<const0>\;
  spo(26) <= \<const0>\;
  spo(25) <= \<const0>\;
  spo(24) <= \<const0>\;
  spo(23) <= \<const0>\;
  spo(22) <= \<const0>\;
  spo(21) <= \<const0>\;
  spo(20) <= \<const0>\;
  spo(19) <= \<const0>\;
  spo(18) <= \<const0>\;
  spo(17) <= \<const0>\;
  spo(16) <= \<const0>\;
  spo(15) <= \<const0>\;
  spo(14) <= \<const0>\;
  spo(13) <= \<const0>\;
  spo(12) <= \<const0>\;
  spo(11) <= \<const0>\;
  spo(10) <= \<const0>\;
  spo(9) <= \<const0>\;
  spo(8) <= \<const0>\;
  spo(7) <= \<const0>\;
  spo(6) <= \<const0>\;
  spo(5) <= \<const0>\;
  spo(4) <= \<const0>\;
  spo(3) <= \<const0>\;
  spo(2) <= \<const0>\;
  spo(1) <= \<const0>\;
  spo(0) <= \<const0>\;
GND: unisim.vcomponents.GND
     port map (
      G => \<const0>\
    );
\synth_options.dist_mem_inst\: entity work.decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_dist_mem_gen_v8_0_13_synth
     port map (
      a(7 downto 0) => a(7 downto 0),
      clk => clk,
      qspo(18 downto 0) => \^qspo\(22 downto 4)
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix is
  port (
    a : in STD_LOGIC_VECTOR ( 7 downto 0 );
    clk : in STD_LOGIC;
    qspo : out STD_LOGIC_VECTOR ( 27 downto 0 )
  );
  attribute NotValidForBitStream : boolean;
  attribute NotValidForBitStream of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix : entity is true;
  attribute CHECK_LICENSE_TYPE : string;
  attribute CHECK_LICENSE_TYPE of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix : entity is "mnist_rom,dist_mem_gen_v8_0_13,{}";
  attribute downgradeipidentifiedwarnings : string;
  attribute downgradeipidentifiedwarnings of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix : entity is "yes";
  attribute x_core_info : string;
  attribute x_core_info of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix : entity is "dist_mem_gen_v8_0_13,Vivado 2019.2";
end decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix;

architecture STRUCTURE of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix is
  signal NLW_U0_dpo_UNCONNECTED : STD_LOGIC_VECTOR ( 27 downto 0 );
  signal NLW_U0_qdpo_UNCONNECTED : STD_LOGIC_VECTOR ( 27 downto 0 );
  signal NLW_U0_spo_UNCONNECTED : STD_LOGIC_VECTOR ( 27 downto 0 );
  attribute C_FAMILY : string;
  attribute C_FAMILY of U0 : label is "artix7";
  attribute C_HAS_D : integer;
  attribute C_HAS_D of U0 : label is 0;
  attribute C_HAS_DPO : integer;
  attribute C_HAS_DPO of U0 : label is 0;
  attribute C_HAS_DPRA : integer;
  attribute C_HAS_DPRA of U0 : label is 0;
  attribute C_HAS_I_CE : integer;
  attribute C_HAS_I_CE of U0 : label is 0;
  attribute C_HAS_QDPO : integer;
  attribute C_HAS_QDPO of U0 : label is 0;
  attribute C_HAS_QDPO_CE : integer;
  attribute C_HAS_QDPO_CE of U0 : label is 0;
  attribute C_HAS_QDPO_CLK : integer;
  attribute C_HAS_QDPO_CLK of U0 : label is 0;
  attribute C_HAS_QDPO_RST : integer;
  attribute C_HAS_QDPO_RST of U0 : label is 0;
  attribute C_HAS_QDPO_SRST : integer;
  attribute C_HAS_QDPO_SRST of U0 : label is 0;
  attribute C_HAS_WE : integer;
  attribute C_HAS_WE of U0 : label is 0;
  attribute C_MEM_TYPE : integer;
  attribute C_MEM_TYPE of U0 : label is 0;
  attribute C_PIPELINE_STAGES : integer;
  attribute C_PIPELINE_STAGES of U0 : label is 0;
  attribute C_QCE_JOINED : integer;
  attribute C_QCE_JOINED of U0 : label is 0;
  attribute C_QUALIFY_WE : integer;
  attribute C_QUALIFY_WE of U0 : label is 0;
  attribute C_REG_DPRA_INPUT : integer;
  attribute C_REG_DPRA_INPUT of U0 : label is 0;
  attribute c_addr_width : integer;
  attribute c_addr_width of U0 : label is 8;
  attribute c_default_data : string;
  attribute c_default_data of U0 : label is "0";
  attribute c_depth : integer;
  attribute c_depth of U0 : label is 224;
  attribute c_elaboration_dir : string;
  attribute c_elaboration_dir of U0 : label is "./";
  attribute c_has_clk : integer;
  attribute c_has_clk of U0 : label is 1;
  attribute c_has_qspo : integer;
  attribute c_has_qspo of U0 : label is 1;
  attribute c_has_qspo_ce : integer;
  attribute c_has_qspo_ce of U0 : label is 0;
  attribute c_has_qspo_rst : integer;
  attribute c_has_qspo_rst of U0 : label is 0;
  attribute c_has_qspo_srst : integer;
  attribute c_has_qspo_srst of U0 : label is 0;
  attribute c_has_spo : integer;
  attribute c_has_spo of U0 : label is 0;
  attribute c_mem_init_file : string;
  attribute c_mem_init_file of U0 : label is "mnist_rom.mif";
  attribute c_parser_type : integer;
  attribute c_parser_type of U0 : label is 1;
  attribute c_read_mif : integer;
  attribute c_read_mif of U0 : label is 1;
  attribute c_reg_a_d_inputs : integer;
  attribute c_reg_a_d_inputs of U0 : label is 1;
  attribute c_sync_enable : integer;
  attribute c_sync_enable of U0 : label is 1;
  attribute c_width : integer;
  attribute c_width of U0 : label is 28;
begin
U0: entity work.decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_dist_mem_gen_v8_0_13
     port map (
      a(7 downto 0) => a(7 downto 0),
      clk => clk,
      d(27 downto 0) => B"0000000000000000000000000000",
      dpo(27 downto 0) => NLW_U0_dpo_UNCONNECTED(27 downto 0),
      dpra(7 downto 0) => B"00000000",
      i_ce => '1',
      qdpo(27 downto 0) => NLW_U0_qdpo_UNCONNECTED(27 downto 0),
      qdpo_ce => '1',
      qdpo_clk => '0',
      qdpo_rst => '0',
      qdpo_srst => '0',
      qspo(27 downto 0) => qspo(27 downto 0),
      qspo_ce => '1',
      qspo_rst => '0',
      qspo_srst => '0',
      spo(27 downto 0) => NLW_U0_spo_UNCONNECTED(27 downto 0),
      we => '0'
    );
end STRUCTURE;
