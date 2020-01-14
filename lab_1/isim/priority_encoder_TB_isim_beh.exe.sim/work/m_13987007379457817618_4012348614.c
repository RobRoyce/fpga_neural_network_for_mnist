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
static const char *ng0 = "D: %b (%d)";
static const char *ng1 = "/home/parallels/ucla/csm152a/labs/lab_1/priority_encoder.v";
static unsigned int ng2[] = {2047U, 1023U};
static unsigned int ng3[] = {7U, 0U};
static unsigned int ng4[] = {1023U, 511U};
static unsigned int ng5[] = {6U, 0U};
static unsigned int ng6[] = {511U, 255U};
static unsigned int ng7[] = {5U, 0U};
static unsigned int ng8[] = {255U, 127U};
static unsigned int ng9[] = {4U, 0U};
static unsigned int ng10[] = {127U, 63U};
static unsigned int ng11[] = {3U, 0U};
static unsigned int ng12[] = {63U, 31U};
static unsigned int ng13[] = {2U, 0U};
static unsigned int ng14[] = {31U, 15U};
static unsigned int ng15[] = {1U, 0U};
static unsigned int ng16[] = {15U, 15U};
static unsigned int ng17[] = {0U, 0U};
static const char *ng18 = "case(D) hit default";

void Monitor_20_1(char *);
void Monitor_20_1(char *);


static void Monitor_20_1_Func(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 1184U);
    t2 = *((char **)t1);
    t1 = (t0 + 1184U);
    t3 = *((char **)t1);
    xsi_vlogfile_write(1, 0, 3, ng0, 3, t0, (char)119, t2, 12, (char)119, t3, 12);

LAB1:    return;
}

static void Always_14_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;

LAB0:    t1 = (t0 + 2656U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(14, ng1);
    t2 = (t0 + 3224);
    *((int *)t2) = 1;
    t3 = (t0 + 2688);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(15, ng1);

LAB5:    xsi_set_current_line(20, ng1);
    Monitor_20_1(t0);
    xsi_set_current_line(21, ng1);
    t2 = (t0 + 1184U);
    t3 = *((char **)t2);

LAB6:    t2 = ((char*)((ng2)));
    t4 = xsi_vlog_unsigned_case_xcompare(t3, 12, t2, 12);
    if (t4 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t4 = xsi_vlog_unsigned_case_xcompare(t3, 12, t2, 12);
    if (t4 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng6)));
    t4 = xsi_vlog_unsigned_case_xcompare(t3, 12, t2, 12);
    if (t4 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng8)));
    t4 = xsi_vlog_unsigned_case_xcompare(t3, 12, t2, 12);
    if (t4 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng10)));
    t4 = xsi_vlog_unsigned_case_xcompare(t3, 12, t2, 12);
    if (t4 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng12)));
    t4 = xsi_vlog_unsigned_case_xcompare(t3, 12, t2, 12);
    if (t4 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng14)));
    t4 = xsi_vlog_unsigned_case_xcompare(t3, 12, t2, 12);
    if (t4 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng16)));
    t4 = xsi_vlog_unsigned_case_xcompare(t3, 12, t2, 12);
    if (t4 == 1)
        goto LAB21;

LAB22:
LAB24:
LAB23:    xsi_set_current_line(30, ng1);

LAB26:    xsi_set_current_line(31, ng1);
    xsi_vlogfile_write(1, 0, 0, ng18, 1, t0);
    xsi_set_current_line(32, ng1);
    t2 = ((char*)((ng15)));
    t5 = (t0 + 1584);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 3, 0LL);

LAB25:    goto LAB2;

LAB7:    xsi_set_current_line(22, ng1);
    t5 = ((char*)((ng3)));
    t6 = (t0 + 1584);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 3, 0LL);
    goto LAB25;

LAB9:    xsi_set_current_line(23, ng1);
    t5 = ((char*)((ng5)));
    t6 = (t0 + 1584);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 3, 0LL);
    goto LAB25;

LAB11:    xsi_set_current_line(24, ng1);
    t5 = ((char*)((ng7)));
    t6 = (t0 + 1584);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 3, 0LL);
    goto LAB25;

LAB13:    xsi_set_current_line(25, ng1);
    t5 = ((char*)((ng9)));
    t6 = (t0 + 1584);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 3, 0LL);
    goto LAB25;

LAB15:    xsi_set_current_line(26, ng1);
    t5 = ((char*)((ng11)));
    t6 = (t0 + 1584);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 3, 0LL);
    goto LAB25;

LAB17:    xsi_set_current_line(27, ng1);
    t5 = ((char*)((ng13)));
    t6 = (t0 + 1584);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 3, 0LL);
    goto LAB25;

LAB19:    xsi_set_current_line(28, ng1);
    t5 = ((char*)((ng15)));
    t6 = (t0 + 1584);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 3, 0LL);
    goto LAB25;

LAB21:    xsi_set_current_line(29, ng1);
    t5 = ((char*)((ng17)));
    t6 = (t0 + 1584);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 3, 0LL);
    goto LAB25;

}

void Monitor_20_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 2712);
    t2 = (t0 + 3240);
    xsi_vlogfile_monitor((void *)Monitor_20_1_Func, t1, t2);

LAB1:    return;
}


extern void work_m_13987007379457817618_4012348614_init()
{
	static char *pe[] = {(void *)Always_14_0,(void *)Monitor_20_1};
	xsi_register_didat("work_m_13987007379457817618_4012348614", "isim/priority_encoder_TB_isim_beh.exe.sim/work/m_13987007379457817618_4012348614.didat");
	xsi_register_executes(pe);
}
