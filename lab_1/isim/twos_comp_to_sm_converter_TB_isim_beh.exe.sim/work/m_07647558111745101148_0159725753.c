/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/parallels/ucla/csm152a/labs/lab_1/twos_comp_to_sm_converter_TB.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static const char *ng3 = "Setting D <= %b (%d), sign bit: %b, SM: %b (%d)";
static const char *ng4 = "Test 1 SUCCESS";
static const char *ng5 = "Test 1 FAILURE";
static unsigned int ng6[] = {1365U, 0U};
static const char *ng7 = "Test 2 SUCCESS";
static const char *ng8 = "Test 2 FAILURE";
static unsigned int ng9[] = {63U, 0U};
static const char *ng10 = "Test 3 SUCCESS";
static const char *ng11 = "Test 3 FAILURE";
static unsigned int ng12[] = {2048U, 0U};
static const char *ng13 = "Test 4 SUCCESS";
static const char *ng14 = "Test 4 FAILURE";
static unsigned int ng15[] = {4095U, 0U};
static unsigned int ng16[] = {1U, 0U};
static const char *ng17 = "Test 5 SUCCESS";
static const char *ng18 = "Test 5 FAILURE";
static unsigned int ng19[] = {3855U, 0U};
static unsigned int ng20[] = {241U, 0U};
static const char *ng21 = "Test 6 SUCCESS";
static const char *ng22 = "Test 6 FAILURE";
static unsigned int ng23[] = {2730U, 0U};
static unsigned int ng24[] = {1366U, 0U};
static const char *ng25 = "Test 7 SUCCESS";
static const char *ng26 = "Test 7 FAILURE";
static unsigned int ng27[] = {325U, 0U};
static const char *ng28 = "Test 8 SUCCESS";
static const char *ng29 = "Test 8 FAILURE";
static const char *ng30 = "Test 9 SUCCESS";
static const char *ng31 = "Test 9 FAILURE";
static const char *ng32 = "Test 10 SUCCESS";
static const char *ng33 = "Test 10 FAILURE";
static unsigned int ng34[] = {250U, 0U};
static unsigned int ng35[] = {2047U, 0U};



static void Initial_29_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 2680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);

LAB4:    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 12);
    xsi_set_current_line(35, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    goto LAB1;

}

