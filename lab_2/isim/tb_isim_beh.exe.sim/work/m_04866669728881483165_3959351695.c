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
static const char *ng0 = "/home/parallels/ucla/m152acs/labs/csm152a/lab_2/uart_top.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {48, 0};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {49, 0};
static unsigned int ng5[] = {2U, 0U};
static int ng6[] = {50, 0};
static unsigned int ng7[] = {3U, 0U};
static int ng8[] = {51, 0};
static unsigned int ng9[] = {4U, 0U};
static int ng10[] = {52, 0};
static unsigned int ng11[] = {5U, 0U};
static int ng12[] = {53, 0};
static unsigned int ng13[] = {6U, 0U};
static int ng14[] = {54, 0};
static unsigned int ng15[] = {7U, 0U};
static int ng16[] = {55, 0};
static unsigned int ng17[] = {8U, 0U};
static int ng18[] = {56, 0};
static unsigned int ng19[] = {9U, 0U};
static int ng20[] = {57, 0};
static unsigned int ng21[] = {10U, 0U};
static int ng22[] = {65, 0};
static unsigned int ng23[] = {11U, 0U};
static int ng24[] = {66, 0};
static unsigned int ng25[] = {12U, 0U};
static int ng26[] = {67, 0};
static unsigned int ng27[] = {13U, 0U};
static int ng28[] = {68, 0};
static unsigned int ng29[] = {14U, 0U};
static int ng30[] = {69, 0};
static unsigned int ng31[] = {15U, 0U};
static int ng32[] = {70, 0};
static int ng33[] = {1, 0};
static int ng34[] = {10, 0};
static int ng35[] = {13, 0};
static int ng36[] = {82, 0};
static int ng37[] = {58, 0};



static int sp_fnNib2ASCII(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;

LAB0:    t0 = 1;
    xsi_set_current_line(93, ng0);

LAB2:    xsi_set_current_line(94, ng0);
    t3 = (t1 + 7800);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);

