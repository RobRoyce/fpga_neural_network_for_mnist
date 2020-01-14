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
static const char *ng0 = "Q assigned: %b (%2)";
static const char *ng1 = "/home/parallels/ucla/csm152a/labs/lab_1/priority_encoder_TB.v";
static int ng2[] = {0, 0};
static unsigned int ng3[] = {2047U, 0U};
static unsigned int ng4[] = {1023U, 0U};
static unsigned int ng5[] = {511U, 0U};
static unsigned int ng6[] = {255U, 0U};
static unsigned int ng7[] = {127U, 0U};
static unsigned int ng8[] = {63U, 0U};
static unsigned int ng9[] = {31U, 0U};
static unsigned int ng10[] = {15U, 0U};
static unsigned int ng11[] = {7U, 0U};
static unsigned int ng12[] = {3U, 0U};
static unsigned int ng13[] = {1U, 0U};
static unsigned int ng14[] = {0U, 0U};

void Monitor_31_1(char *);
void Monitor_31_1(char *);


static void Monitor_31_1_Func(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 1048U);
    t2 = *((char **)t1);
    t1 = (t0 + 1048U);
    t3 = *((char **)t1);
    xsi_vlogfile_write(1, 0, 3, ng0, 3, t0, (char)118, t2, 3, (char)118, t3, 3);

LAB1:    return;
}

static void Initial_23_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 2520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(23, ng1);

LAB4:    xsi_set_current_line(25, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 12);
    xsi_set_current_line(28, ng1);
    t2 = (t0 + 2328);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(31, ng1);
    Monitor_31_1(t0);
    goto LAB1;

}

static void Always_34_2(char *t0)
{
    char t27[8];
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
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;

LAB0:    t1 = (t0 + 2768U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng1);
    t2 = (t0 + 2824);
    t3 = (t0 + 2576);
    xsi_add_process_toexecute(0, t2, t3);
    t4 = (t0 + 3072);
    t5 = (t0 + 2576);
    xsi_add_process_toexecute(0, t4, t5);
    t6 = (t0 + 3320);
    t7 = (t0 + 2576);
    xsi_add_process_toexecute(0, t6, t7);
    t8 = (t0 + 3568);
    t9 = (t0 + 2576);
    xsi_add_process_toexecute(0, t8, t9);
    t10 = (t0 + 3816);
    t11 = (t0 + 2576);
    xsi_add_process_toexecute(0, t10, t11);
    t12 = (t0 + 4064);
    t13 = (t0 + 2576);
    xsi_add_process_toexecute(0, t12, t13);
    t14 = (t0 + 4312);
    t15 = (t0 + 2576);
    xsi_add_process_toexecute(0, t14, t15);
    t16 = (t0 + 4560);
    t17 = (t0 + 2576);
    xsi_add_process_toexecute(0, t16, t17);
    t18 = (t0 + 4808);
    t19 = (t0 + 2576);
    xsi_add_process_toexecute(0, t18, t19);
    t20 = (t0 + 5056);
    t21 = (t0 + 2576);
    xsi_add_process_toexecute(0, t20, t21);
    t22 = (t0 + 5304);
    t23 = (t0 + 2576);
    xsi_add_process_toexecute(0, t22, t23);
    t24 = (t0 + 5552);
    t25 = (t0 + 2576);
    xsi_add_process_toexecute(0, t24, t25);
    t26 = (t0 + 1608);
    memset(t27, 0, 8);
    *((unsigned int *)t27) = 12;
    xsi_vlogvar_assign_value(t26, t27, 0, 0, 32);
    t28 = (t0 + 6312);
    *((int *)t28) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t29 = (t0 + 1608);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    if (*((int *)t31) > 0)
        goto LAB5;

LAB6:    t33 = (t0 + 2576);
    xsi_clean_active_fork_process_list(t33);
    goto LAB2;

LAB5:    t32 = (t0 + 6312);
    *((int *)t32) = 1;
    goto LAB1;

}

static void Forked_36_3(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;

LAB0:    t1 = (t0 + 3016U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 2824);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(36, ng1);
    t3 = (t0 + 2824);
    xsi_process_wait(t3, 100000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t6, t4, 8);
    t7 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t7 - 1);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(36, ng1);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 12, 0LL);
    goto LAB5;

}

static void Forked_37_4(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;

LAB0:    t1 = (t0 + 3264U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 3072);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(37, ng1);
    t3 = (t0 + 3072);
    xsi_process_wait(t3, 150000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t6, t4, 8);
    t7 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t7 - 1);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(37, ng1);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 12, 0LL);
    goto LAB5;

}

