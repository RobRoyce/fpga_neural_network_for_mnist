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
static const char *ng0 = "/home/parallels/ucla/m152acs/labs/csm152a/lab_1/FPCVT_TB.v";
static int ng1[] = {9, 0};
static int ng2[] = {3, 0};
static const char *ng3 = "ns";
static int ng4[] = {5, 0};
static int ng5[] = {0, 0};
static const char *ng6 = "Begin provided test cases";
static unsigned int ng7[] = {1856U, 0U};
static const char *ng8 = "%t | D: %b_%b_%b | SEF: %b_%b_%b | Expected: 0_111_1111";
static unsigned int ng9[] = {2047U, 0U};
static unsigned int ng10[] = {2050U, 0U};
static const char *ng11 = "%t | D: %b_%b_%b | SEF: %b_%b_%b | Expected: 1_111_1111";
static unsigned int ng12[] = {2186U, 0U};
static unsigned int ng13[] = {2511U, 0U};
static const char *ng14 = "%t | D: %b_%b_%b | SEF: %b_%b_%b | Expected: 1_111_1100";
static unsigned int ng15[] = {4005U, 0U};
static const char *ng16 = "%t | D: %b_%b_%b | SEF: %b_%b_%b | Expected: 1_011_1011";
static const char *ng17 = "Begin test cases derived from the lab handout";
static unsigned int ng18[] = {422U, 0U};
static const char *ng19 = "%t | D: 422 | SEF:%b_%b_%b | In Float: %d | Expected: 416";
static int ng20[] = {2, 0};
static const char *ng21 = "%t | D: -422 | SEF:%b_%b_%b | In Float: %d | Expected: 416";
static unsigned int ng22[] = {44U, 0U};
static const char *ng23 = "%t | D: %b_%b_%b | SEF:%b_%b_%b | Expected: 0_010_1011";
static unsigned int ng24[] = {45U, 0U};
static unsigned int ng25[] = {46U, 0U};
static const char *ng26 = "%t | D: %b_%b_%b | SEF:%b_%b_%b | Expected: 0_010_1100";
static unsigned int ng27[] = {47U, 0U};
static unsigned int ng28[] = {127U, 0U};
static const char *ng29 = "%t | D: %b_%b_%b | SEF:%b_%b_%b | Expected: 0_100_1000";
static const char *ng30 = "Begin custom test cases";
static unsigned int ng31[] = {0U, 0U};
static const char *ng32 = "%t | D: 0 | SEF: %b_%b_%b | Float: %s%d";
static unsigned int ng33[] = {1U, 0U};
static int ng34[] = {45, 0};
static int ng35[] = {43, 0};
static const char *ng36 = "%t | D: -1 | SEF: %b_%b_%b | Float: %s%d";
static const char *ng37 = "%t | D: 1 | SEF: %b_%b_%b | Float: %s%d";
static unsigned int ng38[] = {2048U, 0U};
static const char *ng39 = "%t | D: -2048 | SEF: %b_%b_%b | Float: %s%d";
static const char *ng40 = "%t | D: -2047 | SEF: %b_%b_%b | Float: %s%d";
static const char *ng41 = "%t | D: 2047 | SEF: %b_%b_%b | Float: %s%d";
static const char *ng42 = "%t | D: 422 | SEF: %b_%b_%b | Float: %s%d";
static const char *ng43 = "%t | D: -422 | SEF: %b_%b_%b | Float: %s%d";
static unsigned int ng44[] = {1011U, 0U};
static unsigned int ng45[] = {1921U, 0U};
static unsigned int ng46[] = {2176U, 0U};
static unsigned int ng47[] = {35U, 0U};
static unsigned int ng48[] = {3915U, 0U};
static unsigned int ng49[] = {1531U, 0U};
static unsigned int ng50[] = {1895U, 0U};



