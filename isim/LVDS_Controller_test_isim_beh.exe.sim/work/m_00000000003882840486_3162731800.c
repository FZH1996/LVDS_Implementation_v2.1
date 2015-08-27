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
static const char *ng0 = "C:/Verilog/LVDS_Implementation_v2.1/LVDS_Output.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {99U, 0U};
static int ng4[] = {6, 0};
static int ng5[] = {1, 0};
static int ng6[] = {0, 0};



static void Initial_140_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(141, ng0);

LAB2:    xsi_set_current_line(144, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 5120);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(145, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 5280);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(146, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 5440);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(147, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4960);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 3);
    xsi_set_current_line(149, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 5920);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 7);
    xsi_set_current_line(150, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 6080);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 7);
    xsi_set_current_line(151, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 6240);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 7);
    xsi_set_current_line(152, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 6400);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 7);

LAB1:    return;
}

static void Always_156_1(char *t0)
{
    char t10[8];
    char t43[8];
    char t44[8];
    char t45[8];
    char t46[8];
    char t48[8];
    char t58[8];
    char t69[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
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
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    int t34;
    int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t47;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    char *t68;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;

LAB0:    t1 = (t0 + 8368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(156, ng0);
    t2 = (t0 + 9184);
    *((int *)t2) = 1;
    t3 = (t0 + 8400);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(157, ng0);

LAB5:    xsi_set_current_line(160, ng0);
    t4 = (t0 + 5280);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 5120);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t9);
    t13 = (t11 & t12);
    *((unsigned int *)t10) = t13;
    t14 = (t6 + 4);
    t15 = (t9 + 4);
    t16 = (t10 + 4);
    t17 = *((unsigned int *)t14);
    t18 = *((unsigned int *)t15);
    t19 = (t17 | t18);
    *((unsigned int *)t16) = t19;
    t20 = *((unsigned int *)t16);
    t21 = (t20 != 0);
    if (t21 == 1)
        goto LAB6;

LAB7:
LAB8:    t42 = (t0 + 5440);
    xsi_vlogvar_wait_assign_value(t42, t10, 0, 0, 1, 0LL);
    xsi_set_current_line(163, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2320U);
    t4 = *((char **)t3);
    memset(t43, 0, 8);
    t3 = (t43 + 4);
    t5 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 7);
    t13 = (t12 & 1);
    *((unsigned int *)t43) = t13;
    t17 = *((unsigned int *)t5);
    t18 = (t17 >> 7);
    t19 = (t18 & 1);
    *((unsigned int *)t3) = t19;
    t6 = (t0 + 2320U);
    t7 = *((char **)t6);
    memset(t44, 0, 8);
    t6 = (t44 + 4);
    t8 = (t7 + 4);
    t20 = *((unsigned int *)t7);
    t21 = (t20 >> 6);
    t22 = (t21 & 1);
    *((unsigned int *)t44) = t22;
    t23 = *((unsigned int *)t8);
    t26 = (t23 >> 6);
    t27 = (t26 & 1);
    *((unsigned int *)t6) = t27;
    t9 = (t0 + 2480U);
    t14 = *((char **)t9);
    memset(t45, 0, 8);
    t9 = (t45 + 4);
    t15 = (t14 + 4);
    t28 = *((unsigned int *)t14);
    t29 = (t28 >> 7);
    t30 = (t29 & 1);
    *((unsigned int *)t45) = t30;
    t31 = *((unsigned int *)t15);
    t32 = (t31 >> 7);
    t33 = (t32 & 1);
    *((unsigned int *)t9) = t33;
    t16 = (t0 + 2480U);
    t24 = *((char **)t16);
    memset(t46, 0, 8);
    t16 = (t46 + 4);
    t25 = (t24 + 4);
    t36 = *((unsigned int *)t24);
    t37 = (t36 >> 6);
    t38 = (t37 & 1);
    *((unsigned int *)t46) = t38;
    t39 = *((unsigned int *)t25);
    t40 = (t39 >> 6);
    t41 = (t40 & 1);
    *((unsigned int *)t16) = t41;
    t42 = (t0 + 2160U);
    t47 = *((char **)t42);
    memset(t48, 0, 8);
    t42 = (t48 + 4);
    t49 = (t47 + 4);
    t50 = *((unsigned int *)t47);
    t51 = (t50 >> 7);
    t52 = (t51 & 1);
    *((unsigned int *)t48) = t52;
    t53 = *((unsigned int *)t49);
    t54 = (t53 >> 7);
    t55 = (t54 & 1);
    *((unsigned int *)t42) = t55;
    t56 = (t0 + 2160U);
    t57 = *((char **)t56);
    memset(t58, 0, 8);
    t56 = (t58 + 4);
    t59 = (t57 + 4);
    t60 = *((unsigned int *)t57);
    t61 = (t60 >> 6);
    t62 = (t61 & 1);
    *((unsigned int *)t58) = t62;
    t63 = *((unsigned int *)t59);
    t64 = (t63 >> 6);
    t65 = (t64 & 1);
    *((unsigned int *)t56) = t65;
    xsi_vlogtype_concat(t10, 7, 7, 7U, t58, 1, t48, 1, t46, 1, t45, 1, t44, 1, t43, 1, t2, 1);
    t66 = (t0 + 6400);
    xsi_vlogvar_wait_assign_value(t66, t10, 0, 0, 7, 0LL);
    xsi_set_current_line(166, ng0);
    t2 = (t0 + 5440);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5280);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 5120);
    t9 = (t8 + 56U);
    t14 = *((char **)t9);
    t15 = (t0 + 2320U);
    t16 = *((char **)t15);
    memset(t43, 0, 8);
    t15 = (t43 + 4);
    t24 = (t16 + 4);
    t11 = *((unsigned int *)t16);
    t12 = (t11 >> 5);
    t13 = (t12 & 1);
    *((unsigned int *)t43) = t13;
    t17 = *((unsigned int *)t24);
    t18 = (t17 >> 5);
    t19 = (t18 & 1);
    *((unsigned int *)t15) = t19;
    t25 = (t0 + 2320U);
    t42 = *((char **)t25);
    memset(t44, 0, 8);
    t25 = (t44 + 4);
    t47 = (t42 + 4);
    t20 = *((unsigned int *)t42);
    t21 = (t20 >> 4);
    t22 = (t21 & 1);
    *((unsigned int *)t44) = t22;
    t23 = *((unsigned int *)t47);
    t26 = (t23 >> 4);
    t27 = (t26 & 1);
    *((unsigned int *)t25) = t27;
    t49 = (t0 + 2320U);
    t56 = *((char **)t49);
    memset(t45, 0, 8);
    t49 = (t45 + 4);
    t57 = (t56 + 4);
    t28 = *((unsigned int *)t56);
    t29 = (t28 >> 3);
    t30 = (t29 & 1);
    *((unsigned int *)t45) = t30;
    t31 = *((unsigned int *)t57);
    t32 = (t31 >> 3);
    t33 = (t32 & 1);
    *((unsigned int *)t49) = t33;
    t59 = (t0 + 2320U);
    t66 = *((char **)t59);
    memset(t46, 0, 8);
    t59 = (t46 + 4);
    t67 = (t66 + 4);
    t36 = *((unsigned int *)t66);
    t37 = (t36 >> 2);
    t38 = (t37 & 1);
    *((unsigned int *)t46) = t38;
    t39 = *((unsigned int *)t67);
    t40 = (t39 >> 2);
    t41 = (t40 & 1);
    *((unsigned int *)t59) = t41;
    xsi_vlogtype_concat(t10, 7, 7, 7U, t46, 1, t45, 1, t44, 1, t43, 1, t14, 1, t7, 1, t4, 1);
    t68 = (t0 + 6240);
    xsi_vlogvar_wait_assign_value(t68, t10, 0, 0, 7, 0LL);
    xsi_set_current_line(169, ng0);
    t2 = (t0 + 2320U);
    t3 = *((char **)t2);
    memset(t43, 0, 8);
    t2 = (t43 + 4);
    t4 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (t11 >> 1);
    t13 = (t12 & 1);
    *((unsigned int *)t43) = t13;
    t17 = *((unsigned int *)t4);
    t18 = (t17 >> 1);
    t19 = (t18 & 1);
    *((unsigned int *)t2) = t19;
    t5 = (t0 + 2320U);
    t6 = *((char **)t5);
    memset(t44, 0, 8);
    t5 = (t44 + 4);
    t7 = (t6 + 4);
    t20 = *((unsigned int *)t6);
    t21 = (t20 >> 0);
    t22 = (t21 & 1);
    *((unsigned int *)t44) = t22;
    t23 = *((unsigned int *)t7);
    t26 = (t23 >> 0);
    t27 = (t26 & 1);
    *((unsigned int *)t5) = t27;
    t8 = (t0 + 2480U);
    t9 = *((char **)t8);
    memset(t45, 0, 8);
    t8 = (t45 + 4);
    t14 = (t9 + 4);
    t28 = *((unsigned int *)t9);
    t29 = (t28 >> 5);
    t30 = (t29 & 1);
    *((unsigned int *)t45) = t30;
    t31 = *((unsigned int *)t14);
    t32 = (t31 >> 5);
    t33 = (t32 & 1);
    *((unsigned int *)t8) = t33;
    t15 = (t0 + 2480U);
    t16 = *((char **)t15);
    memset(t46, 0, 8);
    t15 = (t46 + 4);
    t24 = (t16 + 4);
    t36 = *((unsigned int *)t16);
    t37 = (t36 >> 4);
    t38 = (t37 & 1);
    *((unsigned int *)t46) = t38;
    t39 = *((unsigned int *)t24);
    t40 = (t39 >> 4);
    t41 = (t40 & 1);
    *((unsigned int *)t15) = t41;
    t25 = (t0 + 2480U);
    t42 = *((char **)t25);
    memset(t48, 0, 8);
    t25 = (t48 + 4);
    t47 = (t42 + 4);
    t50 = *((unsigned int *)t42);
    t51 = (t50 >> 3);
    t52 = (t51 & 1);
    *((unsigned int *)t48) = t52;
    t53 = *((unsigned int *)t47);
    t54 = (t53 >> 3);
    t55 = (t54 & 1);
    *((unsigned int *)t25) = t55;
    t49 = (t0 + 2480U);
    t56 = *((char **)t49);
    memset(t58, 0, 8);
    t49 = (t58 + 4);
    t57 = (t56 + 4);
    t60 = *((unsigned int *)t56);
    t61 = (t60 >> 2);
    t62 = (t61 & 1);
    *((unsigned int *)t58) = t62;
    t63 = *((unsigned int *)t57);
    t64 = (t63 >> 2);
    t65 = (t64 & 1);
    *((unsigned int *)t49) = t65;
    t59 = (t0 + 2480U);
    t66 = *((char **)t59);
    memset(t69, 0, 8);
    t59 = (t69 + 4);
    t67 = (t66 + 4);
    t70 = *((unsigned int *)t66);
    t71 = (t70 >> 1);
    t72 = (t71 & 1);
    *((unsigned int *)t69) = t72;
    t73 = *((unsigned int *)t67);
    t74 = (t73 >> 1);
    t75 = (t74 & 1);
    *((unsigned int *)t59) = t75;
    xsi_vlogtype_concat(t10, 7, 7, 7U, t69, 1, t58, 1, t48, 1, t46, 1, t45, 1, t44, 1, t43, 1);
    t68 = (t0 + 6080);
    xsi_vlogvar_wait_assign_value(t68, t10, 0, 0, 7, 0LL);
    xsi_set_current_line(172, ng0);
    t2 = (t0 + 2480U);
    t3 = *((char **)t2);
    memset(t43, 0, 8);
    t2 = (t43 + 4);
    t4 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t43) = t13;
    t17 = *((unsigned int *)t4);
    t18 = (t17 >> 0);
    t19 = (t18 & 1);
    *((unsigned int *)t2) = t19;
    t5 = (t0 + 2160U);
    t6 = *((char **)t5);
    memset(t44, 0, 8);
    t5 = (t44 + 4);
    t7 = (t6 + 4);
    t20 = *((unsigned int *)t6);
    t21 = (t20 >> 5);
    t22 = (t21 & 1);
    *((unsigned int *)t44) = t22;
    t23 = *((unsigned int *)t7);
    t26 = (t23 >> 5);
    t27 = (t26 & 1);
    *((unsigned int *)t5) = t27;
    t8 = (t0 + 2160U);
    t9 = *((char **)t8);
    memset(t45, 0, 8);
    t8 = (t45 + 4);
    t14 = (t9 + 4);
    t28 = *((unsigned int *)t9);
    t29 = (t28 >> 4);
    t30 = (t29 & 1);
    *((unsigned int *)t45) = t30;
    t31 = *((unsigned int *)t14);
    t32 = (t31 >> 4);
    t33 = (t32 & 1);
    *((unsigned int *)t8) = t33;
    t15 = (t0 + 2160U);
    t16 = *((char **)t15);
    memset(t46, 0, 8);
    t15 = (t46 + 4);
    t24 = (t16 + 4);
    t36 = *((unsigned int *)t16);
    t37 = (t36 >> 3);
    t38 = (t37 & 1);
    *((unsigned int *)t46) = t38;
    t39 = *((unsigned int *)t24);
    t40 = (t39 >> 3);
    t41 = (t40 & 1);
    *((unsigned int *)t15) = t41;
    t25 = (t0 + 2160U);
    t42 = *((char **)t25);
    memset(t48, 0, 8);
    t25 = (t48 + 4);
    t47 = (t42 + 4);
    t50 = *((unsigned int *)t42);
    t51 = (t50 >> 2);
    t52 = (t51 & 1);
    *((unsigned int *)t48) = t52;
    t53 = *((unsigned int *)t47);
    t54 = (t53 >> 2);
    t55 = (t54 & 1);
    *((unsigned int *)t25) = t55;
    t49 = (t0 + 2160U);
    t56 = *((char **)t49);
    memset(t58, 0, 8);
    t49 = (t58 + 4);
    t57 = (t56 + 4);
    t60 = *((unsigned int *)t56);
    t61 = (t60 >> 1);
    t62 = (t61 & 1);
    *((unsigned int *)t58) = t62;
    t63 = *((unsigned int *)t57);
    t64 = (t63 >> 1);
    t65 = (t64 & 1);
    *((unsigned int *)t49) = t65;
    t59 = (t0 + 2160U);
    t66 = *((char **)t59);
    memset(t69, 0, 8);
    t59 = (t69 + 4);
    t67 = (t66 + 4);
    t70 = *((unsigned int *)t66);
    t71 = (t70 >> 0);
    t72 = (t71 & 1);
    *((unsigned int *)t69) = t72;
    t73 = *((unsigned int *)t67);
    t74 = (t73 >> 0);
    t75 = (t74 & 1);
    *((unsigned int *)t59) = t75;
    xsi_vlogtype_concat(t10, 7, 7, 7U, t69, 1, t58, 1, t48, 1, t46, 1, t45, 1, t44, 1, t43, 1);
    t68 = (t0 + 5920);
    xsi_vlogvar_wait_assign_value(t68, t10, 0, 0, 7, 0LL);
    xsi_set_current_line(174, ng0);
    t2 = (t0 + 6400);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6400);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 4960);
    t9 = (t8 + 56U);
    t14 = *((char **)t9);
    xsi_vlog_generic_get_index_select_value(t10, 1, t4, t7, 2, t14, 3, 2);
    t15 = (t0 + 7200);
    xsi_vlogvar_wait_assign_value(t15, t10, 0, 0, 1, 0LL);
    xsi_set_current_line(175, ng0);
    t2 = (t0 + 6240);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6240);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 4960);
    t9 = (t8 + 56U);
    t14 = *((char **)t9);
    xsi_vlog_generic_get_index_select_value(t10, 1, t4, t7, 2, t14, 3, 2);
    t15 = (t0 + 7040);
    xsi_vlogvar_wait_assign_value(t15, t10, 0, 0, 1, 0LL);
    xsi_set_current_line(176, ng0);
    t2 = (t0 + 6080);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6080);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 4960);
    t9 = (t8 + 56U);
    t14 = *((char **)t9);
    xsi_vlog_generic_get_index_select_value(t10, 1, t4, t7, 2, t14, 3, 2);
    t15 = (t0 + 6880);
    xsi_vlogvar_wait_assign_value(t15, t10, 0, 0, 1, 0LL);
    xsi_set_current_line(177, ng0);
    t2 = (t0 + 5920);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5920);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 4960);
    t9 = (t8 + 56U);
    t14 = *((char **)t9);
    xsi_vlog_generic_get_index_select_value(t10, 1, t4, t7, 2, t14, 3, 2);
    t15 = (t0 + 6720);
    xsi_vlogvar_wait_assign_value(t15, t10, 0, 0, 1, 0LL);
    xsi_set_current_line(178, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1232);
    t4 = (t3 + 72U);
    t5 = *((char **)t4);
    t6 = (t0 + 4960);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    xsi_vlog_generic_get_index_select_value(t10, 1, t2, t5, 2, t8, 3, 2);
    t9 = (t0 + 6560);
    xsi_vlogvar_wait_assign_value(t9, t10, 0, 0, 1, 0LL);
    goto LAB2;