LAB3:    t6 = ((char*)((ng1)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t6, 8);
    if (t7 == 1)
        goto LAB4;

LAB5:    t3 = ((char*)((ng3)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 8);
    if (t7 == 1)
        goto LAB6;

LAB7:    t3 = ((char*)((ng5)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 8);
    if (t7 == 1)
        goto LAB8;

LAB9:    t3 = ((char*)((ng7)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 8);
    if (t7 == 1)
        goto LAB10;

LAB11:    t3 = ((char*)((ng9)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 8);
    if (t7 == 1)
        goto LAB12;

LAB13:    t3 = ((char*)((ng11)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 8);
    if (t7 == 1)
        goto LAB14;

LAB15:    t3 = ((char*)((ng13)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 8);
    if (t7 == 1)
        goto LAB16;

LAB17:    t3 = ((char*)((ng15)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 8);
    if (t7 == 1)
        goto LAB18;

LAB19:    t3 = ((char*)((ng17)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 8);
    if (t7 == 1)
        goto LAB20;

LAB21:    t3 = ((char*)((ng19)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 8);
    if (t7 == 1)
        goto LAB22;

LAB23:    t3 = ((char*)((ng21)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 8);
    if (t7 == 1)
        goto LAB24;

LAB25:    t3 = ((char*)((ng23)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 8);
    if (t7 == 1)
        goto LAB26;

LAB27:    t3 = ((char*)((ng25)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 8);
    if (t7 == 1)
        goto LAB28;

LAB29:    t3 = ((char*)((ng27)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 8);
    if (t7 == 1)
        goto LAB30;

LAB31:    t3 = ((char*)((ng29)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 8);
    if (t7 == 1)
        goto LAB32;

LAB33:    t3 = ((char*)((ng31)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 8);
    if (t7 == 1)
        goto LAB34;

LAB35:
LAB36:    t0 = 0;

LAB1:    return t0;
LAB4:    xsi_set_current_line(95, ng0);
    t8 = ((char*)((ng2)));
    t9 = (t1 + 7640);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 8);
    goto LAB36;

LAB6:    xsi_set_current_line(96, ng0);
    t4 = ((char*)((ng4)));
    t6 = (t1 + 7640);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB36;

LAB8:    xsi_set_current_line(97, ng0);
    t4 = ((char*)((ng6)));
    t6 = (t1 + 7640);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB36;

LAB10:    xsi_set_current_line(98, ng0);
    t4 = ((char*)((ng8)));
    t6 = (t1 + 7640);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB36;

LAB12:    xsi_set_current_line(99, ng0);
    t4 = ((char*)((ng10)));
    t6 = (t1 + 7640);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB36;

LAB14:    xsi_set_current_line(100, ng0);
    t4 = ((char*)((ng12)));
    t6 = (t1 + 7640);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB36;

LAB16:    xsi_set_current_line(101, ng0);
    t4 = ((char*)((ng14)));
    t6 = (t1 + 7640);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB36;

LAB18:    xsi_set_current_line(102, ng0);
    t4 = ((char*)((ng16)));
    t6 = (t1 + 7640);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB36;

LAB20:    xsi_set_current_line(103, ng0);
    t4 = ((char*)((ng18)));
    t6 = (t1 + 7640);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB36;

LAB22:    xsi_set_current_line(104, ng0);
    t4 = ((char*)((ng20)));
    t6 = (t1 + 7640);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB36;

LAB24:    xsi_set_current_line(105, ng0);
    t4 = ((char*)((ng22)));
    t6 = (t1 + 7640);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB36;

LAB26:    xsi_set_current_line(106, ng0);
    t4 = ((char*)((ng24)));
    t6 = (t1 + 7640);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB36;

LAB28:    xsi_set_current_line(107, ng0);
    t4 = ((char*)((ng26)));
    t6 = (t1 + 7640);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB36;

LAB30:    xsi_set_current_line(108, ng0);
    t4 = ((char*)((ng28)));
    t6 = (t1 + 7640);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB36;

LAB32:    xsi_set_current_line(109, ng0);
    t4 = ((char*)((ng30)));
    t6 = (t1 + 7640);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB36;

LAB34:    xsi_set_current_line(110, ng0);
    t4 = ((char*)((ng32)));
    t6 = (t1 + 7640);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB36;

}

static void Cont_49_0(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
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
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;

LAB0:    t1 = (t0 + 8712U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 7480);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2240);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t5 = (t4 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t6);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB5;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB7:    t22 = (t0 + 10432);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memset(t26, 0, 8);
    t27 = 1U;
    t28 = t27;
    t29 = (t7 + 4);
    t30 = *((unsigned int *)t7);
    t27 = (t27 & t30);
    t31 = *((unsigned int *)t29);
    t28 = (t28 & t31);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t33 | t27);
    t34 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t34 | t28);
    xsi_driver_vfirst_trans(t22, 0, 0);
    t35 = (t0 + 10272);
    *((int *)t35) = 1;

LAB1:    return;
LAB5:    *((unsigned int *)t7) = 1;
    goto LAB7;

LAB6:    t21 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

}

static void Always_51_1(char *t0)
{
    char t16[8];
    char t34[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t35;

LAB0:    t1 = (t0 + 8960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 10288);
    *((int *)t2) = 1;
    t3 = (t0 + 8992);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(52, ng0);
    t4 = (t0 + 5640U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 7480);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB8:    t5 = (t0 + 2240);
    t11 = *((char **)t5);
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t11, 32);
    if (t13 == 1)
        goto LAB9;

LAB10:    t2 = (t0 + 3056);
    t3 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t3, 32);
    if (t13 == 1)
        goto LAB11;

LAB12:    t2 = (t0 + 2376);
    t3 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t3, 32);
    if (t13 == 1)
        goto LAB13;

LAB14:    t2 = (t0 + 2512);
    t3 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t3, 32);
    if (t13 == 1)
        goto LAB15;

LAB16:    t2 = (t0 + 2648);
    t3 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t4, 4, t3, 32);
    if (t13 == 1)
        goto LAB17;

LAB18:
LAB20:
LAB19:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 5960U);
    t3 = *((char **)t2);
    memset(t16, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB67;

LAB65:    if (*((unsigned int *)t2) == 0)
        goto LAB64;

LAB66:    t5 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t5) = 1;

LAB67:    t11 = (t16 + 4);
    t12 = (t3 + 4);
    t17 = *((unsigned int *)t3);
    t18 = (~(t17));
    *((unsigned int *)t16) = t18;
    *((unsigned int *)t11) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB69;

LAB68:    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 & 1U);
    t24 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t24 & 1U);
    t14 = (t16 + 4);
    t25 = *((unsigned int *)t14);
    t26 = (~(t25));
    t27 = *((unsigned int *)t16);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB70;

LAB71:
LAB72:
LAB21:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(53, ng0);
    t11 = (t0 + 2240);
    t12 = *((char **)t11);
    t11 = (t0 + 7480);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 4, 0LL);
    goto LAB7;

LAB9:    xsi_set_current_line(57, ng0);
    t5 = (t0 + 5160U);
    t12 = *((char **)t5);
    t5 = (t12 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t12);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB22;

LAB23:
LAB24:    goto LAB21;

LAB11:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 5960U);
    t5 = *((char **)t2);
    memset(t16, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB29;

LAB27:    if (*((unsigned int *)t2) == 0)
        goto LAB26;

LAB28:    t11 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t11) = 1;

LAB29:    t12 = (t16 + 4);
    t14 = (t5 + 4);
    t17 = *((unsigned int *)t5);
    t18 = (~(t17));
    *((unsigned int *)t16) = t18;
    *((unsigned int *)t12) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB31;

LAB30:    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 & 1U);
    t24 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t24 & 1U);
    t15 = (t16 + 4);
    t25 = *((unsigned int *)t15);
    t26 = (~(t25));
    t27 = *((unsigned int *)t16);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB32;

LAB33:
LAB34:    goto LAB21;

LAB13:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 5960U);
    t5 = *((char **)t2);
    memset(t16, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB38;

LAB36:    if (*((unsigned int *)t2) == 0)
        goto LAB35;

LAB37:    t11 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t11) = 1;

