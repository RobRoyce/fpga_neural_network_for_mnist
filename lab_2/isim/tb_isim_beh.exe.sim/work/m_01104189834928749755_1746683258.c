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
static const char *ng0 = "/home/parallels/ucla/m152acs/labs/csm152a/lab_2/model_uart.v";
static unsigned int ng1[] = {10U, 0U};
static const char *ng2 = "Received byte %b from UART task";
static const char *ng3 = "Contents of rxBuffer: %02x (%s)";
static unsigned int ng4[] = {0U, 0U};
static unsigned int ng5[] = {1U, 0U};
static int ng6[] = {0, 0};
static int ng7[] = {10, 0};
static int ng8[] = {1, 0};
static int ng9[] = {8, 0};
static const char *ng10 = "%d %s Received byte %02x (%s)";
static int ng11[] = {1095914544, 0, 85, 0};



static int sp_tskRxBuffer(char *t1, char *t2)
{
    char t9[8];
    char t35[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1256);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(73, ng0);

LAB5:    xsi_set_current_line(74, ng0);
    t5 = (t1 + 3632);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng1)));
    memset(t9, 0, 8);
    t10 = (t7 + 4);
    t11 = (t8 + 4);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t10);
    t16 = *((unsigned int *)t11);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB9;

LAB6:    if (t21 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t9) = 1;

LAB9:    t25 = (t9 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(79, ng0);
    t4 = (t1 + 3632);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 3472);
    t8 = (t7 + 56U);
    t10 = *((char **)t8);
    memset(t35, 0, 8);
    t11 = (t35 + 4);
    t24 = (t10 + 4);
    t12 = *((unsigned int *)t10);
    t13 = (t12 >> 0);
    *((unsigned int *)t35) = t13;
    t14 = *((unsigned int *)t24);
    t15 = (t14 >> 0);
    *((unsigned int *)t11) = t15;
    t16 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t16 & 16777215U);
    t17 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t17 & 16777215U);
    xsi_vlogtype_concat(t9, 32, 32, 2U, t35, 24, t6, 8);
    t25 = (t1 + 3472);
    xsi_vlogvar_assign_value(t25, t9, 0, 0, 32);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB8:    t24 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(75, ng0);

LAB13:    xsi_set_current_line(76, ng0);
    t31 = (t1 + 3632);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t1 + 1256);
    xsi_vlogfile_write(1, 0, 0, ng2, 2, t34, (char)118, t33, 8);
    xsi_set_current_line(77, ng0);
    t4 = (t1 + 3472);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 3472);
    t8 = (t7 + 56U);
    t10 = *((char **)t8);
    t11 = (t1 + 1256);
    xsi_vlogfile_write(1, 0, 0, ng3, 3, t11, (char)118, t6, 32, (char)118, t10, 32);
    goto LAB12;

}

static int sp_tskRxData(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1688);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(90, ng0);

LAB5:    xsi_set_current_line(91, ng0);
    t5 = (t2 + 88U);
    t6 = *((char **)t5);
    t7 = (t6 + 0U);
    xsi_wp_set_status(t7, 1);
    *((char **)t3) = &&LAB6;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(92, ng0);
    t4 = (t1 + 3312);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 3792);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    goto LAB4;

}

static int sp_tskTxData(char *t1, char *t2)
{
    char t5[8];
    char t7[8];
    int t0;
    char *t3;
    char *t4;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
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

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 2120);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(100, ng0);

LAB5:    xsi_set_current_line(101, ng0);
    t6 = ((char*)((ng4)));
    t8 = (t1 + 3952);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t7, 0, 8);
    t11 = (t7 + 4);
    t12 = (t10 + 4);
    t13 = *((unsigned int *)t10);
    t14 = (t13 >> 0);
    *((unsigned int *)t7) = t14;
    t15 = *((unsigned int *)t12);
    t16 = (t15 >> 0);
    *((unsigned int *)t11) = t16;
    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 255U);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 & 255U);
    t19 = ((char*)((ng5)));
    xsi_vlogtype_concat(t5, 10, 10, 3U, t19, 1, t7, 8, t6, 1);
    t20 = (t1 + 4112);
    xsi_vlogvar_assign_value(t20, t5, 0, 0, 10);
    xsi_set_current_line(102, ng0);
    xsi_set_current_line(102, ng0);
    t4 = ((char*)((ng6)));
    t6 = (t1 + 4272);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 32);