static void Initial_26_0(char *t0)
{
    char t3[8];
    char t6[16];
    char t17[8];
    char t29[8];
    char t51[8];
    char t52[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;

LAB0:    t1 = (t0 + 2680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(26, ng0);

LAB4:    xsi_set_current_line(28, ng0);
    t2 = ((char*)((ng1)));
    memset(t3, 0, 8);
    xsi_vlog_signed_unary_minus(t3, 32, t2, 32);
    t4 = ((char*)((ng2)));
    t5 = ((char*)((ng4)));
    xsi_vlog_setTimeFormat(*((unsigned int *)t3), *((unsigned int *)t4), ng3, 0, *((unsigned int *)t5));
    xsi_set_current_line(29, ng0);
    t2 = ((char*)((ng5)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 12);
    xsi_set_current_line(32, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(35, ng0);

LAB6:    xsi_set_current_line(36, ng0);

LAB7:    xsi_set_current_line(38, ng0);
    xsi_vlogfile_write(1, 0, 0, ng6, 1, t0);
    xsi_set_current_line(39, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(39, ng0);
    t4 = ((char*)((ng7)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 12, 0LL);
    xsi_set_current_line(39, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(39, ng0);
    t4 = xsi_vlog_time(t6, 1000.0000000000000, 1000.0000000000000);
    t5 = (t0 + 1768);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    memset(t3, 0, 8);
    t9 = (t3 + 4);
    t10 = (t8 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 8);
    *((unsigned int *)t3) = t12;
    t13 = *((unsigned int *)t10);
    t14 = (t13 >> 8);
    *((unsigned int *)t9) = t14;
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 15U);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 & 15U);
    t18 = (t0 + 1768);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memset(t17, 0, 8);
    t21 = (t17 + 4);
    t22 = (t20 + 4);
    t23 = *((unsigned int *)t20);
    t24 = (t23 >> 4);
    *((unsigned int *)t17) = t24;
    t25 = *((unsigned int *)t22);
    t26 = (t25 >> 4);
    *((unsigned int *)t21) = t26;
    t27 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t27 & 15U);
    t28 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t28 & 15U);
    t30 = (t0 + 1768);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memset(t29, 0, 8);
    t33 = (t29 + 4);
    t34 = (t32 + 4);
    t35 = *((unsigned int *)t32);
    t36 = (t35 >> 0);
    *((unsigned int *)t29) = t36;
    t37 = *((unsigned int *)t34);
    t38 = (t37 >> 0);
    *((unsigned int *)t33) = t38;
    t39 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t39 & 15U);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t40 & 15U);
    t41 = (t0 + 1368U);
    t42 = *((char **)t41);
    t41 = (t0 + 1208U);
    t43 = *((char **)t41);
    t41 = (t0 + 1048U);
    t44 = *((char **)t41);
    xsi_vlogfile_write(1, 0, 0, ng8, 8, t0, (char)118, t6, 64, (char)118, t3, 4, (char)118, t17, 4, (char)118, t29, 4, (char)118, t42, 1, (char)118, t43, 3, (char)118, t44, 4);
    xsi_set_current_line(40, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(40, ng0);
    t4 = ((char*)((ng9)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 12, 0LL);
    xsi_set_current_line(40, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(40, ng0);
    t4 = xsi_vlog_time(t6, 1000.0000000000000, 1000.0000000000000);
    t5 = (t0 + 1768);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    memset(t3, 0, 8);
    t9 = (t3 + 4);
    t10 = (t8 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 8);
    *((unsigned int *)t3) = t12;
    t13 = *((unsigned int *)t10);
    t14 = (t13 >> 8);
    *((unsigned int *)t9) = t14;
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 15U);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 & 15U);
    t18 = (t0 + 1768);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memset(t17, 0, 8);
    t21 = (t17 + 4);
    t22 = (t20 + 4);
    t23 = *((unsigned int *)t20);
    t24 = (t23 >> 4);
    *((unsigned int *)t17) = t24;
    t25 = *((unsigned int *)t22);
    t26 = (t25 >> 4);
    *((unsigned int *)t21) = t26;
    t27 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t27 & 15U);
    t28 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t28 & 15U);
    t30 = (t0 + 1768);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memset(t29, 0, 8);
    t33 = (t29 + 4);
    t34 = (t32 + 4);
    t35 = *((unsigned int *)t32);
    t36 = (t35 >> 0);
    *((unsigned int *)t29) = t36;
    t37 = *((unsigned int *)t34);
    t38 = (t37 >> 0);
    *((unsigned int *)t33) = t38;
    t39 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t39 & 15U);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t40 & 15U);
    t41 = (t0 + 1368U);
    t42 = *((char **)t41);
    t41 = (t0 + 1208U);
    t43 = *((char **)t41);
    t41 = (t0 + 1048U);
    t44 = *((char **)t41);
    xsi_vlogfile_write(1, 0, 0, ng8, 8, t0, (char)118, t6, 64, (char)118, t3, 4, (char)118, t17, 4, (char)118, t29, 4, (char)118, t42, 1, (char)118, t43, 3, (char)118, t44, 4);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(41, ng0);
    t4 = ((char*)((ng10)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 12, 0LL);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    xsi_set_current_line(41, ng0);
    t4 = xsi_vlog_time(t6, 1000.0000000000000, 1000.0000000000000);
    t5 = (t0 + 1768);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    memset(t3, 0, 8);
    t9 = (t3 + 4);
    t10 = (t8 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 8);
    *((unsigned int *)t3) = t12;
    t13 = *((unsigned int *)t10);
    t14 = (t13 >> 8);
    *((unsigned int *)t9) = t14;
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 15U);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 & 15U);
    t18 = (t0 + 1768);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memset(t17, 0, 8);
    t21 = (t17 + 4);
    t22 = (t20 + 4);
    t23 = *((unsigned int *)t20);
    t24 = (t23 >> 4);
    *((unsigned int *)t17) = t24;
    t25 = *((unsigned int *)t22);
    t26 = (t25 >> 4);
    *((unsigned int *)t21) = t26;
    t27 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t27 & 15U);
    t28 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t28 & 15U);
    t30 = (t0 + 1768);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memset(t29, 0, 8);
    t33 = (t29 + 4);
    t34 = (t32 + 4);
    t35 = *((unsigned int *)t32);
    t36 = (t35 >> 0);
    *((unsigned int *)t29) = t36;
    t37 = *((unsigned int *)t34);
    t38 = (t37 >> 0);
    *((unsigned int *)t33) = t38;
    t39 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t39 & 15U);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t40 & 15U);
    t41 = (t0 + 1368U);
    t42 = *((char **)t41);
    t41 = (t0 + 1208U);
    t43 = *((char **)t41);
    t41 = (t0 + 1048U);
    t44 = *((char **)t41);
    xsi_vlogfile_write(1, 0, 0, ng11, 8, t0, (char)118, t6, 64, (char)118, t3, 4, (char)118, t17, 4, (char)118, t29, 4, (char)118, t42, 1, (char)118, t43, 3, (char)118, t44, 4);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB14:    xsi_set_current_line(42, ng0);
    t4 = ((char*)((ng12)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 12, 0LL);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB15:    xsi_set_current_line(42, ng0);
    t4 = xsi_vlog_time(t6, 1000.0000000000000, 1000.0000000000000);
    t5 = (t0 + 1768);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    memset(t3, 0, 8);
    t9 = (t3 + 4);
    t10 = (t8 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 8);
    *((unsigned int *)t3) = t12;
    t13 = *((unsigned int *)t10);
    t14 = (t13 >> 8);
    *((unsigned int *)t9) = t14;
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 15U);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 & 15U);
    t18 = (t0 + 1768);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memset(t17, 0, 8);
    t21 = (t17 + 4);
    t22 = (t20 + 4);
    t23 = *((unsigned int *)t20);
    t24 = (t23 >> 4);
    *((unsigned int *)t17) = t24;
    t25 = *((unsigned int *)t22);
    t26 = (t25 >> 4);
    *((unsigned int *)t21) = t26;
    t27 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t27 & 15U);
    t28 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t28 & 15U);
    t30 = (t0 + 1768);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memset(t29, 0, 8);
    t33 = (t29 + 4);
    t34 = (t32 + 4);
    t35 = *((unsigned int *)t32);
    t36 = (t35 >> 0);
    *((unsigned int *)t29) = t36;
    t37 = *((unsigned int *)t34);
    t38 = (t37 >> 0);
    *((unsigned int *)t33) = t38;
    t39 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t39 & 15U);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t40 & 15U);
    t41 = (t0 + 1368U);
    t42 = *((char **)t41);
    t41 = (t0 + 1208U);
    t43 = *((char **)t41);
    t41 = (t0 + 1048U);
    t44 = *((char **)t41);
    xsi_vlogfile_write(1, 0, 0, ng11, 8, t0, (char)118, t6, 64, (char)118, t3, 4, (char)118, t17, 4, (char)118, t29, 4, (char)118, t42, 1, (char)118, t43, 3, (char)118, t44, 4);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB16;
    goto LAB1;