LAB38:    t12 = (t16 + 4);
    t14 = (t5 + 4);
    t17 = *((unsigned int *)t5);
    t18 = (~(t17));
    *((unsigned int *)t16) = t18;
    *((unsigned int *)t12) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB40;

LAB39:    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 & 1U);
    t24 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t24 & 1U);
    t15 = (t16 + 4);
    t25 = *((unsigned int *)t15);
    t26 = (~(t25));
    t27 = *((unsigned int *)t16);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB41;

LAB42:
LAB43:    goto LAB21;

LAB15:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 5960U);
    t5 = *((char **)t2);
    memset(t16, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB47;

LAB45:    if (*((unsigned int *)t2) == 0)
        goto LAB44;

LAB46:    t11 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t11) = 1;

LAB47:    t12 = (t16 + 4);
    t14 = (t5 + 4);
    t17 = *((unsigned int *)t5);
    t18 = (~(t17));
    *((unsigned int *)t16) = t18;
    *((unsigned int *)t12) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB49;

LAB48:    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 & 1U);
    t24 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t24 & 1U);
    t15 = (t16 + 4);
    t25 = *((unsigned int *)t15);
    t26 = (~(t25));
    t27 = *((unsigned int *)t16);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB50;

LAB51:
LAB52:    goto LAB21;

LAB17:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 5960U);
    t5 = *((char **)t2);
    memset(t16, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB57;

LAB55:    if (*((unsigned int *)t2) == 0)
        goto LAB54;

LAB56:    t11 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t11) = 1;

LAB57:    t12 = (t16 + 4);
    t14 = (t5 + 4);
    t17 = *((unsigned int *)t5);
    t18 = (~(t17));
    *((unsigned int *)t16) = t18;
    *((unsigned int *)t12) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB59;

LAB58:    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 & 1U);
    t24 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t24 & 1U);
    t15 = (t16 + 4);
    t25 = *((unsigned int *)t15);
    t26 = (~(t25));
    t27 = *((unsigned int *)t16);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB60;

LAB61:
LAB62:    goto LAB21;

LAB22:    xsi_set_current_line(58, ng0);

LAB25:    xsi_set_current_line(59, ng0);
    t14 = (t0 + 2376);
    t15 = *((char **)t14);
    t14 = (t0 + 7480);
    xsi_vlogvar_wait_assign_value(t14, t15, 0, 0, 4, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 5000U);
    t3 = *((char **)t2);
    t2 = (t0 + 7320);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 16, 0LL);
    goto LAB24;

LAB26:    *((unsigned int *)t16) = 1;
    goto LAB29;