LAB6:    t4 = (t1 + 4272);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    t9 = ((char*)((ng7)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t8, 32, t9, 32);
    t10 = (t5 + 4);
    t13 = *((unsigned int *)t10);
    t14 = (~(t13));
    t15 = *((unsigned int *)t5);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(108, ng0);
    t4 = (t1 + 7416);
    xsi_trigger(t4, -1, -1);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB7:    xsi_set_current_line(103, ng0);

LAB9:    xsi_set_current_line(104, ng0);
    t11 = (t1 + 4112);
    t12 = (t11 + 56U);
    t19 = *((char **)t12);
    t20 = (t1 + 4112);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t23 = (t1 + 4272);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_generic_get_index_select_value(t7, 1, t19, t22, 2, t25, 32, 1);
    t26 = (t1 + 3152);
    xsi_vlogvar_assign_value(t26, t7, 0, 0, 1);
    xsi_set_current_line(105, ng0);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    xsi_process_wait(t6, 1000000LL);
    *((char **)t3) = &&LAB10;
    t0 = 1;
    goto LAB1;

LAB10:    xsi_set_current_line(106, ng0);
    t4 = (t1 + 7248);
    xsi_trigger(t4, -1, -1);
    xsi_set_current_line(102, ng0);
    t4 = (t1 + 4272);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    t9 = ((char*)((ng8)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t8, 32, t9, 32);
    t10 = (t1 + 4272);
    xsi_vlogvar_assign_value(t10, t5, 0, 0, 32);
    goto LAB6;

}

static void Initial_34_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(35, ng0);

LAB2:    xsi_set_current_line(36, ng0);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 3152);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(40, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 3472);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Always_45_1(char *t0)
{
    char t12[8];
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    int t9;
    char *t10;
    char *t11;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
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

LAB0:    t1 = (t0 + 5432U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 5752);
    *((int *)t2) = 1;
    t3 = (t0 + 5464);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(46, ng0);

LAB5:    xsi_set_current_line(47, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 3312);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 5240);
    xsi_process_wait(t2, 500000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t2);
    t9 = (t8 & t7);
    t4 = (t0 + 8248);
    *((int *)t4) = t9;

LAB7:    t5 = (t0 + 8248);
    if (*((int *)t5) > 0)
        goto LAB8;

LAB9:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 7080);
    xsi_trigger(t2, -1, -1);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 3312);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5240);
    t10 = (t0 + 1256);
    t11 = xsi_create_subprogram_invocation(t5, 0, t0, t10, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t10, t11);
    t17 = (t0 + 3632);
    xsi_vlogvar_assign_value(t17, t4, 0, 0, 8);

LAB14:    t18 = (t0 + 5336);
    t19 = *((char **)t18);
    t20 = (t19 + 80U);
    t21 = *((char **)t20);
    t22 = (t21 + 272U);
    t23 = *((char **)t22);
    t24 = (t23 + 0U);
    t25 = *((char **)t24);
    t9 = ((int  (*)(char *, char *))t25)(t0, t19);

LAB16:    if (t9 != 0)
        goto LAB17;

LAB12:    t19 = (t0 + 1256);
    xsi_vlog_subprogram_popinvocation(t19);

LAB13:    t26 = (t0 + 5336);
    t27 = *((char **)t26);
    t26 = (t0 + 1256);
    t28 = (t0 + 5240);
    t29 = 0;
    xsi_delete_subprogram_invocation(t26, t27, t0, t28, t29);
    xsi_set_current_line(64, ng0);
    *((int *)t12) = xsi_vlog_stime(1000.0000000000000, 1000.0000000000000);
    t2 = (t12 + 4);
    *((int *)t2) = 0;
    t3 = ((char*)((ng11)));
    t4 = (t0 + 3312);
    t5 = (t4 + 56U);
    t10 = *((char **)t5);
    t11 = (t0 + 3312);
    t17 = (t11 + 56U);
    t18 = *((char **)t17);
    xsi_vlogfile_write(1, 0, 0, ng10, 5, t0, (char)118, t12, 32, (char)118, t3, 40, (char)118, t10, 8, (char)118, t18, 8);
    goto LAB2;

LAB8:    xsi_set_current_line(57, ng0);

LAB10:    xsi_set_current_line(58, ng0);
    t10 = (t0 + 5240);
    xsi_process_wait(t10, 1000000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(58, ng0);
    t11 = (t0 + 6912);
    xsi_trigger(t11, -1, -1);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 3312);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t10 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 1);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t10);
    t14 = (t8 >> 1);
    *((unsigned int *)t5) = t14;
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 & 127U);
    t16 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t16 & 127U);
    t11 = (t0 + 2752U);
    t17 = *((char **)t11);
    xsi_vlogtype_concat(t12, 8, 8, 2U, t17, 1, t13, 7);
    t11 = (t0 + 3312);
    xsi_vlogvar_assign_value(t11, t12, 0, 0, 8);
    t2 = (t0 + 8248);
    t9 = *((int *)t2);
    *((int *)t2) = (t9 - 1);
    goto LAB7;

LAB15:;
LAB17:    t18 = (t0 + 5432U);
    *((char **)t18) = &&LAB14;
    goto LAB1;

}


extern void work_m_01104189834928749755_1746683258_init()
{
	static char *pe[] = {(void *)Initial_34_0,(void *)Always_45_1};
	static char *se[] = {(void *)sp_tskRxBuffer,(void *)sp_tskRxData,(void *)sp_tskTxData};
	xsi_register_didat("work_m_01104189834928749755_1746683258", "isim/tb_isim_beh.exe.sim/work/m_01104189834928749755_1746683258.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