static void Always_38_1(char *t0)
{
    char t75[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;

LAB0:    t1 = (t0 + 2928U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 2984);
    t3 = (t0 + 2736);
    xsi_add_process_toexecute(0, t2, t3);
    t4 = (t0 + 3232);
    t5 = (t0 + 2736);
    xsi_add_process_toexecute(0, t4, t5);
    t6 = (t0 + 3480);
    t7 = (t0 + 2736);
    xsi_add_process_toexecute(0, t6, t7);
    t8 = (t0 + 3728);
    t9 = (t0 + 2736);
    xsi_add_process_toexecute(0, t8, t9);
    t10 = (t0 + 3976);
    t11 = (t0 + 2736);
    xsi_add_process_toexecute(0, t10, t11);
    t12 = (t0 + 4224);
    t13 = (t0 + 2736);
    xsi_add_process_toexecute(0, t12, t13);
    t14 = (t0 + 4472);
    t15 = (t0 + 2736);
    xsi_add_process_toexecute(0, t14, t15);
    t16 = (t0 + 4720);
    t17 = (t0 + 2736);
    xsi_add_process_toexecute(0, t16, t17);
    t18 = (t0 + 4968);
    t19 = (t0 + 2736);
    xsi_add_process_toexecute(0, t18, t19);
    t20 = (t0 + 5216);
    t21 = (t0 + 2736);
    xsi_add_process_toexecute(0, t20, t21);
    t22 = (t0 + 5464);
    t23 = (t0 + 2736);
    xsi_add_process_toexecute(0, t22, t23);
    t24 = (t0 + 5712);
    t25 = (t0 + 2736);
    xsi_add_process_toexecute(0, t24, t25);
    t26 = (t0 + 5960);
    t27 = (t0 + 2736);
    xsi_add_process_toexecute(0, t26, t27);
    t28 = (t0 + 6208);
    t29 = (t0 + 2736);
    xsi_add_process_toexecute(0, t28, t29);
    t30 = (t0 + 6456);
    t31 = (t0 + 2736);
    xsi_add_process_toexecute(0, t30, t31);
    t32 = (t0 + 6704);
    t33 = (t0 + 2736);
    xsi_add_process_toexecute(0, t32, t33);
    t34 = (t0 + 6952);
    t35 = (t0 + 2736);
    xsi_add_process_toexecute(0, t34, t35);
    t36 = (t0 + 7200);
    t37 = (t0 + 2736);
    xsi_add_process_toexecute(0, t36, t37);
    t38 = (t0 + 7448);
    t39 = (t0 + 2736);
    xsi_add_process_toexecute(0, t38, t39);
    t40 = (t0 + 7696);
    t41 = (t0 + 2736);
    xsi_add_process_toexecute(0, t40, t41);
    t42 = (t0 + 7944);
    t43 = (t0 + 2736);
    xsi_add_process_toexecute(0, t42, t43);
    t44 = (t0 + 8192);
    t45 = (t0 + 2736);
    xsi_add_process_toexecute(0, t44, t45);
    t46 = (t0 + 8440);
    t47 = (t0 + 2736);
    xsi_add_process_toexecute(0, t46, t47);
    t48 = (t0 + 8688);
    t49 = (t0 + 2736);
    xsi_add_process_toexecute(0, t48, t49);
    t50 = (t0 + 8936);
    t51 = (t0 + 2736);
    xsi_add_process_toexecute(0, t50, t51);
    t52 = (t0 + 9184);
    t53 = (t0 + 2736);
    xsi_add_process_toexecute(0, t52, t53);
    t54 = (t0 + 9432);
    t55 = (t0 + 2736);
    xsi_add_process_toexecute(0, t54, t55);
    t56 = (t0 + 9680);
    t57 = (t0 + 2736);
    xsi_add_process_toexecute(0, t56, t57);
    t58 = (t0 + 9928);
    t59 = (t0 + 2736);
    xsi_add_process_toexecute(0, t58, t59);
    t60 = (t0 + 10176);
    t61 = (t0 + 2736);
    xsi_add_process_toexecute(0, t60, t61);
    t62 = (t0 + 10424);
    t63 = (t0 + 2736);
    xsi_add_process_toexecute(0, t62, t63);
    t64 = (t0 + 10672);
    t65 = (t0 + 2736);
    xsi_add_process_toexecute(0, t64, t65);
    t66 = (t0 + 10920);
    t67 = (t0 + 2736);
    xsi_add_process_toexecute(0, t66, t67);
    t68 = (t0 + 11168);
    t69 = (t0 + 2736);
    xsi_add_process_toexecute(0, t68, t69);
    t70 = (t0 + 11416);
    t71 = (t0 + 2736);
    xsi_add_process_toexecute(0, t70, t71);
    t72 = (t0 + 11664);
    t73 = (t0 + 2736);
    xsi_add_process_toexecute(0, t72, t73);
    t74 = (t0 + 1768);
    memset(t75, 0, 8);
    *((unsigned int *)t75) = 36;
    xsi_vlogvar_assign_value(t74, t75, 0, 0, 32);
    t76 = (t0 + 12176);
    *((int *)t76) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t77 = (t0 + 1768);
    t78 = (t77 + 56U);
    t79 = *((char **)t78);
    if (*((int *)t79) > 0)
        goto LAB5;

LAB6:    t81 = (t0 + 2736);
    xsi_clean_active_fork_process_list(t81);
    goto LAB2;

LAB5:    t80 = (t0 + 12176);
    *((int *)t80) = 1;
    goto LAB1;

}

static void Forked_40_2(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;

LAB0:    t1 = (t0 + 3176U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 2984);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(40, ng0);
    t3 = (t0 + 2984);
    xsi_process_wait(t3, 100000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t6, t4, 8);
    t7 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t7 - 1);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(40, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 12, 0LL);
    goto LAB5;

}

static void Forked_41_3(char *t0)
{
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    t1 = (t0 + 3424U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 3232);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(41, ng0);
    t3 = (t0 + 3232);
    xsi_process_wait(t3, 110000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t13, t4, 8);
    t16 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t16 - 1);
    xsi_vlogvar_assign_value(t2, t13, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(41, ng0);
    t4 = (t0 + 1608);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 1608);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 1608);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memset(t13, 0, 8);
    t14 = (t13 + 4);
    t15 = (t12 + 4);
    t16 = *((unsigned int *)t12);
    t17 = (t16 >> 11);
    t18 = (t17 & 1);
    *((unsigned int *)t13) = t18;
    t19 = *((unsigned int *)t15);
    t20 = (t19 >> 11);
    t21 = (t20 & 1);
    *((unsigned int *)t14) = t21;
    t22 = (t0 + 1208U);
    t23 = *((char **)t22);
    t22 = (t0 + 1208U);
    t24 = *((char **)t22);
    xsi_vlogfile_write(1, 0, 0, ng3, 6, t0, (char)119, t6, 12, (char)119, t9, 12, (char)118, t13, 1, (char)119, t23, 12, (char)119, t24, 12);
    goto LAB5;

}

