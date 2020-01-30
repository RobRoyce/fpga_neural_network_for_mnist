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
static const char *ng0 = "/home/parallels/ucla/m152acs/labs/csm152a/lab_2/nexys3.v";
static unsigned int ng1[] = {3U, 0U};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {1, 0};
static int ng4[] = {0, 0};



static void Cont_54_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 8128U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 3776U);
    t3 = *((char **)t2);
    t2 = (t0 + 11168);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 0);
    t16 = (t0 + 10928);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_55_1(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 8376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 5936);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 11232);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 1U;
    t20 = t19;
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t5);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 0);
    t27 = (t0 + 10944);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Always_57_2(char *t0)
{
    char t13[8];
    char t14[8];
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
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 8624U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 10960);
    *((int *)t2) = 1;
    t3 = (t0 + 8656);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(58, ng0);
    t4 = (t0 + 5056U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 5936);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t5 = (t14 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 1);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 1);
    t15 = (t10 & 1);
    *((unsigned int *)t5) = t15;
    t12 = ((char*)((ng2)));
    xsi_vlogtype_concat(t13, 2, 2, 2U, t12, 1, t14, 1);
    t16 = (t0 + 5936);
    xsi_vlogvar_wait_assign_value(t16, t13, 0, 0, 2, 0LL);

LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(59, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 5936);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 2, 0LL);
    goto LAB7;

}

static void Cont_67_3(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;

LAB0:    t1 = (t0 + 8872U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 6096);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 17, t5, 32);
    t7 = (t0 + 11296);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memset(t11, 0, 8);
    t12 = 262143U;
    t13 = t12;
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t12 = (t12 & t15);
    t16 = *((unsigned int *)t14);
    t13 = (t13 & t16);
    t17 = (t11 + 4);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 | t12);
    t19 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t19 | t13);
    xsi_driver_vfirst_trans(t7, 0, 17);
    t20 = (t0 + 10976);
    *((int *)t20) = 1;

LAB1:    return;
}

static void Always_69_4(char *t0)
{
    char t13[8];
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
    unsigned int t14;

LAB0:    t1 = (t0 + 9120U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 10992);
    *((int *)t2) = 1;
    t3 = (t0 + 9152);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(70, ng0);
    t4 = (t0 + 4896U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(77, ng0);

LAB9:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 5216U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 131071U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 131071U);
    t5 = (t0 + 6096);
    xsi_vlogvar_wait_assign_value(t5, t13, 0, 0, 17, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 5216U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 17);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 17);
    t14 = (t10 & 1);
    *((unsigned int *)t2) = t14;
    t5 = (t0 + 6256);
    xsi_vlogvar_wait_assign_value(t5, t13, 0, 0, 1, 0LL);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 6256);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6416);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);

LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(71, ng0);

LAB8:    xsi_set_current_line(72, ng0);
    t11 = ((char*)((ng4)));
    t12 = (t0 + 6096);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 17, 0LL);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6256);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6416);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB7;

}

static void Cont_85_5(char *t0)
{
    char t3[8];
    char t6[8];
    char t35[8];
    char t44[8];
    char *t1;
    char *t2;
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
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    int t68;
    int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;

LAB0:    t1 = (t0 + 9368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 6896);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 0);
    t14 = (t13 & 1);
    *((unsigned int *)t7) = t14;
    memset(t3, 0, 8);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t6);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t15) == 0)
        goto LAB4;

LAB6:    t21 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t21) = 1;

LAB7:    t22 = (t3 + 4);
    t23 = (t6 + 4);
    t24 = *((unsigned int *)t6);
    t25 = (~(t24));
    *((unsigned int *)t3) = t25;
    *((unsigned int *)t22) = 0;
    if (*((unsigned int *)t23) != 0)
        goto LAB9;

LAB8:    t30 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t30 & 1U);
    t31 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t31 & 1U);
    t32 = (t0 + 6896);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    memset(t35, 0, 8);
    t36 = (t35 + 4);
    t37 = (t34 + 4);
    t38 = *((unsigned int *)t34);
    t39 = (t38 >> 1);
    t40 = (t39 & 1);
    *((unsigned int *)t35) = t40;
    t41 = *((unsigned int *)t37);
    t42 = (t41 >> 1);
    t43 = (t42 & 1);
    *((unsigned int *)t36) = t43;
    t45 = *((unsigned int *)t3);
    t46 = *((unsigned int *)t35);
    t47 = (t45 & t46);
    *((unsigned int *)t44) = t47;
    t48 = (t3 + 4);
    t49 = (t35 + 4);
    t50 = (t44 + 4);
    t51 = *((unsigned int *)t48);
    t52 = *((unsigned int *)t49);
    t53 = (t51 | t52);
    *((unsigned int *)t50) = t53;
    t54 = *((unsigned int *)t50);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB10;