LAB31:    t19 = *((unsigned int *)t16);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t16) = (t19 | t20);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t12) = (t21 | t22);
    goto LAB30;

LAB32:    xsi_set_current_line(63, ng0);
    t30 = (t0 + 2240);
    t31 = *((char **)t30);
    t30 = (t0 + 7480);
    xsi_vlogvar_wait_assign_value(t30, t31, 0, 0, 4, 0LL);
    goto LAB34;

LAB35:    *((unsigned int *)t16) = 1;
    goto LAB38;

LAB40:    t19 = *((unsigned int *)t16);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t16) = (t19 | t20);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t12) = (t21 | t22);
    goto LAB39;

LAB41:    xsi_set_current_line(65, ng0);
    t30 = (t0 + 7480);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = ((char*)((ng33)));
    memset(t34, 0, 8);
    xsi_vlog_unsigned_add(t34, 32, t32, 4, t33, 32);
    t35 = (t0 + 7480);
    xsi_vlogvar_wait_assign_value(t35, t34, 0, 0, 4, 0LL);
    goto LAB43;

LAB44:    *((unsigned int *)t16) = 1;
    goto LAB47;

LAB49:    t19 = *((unsigned int *)t16);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t16) = (t19 | t20);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t12) = (t21 | t22);
    goto LAB48;

LAB50:    xsi_set_current_line(68, ng0);

LAB53:    xsi_set_current_line(69, ng0);
    t30 = (t0 + 7480);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = ((char*)((ng33)));
    memset(t34, 0, 8);
    xsi_vlog_unsigned_add(t34, 32, t32, 4, t33, 32);
    t35 = (t0 + 7480);
    xsi_vlogvar_wait_assign_value(t35, t34, 0, 0, 4, 0LL);
    goto LAB52;

LAB54:    *((unsigned int *)t16) = 1;
    goto LAB57;

LAB59:    t19 = *((unsigned int *)t16);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t16) = (t19 | t20);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t12) = (t21 | t22);
    goto LAB58;

LAB60:    xsi_set_current_line(73, ng0);

LAB63:    xsi_set_current_line(74, ng0);
    t30 = (t0 + 2784);
    t31 = *((char **)t30);
    t30 = (t0 + 7480);
    xsi_vlogvar_wait_assign_value(t30, t31, 0, 0, 4, 0LL);
    goto LAB62;

LAB64:    *((unsigned int *)t16) = 1;
    goto LAB67;

LAB69:    t19 = *((unsigned int *)t16);
    t20 = *((unsigned int *)t12);
    *((unsigned int *)t16) = (t19 | t20);
    t21 = *((unsigned int *)t11);
    t22 = *((unsigned int *)t12);
    *((unsigned int *)t11) = (t21 | t22);
    goto LAB68;

LAB70:    xsi_set_current_line(85, ng0);

LAB73:    xsi_set_current_line(86, ng0);
    t15 = (t0 + 7480);
    t30 = (t15 + 56U);
    t31 = *((char **)t30);
    t32 = ((char*)((ng33)));
    memset(t34, 0, 8);
    xsi_vlog_unsigned_add(t34, 32, t31, 4, t32, 32);
    t33 = (t0 + 7480);
    xsi_vlogvar_wait_assign_value(t33, t34, 0, 0, 4, 0LL);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7320);
    t5 = (t3 + 56U);
    t11 = *((char **)t5);
    xsi_vlogtype_concat(t16, 20, 20, 2U, t11, 16, t2, 4);
    t12 = (t0 + 7320);
    xsi_vlogvar_wait_assign_value(t12, t16, 0, 0, 16, 0LL);
    goto LAB72;

}

static void Always_115_2(char *t0)
{
    char t11[8];
    char t12[8];
    char t33[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int t9;
    char *t10;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
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
    int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t34;
    char *t35;
    char *t36;
    char *t37;

LAB0:    t1 = (t0 + 9208U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 10304);
    *((int *)t2) = 1;
    t3 = (t0 + 9240);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(116, ng0);
    t4 = (t0 + 7480);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB5:    t7 = (t0 + 2920);
    t8 = *((char **)t7);
    t9 = xsi_vlog_unsigned_case_compare(t6, 4, t8, 32);
    if (t9 == 1)
        goto LAB6;

LAB7:    t2 = (t0 + 3056);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 4, t3, 32);
    if (t9 == 1)
        goto LAB8;

LAB9:    t2 = (t0 + 2376);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 4, t3, 32);
    if (t9 == 1)
        goto LAB10;