static void Forked_42_4(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;

LAB0:    t1 = (t0 + 3672U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 3480);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(42, ng0);
    t3 = (t0 + 3480);
    xsi_process_wait(t3, 110000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t6, t4, 8);
    t9 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t9 - 1);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(42, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB10;

LAB7:    if (t18 != 0)
        goto LAB9;

LAB8:    *((unsigned int *)t6) = 1;

LAB10:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(42, ng0);
    xsi_vlogfile_write(1, 0, 0, ng5, 1, t0);

LAB13:    goto LAB5;

LAB9:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB10;

LAB11:    xsi_set_current_line(42, ng0);
    xsi_vlogfile_write(1, 0, 0, ng4, 1, t0);
    goto LAB13;

}

static void Forked_44_5(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;

LAB0:    t1 = (t0 + 3920U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 3728);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(44, ng0);
    t3 = (t0 + 3728);
    xsi_process_wait(t3, 180000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t6, t4, 8);
    t7 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t7 - 1);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(44, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 12, 0LL);
    goto LAB5;

}

static void Forked_45_6(char *t0)
{
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    t1 = (t0 + 4168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 3976);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(45, ng0);
    t3 = (t0 + 3976);
    xsi_process_wait(t3, 190000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t13, t4, 8);
    t16 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t16 - 1);
    xsi_vlogvar_assign_value(t2, t13, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(45, ng0);
    t4 = (t0 + 1608);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 1608);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 1608);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memset(t13, 0, 8);
    t14 = (t13 + 4);
    t15 = (t12 + 4);
    t16 = *((unsigned int *)t12);
    t17 = (t16 >> 11);
    t18 = (t17 & 1);
    *((unsigned int *)t13) = t18;
    t19 = *((unsigned int *)t15);
    t20 = (t19 >> 11);
    t21 = (t20 & 1);
    *((unsigned int *)t14) = t21;
    t22 = (t0 + 1208U);
    t23 = *((char **)t22);
    t22 = (t0 + 1208U);
    t24 = *((char **)t22);
    xsi_vlogfile_write(1, 0, 0, ng3, 6, t0, (char)119, t6, 12, (char)119, t9, 12, (char)118, t13, 1, (char)119, t23, 12, (char)119, t24, 12);
    goto LAB5;

}

static void Forked_46_7(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;

LAB0:    t1 = (t0 + 4416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 4224);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(46, ng0);
    t3 = (t0 + 4224);
    xsi_process_wait(t3, 190000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t8, t4, 8);
    t10 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t10 - 1);
    xsi_vlogvar_assign_value(t2, t8, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(46, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t0 + 1608);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    xsi_vlog_signed_equal(t8, 12, t5, 12, t7, 12);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(46, ng0);
    xsi_vlogfile_write(1, 0, 0, ng8, 1, t0);

LAB9:    goto LAB5;

LAB7:    xsi_set_current_line(46, ng0);
    xsi_vlogfile_write(1, 0, 0, ng7, 1, t0);
    goto LAB9;

}

static void Forked_48_8(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;

LAB0:    t1 = (t0 + 4664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 4472);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(48, ng0);
    t3 = (t0 + 4472);
    xsi_process_wait(t3, 260000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t6, t4, 8);
    t7 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t7 - 1);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(48, ng0);
    t4 = ((char*)((ng9)));
    t5 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 12, 0LL);
    goto LAB5;

}

static void Forked_49_9(char *t0)
{
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    t1 = (t0 + 4912U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 4720);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(49, ng0);
    t3 = (t0 + 4720);
    xsi_process_wait(t3, 270000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t13, t4, 8);
    t16 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t16 - 1);
    xsi_vlogvar_assign_value(t2, t13, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(49, ng0);
    t4 = (t0 + 1608);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 1608);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 1608);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memset(t13, 0, 8);
    t14 = (t13 + 4);
    t15 = (t12 + 4);
    t16 = *((unsigned int *)t12);
    t17 = (t16 >> 11);
    t18 = (t17 & 1);
    *((unsigned int *)t13) = t18;
    t19 = *((unsigned int *)t15);
    t20 = (t19 >> 11);
    t21 = (t20 & 1);
    *((unsigned int *)t14) = t21;
    t22 = (t0 + 1208U);
    t23 = *((char **)t22);
    t22 = (t0 + 1208U);
    t24 = *((char **)t22);
    xsi_vlogfile_write(1, 0, 0, ng3, 6, t0, (char)119, t6, 12, (char)119, t9, 12, (char)118, t13, 1, (char)119, t23, 12, (char)119, t24, 12);
    goto LAB5;

}