LAB6:    t22 = *((unsigned int *)t10);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t10) = (t22 | t23);
    t24 = (t6 + 4);
    t25 = (t9 + 4);
    t26 = *((unsigned int *)t6);
    t27 = (~(t26));
    t28 = *((unsigned int *)t24);
    t29 = (~(t28));
    t30 = *((unsigned int *)t9);
    t31 = (~(t30));
    t32 = *((unsigned int *)t25);
    t33 = (~(t32));
    t34 = (t27 & t29);
    t35 = (t31 & t33);
    t36 = (~(t34));
    t37 = (~(t35));
    t38 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t38 & t36);
    t39 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t39 & t37);
    t40 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t40 & t36);
    t41 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t41 & t37);
    goto LAB8;

}

static void Always_182_2(char *t0)
{
    char t9[8];
    char t12[8];
    char t31[8];
    char t32[8];
    char t35[8];
    char t43[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t33;
    char *t34;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;

LAB0:    t1 = (t0 + 8616U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(182, ng0);
    t2 = (t0 + 9200);
    *((int *)t2) = 1;
    t3 = (t0 + 8648);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(183, ng0);

LAB5:    xsi_set_current_line(185, ng0);
    t4 = (t0 + 5600);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 608);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    t7 = (t6 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB7;

LAB6:    t10 = (t8 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t6) < *((unsigned int *)t8))
        goto LAB8;

LAB9:    memset(t12, 0, 8);
    t13 = (t9 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t9);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t13) != 0)
        goto LAB13;