static void Forked_38_5(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;

LAB0:    t1 = (t0 + 3512U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 3320);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(38, ng1);
    t3 = (t0 + 3320);
    xsi_process_wait(t3, 200000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t6, t4, 8);
    t7 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t7 - 1);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(38, ng1);
    t4 = ((char*)((ng5)));
    t5 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 12, 0LL);
    goto LAB5;

}

static void Forked_39_6(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;

LAB0:    t1 = (t0 + 3760U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 3568);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(39, ng1);
    t3 = (t0 + 3568);
    xsi_process_wait(t3, 250000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t6, t4, 8);
    t7 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t7 - 1);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(39, ng1);
    t4 = ((char*)((ng6)));
    t5 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 12, 0LL);
    goto LAB5;

}

static void Forked_40_7(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;

LAB0:    t1 = (t0 + 4008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 3816);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(40, ng1);
    t3 = (t0 + 3816);
    xsi_process_wait(t3, 300000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t6, t4, 8);
    t7 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t7 - 1);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(40, ng1);
    t4 = ((char*)((ng7)));
    t5 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 12, 0LL);
    goto LAB5;

}

static void Forked_41_8(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;

LAB0:    t1 = (t0 + 4256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 4064);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(41, ng1);
    t3 = (t0 + 4064);
    xsi_process_wait(t3, 350000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t6, t4, 8);
    t7 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t7 - 1);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(41, ng1);
    t4 = ((char*)((ng8)));
    t5 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 12, 0LL);
    goto LAB5;

}

static void Forked_42_9(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;

LAB0:    t1 = (t0 + 4504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 4312);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(42, ng1);
    t3 = (t0 + 4312);
    xsi_process_wait(t3, 400000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t6, t4, 8);
    t7 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t7 - 1);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(42, ng1);
    t4 = ((char*)((ng9)));
    t5 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 12, 0LL);
    goto LAB5;

}

static void Forked_43_10(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;

LAB0:    t1 = (t0 + 4752U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 4560);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(43, ng1);
    t3 = (t0 + 4560);
    xsi_process_wait(t3, 450000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t6, t4, 8);
    t7 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t7 - 1);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(43, ng1);
    t4 = ((char*)((ng10)));
    t5 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 12, 0LL);
    goto LAB5;

}

static void Forked_44_11(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;

LAB0:    t1 = (t0 + 5000U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 4808);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(44, ng1);
    t3 = (t0 + 4808);
    xsi_process_wait(t3, 500000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t6, t4, 8);
    t7 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t7 - 1);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(44, ng1);
    t4 = ((char*)((ng11)));
    t5 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 12, 0LL);
    goto LAB5;

}

static void Forked_45_12(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;

LAB0:    t1 = (t0 + 5248U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 5056);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(45, ng1);
    t3 = (t0 + 5056);
    xsi_process_wait(t3, 500000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t6, t4, 8);
    t7 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t7 - 1);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(45, ng1);
    t4 = ((char*)((ng12)));
    t5 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 12, 0LL);
    goto LAB5;

}

static void Forked_46_13(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;

LAB0:    t1 = (t0 + 5496U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 5304);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(46, ng1);
    t3 = (t0 + 5304);
    xsi_process_wait(t3, 550000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t6, t4, 8);
    t7 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t7 - 1);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(46, ng1);
    t4 = ((char*)((ng13)));
    t5 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 12, 0LL);
    goto LAB5;

}

static void Forked_47_14(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;

LAB0:    t1 = (t0 + 5744U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t2 = (t0 + 5552);
    xsi_vlog_process_setdisablestate(t2, &&LAB5);
    xsi_set_current_line(47, ng1);
    t3 = (t0 + 5552);
    xsi_process_wait(t3, 600000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB5:    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memcpy(t6, t4, 8);
    t7 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t7 - 1);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 32);
    goto LAB2;

LAB6:    xsi_set_current_line(47, ng1);
    t4 = ((char*)((ng14)));
    t5 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 12, 0LL);
    goto LAB5;

}

void Monitor_31_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 5800);
    t2 = (t0 + 6328);
    xsi_vlogfile_monitor((void *)Monitor_31_1_Func, t1, t2);

LAB1:    return;
}


extern void work_m_14471607900616540372_2813740960_init()
{
	static char *pe[] = {(void *)Initial_23_0,(void *)Always_34_2,(void *)Forked_36_3,(void *)Forked_37_4,(void *)Forked_38_5,(void *)Forked_39_6,(void *)Forked_40_7,(void *)Forked_41_8,(void *)Forked_42_9,(void *)Forked_43_10,(void *)Forked_44_11,(void *)Forked_45_12,(void *)Forked_46_13,(void *)Forked_47_14,(void *)Monitor_31_1};
	xsi_register_didat("work_m_14471607900616540372_2813740960", "isim/priority_encoder_TB_isim_beh.exe.sim/work/m_14471607900616540372_2813740960.didat");
	xsi_register_executes(pe);
}
