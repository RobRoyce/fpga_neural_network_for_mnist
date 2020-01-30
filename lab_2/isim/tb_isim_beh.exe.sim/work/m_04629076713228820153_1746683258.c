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
static int ng2[] = {9, 0};
static int ng3[] = {3, 0};
static const char *ng4 = "ns";
static int ng5[] = {5, 0};
static const char *ng6 = "%d %s Received bytes %08x (%s)";
static int ng7[] = {1095914544, 0, 85, 0};
static unsigned int ng8[] = {13U, 0U};
static const char *ng9 = "received carriage return";
static int ng10[] = {0, 0};
static unsigned int ng11[] = {0U, 0U};
static unsigned int ng12[] = {1U, 0U};
static int ng13[] = {10, 0};
static int ng14[] = {1, 0};
static int ng15[] = {8, 0};
static int ng16[] = {4, 0};
static const char *ng17 = "us";
static int ng18[] = {12, 0};
static const char *ng19 = "%d %s Received byte %02x (%s)";



static int sp_tskRxBuffer(char *t1, char *t2)
{
    char t12[8];
    char t34[8];
    char t38[16];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
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
    unsigned int t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t35;
    char *t36;
    char *t37;

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

LAB6:    xsi_set_current_line(75, ng0);
    t8 = (t1 + 3632);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng1)));
    memset(t12, 0, 8);
    t13 = (t10 + 4);
    t14 = (t11 + 4);
    t15 = *((unsigned int *)t10);
    t16 = *((unsigned int *)t11);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t14);
    t20 = (t18 ^ t19);
    t21 = (t17 | t20);
    t22 = *((unsigned int *)t13);
    t23 = *((unsigned int *)t14);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB10;

LAB7:    if (t24 != 0)
        goto LAB9;

LAB8:    *((unsigned int *)t12) = 1;

LAB10:    t28 = (t12 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (~(t29));
    t31 = *((unsigned int *)t12);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(82, ng0);
    t4 = (t1 + 3632);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng8)));
    memset(t12, 0, 8);
    t8 = (t6 + 4);
    t9 = (t7 + 4);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t7);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t9);
    t20 = (t18 ^ t19);
    t21 = (t17 | t20);
    t22 = *((unsigned int *)t8);
    t23 = *((unsigned int *)t9);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB18;

LAB15:    if (t24 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t12) = 1;

LAB18:    t11 = (t12 + 4);
    t29 = *((unsigned int *)t11);
    t30 = (~(t29));
    t31 = *((unsigned int *)t12);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(88, ng0);
    t4 = (t1 + 3632);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 3472);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t34, 0, 8);
    t10 = (t34 + 4);
    t11 = (t9 + 4);
    t15 = *((unsigned int *)t9);
    t16 = (t15 >> 0);
    *((unsigned int *)t34) = t16;
    t17 = *((unsigned int *)t11);
    t18 = (t17 >> 0);
    *((unsigned int *)t10) = t18;
    t19 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t19 & 16777215U);
    t20 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t20 & 16777215U);
    xsi_vlogtype_concat(t12, 32, 32, 2U, t34, 24, t6, 8);
    t13 = (t1 + 3472);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 32, 0LL);

LAB21:
LAB13:    goto LAB4;

LAB9:    t27 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB10;

LAB11:    xsi_set_current_line(76, ng0);

LAB14:    xsi_set_current_line(77, ng0);
    t35 = ((char*)((ng2)));
    memset(t34, 0, 8);
    xsi_vlog_signed_unary_minus(t34, 32, t35, 32);
    t36 = ((char*)((ng3)));
    t37 = ((char*)((ng5)));
    xsi_vlog_setTimeFormat(*((unsigned int *)t34), *((unsigned int *)t36), ng4, 0, *((unsigned int *)t37));
    xsi_set_current_line(78, ng0);
    t4 = xsi_vlog_time(t38, 1000.0000000000000, 1000.0000000000000);
    t5 = ((char*)((ng7)));
    t6 = (t1 + 3472);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t1 + 3472);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t13 = (t1 + 1256);
    xsi_vlogfile_write(1, 0, 0, ng6, 5, t13, (char)118, t38, 64, (char)118, t5, 40, (char)118, t8, 32, (char)118, t11, 32);
    goto LAB13;

LAB17:    t10 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(83, ng0);

LAB22:    xsi_set_current_line(84, ng0);
    t13 = (t1 + 1256);
    xsi_vlogfile_write(1, 0, 0, ng9, 1, t13);
    xsi_set_current_line(85, ng0);
    t4 = ((char*)((ng10)));
    t5 = (t1 + 3472);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    goto LAB21;

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
    xsi_set_current_line(99, ng0);