static void Forked_50_10(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;

LAB0:    t1 = (t0 + 5160U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 4968);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(50, ng0);
    t3 = (t0 + 4968);
    xsi_process_wait(t3, 270000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t8, t4, 8);
    t10 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t10 - 1);
    xsi_vlogvar_assign_value(t2, t8, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(50, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t0 + 1608);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    xsi_vlog_signed_equal(t8, 12, t5, 12, t7, 12);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(50, ng0);
    xsi_vlogfile_write(1, 0, 0, ng11, 1, t0);

LAB9:    goto LAB5;

LAB7:    xsi_set_current_line(50, ng0);
    xsi_vlogfile_write(1, 0, 0, ng10, 1, t0);
    goto LAB9;

}

static void Forked_52_11(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;

LAB0:    t1 = (t0 + 5408U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 5216);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(52, ng0);
    t3 = (t0 + 5216);
    xsi_process_wait(t3, 350000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t6, t4, 8);
    t7 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t7 - 1);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(52, ng0);
    t4 = ((char*)((ng12)));
    t5 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 12, 0LL);
    goto LAB5;

}

static void Forked_53_12(char *t0)
{
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    t1 = (t0 + 5656U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 5464);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(53, ng0);
    t3 = (t0 + 5464);
    xsi_process_wait(t3, 360000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t13, t4, 8);
    t16 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t16 - 1);
    xsi_vlogvar_assign_value(t2, t13, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(53, ng0);
    t4 = (t0 + 1608);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 1608);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 1608);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memset(t13, 0, 8);
    t14 = (t13 + 4);
    t15 = (t12 + 4);
    t16 = *((unsigned int *)t12);
    t17 = (t16 >> 11);
    t18 = (t17 & 1);
    *((unsigned int *)t13) = t18;
    t19 = *((unsigned int *)t15);
    t20 = (t19 >> 11);
    t21 = (t20 & 1);
    *((unsigned int *)t14) = t21;
    t22 = (t0 + 1208U);
    t23 = *((char **)t22);
    t22 = (t0 + 1208U);
    t24 = *((char **)t22);
    xsi_vlogfile_write(1, 0, 0, ng3, 6, t0, (char)119, t6, 12, (char)119, t9, 12, (char)118, t13, 1, (char)119, t23, 12, (char)119, t24, 12);
    goto LAB5;

}

static void Forked_54_13(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;

LAB0:    t1 = (t0 + 5904U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 5712);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(54, ng0);
    t3 = (t0 + 5712);
    xsi_process_wait(t3, 360000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t6, t4, 8);
    t9 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t9 - 1);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(54, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB10;

LAB7:    if (t18 != 0)
        goto LAB9;

LAB8:    *((unsigned int *)t6) = 1;

LAB10:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(54, ng0);
    xsi_vlogfile_write(1, 0, 0, ng14, 1, t0);

LAB13:    goto LAB5;

LAB9:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB10;

LAB11:    xsi_set_current_line(54, ng0);
    xsi_vlogfile_write(1, 0, 0, ng13, 1, t0);
    goto LAB13;

}

static void Forked_56_14(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;

LAB0:    t1 = (t0 + 6152U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 5960);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(56, ng0);
    t3 = (t0 + 5960);
    xsi_process_wait(t3, 420000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t6, t4, 8);
    t7 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t7 - 1);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(56, ng0);
    t4 = ((char*)((ng15)));
    t5 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 12, 0LL);
    goto LAB5;

}

static void Forked_57_15(char *t0)
{
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    t1 = (t0 + 6400U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 6208);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(57, ng0);
    t3 = (t0 + 6208);
    xsi_process_wait(t3, 430000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t13, t4, 8);
    t16 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t16 - 1);
    xsi_vlogvar_assign_value(t2, t13, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(57, ng0);
    t4 = (t0 + 1608);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 1608);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 1608);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memset(t13, 0, 8);
    t14 = (t13 + 4);
    t15 = (t12 + 4);
    t16 = *((unsigned int *)t12);
    t17 = (t16 >> 11);
    t18 = (t17 & 1);
    *((unsigned int *)t13) = t18;
    t19 = *((unsigned int *)t15);
    t20 = (t19 >> 11);
    t21 = (t20 & 1);
    *((unsigned int *)t14) = t21;
    t22 = (t0 + 1208U);
    t23 = *((char **)t22);
    t22 = (t0 + 1208U);
    t24 = *((char **)t22);
    xsi_vlogfile_write(1, 0, 0, ng3, 6, t0, (char)119, t6, 12, (char)119, t9, 12, (char)118, t13, 1, (char)119, t23, 12, (char)119, t24, 12);
    goto LAB5;

}

static void Forked_58_16(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;

LAB0:    t1 = (t0 + 6648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 6456);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(58, ng0);
    t3 = (t0 + 6456);
    xsi_process_wait(t3, 430000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t6, t4, 8);
    t9 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t9 - 1);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(58, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng16)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB10;