LAB11:
LAB12:    t76 = (t0 + 11360);
    t77 = (t76 + 56U);
    t78 = *((char **)t77);
    t79 = (t78 + 56U);
    t80 = *((char **)t79);
    memset(t80, 0, 8);
    t81 = 1U;
    t82 = t81;
    t83 = (t44 + 4);
    t84 = *((unsigned int *)t44);
    t81 = (t81 & t84);
    t85 = *((unsigned int *)t83);
    t82 = (t82 & t85);
    t86 = (t80 + 4);
    t87 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t87 | t81);
    t88 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t88 | t82);
    xsi_driver_vfirst_trans(t76, 0, 0);
    t89 = (t0 + 11008);
    *((int *)t89) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB9:    t26 = *((unsigned int *)t3);
    t27 = *((unsigned int *)t23);
    *((unsigned int *)t3) = (t26 | t27);
    t28 = *((unsigned int *)t22);
    t29 = *((unsigned int *)t23);
    *((unsigned int *)t22) = (t28 | t29);
    goto LAB8;

LAB10:    t56 = *((unsigned int *)t44);
    t57 = *((unsigned int *)t50);
    *((unsigned int *)t44) = (t56 | t57);
    t58 = (t3 + 4);
    t59 = (t35 + 4);
    t60 = *((unsigned int *)t3);
    t61 = (~(t60));
    t62 = *((unsigned int *)t58);
    t63 = (~(t62));
    t64 = *((unsigned int *)t35);
    t65 = (~(t64));
    t66 = *((unsigned int *)t59);
    t67 = (~(t66));
    t68 = (t61 & t63);
    t69 = (t65 & t67);
    t70 = (~(t68));
    t71 = (~(t69));
    t72 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t72 & t70);
    t73 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t73 & t71);
    t74 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t74 & t70);
    t75 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t75 & t71);
    goto LAB12;

}

static void Cont_88_6(char *t0)
{
    char t3[8];
    char t6[8];
    char t35[8];
    char t44[8];
    char *t1;
    char *t2;
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
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    int t68;
    int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;

LAB0:    t1 = (t0 + 9616U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 7056);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 0);
    t14 = (t13 & 1);
    *((unsigned int *)t7) = t14;
    memset(t3, 0, 8);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t6);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t15) == 0)
        goto LAB4;

LAB6:    t21 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t21) = 1;

LAB7:    t22 = (t3 + 4);
    t23 = (t6 + 4);
    t24 = *((unsigned int *)t6);
    t25 = (~(t24));
    *((unsigned int *)t3) = t25;
    *((unsigned int *)t22) = 0;
    if (*((unsigned int *)t23) != 0)
        goto LAB9;

LAB8:    t30 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t30 & 1U);
    t31 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t31 & 1U);
    t32 = (t0 + 7056);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    memset(t35, 0, 8);
    t36 = (t35 + 4);
    t37 = (t34 + 4);
    t38 = *((unsigned int *)t34);
    t39 = (t38 >> 1);
    t40 = (t39 & 1);
    *((unsigned int *)t35) = t40;
    t41 = *((unsigned int *)t37);
    t42 = (t41 >> 1);
    t43 = (t42 & 1);
    *((unsigned int *)t36) = t43;
    t45 = *((unsigned int *)t3);
    t46 = *((unsigned int *)t35);
    t47 = (t45 & t46);
    *((unsigned int *)t44) = t47;
    t48 = (t3 + 4);
    t49 = (t35 + 4);
    t50 = (t44 + 4);
    t51 = *((unsigned int *)t48);
    t52 = *((unsigned int *)t49);
    t53 = (t51 | t52);
    *((unsigned int *)t50) = t53;
    t54 = *((unsigned int *)t50);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB10;

LAB11:
LAB12:    t76 = (t0 + 11424);
    t77 = (t76 + 56U);
    t78 = *((char **)t77);
    t79 = (t78 + 56U);
    t80 = *((char **)t79);
    memset(t80, 0, 8);
    t81 = 1U;
    t82 = t81;
    t83 = (t44 + 4);
    t84 = *((unsigned int *)t44);
    t81 = (t81 & t84);
    t85 = *((unsigned int *)t83);
    t82 = (t82 & t85);
    t86 = (t80 + 4);
    t87 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t87 | t81);
    t88 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t88 | t82);
    xsi_driver_vfirst_trans(t76, 0, 0);
    t89 = (t0 + 11024);
    *((int *)t89) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB9:    t26 = *((unsigned int *)t3);
    t27 = *((unsigned int *)t23);
    *((unsigned int *)t3) = (t26 | t27);
    t28 = *((unsigned int *)t22);
    t29 = *((unsigned int *)t23);
    *((unsigned int *)t22) = (t28 | t29);
    goto LAB8;