LAB16:    xsi_set_current_line(43, ng0);
    t4 = ((char*)((ng13)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 12, 0LL);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB17;
    goto LAB1;

LAB17:    xsi_set_current_line(43, ng0);
    t4 = xsi_vlog_time(t6, 1000.0000000000000, 1000.0000000000000);
    t5 = (t0 + 1768);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    memset(t3, 0, 8);
    t9 = (t3 + 4);
    t10 = (t8 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 8);
    *((unsigned int *)t3) = t12;
    t13 = *((unsigned int *)t10);
    t14 = (t13 >> 8);
    *((unsigned int *)t9) = t14;
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 15U);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 & 15U);
    t18 = (t0 + 1768);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memset(t17, 0, 8);
    t21 = (t17 + 4);
    t22 = (t20 + 4);
    t23 = *((unsigned int *)t20);
    t24 = (t23 >> 4);
    *((unsigned int *)t17) = t24;
    t25 = *((unsigned int *)t22);
    t26 = (t25 >> 4);
    *((unsigned int *)t21) = t26;
    t27 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t27 & 15U);
    t28 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t28 & 15U);
    t30 = (t0 + 1768);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memset(t29, 0, 8);
    t33 = (t29 + 4);
    t34 = (t32 + 4);
    t35 = *((unsigned int *)t32);
    t36 = (t35 >> 0);
    *((unsigned int *)t29) = t36;
    t37 = *((unsigned int *)t34);
    t38 = (t37 >> 0);
    *((unsigned int *)t33) = t38;
    t39 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t39 & 15U);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t40 & 15U);
    t41 = (t0 + 1368U);
    t42 = *((char **)t41);
    t41 = (t0 + 1208U);
    t43 = *((char **)t41);
    t41 = (t0 + 1048U);
    t44 = *((char **)t41);
    xsi_vlogfile_write(1, 0, 0, ng14, 8, t0, (char)118, t6, 64, (char)118, t3, 4, (char)118, t17, 4, (char)118, t29, 4, (char)118, t42, 1, (char)118, t43, 3, (char)118, t44, 4);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB18:    xsi_set_current_line(44, ng0);
    t4 = ((char*)((ng15)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 12, 0LL);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB19:    xsi_set_current_line(44, ng0);
    t4 = xsi_vlog_time(t6, 1000.0000000000000, 1000.0000000000000);
    t5 = (t0 + 1768);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    memset(t3, 0, 8);
    t9 = (t3 + 4);
    t10 = (t8 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 8);
    *((unsigned int *)t3) = t12;
    t13 = *((unsigned int *)t10);
    t14 = (t13 >> 8);
    *((unsigned int *)t9) = t14;
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 15U);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 & 15U);
    t18 = (t0 + 1768);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memset(t17, 0, 8);
    t21 = (t17 + 4);
    t22 = (t20 + 4);
    t23 = *((unsigned int *)t20);
    t24 = (t23 >> 4);
    *((unsigned int *)t17) = t24;
    t25 = *((unsigned int *)t22);
    t26 = (t25 >> 4);
    *((unsigned int *)t21) = t26;
    t27 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t27 & 15U);
    t28 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t28 & 15U);
    t30 = (t0 + 1768);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memset(t29, 0, 8);
    t33 = (t29 + 4);
    t34 = (t32 + 4);
    t35 = *((unsigned int *)t32);
    t36 = (t35 >> 0);
    *((unsigned int *)t29) = t36;
    t37 = *((unsigned int *)t34);
    t38 = (t37 >> 0);
    *((unsigned int *)t33) = t38;
    t39 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t39 & 15U);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t40 & 15U);
    t41 = (t0 + 1368U);
    t42 = *((char **)t41);
    t41 = (t0 + 1208U);
    t43 = *((char **)t41);
    t41 = (t0 + 1048U);
    t44 = *((char **)t41);
    xsi_vlogfile_write(1, 0, 0, ng16, 8, t0, (char)118, t6, 64, (char)118, t3, 4, (char)118, t17, 4, (char)118, t29, 4, (char)118, t42, 1, (char)118, t43, 3, (char)118, t44, 4);
    xsi_set_current_line(46, ng0);
    xsi_vlogfile_write(1, 0, 0, ng17, 1, t0);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB20:    xsi_set_current_line(47, ng0);
    t4 = ((char*)((ng18)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 12, 0LL);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB21;
    goto LAB1;

LAB21:    xsi_set_current_line(47, ng0);
    t4 = xsi_vlog_time(t6, 1000.0000000000000, 1000.0000000000000);
    t5 = (t0 + 1368U);
    t7 = *((char **)t5);
    t5 = (t0 + 1208U);
    t8 = *((char **)t5);
    t5 = (t0 + 1048U);
    t9 = *((char **)t5);
    t5 = (t0 + 1048U);
    t10 = *((char **)t5);
    t5 = ((char*)((ng20)));
    t18 = (t0 + 1208U);
    t19 = *((char **)t18);
    memset(t3, 0, 8);
    xsi_vlog_unsigned_power(t3, 32, t5, 32, t19, 3, 0);
    memset(t17, 0, 8);
    xsi_vlog_unsigned_multiply(t17, 32, t10, 4, t3, 32);
    xsi_vlogfile_write(1, 0, 0, ng19, 6, t0, (char)118, t6, 64, (char)118, t7, 1, (char)118, t8, 3, (char)118, t9, 4, (char)118, t17, 32);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB22:    xsi_set_current_line(48, ng0);
    t4 = ((char*)((ng18)));
    memset(t3, 0, 8);
    xsi_vlog_unsigned_unary_minus(t3, 12, t4, 12);
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 12, 0LL);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB23:    xsi_set_current_line(48, ng0);
    t4 = xsi_vlog_time(t6, 1000.0000000000000, 1000.0000000000000);
    t5 = (t0 + 1368U);
    t7 = *((char **)t5);
    t5 = (t0 + 1208U);
    t8 = *((char **)t5);
    t5 = (t0 + 1048U);
    t9 = *((char **)t5);
    t5 = (t0 + 1048U);
    t10 = *((char **)t5);
    t5 = ((char*)((ng20)));
    t18 = (t0 + 1208U);
    t19 = *((char **)t18);
    memset(t3, 0, 8);
    xsi_vlog_unsigned_power(t3, 32, t5, 32, t19, 3, 0);
    memset(t17, 0, 8);
    xsi_vlog_unsigned_multiply(t17, 32, t10, 4, t3, 32);
    xsi_vlogfile_write(1, 0, 0, ng21, 6, t0, (char)118, t6, 64, (char)118, t7, 1, (char)118, t8, 3, (char)118, t9, 4, (char)118, t17, 32);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB24;
    goto LAB1;

LAB24:    xsi_set_current_line(49, ng0);
    t4 = ((char*)((ng22)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 12, 0LL);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB25;
    goto LAB1;

LAB25:    xsi_set_current_line(49, ng0);
    t4 = xsi_vlog_time(t6, 1000.0000000000000, 1000.0000000000000);
    t5 = (t0 + 1768);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    memset(t3, 0, 8);
    t9 = (t3 + 4);
    t10 = (t8 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 8);
    *((unsigned int *)t3) = t12;
    t13 = *((unsigned int *)t10);
    t14 = (t13 >> 8);
    *((unsigned int *)t9) = t14;
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 15U);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 & 15U);
    t18 = (t0 + 1768);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memset(t17, 0, 8);
    t21 = (t17 + 4);
    t22 = (t20 + 4);
    t23 = *((unsigned int *)t20);
    t24 = (t23 >> 4);
    *((unsigned int *)t17) = t24;
    t25 = *((unsigned int *)t22);
    t26 = (t25 >> 4);
    *((unsigned int *)t21) = t26;
    t27 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t27 & 15U);
    t28 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t28 & 15U);
    t30 = (t0 + 1768);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memset(t29, 0, 8);
    t33 = (t29 + 4);
    t34 = (t32 + 4);
    t35 = *((unsigned int *)t32);
    t36 = (t35 >> 0);
    *((unsigned int *)t29) = t36;
    t37 = *((unsigned int *)t34);
    t38 = (t37 >> 0);
    *((unsigned int *)t33) = t38;
    t39 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t39 & 15U);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t40 & 15U);
    t41 = (t0 + 1368U);
    t42 = *((char **)t41);
    t41 = (t0 + 1208U);
    t43 = *((char **)t41);
    t41 = (t0 + 1048U);
    t44 = *((char **)t41);
    xsi_vlogfile_write(1, 0, 0, ng23, 8, t0, (char)118, t6, 64, (char)118, t3, 4, (char)118, t17, 4, (char)118, t29, 4, (char)118, t42, 1, (char)118, t43, 3, (char)118, t44, 4);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB26;
    goto LAB1;