LAB14:    t20 = (t12 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (!(t21));
    t23 = *((unsigned int *)t20);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB15;

LAB16:    memcpy(t43, t12, 8);

LAB17:    t71 = (t43 + 4);
    t72 = *((unsigned int *)t71);
    t73 = (~(t72));
    t74 = *((unsigned int *)t43);
    t75 = (t74 & t73);
    t76 = (t75 != 0);
    if (t76 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(190, ng0);

LAB34:    xsi_set_current_line(191, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5120);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB32:    xsi_set_current_line(194, ng0);
    t2 = (t0 + 5760);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1016);
    t6 = *((char **)t5);
    memset(t9, 0, 8);
    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB36;

LAB35:    t7 = (t6 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB36;

LAB39:    if (*((unsigned int *)t4) < *((unsigned int *)t6))
        goto LAB37;

LAB38:    memset(t12, 0, 8);
    t10 = (t9 + 4);
    t14 = *((unsigned int *)t10);
    t15 = (~(t14));
    t16 = *((unsigned int *)t9);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t10) != 0)
        goto LAB42;

LAB43:    t13 = (t12 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (!(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB44;

LAB45:    memcpy(t43, t12, 8);

LAB46:    t57 = (t43 + 4);
    t72 = *((unsigned int *)t57);
    t73 = (~(t72));
    t74 = *((unsigned int *)t43);
    t75 = (t74 & t73);
    t76 = (t75 != 0);
    if (t76 > 0)
        goto LAB59;

LAB60:    xsi_set_current_line(199, ng0);

LAB63:    xsi_set_current_line(200, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5280);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB61:    xsi_set_current_line(203, ng0);
    t2 = (t0 + 4960);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t9, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t7);
    t21 = (t17 ^ t18);
    t22 = (t16 | t21);
    t23 = *((unsigned int *)t6);
    t24 = *((unsigned int *)t7);
    t37 = (t23 | t24);
    t38 = (~(t37));
    t39 = (t22 & t38);
    if (t39 != 0)
        goto LAB67;

LAB64:    if (t37 != 0)
        goto LAB66;

LAB65:    *((unsigned int *)t9) = 1;

LAB67:    t10 = (t9 + 4);
    t40 = *((unsigned int *)t10);
    t41 = (~(t40));
    t44 = *((unsigned int *)t9);
    t45 = (t44 & t41);
    t46 = (t45 != 0);
    if (t46 > 0)
        goto LAB68;

LAB69:    xsi_set_current_line(230, ng0);

LAB90:    xsi_set_current_line(231, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4800);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(232, ng0);
    t2 = (t0 + 4960);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t4, 3, t5, 32);
    t6 = (t0 + 4960);
    xsi_vlogvar_wait_assign_value(t6, t9, 0, 0, 3, 0LL);

LAB70:    goto LAB2;

LAB7:    t11 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB9;

LAB8:    *((unsigned int *)t9) = 1;
    goto LAB9;

LAB11:    *((unsigned int *)t12) = 1;
    goto LAB14;

LAB13:    t19 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB14;

LAB15:    t25 = (t0 + 5600);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t0 + 608);
    t29 = *((char **)t28);
    t28 = (t0 + 744);
    t30 = *((char **)t28);
    memset(t31, 0, 8);
    xsi_vlog_unsigned_add(t31, 32, t29, 32, t30, 32);
    memset(t32, 0, 8);
    t28 = (t27 + 4);
    if (*((unsigned int *)t28) != 0)
        goto LAB19;