LAB7:    if (t18 != 0)
        goto LAB9;

LAB8:    *((unsigned int *)t6) = 1;

LAB10:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(58, ng0);
    xsi_vlogfile_write(1, 0, 0, ng18, 1, t0);

LAB13:    goto LAB5;

LAB9:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB10;

LAB11:    xsi_set_current_line(58, ng0);
    xsi_vlogfile_write(1, 0, 0, ng17, 1, t0);
    goto LAB13;

}

static void Forked_60_17(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;

LAB0:    t1 = (t0 + 6896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 6704);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(60, ng0);
    t3 = (t0 + 6704);
    xsi_process_wait(t3, 500000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t6, t4, 8);
    t7 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t7 - 1);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(60, ng0);
    t4 = ((char*)((ng19)));
    t5 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 12, 0LL);
    goto LAB5;

}

static void Forked_61_18(char *t0)
{
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    t1 = (t0 + 7144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 6952);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(61, ng0);
    t3 = (t0 + 6952);
    xsi_process_wait(t3, 510000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t13, t4, 8);
    t16 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t16 - 1);
    xsi_vlogvar_assign_value(t2, t13, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(61, ng0);
    t4 = (t0 + 1608);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 1608);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 1608);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memset(t13, 0, 8);
    t14 = (t13 + 4);
    t15 = (t12 + 4);
    t16 = *((unsigned int *)t12);
    t17 = (t16 >> 11);
    t18 = (t17 & 1);
    *((unsigned int *)t13) = t18;
    t19 = *((unsigned int *)t15);
    t20 = (t19 >> 11);
    t21 = (t20 & 1);
    *((unsigned int *)t14) = t21;
    t22 = (t0 + 1208U);
    t23 = *((char **)t22);
    t22 = (t0 + 1208U);
    t24 = *((char **)t22);
    xsi_vlogfile_write(1, 0, 0, ng3, 6, t0, (char)119, t6, 12, (char)119, t9, 12, (char)118, t13, 1, (char)119, t23, 12, (char)119, t24, 12);
    goto LAB5;

}

static void Forked_62_19(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;

LAB0:    t1 = (t0 + 7392U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 7200);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(62, ng0);
    t3 = (t0 + 7200);
    xsi_process_wait(t3, 510000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t6, t4, 8);
    t9 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t9 - 1);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(62, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng20)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB10;

LAB7:    if (t18 != 0)
        goto LAB9;

LAB8:    *((unsigned int *)t6) = 1;

LAB10:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(62, ng0);
    xsi_vlogfile_write(1, 0, 0, ng22, 1, t0);

LAB13:    goto LAB5;

LAB9:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB10;

LAB11:    xsi_set_current_line(62, ng0);
    xsi_vlogfile_write(1, 0, 0, ng21, 1, t0);
    goto LAB13;

}

static void Forked_64_20(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;

LAB0:    t1 = (t0 + 7640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 7448);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(64, ng0);
    t3 = (t0 + 7448);
    xsi_process_wait(t3, 570000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t6, t4, 8);
    t7 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t7 - 1);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(64, ng0);
    t4 = ((char*)((ng23)));
    t5 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 12, 0LL);
    goto LAB5;

}

static void Forked_65_21(char *t0)
{
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    t1 = (t0 + 7888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 7696);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(65, ng0);
    t3 = (t0 + 7696);
    xsi_process_wait(t3, 580000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t13, t4, 8);
    t16 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t16 - 1);
    xsi_vlogvar_assign_value(t2, t13, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(65, ng0);
    t4 = (t0 + 1608);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 1608);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 1608);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memset(t13, 0, 8);
    t14 = (t13 + 4);
    t15 = (t12 + 4);
    t16 = *((unsigned int *)t12);
    t17 = (t16 >> 11);
    t18 = (t17 & 1);
    *((unsigned int *)t13) = t18;
    t19 = *((unsigned int *)t15);
    t20 = (t19 >> 11);
    t21 = (t20 & 1);
    *((unsigned int *)t14) = t21;
    t22 = (t0 + 1208U);
    t23 = *((char **)t22);
    t22 = (t0 + 1208U);
    t24 = *((char **)t22);
    xsi_vlogfile_write(1, 0, 0, ng3, 6, t0, (char)119, t6, 12, (char)119, t9, 12, (char)118, t13, 1, (char)119, t23, 12, (char)119, t24, 12);
    goto LAB5;

}

static void Forked_66_22(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;

LAB0:    t1 = (t0 + 8136U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 7944);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(66, ng0);
    t3 = (t0 + 7944);
    xsi_process_wait(t3, 580000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t6, t4, 8);
    t9 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t9 - 1);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(66, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng24)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB10;