LAB26:    xsi_set_current_line(50, ng0);
    t4 = ((char*)((ng24)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 12, 0LL);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB27:    xsi_set_current_line(50, ng0);
    t4 = xsi_vlog_time(t6, 1000.0000000000000, 1000.0000000000000);
    t5 = (t0 + 1768);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    memset(t3, 0, 8);
    t9 = (t3 + 4);
    t10 = (t8 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 8);
    *((unsigned int *)t3) = t12;
    t13 = *((unsigned int *)t10);
    t14 = (t13 >> 8);
    *((unsigned int *)t9) = t14;
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 15U);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 & 15U);
    t18 = (t0 + 1768);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memset(t17, 0, 8);
    t21 = (t17 + 4);
    t22 = (t20 + 4);
    t23 = *((unsigned int *)t20);
    t24 = (t23 >> 4);
    *((unsigned int *)t17) = t24;
    t25 = *((unsigned int *)t22);
    t26 = (t25 >> 4);
    *((unsigned int *)t21) = t26;
    t27 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t27 & 15U);
    t28 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t28 & 15U);
    t30 = (t0 + 1768);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memset(t29, 0, 8);
    t33 = (t29 + 4);
    t34 = (t32 + 4);
    t35 = *((unsigned int *)t32);
    t36 = (t35 >> 0);
    *((unsigned int *)t29) = t36;
    t37 = *((unsigned int *)t34);
    t38 = (t37 >> 0);
    *((unsigned int *)t33) = t38;
    t39 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t39 & 15U);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t40 & 15U);
    t41 = (t0 + 1368U);
    t42 = *((char **)t41);
    t41 = (t0 + 1208U);
    t43 = *((char **)t41);
    t41 = (t0 + 1048U);
    t44 = *((char **)t41);
    xsi_vlogfile_write(1, 0, 0, ng23, 8, t0, (char)118, t6, 64, (char)118, t3, 4, (char)118, t17, 4, (char)118, t29, 4, (char)118, t42, 1, (char)118, t43, 3, (char)118, t44, 4);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB28;
    goto LAB1;

LAB28:    xsi_set_current_line(51, ng0);
    t4 = ((char*)((ng25)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 12, 0LL);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB29;
    goto LAB1;

LAB29:    xsi_set_current_line(51, ng0);
    t4 = xsi_vlog_time(t6, 1000.0000000000000, 1000.0000000000000);
    t5 = (t0 + 1768);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    memset(t3, 0, 8);
    t9 = (t3 + 4);
    t10 = (t8 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 8);
    *((unsigned int *)t3) = t12;
    t13 = *((unsigned int *)t10);
    t14 = (t13 >> 8);
    *((unsigned int *)t9) = t14;
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 15U);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 & 15U);
    t18 = (t0 + 1768);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memset(t17, 0, 8);
    t21 = (t17 + 4);
    t22 = (t20 + 4);
    t23 = *((unsigned int *)t20);
    t24 = (t23 >> 4);
    *((unsigned int *)t17) = t24;
    t25 = *((unsigned int *)t22);
    t26 = (t25 >> 4);
    *((unsigned int *)t21) = t26;
    t27 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t27 & 15U);
    t28 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t28 & 15U);
    t30 = (t0 + 1768);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memset(t29, 0, 8);
    t33 = (t29 + 4);
    t34 = (t32 + 4);
    t35 = *((unsigned int *)t32);
    t36 = (t35 >> 0);
    *((unsigned int *)t29) = t36;
    t37 = *((unsigned int *)t34);
    t38 = (t37 >> 0);
    *((unsigned int *)t33) = t38;
    t39 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t39 & 15U);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t40 & 15U);
    t41 = (t0 + 1368U);
    t42 = *((char **)t41);
    t41 = (t0 + 1208U);
    t43 = *((char **)t41);
    t41 = (t0 + 1048U);
    t44 = *((char **)t41);
    xsi_vlogfile_write(1, 0, 0, ng26, 8, t0, (char)118, t6, 64, (char)118, t3, 4, (char)118, t17, 4, (char)118, t29, 4, (char)118, t42, 1, (char)118, t43, 3, (char)118, t44, 4);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB30;
    goto LAB1;

LAB30:    xsi_set_current_line(52, ng0);
    t4 = ((char*)((ng27)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 12, 0LL);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB31:    xsi_set_current_line(52, ng0);
    t4 = xsi_vlog_time(t6, 1000.0000000000000, 1000.0000000000000);
    t5 = (t0 + 1768);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    memset(t3, 0, 8);
    t9 = (t3 + 4);
    t10 = (t8 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 8);
    *((unsigned int *)t3) = t12;
    t13 = *((unsigned int *)t10);
    t14 = (t13 >> 8);
    *((unsigned int *)t9) = t14;
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 15U);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 & 15U);
    t18 = (t0 + 1768);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memset(t17, 0, 8);
    t21 = (t17 + 4);
    t22 = (t20 + 4);
    t23 = *((unsigned int *)t20);
    t24 = (t23 >> 4);
    *((unsigned int *)t17) = t24;
    t25 = *((unsigned int *)t22);
    t26 = (t25 >> 4);
    *((unsigned int *)t21) = t26;
    t27 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t27 & 15U);
    t28 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t28 & 15U);
    t30 = (t0 + 1768);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memset(t29, 0, 8);
    t33 = (t29 + 4);
    t34 = (t32 + 4);
    t35 = *((unsigned int *)t32);
    t36 = (t35 >> 0);
    *((unsigned int *)t29) = t36;
    t37 = *((unsigned int *)t34);
    t38 = (t37 >> 0);
    *((unsigned int *)t33) = t38;
    t39 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t39 & 15U);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t40 & 15U);
    t41 = (t0 + 1368U);
    t42 = *((char **)t41);
    t41 = (t0 + 1208U);
    t43 = *((char **)t41);
    t41 = (t0 + 1048U);
    t44 = *((char **)t41);
    xsi_vlogfile_write(1, 0, 0, ng26, 8, t0, (char)118, t6, 64, (char)118, t3, 4, (char)118, t17, 4, (char)118, t29, 4, (char)118, t42, 1, (char)118, t43, 3, (char)118, t44, 4);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB32;
    goto LAB1;

LAB32:    xsi_set_current_line(53, ng0);
    t4 = ((char*)((ng28)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 12, 0LL);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB33;
    goto LAB1;

LAB33:    xsi_set_current_line(53, ng0);
    t4 = xsi_vlog_time(t6, 1000.0000000000000, 1000.0000000000000);
    t5 = (t0 + 1768);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    memset(t3, 0, 8);
    t9 = (t3 + 4);
    t10 = (t8 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 8);
    *((unsigned int *)t3) = t12;
    t13 = *((unsigned int *)t10);
    t14 = (t13 >> 8);
    *((unsigned int *)t9) = t14;
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 15U);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 & 15U);
    t18 = (t0 + 1768);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memset(t17, 0, 8);
    t21 = (t17 + 4);
    t22 = (t20 + 4);
    t23 = *((unsigned int *)t20);
    t24 = (t23 >> 4);
    *((unsigned int *)t17) = t24;
    t25 = *((unsigned int *)t22);
    t26 = (t25 >> 4);
    *((unsigned int *)t21) = t26;
    t27 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t27 & 15U);
    t28 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t28 & 15U);
    t30 = (t0 + 1768);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memset(t29, 0, 8);
    t33 = (t29 + 4);
    t34 = (t32 + 4);
    t35 = *((unsigned int *)t32);
    t36 = (t35 >> 0);
    *((unsigned int *)t29) = t36;
    t37 = *((unsigned int *)t34);
    t38 = (t37 >> 0);
    *((unsigned int *)t33) = t38;
    t39 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t39 & 15U);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t40 & 15U);
    t41 = (t0 + 1368U);
    t42 = *((char **)t41);
    t41 = (t0 + 1208U);
    t43 = *((char **)t41);
    t41 = (t0 + 1048U);
    t44 = *((char **)t41);
    xsi_vlogfile_write(1, 0, 0, ng29, 8, t0, (char)118, t6, 64, (char)118, t3, 4, (char)118, t17, 4, (char)118, t29, 4, (char)118, t42, 1, (char)118, t43, 3, (char)118, t44, 4);
    xsi_set_current_line(56, ng0);
    xsi_vlogfile_write(1, 0, 0, ng30, 1, t0);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB34;
    goto LAB1;