LAB18:    t33 = (t31 + 4);
    if (*((unsigned int *)t33) != 0)
        goto LAB19;

LAB22:    if (*((unsigned int *)t27) < *((unsigned int *)t31))
        goto LAB21;

LAB20:    *((unsigned int *)t32) = 1;

LAB21:    memset(t35, 0, 8);
    t36 = (t32 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (~(t37));
    t39 = *((unsigned int *)t32);
    t40 = (t39 & t38);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t36) != 0)
        goto LAB25;

LAB26:    t44 = *((unsigned int *)t12);
    t45 = *((unsigned int *)t35);
    t46 = (t44 | t45);
    *((unsigned int *)t43) = t46;
    t47 = (t12 + 4);
    t48 = (t35 + 4);
    t49 = (t43 + 4);
    t50 = *((unsigned int *)t47);
    t51 = *((unsigned int *)t48);
    t52 = (t50 | t51);
    *((unsigned int *)t49) = t52;
    t53 = *((unsigned int *)t49);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB27;

LAB28:
LAB29:    goto LAB17;

LAB19:    t34 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB21;

LAB23:    *((unsigned int *)t35) = 1;
    goto LAB26;

LAB25:    t42 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB26;

LAB27:    t55 = *((unsigned int *)t43);
    t56 = *((unsigned int *)t49);
    *((unsigned int *)t43) = (t55 | t56);
    t57 = (t12 + 4);
    t58 = (t35 + 4);
    t59 = *((unsigned int *)t57);
    t60 = (~(t59));
    t61 = *((unsigned int *)t12);
    t62 = (t61 & t60);
    t63 = *((unsigned int *)t58);
    t64 = (~(t63));
    t65 = *((unsigned int *)t35);
    t66 = (t65 & t64);
    t67 = (~(t62));
    t68 = (~(t66));
    t69 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t69 & t67);
    t70 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t70 & t68);
    goto LAB29;