LAB11:    t2 = (t0 + 2512);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 4, t3, 32);
    if (t9 == 1)
        goto LAB12;

LAB13:    t2 = (t0 + 2648);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 4, t3, 32);
    if (t9 == 1)
        goto LAB14;

LAB15:
LAB17:
LAB16:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 7320);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t5 = (t11 + 4);
    t7 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (t13 >> 12);
    *((unsigned int *)t11) = t14;
    t15 = *((unsigned int *)t7);
    t16 = (t15 >> 12);
    *((unsigned int *)t5) = t16;
    t17 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t17 & 15U);
    t18 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t18 & 15U);
    t8 = (t0 + 9016);
    t10 = (t0 + 3568);
    t19 = xsi_create_subprogram_invocation(t8, 0, t0, t10, 0, 0);
    t20 = (t0 + 7800);
    xsi_vlogvar_assign_value(t20, t11, 0, 0, 4);

LAB22:    t21 = (t0 + 9112);
    t22 = *((char **)t21);
    t23 = (t22 + 80U);
    t24 = *((char **)t23);
    t25 = (t24 + 272U);
    t26 = *((char **)t25);
    t27 = (t26 + 0U);
    t28 = *((char **)t27);
    t9 = ((int  (*)(char *, char *))t28)(t0, t22);
    if (t9 != 0)
        goto LAB24;

LAB23:    t22 = (t0 + 9112);
    t30 = *((char **)t22);
    t22 = (t0 + 7640);
    t31 = (t22 + 56U);
    t32 = *((char **)t31);
    memcpy(t12, t32, 8);
    t34 = (t0 + 3568);
    t35 = (t0 + 9016);
    t36 = 0;
    xsi_delete_subprogram_invocation(t34, t30, t0, t35, t36);
    t37 = (t0 + 7000);
    xsi_vlogvar_assign_value(t37, t12, 0, 0, 8);

LAB18:    goto LAB2;

LAB6:    xsi_set_current_line(117, ng0);
    t7 = ((char*)((ng34)));
    t10 = (t0 + 7000);
    xsi_vlogvar_assign_value(t10, t7, 0, 0, 8);
    goto LAB18;

LAB8:    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng35)));
    t4 = (t0 + 7000);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 8);
    goto LAB18;

LAB10:    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng36)));
    t4 = (t0 + 7000);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 8);
    goto LAB18;

LAB12:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 5320U);
    t4 = *((char **)t2);
    memset(t12, 0, 8);
    t2 = (t12 + 4);
    t5 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (t13 >> 0);
    *((unsigned int *)t12) = t14;
    t15 = *((unsigned int *)t5);
    t16 = (t15 >> 0);
    *((unsigned int *)t2) = t16;
    t17 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t17 & 3U);
    t18 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t18 & 3U);
    t7 = ((char*)((ng1)));
    xsi_vlogtype_concat(t11, 4, 4, 2U, t7, 2, t12, 2);
    t8 = (t0 + 9016);
    t10 = (t0 + 3568);
    t19 = xsi_create_subprogram_invocation(t8, 0, t0, t10, 0, 0);
    t20 = (t0 + 7800);
    xsi_vlogvar_assign_value(t20, t11, 0, 0, 4);

LAB19:    t21 = (t0 + 9112);
    t22 = *((char **)t21);
    t23 = (t22 + 80U);
    t24 = *((char **)t23);
    t25 = (t24 + 272U);
    t26 = *((char **)t25);
    t27 = (t26 + 0U);
    t28 = *((char **)t27);
    t29 = ((int  (*)(char *, char *))t28)(t0, t22);
    if (t29 != 0)
        goto LAB21;

LAB20:    t22 = (t0 + 9112);
    t30 = *((char **)t22);
    t22 = (t0 + 7640);
    t31 = (t22 + 56U);
    t32 = *((char **)t31);
    memcpy(t33, t32, 8);
    t34 = (t0 + 3568);
    t35 = (t0 + 9016);
    t36 = 0;
    xsi_delete_subprogram_invocation(t34, t30, t0, t35, t36);
    t37 = (t0 + 7000);
    xsi_vlogvar_assign_value(t37, t33, 0, 0, 8);
    goto LAB18;