LAB34:    xsi_set_current_line(57, ng0);
    t4 = ((char*)((ng31)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 12, 0LL);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB35:    xsi_set_current_line(57, ng0);
    t4 = xsi_vlog_time(t6, 1000.0000000000000, 1000.0000000000000);
    t5 = (t0 + 1368U);
    t7 = *((char **)t5);
    t5 = (t0 + 1208U);
    t8 = *((char **)t5);
    t5 = (t0 + 1048U);
    t9 = *((char **)t5);
    t5 = (t0 + 1368U);
    t10 = *((char **)t5);
    t5 = ((char*)((ng33)));
    memset(t29, 0, 8);
    t18 = (t10 + 4);
    t19 = (t5 + 4);
    t11 = *((unsigned int *)t10);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t18);
    t15 = *((unsigned int *)t19);
    t16 = (t14 ^ t15);
    t23 = (t13 | t16);
    t24 = *((unsigned int *)t18);
    t25 = *((unsigned int *)t19);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB39;

LAB36:    if (t26 != 0)
        goto LAB38;

LAB37:    *((unsigned int *)t29) = 1;

LAB39:    memset(t17, 0, 8);
    t21 = (t29 + 4);
    t35 = *((unsigned int *)t21);
    t36 = (~(t35));
    t37 = *((unsigned int *)t29);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t21) != 0)
        goto LAB42;

LAB43:    t30 = (t17 + 4);
    t40 = *((unsigned int *)t17);
    t45 = *((unsigned int *)t30);
    t46 = (t40 || t45);
    if (t46 > 0)
        goto LAB44;

LAB45:    t47 = *((unsigned int *)t17);
    t48 = (~(t47));
    t49 = *((unsigned int *)t30);
    t50 = (t48 || t49);
    if (t50 > 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t30) > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t17) > 0)
        goto LAB50;

LAB51:    memcpy(t3, t32, 8);

LAB52:    t33 = (t0 + 1048U);
    t34 = *((char **)t33);
    t33 = ((char*)((ng20)));
    t41 = (t0 + 1208U);
    t42 = *((char **)t41);
    memset(t51, 0, 8);
    xsi_vlog_unsigned_power(t51, 32, t33, 32, t42, 3, 0);
    memset(t52, 0, 8);
    xsi_vlog_unsigned_multiply(t52, 32, t34, 4, t51, 32);
    xsi_vlogfile_write(1, 0, 0, ng32, 7, t0, (char)118, t6, 64, (char)118, t7, 1, (char)118, t8, 3, (char)118, t9, 4, (char)118, t3, 8, (char)118, t52, 32);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB53;
    goto LAB1;

LAB38:    t20 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB39;

LAB40:    *((unsigned int *)t17) = 1;
    goto LAB43;

LAB42:    t22 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB43;

LAB44:    t31 = ((char*)((ng34)));
    goto LAB45;

LAB46:    t32 = ((char*)((ng35)));
    goto LAB47;

LAB48:    xsi_vlog_unsigned_bit_combine(t3, 8, t31, 8, t32, 8);
    goto LAB52;

LAB50:    memcpy(t3, t31, 8);
    goto LAB52;

LAB53:    xsi_set_current_line(58, ng0);
    t4 = ((char*)((ng33)));
    memset(t3, 0, 8);
    xsi_vlog_unsigned_unary_minus(t3, 12, t4, 12);
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 12, 0LL);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB54;
    goto LAB1;

LAB54:    xsi_set_current_line(58, ng0);
    t4 = xsi_vlog_time(t6, 1000.0000000000000, 1000.0000000000000);
    t5 = (t0 + 1368U);
    t7 = *((char **)t5);
    t5 = (t0 + 1208U);
    t8 = *((char **)t5);
    t5 = (t0 + 1048U);
    t9 = *((char **)t5);
    t5 = (t0 + 1368U);
    t10 = *((char **)t5);
    t5 = ((char*)((ng33)));
    memset(t29, 0, 8);
    t18 = (t10 + 4);
    t19 = (t5 + 4);
    t11 = *((unsigned int *)t10);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t18);
    t15 = *((unsigned int *)t19);
    t16 = (t14 ^ t15);
    t23 = (t13 | t16);
    t24 = *((unsigned int *)t18);
    t25 = *((unsigned int *)t19);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB58;

LAB55:    if (t26 != 0)
        goto LAB57;

LAB56:    *((unsigned int *)t29) = 1;

LAB58:    memset(t17, 0, 8);
    t21 = (t29 + 4);
    t35 = *((unsigned int *)t21);
    t36 = (~(t35));
    t37 = *((unsigned int *)t29);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t21) != 0)
        goto LAB61;

LAB62:    t30 = (t17 + 4);
    t40 = *((unsigned int *)t17);
    t45 = *((unsigned int *)t30);
    t46 = (t40 || t45);
    if (t46 > 0)
        goto LAB63;

LAB64:    t47 = *((unsigned int *)t17);
    t48 = (~(t47));
    t49 = *((unsigned int *)t30);
    t50 = (t48 || t49);
    if (t50 > 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t30) > 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t17) > 0)
        goto LAB69;

LAB70:    memcpy(t3, t32, 8);

LAB71:    t33 = (t0 + 1048U);
    t34 = *((char **)t33);
    t33 = ((char*)((ng20)));
    t41 = (t0 + 1208U);
    t42 = *((char **)t41);
    memset(t51, 0, 8);
    xsi_vlog_unsigned_power(t51, 32, t33, 32, t42, 3, 0);
    memset(t52, 0, 8);
    xsi_vlog_unsigned_multiply(t52, 32, t34, 4, t51, 32);
    xsi_vlogfile_write(1, 0, 0, ng36, 7, t0, (char)118, t6, 64, (char)118, t7, 1, (char)118, t8, 3, (char)118, t9, 4, (char)118, t3, 8, (char)118, t52, 32);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB72;
    goto LAB1;

LAB57:    t20 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB58;

LAB59:    *((unsigned int *)t17) = 1;
    goto LAB62;

LAB61:    t22 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB62;

LAB63:    t31 = ((char*)((ng34)));
    goto LAB64;

LAB65:    t32 = ((char*)((ng35)));
    goto LAB66;

LAB67:    xsi_vlog_unsigned_bit_combine(t3, 8, t31, 8, t32, 8);
    goto LAB71;

LAB69:    memcpy(t3, t31, 8);
    goto LAB71;