LAB5:    xsi_set_current_line(100, ng0);
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

LAB6:    xsi_set_current_line(101, ng0);
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
    xsi_set_current_line(109, ng0);

LAB5:    xsi_set_current_line(110, ng0);
    t6 = ((char*)((ng11)));
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
    t19 = ((char*)((ng12)));
    xsi_vlogtype_concat(t5, 10, 10, 3U, t19, 1, t7, 8, t6, 1);
    t20 = (t1 + 4112);
    xsi_vlogvar_assign_value(t20, t5, 0, 0, 10);
    xsi_set_current_line(111, ng0);
    xsi_set_current_line(111, ng0);
    t4 = ((char*)((ng10)));
    t6 = (t1 + 4272);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 32);

LAB6:    t4 = (t1 + 4272);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    t9 = ((char*)((ng13)));
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

LAB8:    xsi_set_current_line(117, ng0);
    t4 = (t1 + 7432);
    xsi_trigger(t4, -1, -1);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB7:    xsi_set_current_line(112, ng0);

LAB9:    xsi_set_current_line(113, ng0);
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
    xsi_set_current_line(114, ng0);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    xsi_process_wait(t6, 1000000LL);
    *((char **)t3) = &&LAB10;
    t0 = 1;
    goto LAB1;

LAB10:    xsi_set_current_line(115, ng0);
    t4 = (t1 + 7264);
    xsi_trigger(t4, -1, -1);
    xsi_set_current_line(111, ng0);
    t4 = (t1 + 4272);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    t9 = ((char*)((ng14)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t8, 32, t9, 32);
    t10 = (t1 + 4272);
    xsi_vlogvar_assign_value(t10, t5, 0, 0, 32);
    goto LAB6;

}

static void Initial_33_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(34, ng0);

LAB2:    xsi_set_current_line(35, ng0);
    t1 = ((char*)((ng12)));
    t2 = (t0 + 3152);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(39, ng0);
    t1 = ((char*)((ng11)));
    t2 = (t0 + 3472);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Always_44_1(char *t0)
{
    char t12[8];
    char t13[8];
    char t18[16];
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
    char *t19;

LAB0:    t1 = (t0 + 5432U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 5752);
    *((int *)t2) = 1;
    t3 = (t0 + 5464);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(45, ng0);

LAB5:    xsi_set_current_line(46, ng0);
    t4 = ((char*)((ng11)));
    t5 = (t0 + 3312);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 5240);
    xsi_process_wait(t2, 500000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t2);
    t9 = (t8 & t7);
    t4 = (t0 + 8464);
    *((int *)t4) = t9;

LAB7:    t5 = (t0 + 8464);
    if (*((int *)t5) > 0)
        goto LAB8;

LAB9:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 7096);
    xsi_trigger(t2, -1, -1);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 7600);
    xsi_trigger(t2, -1, -1);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng16)));
    memset(t12, 0, 8);
    xsi_vlog_signed_unary_minus(t12, 32, t2, 32);
    t3 = ((char*)((ng14)));
    t4 = ((char*)((ng18)));
    xsi_vlog_setTimeFormat(*((unsigned int *)t12), *((unsigned int *)t3), ng17, 0, *((unsigned int *)t4));
    xsi_set_current_line(65, ng0);
    t2 = xsi_vlog_time(t18, 1000.0000000000000, 1000.0000000000000);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 3312);
    t5 = (t4 + 56U);
    t10 = *((char **)t5);
    t11 = (t0 + 3312);
    t17 = (t11 + 56U);
    t19 = *((char **)t17);
    xsi_vlogfile_write(1, 0, 0, ng19, 5, t0, (char)118, t18, 64, (char)118, t3, 40, (char)118, t10, 8, (char)118, t19, 8);
    goto LAB2;

LAB8:    xsi_set_current_line(56, ng0);

LAB10:    xsi_set_current_line(57, ng0);
    t10 = (t0 + 5240);
    xsi_process_wait(t10, 1000000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(57, ng0);
    t11 = (t0 + 6928);
    xsi_trigger(t11, -1, -1);
    xsi_set_current_line(59, ng0);
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
    t2 = (t0 + 8464);
    t9 = *((int *)t2);
    *((int *)t2) = (t9 - 1);
    goto LAB7;

}


extern void work_m_04629076713228820153_1746683258_init()
{
	static char *pe[] = {(void *)Initial_33_0,(void *)Always_44_1};
	static char *se[] = {(void *)sp_tskRxBuffer,(void *)sp_tskRxData,(void *)sp_tskTxData};
	xsi_register_didat("work_m_04629076713228820153_1746683258", "isim/tb_isim_beh.exe.sim/work/m_04629076713228820153_1746683258.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
