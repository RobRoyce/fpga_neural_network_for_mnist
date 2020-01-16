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
static const char *ng0 = "/home/parallels/ucla/m152acs/labs/csm152a/lab_1/priority_encoder_TB.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {12U, 0U};
static unsigned int ng3[] = {1U, 0U};
static const char *ng4 = "%t | SM: %b | exponent: %b";
static unsigned int ng5[] = {0U, 0U};
static unsigned int ng6[] = {11U, 0U};
static unsigned int ng7[] = {4095U, 0U};



static void Initial_25_0(char *t0)
{
    char t6[8];
    char t18[8];
    char t28[16];
    char *t1;
    char *t2;
    char *t3;
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
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    int t27;

LAB0:    t1 = (t0 + 2520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(25, ng0);

LAB4:    xsi_set_current_line(27, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 12);
    xsi_set_current_line(28, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(30, ng0);
    t2 = (t0 + 2328);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(33, ng0);
    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB6:    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB8;

LAB7:    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB8;

LAB11:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB9;

LAB10:    t10 = (t6 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t6);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 2328);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB8:    t9 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB10;

LAB9:    *((unsigned int *)t6) = 1;
    goto LAB10;

LAB12:    xsi_set_current_line(34, ng0);

LAB14:    xsi_set_current_line(35, ng0);
    t16 = ((char*)((ng3)));
    t17 = (t0 + 1448);
    t19 = (t0 + 1448);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = (t0 + 1608);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_generic_convert_bit_index(t18, t21, 2, t24, 32, 1);
    t25 = (t18 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    if (t27 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 2328);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB17;
    goto LAB1;

LAB15:    xsi_vlogvar_wait_assign_value(t17, t16, 0, *((unsigned int *)t18), 1, 0LL);
    goto LAB16;

LAB17:    xsi_set_current_line(36, ng0);
    t3 = xsi_vlog_time(t28, 1000.0000000000000, 1000.0000000000000);
    t4 = (t0 + 1448);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 1048U);
    t9 = *((char **)t8);
    xsi_vlogfile_write(1, 0, 0, ng4, 4, t0, (char)118, t28, 64, (char)118, t7, 12, (char)118, t9, 3);
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 1608);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB6;

LAB18:    xsi_set_current_line(39, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 12, 0LL);
    xsi_set_current_line(41, ng0);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB19:    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB21;

LAB20:    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB21;

LAB24:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB23;

LAB22:    *((unsigned int *)t6) = 1;

LAB23:    t10 = (t6 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t6);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 2328);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB21:    t9 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB23;

LAB25:    xsi_set_current_line(42, ng0);

LAB27:    xsi_set_current_line(43, ng0);
    t16 = ((char*)((ng3)));
    t17 = (t0 + 1448);
    t19 = (t0 + 1448);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = (t0 + 1608);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_generic_convert_bit_index(t18, t21, 2, t24, 32, 1);
    t25 = (t18 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    if (t27 == 1)
        goto LAB28;

LAB29:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 2328);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB30;
    goto LAB1;

LAB28:    xsi_vlogvar_wait_assign_value(t17, t16, 0, *((unsigned int *)t18), 1, 0LL);
    goto LAB29;

LAB30:    xsi_set_current_line(44, ng0);
    t3 = xsi_vlog_time(t28, 1000.0000000000000, 1000.0000000000000);
    t4 = (t0 + 1448);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 1048U);
    t9 = *((char **)t8);
    xsi_vlogfile_write(1, 0, 0, ng4, 4, t0, (char)118, t28, 64, (char)118, t7, 12, (char)118, t9, 3);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 1608);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB19;

LAB31:    xsi_set_current_line(47, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 12, 0LL);
    xsi_set_current_line(49, ng0);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB32:    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB34;

LAB33:    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB34;

LAB37:    if (*((unsigned int *)t4) > *((unsigned int *)t5))
        goto LAB36;

LAB35:    *((unsigned int *)t6) = 1;

LAB36:    t10 = (t6 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t6);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB38;

LAB39:    goto LAB1;

LAB34:    t9 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB36;

LAB38:    xsi_set_current_line(50, ng0);

LAB40:    xsi_set_current_line(51, ng0);
    t16 = (t0 + 1608);
    t17 = (t16 + 56U);
    t19 = *((char **)t17);
    t20 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 12, 0LL);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2328);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB41;
    goto LAB1;

LAB41:    xsi_set_current_line(52, ng0);
    t3 = xsi_vlog_time(t28, 1000.0000000000000, 1000.0000000000000);
    t4 = (t0 + 1448);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 1048U);
    t9 = *((char **)t8);
    xsi_vlogfile_write(1, 0, 0, ng4, 4, t0, (char)118, t28, 64, (char)118, t7, 12, (char)118, t9, 3);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 1608);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB32;

}


extern void work_m_11106322023049797441_2813740960_init()
{
	static char *pe[] = {(void *)Initial_25_0};
	xsi_register_didat("work_m_11106322023049797441_2813740960", "isim/priority_encoder_TB_isim_beh.exe.sim/work/m_11106322023049797441_2813740960.didat");
	xsi_register_executes(pe);
}