LAB72:    xsi_set_current_line(59, ng0);
    t4 = ((char*)((ng33)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 12, 0LL);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB73;
    goto LAB1;

LAB73:    xsi_set_current_line(59, ng0);
    t4 = xsi_vlog_time(t6, 1000.0000000000000, 1000.0000000000000);
    t5 = (t0 + 1368U);
    t7 = *((char **)t5);
    t5 = (t0 + 1208U);
    t8 = *((char **)t5);
    t5 = (t0 + 1048U);
    t9 = *((char **)t5);
    t5 = (t0 + 1368U);
    t10 = *((char **)t5);
    t5 = ((char*)((ng33)));
    memset(t29, 0, 8);
    t18 = (t10 + 4);
    t19 = (t5 + 4);
    t11 = *((unsigned int *)t10);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t18);
    t15 = *((unsigned int *)t19);
    t16 = (t14 ^ t15);
    t23 = (t13 | t16);
    t24 = *((unsigned int *)t18);
    t25 = *((unsigned int *)t19);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB77;

LAB74:    if (t26 != 0)
        goto LAB76;

LAB75:    *((unsigned int *)t29) = 1;

LAB77:    memset(t17, 0, 8);
    t21 = (t29 + 4);
    t35 = *((unsigned int *)t21);
    t36 = (~(t35));
    t37 = *((unsigned int *)t29);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB78;

LAB79:    if (*((unsigned int *)t21) != 0)
        goto LAB80;

LAB81:    t30 = (t17 + 4);
    t40 = *((unsigned int *)t17);
    t45 = *((unsigned int *)t30);
    t46 = (t40 || t45);
    if (t46 > 0)
        goto LAB82;

LAB83:    t47 = *((unsigned int *)t17);
    t48 = (~(t47));
    t49 = *((unsigned int *)t30);
    t50 = (t48 || t49);
    if (t50 > 0)
        goto LAB84;

LAB85:    if (*((unsigned int *)t30) > 0)
        goto LAB86;

LAB87:    if (*((unsigned int *)t17) > 0)
        goto LAB88;

LAB89:    memcpy(t3, t32, 8);

LAB90:    t33 = (t0 + 1048U);
    t34 = *((char **)t33);
    t33 = ((char*)((ng20)));
    t41 = (t0 + 1208U);
    t42 = *((char **)t41);
    memset(t51, 0, 8);
    xsi_vlog_unsigned_power(t51, 32, t33, 32, t42, 3, 0);
    memset(t52, 0, 8);
    xsi_vlog_unsigned_multiply(t52, 32, t34, 4, t51, 32);
    xsi_vlogfile_write(1, 0, 0, ng37, 7, t0, (char)118, t6, 64, (char)118, t7, 1, (char)118, t8, 3, (char)118, t9, 4, (char)118, t3, 8, (char)118, t52, 32);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB91;
    goto LAB1;

LAB76:    t20 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB77;

LAB78:    *((unsigned int *)t17) = 1;
    goto LAB81;

LAB80:    t22 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB81;

LAB82:    t31 = ((char*)((ng34)));
    goto LAB83;

LAB84:    t32 = ((char*)((ng35)));
    goto LAB85;

LAB86:    xsi_vlog_unsigned_bit_combine(t3, 8, t31, 8, t32, 8);
    goto LAB90;

LAB88:    memcpy(t3, t31, 8);
    goto LAB90;

LAB91:    xsi_set_current_line(60, ng0);
    t4 = ((char*)((ng38)));
    memset(t3, 0, 8);
    xsi_vlog_unsigned_unary_minus(t3, 12, t4, 12);
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 12, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB92;
    goto LAB1;

LAB92:    xsi_set_current_line(60, ng0);
    t4 = xsi_vlog_time(t6, 1000.0000000000000, 1000.0000000000000);
    t5 = (t0 + 1368U);
    t7 = *((char **)t5);
    t5 = (t0 + 1208U);
    t8 = *((char **)t5);
    t5 = (t0 + 1048U);
    t9 = *((char **)t5);
    t5 = (t0 + 1368U);
    t10 = *((char **)t5);
    t5 = ((char*)((ng33)));
    memset(t29, 0, 8);
    t18 = (t10 + 4);
    t19 = (t5 + 4);
    t11 = *((unsigned int *)t10);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t18);
    t15 = *((unsigned int *)t19);
    t16 = (t14 ^ t15);
    t23 = (t13 | t16);
    t24 = *((unsigned int *)t18);
    t25 = *((unsigned int *)t19);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB96;

LAB93:    if (t26 != 0)
        goto LAB95;

LAB94:    *((unsigned int *)t29) = 1;

LAB96:    memset(t17, 0, 8);
    t21 = (t29 + 4);
    t35 = *((unsigned int *)t21);
    t36 = (~(t35));
    t37 = *((unsigned int *)t29);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB97;

LAB98:    if (*((unsigned int *)t21) != 0)
        goto LAB99;

LAB100:    t30 = (t17 + 4);
    t40 = *((unsigned int *)t17);
    t45 = *((unsigned int *)t30);
    t46 = (t40 || t45);
    if (t46 > 0)
        goto LAB101;

LAB102:    t47 = *((unsigned int *)t17);
    t48 = (~(t47));
    t49 = *((unsigned int *)t30);
    t50 = (t48 || t49);
    if (t50 > 0)
        goto LAB103;

LAB104:    if (*((unsigned int *)t30) > 0)
        goto LAB105;

LAB106:    if (*((unsigned int *)t17) > 0)
        goto LAB107;

LAB108:    memcpy(t3, t32, 8);

LAB109:    t33 = (t0 + 1048U);
    t34 = *((char **)t33);
    t33 = ((char*)((ng20)));
    t41 = (t0 + 1208U);
    t42 = *((char **)t41);
    memset(t51, 0, 8);
    xsi_vlog_unsigned_power(t51, 32, t33, 32, t42, 3, 0);
    memset(t52, 0, 8);
    xsi_vlog_unsigned_multiply(t52, 32, t34, 4, t51, 32);
    xsi_vlogfile_write(1, 0, 0, ng39, 7, t0, (char)118, t6, 64, (char)118, t7, 1, (char)118, t8, 3, (char)118, t9, 4, (char)118, t3, 8, (char)118, t52, 32);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB110;
    goto LAB1;

LAB95:    t20 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB96;

LAB97:    *((unsigned int *)t17) = 1;
    goto LAB100;

LAB99:    t22 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB100;

LAB101:    t31 = ((char*)((ng34)));
    goto LAB102;

LAB103:    t32 = ((char*)((ng35)));
    goto LAB104;

LAB105:    xsi_vlog_unsigned_bit_combine(t3, 8, t31, 8, t32, 8);
    goto LAB109;

LAB107:    memcpy(t3, t31, 8);
    goto LAB109;

LAB110:    xsi_set_current_line(61, ng0);
    t4 = ((char*)((ng9)));
    memset(t3, 0, 8);
    xsi_vlog_unsigned_unary_minus(t3, 12, t4, 12);
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 12, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB111;
    goto LAB1;

LAB111:    xsi_set_current_line(61, ng0);
    t4 = xsi_vlog_time(t6, 1000.0000000000000, 1000.0000000000000);
    t5 = (t0 + 1368U);
    t7 = *((char **)t5);
    t5 = (t0 + 1208U);
    t8 = *((char **)t5);
    t5 = (t0 + 1048U);
    t9 = *((char **)t5);
    t5 = (t0 + 1368U);
    t10 = *((char **)t5);
    t5 = ((char*)((ng33)));
    memset(t29, 0, 8);
    t18 = (t10 + 4);
    t19 = (t5 + 4);
    t11 = *((unsigned int *)t10);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t18);
    t15 = *((unsigned int *)t19);
    t16 = (t14 ^ t15);
    t23 = (t13 | t16);
    t24 = *((unsigned int *)t18);
    t25 = *((unsigned int *)t19);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB115;