LAB30:    xsi_set_current_line(186, ng0);

LAB33:    xsi_set_current_line(187, ng0);
    t77 = ((char*)((ng1)));
    t78 = (t0 + 5120);
    xsi_vlogvar_wait_assign_value(t78, t77, 0, 0, 1, 0LL);
    goto LAB32;

LAB36:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB38;

LAB37:    *((unsigned int *)t9) = 1;
    goto LAB38;

LAB40:    *((unsigned int *)t12) = 1;
    goto LAB43;

LAB42:    t11 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB43;

LAB44:    t19 = (t0 + 5760);
    t20 = (t19 + 56U);
    t25 = *((char **)t20);
    t26 = (t0 + 1016);
    t27 = *((char **)t26);
    t26 = (t0 + 1152);
    t28 = *((char **)t26);
    memset(t31, 0, 8);
    xsi_vlog_unsigned_add(t31, 32, t27, 32, t28, 32);
    memset(t32, 0, 8);
    t26 = (t25 + 4);
    if (*((unsigned int *)t26) != 0)
        goto LAB48;

LAB47:    t29 = (t31 + 4);
    if (*((unsigned int *)t29) != 0)
        goto LAB48;

LAB51:    if (*((unsigned int *)t25) < *((unsigned int *)t31))
        goto LAB50;