LAB14:    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng37)));
    t4 = (t0 + 7000);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 8);
    goto LAB18;

LAB21:    t21 = (t0 + 9208U);
    *((char **)t21) = &&LAB19;
    goto LAB1;

LAB24:    t21 = (t0 + 9208U);
    *((char **)t21) = &&LAB22;
    goto LAB1;

}

static void Cont_125_3(char *t0)
{
    char t3[8];
    char t21[8];
    char t40[8];
    char t72[8];
    char t93[8];
    char *t1;
    char *t2;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    int t64;
    int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t107;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    int t117;
    int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    char *t126;
    char *t127;
    char *t128;
    char *t129;
    unsigned int t130;
    unsigned int t131;
    char *t132;
    unsigned int t133;
    unsigned int t134;
    char *t135;
    unsigned int t136;
    unsigned int t137;
    char *t138;

LAB0:    t1 = (t0 + 9456U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(125, ng0);
    t2 = (t0 + 5800U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t4 + 4);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t4);
    t8 = (t7 & t6);
    t9 = (t8 & 1U);
    if (t9 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t2) == 0)
        goto LAB4;

LAB6:    t10 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t10) = 1;

LAB7:    t11 = (t3 + 4);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (~(t13));
    *((unsigned int *)t3) = t14;
    *((unsigned int *)t11) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB9;

LAB8:    t19 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t19 & 1U);
    t20 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t20 & 1U);
    t22 = (t0 + 6280U);
    t23 = *((char **)t22);
    memset(t21, 0, 8);
    t22 = (t23 + 4);
    t24 = *((unsigned int *)t22);
    t25 = (~(t24));
    t26 = *((unsigned int *)t23);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB13;

LAB11:    if (*((unsigned int *)t22) == 0)
        goto LAB10;

LAB12:    t29 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t29) = 1;

LAB13:    t30 = (t21 + 4);
    t31 = (t23 + 4);
    t32 = *((unsigned int *)t23);
    t33 = (~(t32));
    *((unsigned int *)t21) = t33;
    *((unsigned int *)t30) = 0;
    if (*((unsigned int *)t31) != 0)
        goto LAB15;

LAB14:    t38 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t38 & 1U);
    t39 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t39 & 1U);
    t41 = *((unsigned int *)t3);
    t42 = *((unsigned int *)t21);
    t43 = (t41 & t42);
    *((unsigned int *)t40) = t43;
    t44 = (t3 + 4);
    t45 = (t21 + 4);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t44);
    t48 = *((unsigned int *)t45);
    t49 = (t47 | t48);
    *((unsigned int *)t46) = t49;
    t50 = *((unsigned int *)t46);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB16;

LAB17:
LAB18:    t73 = (t0 + 7160);
    t74 = (t73 + 56U);
    t75 = *((char **)t74);
    memset(t72, 0, 8);
    t76 = (t75 + 4);
    t77 = *((unsigned int *)t76);
    t78 = (~(t77));
    t79 = *((unsigned int *)t75);
    t80 = (t79 & t78);
    t81 = (t80 & 1U);
    if (t81 != 0)
        goto LAB22;

LAB20:    if (*((unsigned int *)t76) == 0)
        goto LAB19;

LAB21:    t82 = (t72 + 4);
    *((unsigned int *)t72) = 1;
    *((unsigned int *)t82) = 1;

LAB22:    t83 = (t72 + 4);
    t84 = (t75 + 4);
    t85 = *((unsigned int *)t75);
    t86 = (~(t85));
    *((unsigned int *)t72) = t86;
    *((unsigned int *)t83) = 0;
    if (*((unsigned int *)t84) != 0)
        goto LAB24;

LAB23:    t91 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t91 & 1U);
    t92 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t92 & 1U);
    t94 = *((unsigned int *)t40);
    t95 = *((unsigned int *)t72);
    t96 = (t94 & t95);
    *((unsigned int *)t93) = t96;
    t97 = (t40 + 4);
    t98 = (t72 + 4);
    t99 = (t93 + 4);
    t100 = *((unsigned int *)t97);
    t101 = *((unsigned int *)t98);
    t102 = (t100 | t101);
    *((unsigned int *)t99) = t102;
    t103 = *((unsigned int *)t99);
    t104 = (t103 != 0);
    if (t104 == 1)
        goto LAB25;