LAB112:    if (t26 != 0)
        goto LAB114;

LAB113:    *((unsigned int *)t29) = 1;

LAB115:    memset(t17, 0, 8);
    t21 = (t29 + 4);
    t35 = *((unsigned int *)t21);
    t36 = (~(t35));
    t37 = *((unsigned int *)t29);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB116;

LAB117:    if (*((unsigned int *)t21) != 0)
        goto LAB118;

LAB119:    t30 = (t17 + 4);
    t40 = *((unsigned int *)t17);
    t45 = *((unsigned int *)t30);
    t46 = (t40 || t45);
    if (t46 > 0)
        goto LAB120;

LAB121:    t47 = *((unsigned int *)t17);
    t48 = (~(t47));
    t49 = *((unsigned int *)t30);
    t50 = (t48 || t49);
    if (t50 > 0)
        goto LAB122;

LAB123:    if (*((unsigned int *)t30) > 0)
        goto LAB124;

LAB125:    if (*((unsigned int *)t17) > 0)
        goto LAB126;

LAB127:    memcpy(t3, t32, 8);

LAB128:    t33 = (t0 + 1048U);
    t34 = *((char **)t33);
    t33 = ((char*)((ng20)));
    t41 = (t0 + 1208U);
    t42 = *((char **)t41);
    memset(t51, 0, 8);
    xsi_vlog_unsigned_power(t51, 32, t33, 32, t42, 3, 0);
    memset(t52, 0, 8);
    xsi_vlog_unsigned_multiply(t52, 32, t34, 4, t51, 32);
    xsi_vlogfile_write(1, 0, 0, ng40, 7, t0, (char)118, t6, 64, (char)118, t7, 1, (char)118, t8, 3, (char)118, t9, 4, (char)118, t3, 8, (char)118, t52, 32);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB129;
    goto LAB1;

LAB114:    t20 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB115;

LAB116:    *((unsigned int *)t17) = 1;
    goto LAB119;

LAB118:    t22 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB119;

LAB120:    t31 = ((char*)((ng34)));
    goto LAB121;

LAB122:    t32 = ((char*)((ng35)));
    goto LAB123;

LAB124:    xsi_vlog_unsigned_bit_combine(t3, 8, t31, 8, t32, 8);
    goto LAB128;

LAB126:    memcpy(t3, t31, 8);
    goto LAB128;