LAB10:    t56 = *((unsigned int *)t44);
    t57 = *((unsigned int *)t50);
    *((unsigned int *)t44) = (t56 | t57);
    t58 = (t3 + 4);
    t59 = (t35 + 4);
    t60 = *((unsigned int *)t3);
    t61 = (~(t60));
    t62 = *((unsigned int *)t58);
    t63 = (~(t62));
    t64 = *((unsigned int *)t35);
    t65 = (~(t64));
    t66 = *((unsigned int *)t59);
    t67 = (~(t66));
    t68 = (t61 & t63);
    t69 = (t65 & t67);
    t70 = (~(t68));
    t71 = (~(t69));
    t72 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t72 & t70);
    t73 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t73 & t71);
    t74 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t74 & t70);
    t75 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t75 & t71);
    goto LAB12;

}

static void Always_90_7(char *t0)
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

LAB0:    t1 = (t0 + 9864U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 11040);
    *((int *)t2) = 1;
    t3 = (t0 + 9896);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(91, ng0);
    t4 = (t0 + 4896U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 6416);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB8;

LAB9:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 6256);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 6736);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB13:
LAB10:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(92, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 6736);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    goto LAB7;

LAB8:    xsi_set_current_line(94, ng0);
    t11 = (t0 + 5376U);
    t12 = *((char **)t11);
    t11 = (t0 + 6736);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 1, 0LL);
    goto LAB10;

LAB11:    xsi_set_current_line(99, ng0);
    t11 = (t0 + 5536U);
    t12 = *((char **)t11);
    t11 = (t0 + 6736);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 1, 0LL);
    goto LAB13;

}

static void Always_104_8(char *t0)
{
    char t15[8];
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
    char *t13;
    char *t14;
    char *t16;

LAB0:    t1 = (t0 + 10112U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 11056);
    *((int *)t2) = 1;
    t3 = (t0 + 10144);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(105, ng0);
    t4 = (t0 + 4896U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 6736);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB8;

LAB9:
LAB10:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(106, ng0);
    t11 = ((char*)((ng4)));
    t12 = (t0 + 7216);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 8, 0LL);
    goto LAB7;

LAB8:    xsi_set_current_line(108, ng0);
    t11 = (t0 + 7216);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng3)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 32, t13, 8, t14, 32);
    t16 = (t0 + 7216);
    xsi_vlogvar_wait_assign_value(t16, t15, 0, 0, 8, 0LL);
    goto LAB10;

}

static void Cont_110_9(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 10360U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 7216);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 255U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 255U);
    t14 = (t0 + 11488);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 255U;
    t20 = t19;
    t21 = (t3 + 4);
    t22 = *((unsigned int *)t3);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 7);
    t27 = (t0 + 11072);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Always_116_10(char *t0)
{
    char t13[8];
    char t14[8];
    char t24[8];
    char t34[8];
    char t63[8];
    char t73[8];
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
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t62;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t72;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;

LAB0:    t1 = (t0 + 10608U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(116, ng0);
    t2 = (t0 + 11088);
    *((int *)t2) = 1;
    t3 = (t0 + 10640);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(117, ng0);
    t4 = (t0 + 4896U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(123, ng0);
    t2 = (t0 + 6256);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB9;

LAB10:
LAB11:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(118, ng0);

LAB8:    xsi_set_current_line(119, ng0);
    t11 = ((char*)((ng4)));
    t12 = (t0 + 6576);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 8, 0LL);
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 6896);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 7056);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB7;

LAB9:    xsi_set_current_line(124, ng0);

LAB12:    xsi_set_current_line(128, ng0);
    t11 = (t0 + 3136U);
    t12 = *((char **)t11);
    memset(t14, 0, 8);
    t11 = (t14 + 4);
    t15 = (t12 + 4);
    t16 = *((unsigned int *)t12);
    t17 = (t16 >> 0);
    *((unsigned int *)t14) = t17;
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 0);
    *((unsigned int *)t11) = t19;
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t20 & 63U);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t21 & 63U);
    t22 = (t0 + 3136U);
    t23 = *((char **)t22);
    memset(t24, 0, 8);
    t22 = (t24 + 4);
    t25 = (t23 + 4);
    t26 = *((unsigned int *)t23);
    t27 = (t26 >> 6);
    t28 = (t27 & 1);
    *((unsigned int *)t24) = t28;
    t29 = *((unsigned int *)t25);
    t30 = (t29 >> 6);
    t31 = (t30 & 1);
    *((unsigned int *)t22) = t31;
    t32 = (t0 + 5536U);
    t33 = *((char **)t32);
    t35 = *((unsigned int *)t24);
    t36 = *((unsigned int *)t33);
    t37 = (t35 | t36);
    *((unsigned int *)t34) = t37;
    t32 = (t24 + 4);
    t38 = (t33 + 4);
    t39 = (t34 + 4);
    t40 = *((unsigned int *)t32);
    t41 = *((unsigned int *)t38);
    t42 = (t40 | t41);
    *((unsigned int *)t39) = t42;
    t43 = *((unsigned int *)t39);
    t44 = (t43 != 0);
    if (t44 == 1)
        goto LAB13;