LAB26:
LAB27:    t125 = (t0 + 10496);
    t126 = (t125 + 56U);
    t127 = *((char **)t126);
    t128 = (t127 + 56U);
    t129 = *((char **)t128);
    memset(t129, 0, 8);
    t130 = 1U;
    t131 = t130;
    t132 = (t93 + 4);
    t133 = *((unsigned int *)t93);
    t130 = (t130 & t133);
    t134 = *((unsigned int *)t132);
    t131 = (t131 & t134);
    t135 = (t129 + 4);
    t136 = *((unsigned int *)t129);
    *((unsigned int *)t129) = (t136 | t130);
    t137 = *((unsigned int *)t135);
    *((unsigned int *)t135) = (t137 | t131);
    xsi_driver_vfirst_trans(t125, 0, 0);
    t138 = (t0 + 10320);
    *((int *)t138) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB9:    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t12);
    *((unsigned int *)t3) = (t15 | t16);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t12);
    *((unsigned int *)t11) = (t17 | t18);
    goto LAB8;

LAB10:    *((unsigned int *)t21) = 1;
    goto LAB13;

LAB15:    t34 = *((unsigned int *)t21);
    t35 = *((unsigned int *)t31);
    *((unsigned int *)t21) = (t34 | t35);
    t36 = *((unsigned int *)t30);
    t37 = *((unsigned int *)t31);
    *((unsigned int *)t30) = (t36 | t37);
    goto LAB14;

LAB16:    t52 = *((unsigned int *)t40);
    t53 = *((unsigned int *)t46);
    *((unsigned int *)t40) = (t52 | t53);
    t54 = (t3 + 4);
    t55 = (t21 + 4);
    t56 = *((unsigned int *)t3);
    t57 = (~(t56));
    t58 = *((unsigned int *)t54);
    t59 = (~(t58));
    t60 = *((unsigned int *)t21);
    t61 = (~(t60));
    t62 = *((unsigned int *)t55);
    t63 = (~(t62));
    t64 = (t57 & t59);
    t65 = (t61 & t63);
    t66 = (~(t64));
    t67 = (~(t65));
    t68 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t68 & t66);
    t69 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t69 & t67);
    t70 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t70 & t66);
    t71 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t71 & t67);
    goto LAB18;

LAB19:    *((unsigned int *)t72) = 1;
    goto LAB22;

LAB24:    t87 = *((unsigned int *)t72);
    t88 = *((unsigned int *)t84);
    *((unsigned int *)t72) = (t87 | t88);
    t89 = *((unsigned int *)t83);
    t90 = *((unsigned int *)t84);
    *((unsigned int *)t83) = (t89 | t90);
    goto LAB23;

LAB25:    t105 = *((unsigned int *)t93);
    t106 = *((unsigned int *)t99);
    *((unsigned int *)t93) = (t105 | t106);
    t107 = (t40 + 4);
    t108 = (t72 + 4);
    t109 = *((unsigned int *)t40);
    t110 = (~(t109));
    t111 = *((unsigned int *)t107);
    t112 = (~(t111));
    t113 = *((unsigned int *)t72);
    t114 = (~(t113));
    t115 = *((unsigned int *)t108);
    t116 = (~(t115));
    t117 = (t110 & t112);
    t118 = (t114 & t116);
    t119 = (~(t117));
    t120 = (~(t118));
    t121 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t121 & t119);
    t122 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t122 & t120);
    t123 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t123 & t119);
    t124 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t124 & t120);
    goto LAB27;

}

static void Cont_127_4(char *t0)
{
    char t3[8];
    char t26[8];
    char t41[8];
    char *t1;
    char *t2;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
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
    char *t23;
    char *t24;
    char *t25;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    int t65;
    int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;

LAB0:    t1 = (t0 + 9704U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(127, ng0);
    t2 = (t0 + 5960U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t4 + 4);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t4);
    t8 = (t7 & t6);
    t9 = (t8 & 1U);
    if (t9 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t2) == 0)
        goto LAB4;

LAB6:    t10 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t10) = 1;

LAB7:    t11 = (t3 + 4);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (~(t13));
    *((unsigned int *)t3) = t14;
    *((unsigned int *)t11) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB9;