LAB7:    if (t18 != 0)
        goto LAB9;

LAB8:    *((unsigned int *)t6) = 1;

LAB10:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(66, ng0);
    xsi_vlogfile_write(1, 0, 0, ng26, 1, t0);

LAB13:    goto LAB5;

LAB9:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB10;

LAB11:    xsi_set_current_line(66, ng0);
    xsi_vlogfile_write(1, 0, 0, ng25, 1, t0);
    goto LAB13;

}

static void Forked_68_23(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;

LAB0:    t1 = (t0 + 8384U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 8192);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(68, ng0);
    t3 = (t0 + 8192);
    xsi_process_wait(t3, 640000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memcpy(t4, t5, 8);
    t7 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t7 - 1);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(68, ng0);
    t5 = ((char*)((ng27)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_unary_minus(t4, 12, t5, 12);
    t6 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t6, t4, 0, 0, 12, 0LL);
    goto LAB5;

}

static void Forked_69_24(char *t0)
{
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    t1 = (t0 + 8632U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 8440);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(69, ng0);
    t3 = (t0 + 8440);
    xsi_process_wait(t3, 650000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t13, t4, 8);
    t16 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t16 - 1);
    xsi_vlogvar_assign_value(t2, t13, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(69, ng0);
    t4 = (t0 + 1608);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 1608);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 1608);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memset(t13, 0, 8);
    t14 = (t13 + 4);
    t15 = (t12 + 4);
    t16 = *((unsigned int *)t12);
    t17 = (t16 >> 11);
    t18 = (t17 & 1);
    *((unsigned int *)t13) = t18;
    t19 = *((unsigned int *)t15);
    t20 = (t19 >> 11);
    t21 = (t20 & 1);
    *((unsigned int *)t14) = t21;
    t22 = (t0 + 1208U);
    t23 = *((char **)t22);
    t22 = (t0 + 1208U);
    t24 = *((char **)t22);
    xsi_vlogfile_write(1, 0, 0, ng3, 6, t0, (char)119, t6, 12, (char)119, t9, 12, (char)118, t13, 1, (char)119, t23, 12, (char)119, t24, 12);
    goto LAB5;

}

static void Forked_70_25(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;

LAB0:    t1 = (t0 + 8880U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 8688);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(70, ng0);
    t3 = (t0 + 8688);
    xsi_process_wait(t3, 650000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t6, t4, 8);
    t9 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t9 - 1);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(70, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng27)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB10;

LAB7:    if (t18 != 0)
        goto LAB9;

LAB8:    *((unsigned int *)t6) = 1;

LAB10:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(70, ng0);
    xsi_vlogfile_write(1, 0, 0, ng29, 1, t0);

LAB13:    goto LAB5;

LAB9:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB10;

LAB11:    xsi_set_current_line(70, ng0);
    xsi_vlogfile_write(1, 0, 0, ng28, 1, t0);
    goto LAB13;

}

static void Forked_72_26(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;

LAB0:    t1 = (t0 + 9128U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 8936);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(72, ng0);
    t3 = (t0 + 8936);
    xsi_process_wait(t3, 710000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memcpy(t4, t5, 8);
    t7 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t7 - 1);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(72, ng0);
    t5 = ((char*)((ng12)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_unary_minus(t4, 12, t5, 12);
    t6 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t6, t4, 0, 0, 12, 0LL);
    goto LAB5;

}

static void Forked_73_27(char *t0)
{
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    t1 = (t0 + 9376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 9184);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(73, ng0);
    t3 = (t0 + 9184);
    xsi_process_wait(t3, 720000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t13, t4, 8);
    t16 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t16 - 1);
    xsi_vlogvar_assign_value(t2, t13, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(73, ng0);
    t4 = (t0 + 1608);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 1608);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 1608);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memset(t13, 0, 8);
    t14 = (t13 + 4);
    t15 = (t12 + 4);
    t16 = *((unsigned int *)t12);
    t17 = (t16 >> 11);
    t18 = (t17 & 1);
    *((unsigned int *)t13) = t18;
    t19 = *((unsigned int *)t15);
    t20 = (t19 >> 11);
    t21 = (t20 & 1);
    *((unsigned int *)t14) = t21;
    t22 = (t0 + 1208U);
    t23 = *((char **)t22);
    t22 = (t0 + 1208U);
    t24 = *((char **)t22);
    xsi_vlogfile_write(1, 0, 0, ng3, 6, t0, (char)119, t6, 12, (char)119, t9, 12, (char)118, t13, 1, (char)119, t23, 12, (char)119, t24, 12);
    goto LAB5;

}