LAB14:
LAB15:    t61 = (t0 + 3136U);
    t62 = *((char **)t61);
    memset(t63, 0, 8);
    t61 = (t63 + 4);
    t64 = (t62 + 4);
    t65 = *((unsigned int *)t62);
    t66 = (t65 >> 7);
    t67 = (t66 & 1);
    *((unsigned int *)t63) = t67;
    t68 = *((unsigned int *)t64);
    t69 = (t68 >> 7);
    t70 = (t69 & 1);
    *((unsigned int *)t61) = t70;
    t71 = (t0 + 5536U);
    t72 = *((char **)t71);
    t74 = *((unsigned int *)t63);
    t75 = *((unsigned int *)t72);
    t76 = (t74 | t75);
    *((unsigned int *)t73) = t76;
    t71 = (t63 + 4);
    t77 = (t72 + 4);
    t78 = (t73 + 4);
    t79 = *((unsigned int *)t71);
    t80 = *((unsigned int *)t77);
    t81 = (t79 | t80);
    *((unsigned int *)t78) = t81;
    t82 = *((unsigned int *)t78);
    t83 = (t82 != 0);
    if (t83 == 1)
        goto LAB16;

LAB17:
LAB18:    xsi_vlogtype_concat(t13, 8, 8, 3U, t73, 1, t34, 1, t14, 6);
    t100 = (t0 + 6576);
    xsi_vlogvar_wait_assign_value(t100, t13, 0, 0, 8, 0LL);
    xsi_set_current_line(129, ng0);
    t2 = (t0 + 6896);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t5 = (t14 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 1);
    *((unsigned int *)t14) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 1);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t10 & 3U);
    t16 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t16 & 3U);
    t12 = (t0 + 3456U);
    t15 = *((char **)t12);
    xsi_vlogtype_concat(t13, 3, 3, 2U, t15, 1, t14, 2);
    t12 = (t0 + 6896);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 3, 0LL);
    xsi_set_current_line(130, ng0);
    t2 = (t0 + 7056);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t5 = (t14 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 1);
    *((unsigned int *)t14) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 1);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t10 & 3U);
    t16 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t16 & 3U);
    t12 = (t0 + 3616U);
    t15 = *((char **)t12);
    xsi_vlogtype_concat(t13, 3, 3, 2U, t15, 1, t14, 2);
    t12 = (t0 + 7056);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 3, 0LL);
    goto LAB11;

LAB13:    t45 = *((unsigned int *)t34);
    t46 = *((unsigned int *)t39);
    *((unsigned int *)t34) = (t45 | t46);
    t47 = (t24 + 4);
    t48 = (t33 + 4);
    t49 = *((unsigned int *)t47);
    t50 = (~(t49));
    t51 = *((unsigned int *)t24);
    t52 = (t51 & t50);
    t53 = *((unsigned int *)t48);
    t54 = (~(t53));
    t55 = *((unsigned int *)t33);
    t56 = (t55 & t54);
    t57 = (~(t52));
    t58 = (~(t56));
    t59 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t59 & t57);
    t60 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t60 & t58);
    goto LAB15;

LAB16:    t84 = *((unsigned int *)t73);
    t85 = *((unsigned int *)t78);
    *((unsigned int *)t73) = (t84 | t85);
    t86 = (t63 + 4);
    t87 = (t72 + 4);
    t88 = *((unsigned int *)t86);
    t89 = (~(t88));
    t90 = *((unsigned int *)t63);
    t91 = (t90 & t89);
    t92 = *((unsigned int *)t87);
    t93 = (~(t92));
    t94 = *((unsigned int *)t72);
    t95 = (t94 & t93);
    t96 = (~(t91));
    t97 = (~(t95));
    t98 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t98 & t96);
    t99 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t99 & t97);
    goto LAB18;

}


extern void work_m_06794591779438282845_3235807583_init()
{
	static char *pe[] = {(void *)Cont_54_0,(void *)Cont_55_1,(void *)Always_57_2,(void *)Cont_67_3,(void *)Always_69_4,(void *)Cont_85_5,(void *)Cont_88_6,(void *)Always_90_7,(void *)Always_104_8,(void *)Cont_110_9,(void *)Always_116_10};
	xsi_register_didat("work_m_06794591779438282845_3235807583", "isim/tb_isim_beh.exe.sim/work/m_06794591779438282845_3235807583.didat");
	xsi_register_executes(pe);
}