LAB8:    t19 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t19 & 1U);
    t20 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t20 & 1U);
    t21 = (t0 + 7480);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t0 + 2240);
    t25 = *((char **)t24);
    memset(t26, 0, 8);
    t24 = (t23 + 4);
    t27 = (t25 + 4);
    t28 = *((unsigned int *)t23);
    t29 = *((unsigned int *)t25);
    t30 = (t28 ^ t29);
    t31 = *((unsigned int *)t24);
    t32 = *((unsigned int *)t27);
    t33 = (t31 ^ t32);
    t34 = (t30 | t33);
    t35 = *((unsigned int *)t24);
    t36 = *((unsigned int *)t27);
    t37 = (t35 | t36);
    t38 = (~(t37));
    t39 = (t34 & t38);
    if (t39 != 0)
        goto LAB11;

LAB10:    if (t37 != 0)
        goto LAB12;

LAB13:    t42 = *((unsigned int *)t3);
    t43 = *((unsigned int *)t26);
    t44 = (t42 & t43);
    *((unsigned int *)t41) = t44;
    t45 = (t3 + 4);
    t46 = (t26 + 4);
    t47 = (t41 + 4);
    t48 = *((unsigned int *)t45);
    t49 = *((unsigned int *)t46);
    t50 = (t48 | t49);
    *((unsigned int *)t47) = t50;
    t51 = *((unsigned int *)t47);
    t52 = (t51 != 0);
    if (t52 == 1)
        goto LAB14;

LAB15:
LAB16:    t73 = (t0 + 10560);
    t74 = (t73 + 56U);
    t75 = *((char **)t74);
    t76 = (t75 + 56U);
    t77 = *((char **)t76);
    memset(t77, 0, 8);
    t78 = 1U;
    t79 = t78;
    t80 = (t41 + 4);
    t81 = *((unsigned int *)t41);
    t78 = (t78 & t81);
    t82 = *((unsigned int *)t80);
    t79 = (t79 & t82);
    t83 = (t77 + 4);
    t84 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t84 | t78);
    t85 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t85 | t79);
    xsi_driver_vfirst_trans(t73, 0, 0);
    t86 = (t0 + 10336);
    *((int *)t86) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB9:    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t12);
    *((unsigned int *)t3) = (t15 | t16);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t12);
    *((unsigned int *)t11) = (t17 | t18);
    goto LAB8;

LAB11:    *((unsigned int *)t26) = 1;
    goto LAB13;

LAB12:    t40 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB13;

LAB14:    t53 = *((unsigned int *)t41);
    t54 = *((unsigned int *)t47);
    *((unsigned int *)t41) = (t53 | t54);
    t55 = (t3 + 4);
    t56 = (t26 + 4);
    t57 = *((unsigned int *)t3);
    t58 = (~(t57));
    t59 = *((unsigned int *)t55);
    t60 = (~(t59));
    t61 = *((unsigned int *)t26);
    t62 = (~(t61));
    t63 = *((unsigned int *)t56);
    t64 = (~(t63));
    t65 = (t58 & t60);
    t66 = (t62 & t64);
    t67 = (~(t65));
    t68 = (~(t66));
    t69 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t69 & t67);
    t70 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t70 & t68);
    t71 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t71 & t67);
    t72 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t72 & t68);
    goto LAB16;

}

static void Always_143_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 9952U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(143, ng0);
    t2 = (t0 + 10352);
    *((int *)t2) = 1;
    t3 = (t0 + 9984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(144, ng0);
    t4 = (t0 + 5640U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(147, ng0);
    t2 = (t0 + 6440U);
    t3 = *((char **)t2);
    t2 = (t0 + 7160);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);

LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(145, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 7160);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    goto LAB7;

}


extern void work_m_04866669728881483165_3959351695_init()
{
	static char *pe[] = {(void *)Cont_49_0,(void *)Always_51_1,(void *)Always_115_2,(void *)Cont_125_3,(void *)Cont_127_4,(void *)Always_143_5};
	static char *se[] = {(void *)sp_fnNib2ASCII};
	xsi_register_didat("work_m_04866669728881483165_3959351695", "isim/tb_isim_beh.exe.sim/work/m_04866669728881483165_3959351695.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