LAB49:    *((unsigned int *)t32) = 1;

LAB50:    memset(t35, 0, 8);
    t33 = (t32 + 4);
    t37 = *((unsigned int *)t33);
    t38 = (~(t37));
    t39 = *((unsigned int *)t32);
    t40 = (t39 & t38);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t33) != 0)
        goto LAB54;

LAB55:    t44 = *((unsigned int *)t12);
    t45 = *((unsigned int *)t35);
    t46 = (t44 | t45);
    *((unsigned int *)t43) = t46;
    t36 = (t12 + 4);
    t42 = (t35 + 4);
    t47 = (t43 + 4);
    t50 = *((unsigned int *)t36);
    t51 = *((unsigned int *)t42);
    t52 = (t50 | t51);
    *((unsigned int *)t47) = t52;
    t53 = *((unsigned int *)t47);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB56;

LAB57:
LAB58:    goto LAB46;

LAB48:    t30 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB50;

LAB52:    *((unsigned int *)t35) = 1;
    goto LAB55;

LAB54:    t34 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB55;

LAB56:    t55 = *((unsigned int *)t43);
    t56 = *((unsigned int *)t47);
    *((unsigned int *)t43) = (t55 | t56);
    t48 = (t12 + 4);
    t49 = (t35 + 4);
    t59 = *((unsigned int *)t48);
    t60 = (~(t59));
    t61 = *((unsigned int *)t12);
    t62 = (t61 & t60);
    t63 = *((unsigned int *)t49);
    t64 = (~(t63));
    t65 = *((unsigned int *)t35);
    t66 = (t65 & t64);
    t67 = (~(t62));
    t68 = (~(t66));
    t69 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t69 & t67);
    t70 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t70 & t68);
    goto LAB58;