LAB129:    xsi_set_current_line(62, ng0);
    t4 = ((char*)((ng9)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 12, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB130;
    goto LAB1;

LAB130:    xsi_set_current_line(62, ng0);
    t4 = xsi_vlog_time(t6, 1000.0000000000000, 1000.0000000000000);
    t5 = (t0 + 1368U);
    t7 = *((char **)t5);
    t5 = (t0 + 1208U);
    t8 = *((char **)t5);
    t5 = (t0 + 1048U);
    t9 = *((char **)t5);
    t5 = (t0 + 1368U);
    t10 = *((char **)t5);
    t5 = ((char*)((ng33)));
    memset(t29, 0, 8);
    t18 = (t10 + 4);
    t19 = (t5 + 4);
    t11 = *((unsigned int *)t10);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t18);
    t15 = *((unsigned int *)t19);
    t16 = (t14 ^ t15);
    t23 = (t13 | t16);
    t24 = *((unsigned int *)t18);
    t25 = *((unsigned int *)t19);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB134;

LAB131:    if (t26 != 0)
        goto LAB133;

LAB132:    *((unsigned int *)t29) = 1;

LAB134:    memset(t17, 0, 8);
    t21 = (t29 + 4);
    t35 = *((unsigned int *)t21);
    t36 = (~(t35));
    t37 = *((unsigned int *)t29);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB135;

LAB136:    if (*((unsigned int *)t21) != 0)
        goto LAB137;

LAB138:    t30 = (t17 + 4);
    t40 = *((unsigned int *)t17);
    t45 = *((unsigned int *)t30);
    t46 = (t40 || t45);
    if (t46 > 0)
        goto LAB139;

LAB140:    t47 = *((unsigned int *)t17);
    t48 = (~(t47));
    t49 = *((unsigned int *)t30);
    t50 = (t48 || t49);
    if (t50 > 0)
        goto LAB141;

LAB142:    if (*((unsigned int *)t30) > 0)
        goto LAB143;

LAB144:    if (*((unsigned int *)t17) > 0)
        goto LAB145;

LAB146:    memcpy(t3, t32, 8);

LAB147:    t33 = (t0 + 1048U);
    t34 = *((char **)t33);
    t33 = ((char*)((ng20)));
    t41 = (t0 + 1208U);
    t42 = *((char **)t41);
    memset(t51, 0, 8);
    xsi_vlog_unsigned_power(t51, 32, t33, 32, t42, 3, 0);
    memset(t52, 0, 8);
    xsi_vlog_unsigned_multiply(t52, 32, t34, 4, t51, 32);
    xsi_vlogfile_write(1, 0, 0, ng41, 7, t0, (char)118, t6, 64, (char)118, t7, 1, (char)118, t8, 3, (char)118, t9, 4, (char)118, t3, 8, (char)118, t52, 32);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB148;
    goto LAB1;

LAB133:    t20 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB134;

LAB135:    *((unsigned int *)t17) = 1;
    goto LAB138;

LAB137:    t22 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB138;

LAB139:    t31 = ((char*)((ng34)));
    goto LAB140;

LAB141:    t32 = ((char*)((ng35)));
    goto LAB142;

LAB143:    xsi_vlog_unsigned_bit_combine(t3, 8, t31, 8, t32, 8);
    goto LAB147;

LAB145:    memcpy(t3, t31, 8);
    goto LAB147;

LAB148:    xsi_set_current_line(63, ng0);
    t4 = ((char*)((ng18)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 12, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB149;
    goto LAB1;

LAB149:    xsi_set_current_line(63, ng0);
    t4 = xsi_vlog_time(t6, 1000.0000000000000, 1000.0000000000000);
    t5 = (t0 + 1368U);
    t7 = *((char **)t5);
    t5 = (t0 + 1208U);
    t8 = *((char **)t5);
    t5 = (t0 + 1048U);
    t9 = *((char **)t5);
    t5 = (t0 + 1368U);
    t10 = *((char **)t5);
    t5 = ((char*)((ng33)));
    memset(t29, 0, 8);
    t18 = (t10 + 4);
    t19 = (t5 + 4);
    t11 = *((unsigned int *)t10);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t18);
    t15 = *((unsigned int *)t19);
    t16 = (t14 ^ t15);
    t23 = (t13 | t16);
    t24 = *((unsigned int *)t18);
    t25 = *((unsigned int *)t19);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB153;

LAB150:    if (t26 != 0)
        goto LAB152;

LAB151:    *((unsigned int *)t29) = 1;

LAB153:    memset(t17, 0, 8);
    t21 = (t29 + 4);
    t35 = *((unsigned int *)t21);
    t36 = (~(t35));
    t37 = *((unsigned int *)t29);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB154;

LAB155:    if (*((unsigned int *)t21) != 0)
        goto LAB156;

LAB157:    t30 = (t17 + 4);
    t40 = *((unsigned int *)t17);
    t45 = *((unsigned int *)t30);
    t46 = (t40 || t45);
    if (t46 > 0)
        goto LAB158;

LAB159:    t47 = *((unsigned int *)t17);
    t48 = (~(t47));
    t49 = *((unsigned int *)t30);
    t50 = (t48 || t49);
    if (t50 > 0)
        goto LAB160;

LAB161:    if (*((unsigned int *)t30) > 0)
        goto LAB162;

LAB163:    if (*((unsigned int *)t17) > 0)
        goto LAB164;

LAB165:    memcpy(t3, t32, 8);

LAB166:    t33 = (t0 + 1048U);
    t34 = *((char **)t33);
    t33 = ((char*)((ng20)));
    t41 = (t0 + 1208U);
    t42 = *((char **)t41);
    memset(t51, 0, 8);
    xsi_vlog_unsigned_power(t51, 32, t33, 32, t42, 3, 0);
    memset(t52, 0, 8);
    xsi_vlog_unsigned_multiply(t52, 32, t34, 4, t51, 32);
    xsi_vlogfile_write(1, 0, 0, ng42, 7, t0, (char)118, t6, 64, (char)118, t7, 1, (char)118, t8, 3, (char)118, t9, 4, (char)118, t3, 8, (char)118, t52, 32);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB167;
    goto LAB1;

LAB152:    t20 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB153;

LAB154:    *((unsigned int *)t17) = 1;
    goto LAB157;

LAB156:    t22 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB157;

LAB158:    t31 = ((char*)((ng34)));
    goto LAB159;

LAB160:    t32 = ((char*)((ng35)));
    goto LAB161;

LAB162:    xsi_vlog_unsigned_bit_combine(t3, 8, t31, 8, t32, 8);
    goto LAB166;

LAB164:    memcpy(t3, t31, 8);
    goto LAB166;

LAB167:    xsi_set_current_line(64, ng0);
    t4 = ((char*)((ng18)));
    memset(t3, 0, 8);
    xsi_vlog_unsigned_unary_minus(t3, 12, t4, 12);
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 12, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB168;
    goto LAB1;

LAB168:    xsi_set_current_line(64, ng0);
    t4 = xsi_vlog_time(t6, 1000.0000000000000, 1000.0000000000000);
    t5 = (t0 + 1368U);
    t7 = *((char **)t5);
    t5 = (t0 + 1208U);
    t8 = *((char **)t5);
    t5 = (t0 + 1048U);
    t9 = *((char **)t5);
    t5 = (t0 + 1368U);
    t10 = *((char **)t5);
    t5 = ((char*)((ng33)));
    memset(t29, 0, 8);
    t18 = (t10 + 4);
    t19 = (t5 + 4);
    t11 = *((unsigned int *)t10);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t18);
    t15 = *((unsigned int *)t19);
    t16 = (t14 ^ t15);
    t23 = (t13 | t16);
    t24 = *((unsigned int *)t18);
    t25 = *((unsigned int *)t19);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB172;

LAB169:    if (t26 != 0)
        goto LAB171;

LAB170:    *((unsigned int *)t29) = 1;

LAB172:    memset(t17, 0, 8);
    t21 = (t29 + 4);
    t35 = *((unsigned int *)t21);
    t36 = (~(t35));
    t37 = *((unsigned int *)t29);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB173;

LAB174:    if (*((unsigned int *)t21) != 0)
        goto LAB175;

LAB176:    t30 = (t17 + 4);
    t40 = *((unsigned int *)t17);
    t45 = *((unsigned int *)t30);
    t46 = (t40 || t45);
    if (t46 > 0)
        goto LAB177;

LAB178:    t47 = *((unsigned int *)t17);
    t48 = (~(t47));
    t49 = *((unsigned int *)t30);
    t50 = (t48 || t49);
    if (t50 > 0)
        goto LAB179;

LAB180:    if (*((unsigned int *)t30) > 0)
        goto LAB181;

LAB182:    if (*((unsigned int *)t17) > 0)
        goto LAB183;

LAB184:    memcpy(t3, t32, 8);

LAB185:    t33 = (t0 + 1048U);
    t34 = *((char **)t33);
    t33 = ((char*)((ng20)));
    t41 = (t0 + 1208U);
    t42 = *((char **)t41);
    memset(t51, 0, 8);
    xsi_vlog_unsigned_power(t51, 32, t33, 32, t42, 3, 0);
    memset(t52, 0, 8);
    xsi_vlog_unsigned_multiply(t52, 32, t34, 4, t51, 32);
    xsi_vlogfile_write(1, 0, 0, ng43, 7, t0, (char)118, t6, 64, (char)118, t7, 1, (char)118, t8, 3, (char)118, t9, 4, (char)118, t3, 8, (char)118, t52, 32);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB186;
    goto LAB1;

LAB171:    t20 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB172;

LAB173:    *((unsigned int *)t17) = 1;
    goto LAB176;

LAB175:    t22 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB176;

LAB177:    t31 = ((char*)((ng34)));
    goto LAB178;

LAB179:    t32 = ((char*)((ng35)));
    goto LAB180;

LAB181:    xsi_vlog_unsigned_bit_combine(t3, 8, t31, 8, t32, 8);
    goto LAB185;

LAB183:    memcpy(t3, t31, 8);
    goto LAB185;

LAB186:    xsi_set_current_line(66, ng0);
    t4 = ((char*)((ng44)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 12, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB187;
    goto LAB1;

LAB187:    xsi_set_current_line(67, ng0);
    t4 = ((char*)((ng45)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 12, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB188;
    goto LAB1;

LAB188:    xsi_set_current_line(68, ng0);
    t4 = ((char*)((ng9)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 12, 0LL);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB189;
    goto LAB1;

LAB189:    xsi_set_current_line(69, ng0);
    t4 = ((char*)((ng46)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 12, 0LL);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB190;
    goto LAB1;

LAB190:    xsi_set_current_line(70, ng0);
    t4 = ((char*)((ng38)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 12, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB191;
    goto LAB1;

LAB191:    xsi_set_current_line(71, ng0);
    t4 = ((char*)((ng47)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 12, 0LL);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB192;
    goto LAB1;

LAB192:    xsi_set_current_line(72, ng0);
    t4 = ((char*)((ng48)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 12, 0LL);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB193;
    goto LAB1;

LAB193:    xsi_set_current_line(73, ng0);
    t4 = ((char*)((ng49)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 12, 0LL);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB194;
    goto LAB1;

LAB194:    xsi_set_current_line(74, ng0);
    t4 = ((char*)((ng50)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 12, 0LL);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 2488);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB195;
    goto LAB1;

LAB195:    xsi_set_current_line(75, ng0);
    xsi_vlog_finish(1);
    goto LAB6;

LAB196:    goto LAB1;

}


extern void work_m_11294160546404913934_1154953813_init()
{
	static char *pe[] = {(void *)Initial_26_0};
	xsi_register_didat("work_m_11294160546404913934_1154953813", "isim/FPCVT_TB_isim_beh.exe.sim/work/m_11294160546404913934_1154953813.didat");
	xsi_register_executes(pe);
}