static void Forked_74_28(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;

LAB0:    t1 = (t0 + 9624U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 9432);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(74, ng0);
    t3 = (t0 + 9432);
    xsi_process_wait(t3, 720000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t6, t4, 8);
    t9 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t9 - 1);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(74, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB10;

LAB7:    if (t18 != 0)
        goto LAB9;

LAB8:    *((unsigned int *)t6) = 1;

LAB10:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(74, ng0);
    xsi_vlogfile_write(1, 0, 0, ng31, 1, t0);

LAB13:    goto LAB5;

LAB9:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB10;

LAB11:    xsi_set_current_line(74, ng0);
    xsi_vlogfile_write(1, 0, 0, ng30, 1, t0);
    goto LAB13;

}

static void Forked_76_29(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;

LAB0:    t1 = (t0 + 9872U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 9680);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(76, ng0);
    t3 = (t0 + 9680);
    xsi_process_wait(t3, 800000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t6, t4, 8);
    t7 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t7 - 1);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(76, ng0);
    t4 = ((char*)((ng12)));
    t5 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 12, 0LL);
    goto LAB5;

}

static void Forked_77_30(char *t0)
{
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    t1 = (t0 + 10120U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 9928);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(77, ng0);
    t3 = (t0 + 9928);
    xsi_process_wait(t3, 810000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t13, t4, 8);
    t16 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t16 - 1);
    xsi_vlogvar_assign_value(t2, t13, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(77, ng0);
    t4 = (t0 + 1608);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 1608);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 1608);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memset(t13, 0, 8);
    t14 = (t13 + 4);
    t15 = (t12 + 4);
    t16 = *((unsigned int *)t12);
    t17 = (t16 >> 11);
    t18 = (t17 & 1);
    *((unsigned int *)t13) = t18;
    t19 = *((unsigned int *)t15);
    t20 = (t19 >> 11);
    t21 = (t20 & 1);
    *((unsigned int *)t14) = t21;
    t22 = (t0 + 1208U);
    t23 = *((char **)t22);
    t22 = (t0 + 1208U);
    t24 = *((char **)t22);
    xsi_vlogfile_write(1, 0, 0, ng3, 6, t0, (char)119, t6, 12, (char)119, t9, 12, (char)118, t13, 1, (char)119, t23, 12, (char)119, t24, 12);
    goto LAB5;

}

static void Forked_78_31(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;

LAB0:    t1 = (t0 + 10368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 10176);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(78, ng0);
    t3 = (t0 + 10176);
    xsi_process_wait(t3, 810000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t6, t4, 8);
    t9 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t9 - 1);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(78, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB10;

LAB7:    if (t18 != 0)
        goto LAB9;

LAB8:    *((unsigned int *)t6) = 1;

LAB10:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(78, ng0);
    xsi_vlogfile_write(1, 0, 0, ng33, 1, t0);

LAB13:    goto LAB5;

LAB9:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB10;

LAB11:    xsi_set_current_line(78, ng0);
    xsi_vlogfile_write(1, 0, 0, ng32, 1, t0);
    goto LAB13;

}

static void Forked_80_32(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;

LAB0:    t1 = (t0 + 10616U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 10424);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(80, ng0);
    t3 = (t0 + 10424);
    xsi_process_wait(t3, 900000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t6, t4, 8);
    t7 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t7 - 1);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(80, ng0);
    t4 = ((char*)((ng34)));
    t5 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 12, 0LL);
    goto LAB5;

}

static void Forked_81_33(char *t0)
{
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    t1 = (t0 + 10864U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 10672);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(81, ng0);
    t3 = (t0 + 10672);
    xsi_process_wait(t3, 910000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t13, t4, 8);
    t16 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t16 - 1);
    xsi_vlogvar_assign_value(t2, t13, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(81, ng0);
    t4 = (t0 + 1608);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 1608);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 1608);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memset(t13, 0, 8);
    t14 = (t13 + 4);
    t15 = (t12 + 4);
    t16 = *((unsigned int *)t12);
    t17 = (t16 >> 11);
    t18 = (t17 & 1);
    *((unsigned int *)t13) = t18;
    t19 = *((unsigned int *)t15);
    t20 = (t19 >> 11);
    t21 = (t20 & 1);
    *((unsigned int *)t14) = t21;
    t22 = (t0 + 1208U);
    t23 = *((char **)t22);
    t22 = (t0 + 1208U);
    t24 = *((char **)t22);
    xsi_vlogfile_write(1, 0, 0, ng3, 6, t0, (char)119, t6, 12, (char)119, t9, 12, (char)118, t13, 1, (char)119, t23, 12, (char)119, t24, 12);
    goto LAB5;

}

