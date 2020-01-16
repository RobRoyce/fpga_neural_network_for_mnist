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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/152/Desktop/csm152a/lab_1/twos_comp_to_sm_converter.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {2048U, 0U};
static unsigned int ng3[] = {2047U, 0U};
static unsigned int ng4[] = {1U, 0U};



static void Initial_19_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(20, ng0);

LAB2:    xsi_set_current_line(21, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1584);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);
    xsi_set_current_line(22, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1744);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 12, 0LL);

LAB1:    return;
}

static void Always_25_1(char *t0)
{
    char t6[8];
    char t28[8];
    char t35[8];
    char t48[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t49;

LAB0:    t1 = (t0 + 2912U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 3232);
    *((int *)t2) = 1;
    t3 = (t0 + 2944);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(26, ng0);

LAB5:    xsi_set_current_line(27, ng0);
    t4 = (t0 + 1184U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 11);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 11);
    t13 = (t12 & 1);
    *((unsigned int *)t4) = t13;
    t14 = (t0 + 1584);
    xsi_vlogvar_wait_assign_value(t14, t6, 0, 0, 1, 0LL);
    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1184U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t2);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t15 = (t10 | t13);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t14 = (t6 + 4);
    t21 = *((unsigned int *)t14);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1184U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 11);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 11);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = ((char*)((ng4)));
    memset(t28, 0, 8);
    t7 = (t6 + 4);
    t14 = (t5 + 4);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t5);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t14);
    t20 = (t18 ^ t19);
    t21 = (t17 | t20);
    t22 = *((unsigned int *)t7);
    t23 = *((unsigned int *)t14);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t29 = (t21 & t25);
    if (t29 != 0)
        goto LAB16;

LAB13:    if (t24 != 0)
        goto LAB15;

LAB14:    *((unsigned int *)t28) = 1;

LAB16:    t27 = (t28 + 4);
    t30 = *((unsigned int *)t27);
    t31 = (~(t30));
    t32 = *((unsigned int *)t28);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1184U);
    t3 = *((char **)t2);
    t2 = (t0 + 1744);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 12, 0LL);

LAB19:
LAB12:    goto LAB2;

LAB8:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(32, ng0);
    t26 = ((char*)((ng3)));
    t27 = (t0 + 1744);
    xsi_vlogvar_wait_assign_value(t27, t26, 0, 0, 12, 0LL);
    goto LAB12;

LAB15:    t26 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB16;

LAB17:    xsi_set_current_line(36, ng0);
    t36 = (t0 + 1184U);
    t37 = *((char **)t36);
    memset(t35, 0, 8);
    t36 = (t35 + 4);
    t38 = (t37 + 4);
    t39 = *((unsigned int *)t37);
    t40 = (~(t39));
    *((unsigned int *)t35) = t40;
    *((unsigned int *)t36) = 0;
    if (*((unsigned int *)t38) != 0)
        goto LAB21;

LAB20:    t45 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t45 & 4095U);
    t46 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t46 & 4095U);
    t47 = ((char*)((ng4)));
    memset(t48, 0, 8);
    xsi_vlog_unsigned_add(t48, 12, t35, 12, t47, 12);
    t49 = (t0 + 1744);
    xsi_vlogvar_wait_assign_value(t49, t48, 0, 0, 12, 0LL);
    goto LAB19;

LAB21:    t41 = *((unsigned int *)t35);
    t42 = *((unsigned int *)t38);
    *((unsigned int *)t35) = (t41 | t42);
    t43 = *((unsigned int *)t36);
    t44 = *((unsigned int *)t38);
    *((unsigned int *)t36) = (t43 | t44);
    goto LAB20;

}


extern void work_m_00000000001102418623_3601692075_init()
{
	static char *pe[] = {(void *)Initial_19_0,(void *)Always_25_1};
	xsi_register_didat("work_m_00000000001102418623_3601692075", "isim/FPCVT_isim_beh.exe.sim/work/m_00000000001102418623_3601692075.didat");
	xsi_register_executes(pe);
}