LAB59:    xsi_set_current_line(195, ng0);

LAB62:    xsi_set_current_line(196, ng0);
    t58 = ((char*)((ng1)));
    t71 = (t0 + 5280);
    xsi_vlogvar_wait_assign_value(t71, t58, 0, 0, 1, 0LL);
    goto LAB61;

LAB66:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB67;

LAB68:    xsi_set_current_line(204, ng0);

LAB71:    xsi_set_current_line(205, ng0);
    t11 = ((char*)((ng5)));
    t13 = (t0 + 4800);
    xsi_vlogvar_wait_assign_value(t13, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(207, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 4960);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(210, ng0);
    t2 = (t0 + 5600);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t6 = *((char **)t5);
    memset(t9, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t6);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t21 = (t17 ^ t18);
    t22 = (t16 | t21);
    t23 = *((unsigned int *)t5);
    t24 = *((unsigned int *)t7);
    t37 = (t23 | t24);
    t38 = (~(t37));
    t39 = (t22 & t38);
    if (t39 != 0)
        goto LAB75;

LAB72:    if (t37 != 0)
        goto LAB74;

LAB73:    *((unsigned int *)t9) = 1;

LAB75:    t10 = (t9 + 4);
    t40 = *((unsigned int *)t10);
    t41 = (~(t40));
    t44 = *((unsigned int *)t9);
    t45 = (t44 & t41);
    t46 = (t45 != 0);
    if (t46 > 0)
        goto LAB76;

LAB77:    xsi_set_current_line(225, ng0);

LAB89:    xsi_set_current_line(226, ng0);
    t2 = (t0 + 5600);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t4, 11, t5, 32);
    t6 = (t0 + 5600);
    xsi_vlogvar_wait_assign_value(t6, t9, 0, 0, 11, 0LL);