static void Forked_82_34(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;

LAB0:    t1 = (t0 + 11112U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 10920);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(82, ng0);
    t3 = (t0 + 10920);
    xsi_process_wait(t3, 910000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t6, t4, 8);
    t9 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t9 - 1);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(82, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng34)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB10;

LAB7:    if (t18 != 0)
        goto LAB9;

LAB8:    *((unsigned int *)t6) = 1;

LAB10:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(82, ng0);
    xsi_vlogfile_write(1, 0, 0, ng33, 1, t0);

LAB13:    goto LAB5;

LAB9:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB10;

LAB11:    xsi_set_current_line(82, ng0);
    xsi_vlogfile_write(1, 0, 0, ng32, 1, t0);
    goto LAB13;

}

static void Forked_84_35(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;

LAB0:    t1 = (t0 + 11360U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 11168);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(84, ng0);
    t3 = (t0 + 11168);
    xsi_process_wait(t3, 1000000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memcpy(t4, t5, 8);
    t7 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t7 - 1);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(84, ng0);
    t5 = ((char*)((ng35)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_unary_minus(t4, 12, t5, 12);
    t6 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t6, t4, 0, 0, 12, 0LL);
    goto LAB5;

}

static void Forked_85_36(char *t0)
{
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    t1 = (t0 + 11608U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 11416);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(85, ng0);
    t3 = (t0 + 11416);
    xsi_process_wait(t3, 1010000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t13, t4, 8);
    t16 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t16 - 1);
    xsi_vlogvar_assign_value(t2, t13, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(85, ng0);
    t4 = (t0 + 1608);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 1608);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 1608);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memset(t13, 0, 8);
    t14 = (t13 + 4);
    t15 = (t12 + 4);
    t16 = *((unsigned int *)t12);
    t17 = (t16 >> 11);
    t18 = (t17 & 1);
    *((unsigned int *)t13) = t18;
    t19 = *((unsigned int *)t15);
    t20 = (t19 >> 11);
    t21 = (t20 & 1);
    *((unsigned int *)t14) = t21;
    t22 = (t0 + 1208U);
    t23 = *((char **)t22);
    t22 = (t0 + 1208U);
    t24 = *((char **)t22);
    xsi_vlogfile_write(1, 0, 0, ng3, 6, t0, (char)119, t6, 12, (char)119, t9, 12, (char)118, t13, 1, (char)119, t23, 12, (char)119, t24, 12);
    goto LAB5;

}

static void Forked_86_37(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;

LAB0:    t1 = (t0 + 11856U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 11664);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(86, ng0);
    t3 = (t0 + 11664);
    xsi_process_wait(t3, 1010000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t6, t4, 8);
    t9 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t9 - 1);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(86, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng35)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB10;

LAB7:    if (t18 != 0)
        goto LAB9;

LAB8:    *((unsigned int *)t6) = 1;

LAB10:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(86, ng0);
    xsi_vlogfile_write(1, 0, 0, ng33, 1, t0);

LAB13:    goto LAB5;

LAB9:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB10;

LAB11:    xsi_set_current_line(86, ng0);
    xsi_vlogfile_write(1, 0, 0, ng32, 1, t0);
    goto LAB13;

}


extern void work_m_07647558111745101148_0159725753_init()
{
	static char *pe[] = {(void *)Initial_29_0,(void *)Always_38_1,(void *)Forked_40_2,(void *)Forked_41_3,(void *)Forked_42_4,(void *)Forked_44_5,(void *)Forked_45_6,(void *)Forked_46_7,(void *)Forked_48_8,(void *)Forked_49_9,(void *)Forked_50_10,(void *)Forked_52_11,(void *)Forked_53_12,(void *)Forked_54_13,(void *)Forked_56_14,(void *)Forked_57_15,(void *)Forked_58_16,(void *)Forked_60_17,(void *)Forked_61_18,(void *)Forked_62_19,(void *)Forked_64_20,(void *)Forked_65_21,(void *)Forked_66_22,(void *)Forked_68_23,(void *)Forked_69_24,(void *)Forked_70_25,(void *)Forked_72_26,(void *)Forked_73_27,(void *)Forked_74_28,(void *)Forked_76_29,(void *)Forked_77_30,(void *)Forked_78_31,(void *)Forked_80_32,(void *)Forked_81_33,(void *)Forked_82_34,(void *)Forked_84_35,(void *)Forked_85_36,(void *)Forked_86_37};
	xsi_register_didat("work_m_07647558111745101148_0159725753", "isim/twos_comp_to_sm_converter_TB_isim_beh.exe.sim/work/m_07647558111745101148_0159725753.didat");
	xsi_register_executes(pe);
}