LAB78:    goto LAB70;

LAB74:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB75;

LAB76:    xsi_set_current_line(211, ng0);

LAB79:    xsi_set_current_line(212, ng0);
    t11 = ((char*)((ng6)));
    t13 = (t0 + 5600);
    xsi_vlogvar_wait_assign_value(t13, t11, 0, 0, 11, 0LL);
    xsi_set_current_line(214, ng0);
    t2 = (t0 + 5760);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 880);
    t6 = *((char **)t5);
    memset(t9, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t6);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t21 = (t17 ^ t18);
    t22 = (t16 | t21);
    t23 = *((unsigned int *)t5);
    t24 = *((unsigned int *)t7);
    t37 = (t23 | t24);
    t38 = (~(t37));
    t39 = (t22 & t38);
    if (t39 != 0)
        goto LAB83;

LAB80:    if (t37 != 0)
        goto LAB82;

LAB81:    *((unsigned int *)t9) = 1;

LAB83:    t10 = (t9 + 4);
    t40 = *((unsigned int *)t10);
    t41 = (~(t40));
    t44 = *((unsigned int *)t9);
    t45 = (t44 & t41);
    t46 = (t45 != 0);
    if (t46 > 0)
        goto LAB84;

LAB85:    xsi_set_current_line(220, ng0);

LAB88:    xsi_set_current_line(221, ng0);
    t2 = (t0 + 5760);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t4, 10, t5, 32);
    t6 = (t0 + 5760);
    xsi_vlogvar_wait_assign_value(t6, t9, 0, 0, 10, 0LL);

LAB86:    goto LAB78;

LAB82:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB83;

LAB84:    xsi_set_current_line(215, ng0);

LAB87:    xsi_set_current_line(216, ng0);
    t11 = ((char*)((ng6)));
    t13 = (t0 + 5760);
    xsi_vlogvar_wait_assign_value(t13, t11, 0, 0, 10, 0LL);
    goto LAB86;

}

static void implSig1_execute(char *t0)
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

LAB0:    t1 = (t0 + 8864U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng1)));
    t3 = (t0 + 9280);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}


extern void work_m_00000000003882840486_3162731800_init()
{
	static char *pe[] = {(void *)Initial_140_0,(void *)Always_156_1,(void *)Always_182_2,(void *)implSig1_execute};
	xsi_register_didat("work_m_00000000003882840486_3162731800", "isim/LVDS_Controller_test_isim_beh.exe.sim/work/m_00000000003882840486_3162731800.didat");
	xsi_register_executes(pe);
}
