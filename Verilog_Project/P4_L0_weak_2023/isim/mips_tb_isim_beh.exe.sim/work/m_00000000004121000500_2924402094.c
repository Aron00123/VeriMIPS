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
static const char *ng0 = "C:/Users/Aron_/Desktop/lessons/SecondYear1/CO/Verilog_Project/P4_L0_weak_2023/DM.v";
static int ng1[] = {0, 0};
static int ng2[] = {4096, 0};
static int ng3[] = {1, 0};
static const char *ng4 = "@%h: *%h <= %h";
static unsigned int ng5[] = {0U, 0U};
static unsigned int ng6[] = {1U, 0U};
static unsigned int ng7[] = {2U, 0U};
static unsigned int ng8[] = {3U, 0U};
static unsigned int ng9[] = {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U};
static int ng10[] = {2, 0};



static void Initial_35_0(char *t0)
{
    char t5[8];
    char t14[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
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
    unsigned int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    int t34;
    int t35;

LAB0:    xsi_set_current_line(35, ng0);

LAB2:    xsi_set_current_line(36, ng0);
    xsi_set_current_line(36, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2568);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 2568);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    xsi_set_current_line(36, ng0);

LAB6:    xsi_set_current_line(37, ng0);
    t12 = ((char*)((ng1)));
    t13 = (t0 + 2728);
    t16 = (t0 + 2728);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 2728);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 2568);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_generic_convert_array_indices(t14, t15, t18, t21, 2, 1, t24, 32, 1);
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(36, ng0);
    t1 = (t0 + 2568);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng3)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 2568);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB7:    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t15);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, *((unsigned int *)t15), t35, 0LL);
    goto LAB8;

}

static void Always_41_1(char *t0)
{
    char t13[8];
    char t15[8];
    char t16[8];
    char t39[8];
    char t42[8];
    char t43[8];
    char t44[8];
    char t54[8];
    char t64[8];
    char t65[8];
    char t72[8];
    char t89[8];
    char t90[8];
    char t91[8];
    char t97[8];
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
    char *t14;
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
    unsigned int t27;
    int t28;
    char *t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    int t35;
    int t36;
    unsigned int t37;
    int t38;
    unsigned int t40;
    unsigned int t41;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t73;
    char *t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    unsigned int t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    int t88;
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    char *t96;
    char *t98;
    char *t99;
    char *t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    unsigned int t104;
    char *t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;

LAB0:    t1 = (t0 + 3896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 4464);
    *((int *)t2) = 1;
    t3 = (t0 + 3928);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(41, ng0);

LAB5:    xsi_set_current_line(42, ng0);
    t4 = (t0 + 1688U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(46, ng0);

LAB16:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(77, ng0);

LAB52:
LAB19:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(42, ng0);

LAB9:    xsi_set_current_line(43, ng0);
    xsi_set_current_line(43, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2568);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);

LAB10:    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_signed_less(t13, 32, t4, 32, t5, 32);
    t11 = (t13 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB11;

LAB12:    goto LAB8;

LAB11:    xsi_set_current_line(43, ng0);

LAB13:    xsi_set_current_line(44, ng0);
    t12 = ((char*)((ng1)));
    t14 = (t0 + 2728);
    t17 = (t0 + 2728);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 2728);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = (t0 + 2568);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_generic_convert_array_indices(t15, t16, t19, t22, 2, 1, t25, 32, 1);
    t26 = (t15 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (!(t27));
    t29 = (t16 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (!(t30));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 2568);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 32);
    goto LAB10;

LAB14:    t33 = *((unsigned int *)t15);
    t34 = *((unsigned int *)t16);
    t35 = (t33 - t34);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t14, t12, 0, *((unsigned int *)t16), t36, 0LL);
    goto LAB15;

LAB17:    xsi_set_current_line(47, ng0);

LAB20:    xsi_set_current_line(48, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t11 = *((char **)t4);
    t4 = (t0 + 1368U);
    t12 = *((char **)t4);
    xsi_vlogfile_write(1, 0, 0, ng4, 4, t0, (char)118, t5, 32, (char)118, t11, 32, (char)118, t12, 32);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);

LAB21:    t2 = ((char*)((ng1)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 1, t2, 32);
    if (t28 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng3)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 1, t2, 32);
    if (t28 == 1)
        goto LAB24;

LAB25:
LAB26:    goto LAB19;

LAB22:    xsi_set_current_line(50, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t0 + 2728);
    t11 = (t0 + 2728);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t17 = (t0 + 2728);
    t18 = (t17 + 64U);
    t19 = *((char **)t18);
    t20 = (t0 + 1208U);
    t21 = *((char **)t20);
    memset(t16, 0, 8);
    t20 = (t16 + 4);
    t22 = (t21 + 4);
    t6 = *((unsigned int *)t21);
    t7 = (t6 >> 2);
    *((unsigned int *)t16) = t7;
    t8 = *((unsigned int *)t22);
    t9 = (t8 >> 2);
    *((unsigned int *)t20) = t9;
    t10 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t10 & 16777215U);
    t27 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t27 & 16777215U);
    xsi_vlog_generic_convert_array_indices(t13, t15, t14, t19, 2, 1, t16, 24, 2);
    t23 = (t13 + 4);
    t30 = *((unsigned int *)t23);
    t31 = (!(t30));
    t24 = (t15 + 4);
    t33 = *((unsigned int *)t24);
    t32 = (!(t33));
    t35 = (t31 && t32);
    if (t35 == 1)
        goto LAB27;

LAB28:    goto LAB26;

LAB24:    xsi_set_current_line(51, ng0);

LAB29:    xsi_set_current_line(52, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    memset(t13, 0, 8);
    t4 = (t13 + 4);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (t6 >> 0);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 3U);
    t27 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t27 & 3U);

LAB30:    t12 = ((char*)((ng5)));
    t31 = xsi_vlog_unsigned_case_compare(t13, 2, t12, 2);
    if (t31 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng6)));
    t28 = xsi_vlog_unsigned_case_compare(t13, 2, t2, 2);
    if (t28 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng7)));
    t28 = xsi_vlog_unsigned_case_compare(t13, 2, t2, 2);
    if (t28 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng8)));
    t28 = xsi_vlog_unsigned_case_compare(t13, 2, t2, 2);
    if (t28 == 1)
        goto LAB37;

LAB38:
LAB40:
LAB39:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    t2 = (t0 + 2728);
    t5 = (t0 + 2728);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t14 = (t0 + 2728);
    t17 = (t14 + 64U);
    t18 = *((char **)t17);
    t19 = (t0 + 1208U);
    t20 = *((char **)t19);
    memset(t39, 0, 8);
    t19 = (t39 + 4);
    t21 = (t20 + 4);
    t6 = *((unsigned int *)t20);
    t7 = (t6 >> 2);
    *((unsigned int *)t39) = t7;
    t8 = *((unsigned int *)t21);
    t9 = (t8 >> 2);
    *((unsigned int *)t19) = t9;
    t10 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t10 & 16777215U);
    t27 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t27 & 16777215U);
    xsi_vlog_generic_convert_array_indices(t15, t16, t12, t18, 2, 1, t39, 24, 2);
    t22 = (t15 + 4);
    t30 = *((unsigned int *)t22);
    t28 = (!(t30));
    t23 = (t16 + 4);
    t33 = *((unsigned int *)t23);
    t31 = (!(t33));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB50;

LAB51:
LAB41:    goto LAB26;

LAB27:    t34 = *((unsigned int *)t13);
    t37 = *((unsigned int *)t15);
    t36 = (t34 - t37);
    t38 = (t36 + 1);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, *((unsigned int *)t15), t38, 0LL);
    goto LAB28;

LAB31:    xsi_set_current_line(54, ng0);
    t14 = (t0 + 1368U);
    t17 = *((char **)t14);
    memset(t39, 0, 8);
    t14 = (t39 + 4);
    t18 = (t17 + 4);
    t30 = *((unsigned int *)t17);
    t33 = (t30 >> 0);
    *((unsigned int *)t39) = t33;
    t34 = *((unsigned int *)t18);
    t37 = (t34 >> 0);
    *((unsigned int *)t14) = t37;
    t40 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t40 & 255U);
    t41 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t41 & 255U);
    xsi_vlogtype_concat(t16, 8, 8, 1U, t39, 8);
    t19 = (t0 + 2728);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t0 + 2728);
    t23 = (t22 + 72U);
    t24 = *((char **)t23);
    t25 = (t0 + 2728);
    t26 = (t25 + 64U);
    t29 = *((char **)t26);
    t45 = (t0 + 1208U);
    t46 = *((char **)t45);
    memset(t44, 0, 8);
    t45 = (t44 + 4);
    t47 = (t46 + 4);
    t48 = *((unsigned int *)t46);
    t49 = (t48 >> 2);
    *((unsigned int *)t44) = t49;
    t50 = *((unsigned int *)t47);
    t51 = (t50 >> 2);
    *((unsigned int *)t45) = t51;
    t52 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t52 & 16777215U);
    t53 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t53 & 16777215U);
    xsi_vlog_generic_get_array_select_value(t43, 32, t21, t24, t29, 2, 1, t44, 24, 2);
    memset(t54, 0, 8);
    t55 = (t54 + 4);
    t56 = (t43 + 4);
    t57 = *((unsigned int *)t43);
    t58 = (t57 >> 8);
    *((unsigned int *)t54) = t58;
    t59 = *((unsigned int *)t56);
    t60 = (t59 >> 8);
    *((unsigned int *)t55) = t60;
    t61 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t61 & 16777215U);
    t62 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t62 & 16777215U);
    xsi_vlogtype_concat(t42, 24, 24, 1U, t54, 24);
    xsi_vlogtype_concat(t15, 32, 32, 2U, t42, 24, t16, 8);
    t63 = (t0 + 2728);
    t66 = (t0 + 2728);
    t67 = (t66 + 72U);
    t68 = *((char **)t67);
    t69 = (t0 + 2728);
    t70 = (t69 + 64U);
    t71 = *((char **)t70);
    t73 = (t0 + 1208U);
    t74 = *((char **)t73);
    memset(t72, 0, 8);
    t73 = (t72 + 4);
    t75 = (t74 + 4);
    t76 = *((unsigned int *)t74);
    t77 = (t76 >> 2);
    *((unsigned int *)t72) = t77;
    t78 = *((unsigned int *)t75);
    t79 = (t78 >> 2);
    *((unsigned int *)t73) = t79;
    t80 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t80 & 16777215U);
    t81 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t81 & 16777215U);
    xsi_vlog_generic_convert_array_indices(t64, t65, t68, t71, 2, 1, t72, 24, 2);
    t82 = (t64 + 4);
    t83 = *((unsigned int *)t82);
    t32 = (!(t83));
    t84 = (t65 + 4);
    t85 = *((unsigned int *)t84);
    t35 = (!(t85));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB42;

LAB43:    goto LAB41;

LAB33:    xsi_set_current_line(58, ng0);
    t4 = (t0 + 2728);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = (t0 + 2728);
    t14 = (t12 + 72U);
    t17 = *((char **)t14);
    t18 = (t0 + 2728);
    t19 = (t18 + 64U);
    t20 = *((char **)t19);
    t21 = (t0 + 1208U);
    t22 = *((char **)t21);
    memset(t42, 0, 8);
    t21 = (t42 + 4);
    t23 = (t22 + 4);
    t6 = *((unsigned int *)t22);
    t7 = (t6 >> 2);
    *((unsigned int *)t42) = t7;
    t8 = *((unsigned int *)t23);
    t9 = (t8 >> 2);
    *((unsigned int *)t21) = t9;
    t10 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t10 & 16777215U);
    t27 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t27 & 16777215U);
    xsi_vlog_generic_get_array_select_value(t39, 32, t11, t17, t20, 2, 1, t42, 24, 2);
    memset(t43, 0, 8);
    t24 = (t43 + 4);
    t25 = (t39 + 4);
    t30 = *((unsigned int *)t39);
    t33 = (t30 >> 0);
    *((unsigned int *)t43) = t33;
    t34 = *((unsigned int *)t25);
    t37 = (t34 >> 0);
    *((unsigned int *)t24) = t37;
    t40 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t40 & 255U);
    t41 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t41 & 255U);
    xsi_vlogtype_concat(t16, 8, 8, 1U, t43, 8);
    t26 = (t0 + 1368U);
    t29 = *((char **)t26);
    memset(t54, 0, 8);
    t26 = (t54 + 4);
    t45 = (t29 + 4);
    t48 = *((unsigned int *)t29);
    t49 = (t48 >> 8);
    *((unsigned int *)t54) = t49;
    t50 = *((unsigned int *)t45);
    t51 = (t50 >> 8);
    *((unsigned int *)t26) = t51;
    t52 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t52 & 255U);
    t53 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t53 & 255U);
    xsi_vlogtype_concat(t44, 8, 8, 1U, t54, 8);
    t46 = (t0 + 2728);
    t47 = (t46 + 56U);
    t55 = *((char **)t47);
    t56 = (t0 + 2728);
    t63 = (t56 + 72U);
    t66 = *((char **)t63);
    t67 = (t0 + 2728);
    t68 = (t67 + 64U);
    t69 = *((char **)t68);
    t70 = (t0 + 1208U);
    t71 = *((char **)t70);
    memset(t72, 0, 8);
    t70 = (t72 + 4);
    t73 = (t71 + 4);
    t57 = *((unsigned int *)t71);
    t58 = (t57 >> 2);
    *((unsigned int *)t72) = t58;
    t59 = *((unsigned int *)t73);
    t60 = (t59 >> 2);
    *((unsigned int *)t70) = t60;
    t61 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t61 & 16777215U);
    t62 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t62 & 16777215U);
    xsi_vlog_generic_get_array_select_value(t65, 32, t55, t66, t69, 2, 1, t72, 24, 2);
    memset(t89, 0, 8);
    t74 = (t89 + 4);
    t75 = (t65 + 4);
    t76 = *((unsigned int *)t65);
    t77 = (t76 >> 16);
    *((unsigned int *)t89) = t77;
    t78 = *((unsigned int *)t75);
    t79 = (t78 >> 16);
    *((unsigned int *)t74) = t79;
    t80 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t80 & 65535U);
    t81 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t81 & 65535U);
    xsi_vlogtype_concat(t64, 16, 16, 1U, t89, 16);
    xsi_vlogtype_concat(t15, 32, 32, 3U, t64, 16, t44, 8, t16, 8);
    t82 = (t0 + 2728);
    t84 = (t0 + 2728);
    t92 = (t84 + 72U);
    t93 = *((char **)t92);
    t94 = (t0 + 2728);
    t95 = (t94 + 64U);
    t96 = *((char **)t95);
    t98 = (t0 + 1208U);
    t99 = *((char **)t98);
    memset(t97, 0, 8);
    t98 = (t97 + 4);
    t100 = (t99 + 4);
    t83 = *((unsigned int *)t99);
    t85 = (t83 >> 2);
    *((unsigned int *)t97) = t85;
    t86 = *((unsigned int *)t100);
    t87 = (t86 >> 2);
    *((unsigned int *)t98) = t87;
    t101 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t101 & 16777215U);
    t102 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t102 & 16777215U);
    xsi_vlog_generic_convert_array_indices(t90, t91, t93, t96, 2, 1, t97, 24, 2);
    t103 = (t90 + 4);
    t104 = *((unsigned int *)t103);
    t31 = (!(t104));
    t105 = (t91 + 4);
    t106 = *((unsigned int *)t105);
    t32 = (!(t106));
    t35 = (t31 && t32);
    if (t35 == 1)
        goto LAB44;

LAB45:    goto LAB41;

LAB35:    xsi_set_current_line(64, ng0);
    t4 = (t0 + 2728);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = (t0 + 2728);
    t14 = (t12 + 72U);
    t17 = *((char **)t14);
    t18 = (t0 + 2728);
    t19 = (t18 + 64U);
    t20 = *((char **)t19);
    t21 = (t0 + 1208U);
    t22 = *((char **)t21);
    memset(t42, 0, 8);
    t21 = (t42 + 4);
    t23 = (t22 + 4);
    t6 = *((unsigned int *)t22);
    t7 = (t6 >> 2);
    *((unsigned int *)t42) = t7;
    t8 = *((unsigned int *)t23);
    t9 = (t8 >> 2);
    *((unsigned int *)t21) = t9;
    t10 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t10 & 16777215U);
    t27 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t27 & 16777215U);
    xsi_vlog_generic_get_array_select_value(t39, 32, t11, t17, t20, 2, 1, t42, 24, 2);
    memset(t43, 0, 8);
    t24 = (t43 + 4);
    t25 = (t39 + 4);
    t30 = *((unsigned int *)t39);
    t33 = (t30 >> 0);
    *((unsigned int *)t43) = t33;
    t34 = *((unsigned int *)t25);
    t37 = (t34 >> 0);
    *((unsigned int *)t24) = t37;
    t40 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t40 & 65535U);
    t41 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t41 & 65535U);
    xsi_vlogtype_concat(t16, 16, 16, 1U, t43, 16);
    t26 = (t0 + 1368U);
    t29 = *((char **)t26);
    memset(t54, 0, 8);
    t26 = (t54 + 4);
    t45 = (t29 + 4);
    t48 = *((unsigned int *)t29);
    t49 = (t48 >> 16);
    *((unsigned int *)t54) = t49;
    t50 = *((unsigned int *)t45);
    t51 = (t50 >> 16);
    *((unsigned int *)t26) = t51;
    t52 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t52 & 255U);
    t53 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t53 & 255U);
    xsi_vlogtype_concat(t44, 8, 8, 1U, t54, 8);
    t46 = (t0 + 2728);
    t47 = (t46 + 56U);
    t55 = *((char **)t47);
    t56 = (t0 + 2728);
    t63 = (t56 + 72U);
    t66 = *((char **)t63);
    t67 = (t0 + 2728);
    t68 = (t67 + 64U);
    t69 = *((char **)t68);
    t70 = (t0 + 1208U);
    t71 = *((char **)t70);
    memset(t72, 0, 8);
    t70 = (t72 + 4);
    t73 = (t71 + 4);
    t57 = *((unsigned int *)t71);
    t58 = (t57 >> 2);
    *((unsigned int *)t72) = t58;
    t59 = *((unsigned int *)t73);
    t60 = (t59 >> 2);
    *((unsigned int *)t70) = t60;
    t61 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t61 & 16777215U);
    t62 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t62 & 16777215U);
    xsi_vlog_generic_get_array_select_value(t65, 32, t55, t66, t69, 2, 1, t72, 24, 2);
    memset(t89, 0, 8);
    t74 = (t89 + 4);
    t75 = (t65 + 4);
    t76 = *((unsigned int *)t65);
    t77 = (t76 >> 24);
    *((unsigned int *)t89) = t77;
    t78 = *((unsigned int *)t75);
    t79 = (t78 >> 24);
    *((unsigned int *)t74) = t79;
    t80 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t80 & 255U);
    t81 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t81 & 255U);
    xsi_vlogtype_concat(t64, 8, 8, 1U, t89, 8);
    xsi_vlogtype_concat(t15, 32, 32, 3U, t64, 8, t44, 8, t16, 16);
    t82 = (t0 + 2728);
    t84 = (t0 + 2728);
    t92 = (t84 + 72U);
    t93 = *((char **)t92);
    t94 = (t0 + 2728);
    t95 = (t94 + 64U);
    t96 = *((char **)t95);
    t98 = (t0 + 1208U);
    t99 = *((char **)t98);
    memset(t97, 0, 8);
    t98 = (t97 + 4);
    t100 = (t99 + 4);
    t83 = *((unsigned int *)t99);
    t85 = (t83 >> 2);
    *((unsigned int *)t97) = t85;
    t86 = *((unsigned int *)t100);
    t87 = (t86 >> 2);
    *((unsigned int *)t98) = t87;
    t101 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t101 & 16777215U);
    t102 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t102 & 16777215U);
    xsi_vlog_generic_convert_array_indices(t90, t91, t93, t96, 2, 1, t97, 24, 2);
    t103 = (t90 + 4);
    t104 = *((unsigned int *)t103);
    t31 = (!(t104));
    t105 = (t91 + 4);
    t106 = *((unsigned int *)t105);
    t32 = (!(t106));
    t35 = (t31 && t32);
    if (t35 == 1)
        goto LAB46;

LAB47:    goto LAB41;

LAB37:    xsi_set_current_line(70, ng0);
    t4 = (t0 + 2728);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = (t0 + 2728);
    t14 = (t12 + 72U);
    t17 = *((char **)t14);
    t18 = (t0 + 2728);
    t19 = (t18 + 64U);
    t20 = *((char **)t19);
    t21 = (t0 + 1208U);
    t22 = *((char **)t21);
    memset(t42, 0, 8);
    t21 = (t42 + 4);
    t23 = (t22 + 4);
    t6 = *((unsigned int *)t22);
    t7 = (t6 >> 2);
    *((unsigned int *)t42) = t7;
    t8 = *((unsigned int *)t23);
    t9 = (t8 >> 2);
    *((unsigned int *)t21) = t9;
    t10 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t10 & 16777215U);
    t27 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t27 & 16777215U);
    xsi_vlog_generic_get_array_select_value(t39, 32, t11, t17, t20, 2, 1, t42, 24, 2);
    memset(t43, 0, 8);
    t24 = (t43 + 4);
    t25 = (t39 + 4);
    t30 = *((unsigned int *)t39);
    t33 = (t30 >> 0);
    *((unsigned int *)t43) = t33;
    t34 = *((unsigned int *)t25);
    t37 = (t34 >> 0);
    *((unsigned int *)t24) = t37;
    t40 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t40 & 16777215U);
    t41 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t41 & 16777215U);
    xsi_vlogtype_concat(t16, 24, 24, 1U, t43, 24);
    t26 = (t0 + 1368U);
    t29 = *((char **)t26);
    memset(t54, 0, 8);
    t26 = (t54 + 4);
    t45 = (t29 + 4);
    t48 = *((unsigned int *)t29);
    t49 = (t48 >> 24);
    *((unsigned int *)t54) = t49;
    t50 = *((unsigned int *)t45);
    t51 = (t50 >> 24);
    *((unsigned int *)t26) = t51;
    t52 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t52 & 255U);
    t53 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t53 & 255U);
    xsi_vlogtype_concat(t44, 8, 8, 1U, t54, 8);
    xsi_vlogtype_concat(t15, 32, 32, 2U, t44, 8, t16, 24);
    t46 = (t0 + 2728);
    t47 = (t0 + 2728);
    t55 = (t47 + 72U);
    t56 = *((char **)t55);
    t63 = (t0 + 2728);
    t66 = (t63 + 64U);
    t67 = *((char **)t66);
    t68 = (t0 + 1208U);
    t69 = *((char **)t68);
    memset(t72, 0, 8);
    t68 = (t72 + 4);
    t70 = (t69 + 4);
    t57 = *((unsigned int *)t69);
    t58 = (t57 >> 2);
    *((unsigned int *)t72) = t58;
    t59 = *((unsigned int *)t70);
    t60 = (t59 >> 2);
    *((unsigned int *)t68) = t60;
    t61 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t61 & 16777215U);
    t62 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t62 & 16777215U);
    xsi_vlog_generic_convert_array_indices(t64, t65, t56, t67, 2, 1, t72, 24, 2);
    t71 = (t64 + 4);
    t76 = *((unsigned int *)t71);
    t31 = (!(t76));
    t73 = (t65 + 4);
    t77 = *((unsigned int *)t73);
    t32 = (!(t77));
    t35 = (t31 && t32);
    if (t35 == 1)
        goto LAB48;

LAB49:    goto LAB41;

LAB42:    t86 = *((unsigned int *)t64);
    t87 = *((unsigned int *)t65);
    t38 = (t86 - t87);
    t88 = (t38 + 1);
    xsi_vlogvar_wait_assign_value(t63, t15, 0, *((unsigned int *)t65), t88, 0LL);
    goto LAB43;

LAB44:    t107 = *((unsigned int *)t90);
    t108 = *((unsigned int *)t91);
    t36 = (t107 - t108);
    t38 = (t36 + 1);
    xsi_vlogvar_wait_assign_value(t82, t15, 0, *((unsigned int *)t91), t38, 0LL);
    goto LAB45;

LAB46:    t107 = *((unsigned int *)t90);
    t108 = *((unsigned int *)t91);
    t36 = (t107 - t108);
    t38 = (t36 + 1);
    xsi_vlogvar_wait_assign_value(t82, t15, 0, *((unsigned int *)t91), t38, 0LL);
    goto LAB47;

LAB48:    t78 = *((unsigned int *)t64);
    t79 = *((unsigned int *)t65);
    t36 = (t78 - t79);
    t38 = (t36 + 1);
    xsi_vlogvar_wait_assign_value(t46, t15, 0, *((unsigned int *)t65), t38, 0LL);
    goto LAB49;

LAB50:    t34 = *((unsigned int *)t15);
    t37 = *((unsigned int *)t16);
    t35 = (t34 - t37);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t2, t4, 0, *((unsigned int *)t16), t36, 0LL);
    goto LAB51;

}

static void Cont_83_2(char *t0)
{
    char t3[200];
    char t4[8];
    char t6[8];
    char t36[200];
    char t43[8];
    char t57[200];
    char t58[8];
    char t59[8];
    char t70[8];
    char t97[200];
    char t98[8];
    char t102[8];
    char t109[8];
    char t119[8];
    char t133[200];
    char t134[8];
    char t135[8];
    char t146[8];
    char t173[200];
    char t174[8];
    char t178[8];
    char t185[8];
    char t195[8];
    char t209[200];
    char t210[8];
    char t211[8];
    char t222[8];
    char t249[200];
    char t250[8];
    char t254[8];
    char t261[8];
    char t271[8];
    char t285[200];
    char t286[8];
    char t290[8];
    char t297[8];
    char t307[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
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
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
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
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t60;
    char *t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t99;
    char *t100;
    char *t101;
    char *t103;
    char *t104;
    char *t105;
    char *t106;
    char *t107;
    char *t108;
    char *t110;
    char *t111;
    char *t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    char *t120;
    char *t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    char *t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    char *t136;
    char *t137;
    char *t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    char *t145;
    char *t147;
    char *t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    char *t161;
    char *t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    char *t168;
    char *t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    char *t175;
    char *t176;
    char *t177;
    char *t179;
    char *t180;
    char *t181;
    char *t182;
    char *t183;
    char *t184;
    char *t186;
    char *t187;
    char *t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    char *t196;
    char *t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    unsigned int t203;
    char *t204;
    unsigned int t205;
    unsigned int t206;
    unsigned int t207;
    unsigned int t208;
    char *t212;
    char *t213;
    char *t214;
    unsigned int t215;
    unsigned int t216;
    unsigned int t217;
    unsigned int t218;
    unsigned int t219;
    unsigned int t220;
    char *t221;
    char *t223;
    char *t224;
    unsigned int t225;
    unsigned int t226;
    unsigned int t227;
    unsigned int t228;
    unsigned int t229;
    unsigned int t230;
    unsigned int t231;
    unsigned int t232;
    unsigned int t233;
    unsigned int t234;
    unsigned int t235;
    unsigned int t236;
    char *t237;
    char *t238;
    unsigned int t239;
    unsigned int t240;
    unsigned int t241;
    unsigned int t242;
    unsigned int t243;
    char *t244;
    char *t245;
    unsigned int t246;
    unsigned int t247;
    unsigned int t248;
    char *t251;
    char *t252;
    char *t253;
    char *t255;
    char *t256;
    char *t257;
    char *t258;
    char *t259;
    char *t260;
    char *t262;
    char *t263;
    char *t264;
    unsigned int t265;
    unsigned int t266;
    unsigned int t267;
    unsigned int t268;
    unsigned int t269;
    unsigned int t270;
    char *t272;
    char *t273;
    unsigned int t274;
    unsigned int t275;
    unsigned int t276;
    unsigned int t277;
    unsigned int t278;
    unsigned int t279;
    char *t280;
    unsigned int t281;
    unsigned int t282;
    unsigned int t283;
    unsigned int t284;
    char *t287;
    char *t288;
    char *t289;
    char *t291;
    char *t292;
    char *t293;
    char *t294;
    char *t295;
    char *t296;
    char *t298;
    char *t299;
    char *t300;
    unsigned int t301;
    unsigned int t302;
    unsigned int t303;
    unsigned int t304;
    unsigned int t305;
    unsigned int t306;
    char *t308;
    char *t309;
    unsigned int t310;
    unsigned int t311;
    unsigned int t312;
    unsigned int t313;
    unsigned int t314;
    unsigned int t315;
    char *t316;
    char *t317;
    char *t318;
    char *t319;
    char *t320;
    char *t321;
    char *t322;

LAB0:    t1 = (t0 + 4144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 2008U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t4, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t22) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t53 = *((unsigned int *)t4);
    t54 = (~(t53));
    t55 = *((unsigned int *)t29);
    t56 = (t54 || t55);
    if (t56 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t57, 200);

LAB20:    t317 = (t0 + 4560);
    t318 = (t317 + 56U);
    t319 = *((char **)t318);
    t320 = (t319 + 56U);
    t321 = *((char **)t320);
    xsi_vlog_bit_copy(t321, 0, t3, 0, 32);
    xsi_driver_vfirst_trans(t317, 0, 31);
    t322 = (t0 + 4480);
    *((int *)t322) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t28 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB11;

LAB12:    t33 = (t0 + 2728);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t37 = (t0 + 2728);
    t38 = (t37 + 72U);
    t39 = *((char **)t38);
    t40 = (t0 + 2728);
    t41 = (t40 + 64U);
    t42 = *((char **)t41);
    t44 = (t0 + 1208U);
    t45 = *((char **)t44);
    memset(t43, 0, 8);
    t44 = (t43 + 4);
    t46 = (t45 + 4);
    t47 = *((unsigned int *)t45);
    t48 = (t47 >> 2);
    *((unsigned int *)t43) = t48;
    t49 = *((unsigned int *)t46);
    t50 = (t49 >> 2);
    *((unsigned int *)t44) = t50;
    t51 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t51 & 16777215U);
    t52 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t52 & 16777215U);
    xsi_vlog_generic_get_array_select_value(t36, 776, t35, t39, t42, 2, 1, t43, 24, 2);
    goto LAB13;

LAB14:    t60 = (t0 + 1208U);
    t61 = *((char **)t60);
    memset(t59, 0, 8);
    t60 = (t59 + 4);
    t62 = (t61 + 4);
    t63 = *((unsigned int *)t61);
    t64 = (t63 >> 0);
    *((unsigned int *)t59) = t64;
    t65 = *((unsigned int *)t62);
    t66 = (t65 >> 0);
    *((unsigned int *)t60) = t66;
    t67 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t67 & 3U);
    t68 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t68 & 3U);
    t69 = ((char*)((ng1)));
    memset(t70, 0, 8);
    t71 = (t59 + 4);
    t72 = (t69 + 4);
    t73 = *((unsigned int *)t59);
    t74 = *((unsigned int *)t69);
    t75 = (t73 ^ t74);
    t76 = *((unsigned int *)t71);
    t77 = *((unsigned int *)t72);
    t78 = (t76 ^ t77);
    t79 = (t75 | t78);
    t80 = *((unsigned int *)t71);
    t81 = *((unsigned int *)t72);
    t82 = (t80 | t81);
    t83 = (~(t82));
    t84 = (t79 & t83);
    if (t84 != 0)
        goto LAB24;

LAB21:    if (t82 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t70) = 1;

LAB24:    memset(t58, 0, 8);
    t86 = (t70 + 4);
    t87 = *((unsigned int *)t86);
    t88 = (~(t87));
    t89 = *((unsigned int *)t70);
    t90 = (t89 & t88);
    t91 = (t90 & 1U);
    if (t91 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t86) != 0)
        goto LAB27;

LAB28:    t93 = (t58 + 4);
    t94 = *((unsigned int *)t58);
    t95 = *((unsigned int *)t93);
    t96 = (t94 || t95);
    if (t96 > 0)
        goto LAB29;

LAB30:    t129 = *((unsigned int *)t58);
    t130 = (~(t129));
    t131 = *((unsigned int *)t93);
    t132 = (t130 || t131);
    if (t132 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t93) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t58) > 0)
        goto LAB35;

LAB36:    memcpy(t57, t133, 200);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 776, t36, 776, t57, 776);
    goto LAB20;

LAB18:    memcpy(t3, t36, 200);
    goto LAB20;

LAB23:    t85 = (t70 + 4);
    *((unsigned int *)t70) = 1;
    *((unsigned int *)t85) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t58) = 1;
    goto LAB28;

LAB27:    t92 = (t58 + 4);
    *((unsigned int *)t58) = 1;
    *((unsigned int *)t92) = 1;
    goto LAB28;

LAB29:    t99 = (t0 + 2728);
    t100 = (t99 + 56U);
    t101 = *((char **)t100);
    t103 = (t0 + 2728);
    t104 = (t103 + 72U);
    t105 = *((char **)t104);
    t106 = (t0 + 2728);
    t107 = (t106 + 64U);
    t108 = *((char **)t107);
    t110 = (t0 + 1208U);
    t111 = *((char **)t110);
    memset(t109, 0, 8);
    t110 = (t109 + 4);
    t112 = (t111 + 4);
    t113 = *((unsigned int *)t111);
    t114 = (t113 >> 2);
    *((unsigned int *)t109) = t114;
    t115 = *((unsigned int *)t112);
    t116 = (t115 >> 2);
    *((unsigned int *)t110) = t116;
    t117 = *((unsigned int *)t109);
    *((unsigned int *)t109) = (t117 & 16777215U);
    t118 = *((unsigned int *)t110);
    *((unsigned int *)t110) = (t118 & 16777215U);
    xsi_vlog_generic_get_array_select_value(t102, 32, t101, t105, t108, 2, 1, t109, 24, 2);
    memset(t119, 0, 8);
    t120 = (t119 + 4);
    t121 = (t102 + 4);
    t122 = *((unsigned int *)t102);
    t123 = (t122 >> 0);
    *((unsigned int *)t119) = t123;
    t124 = *((unsigned int *)t121);
    t125 = (t124 >> 0);
    *((unsigned int *)t120) = t125;
    t126 = *((unsigned int *)t119);
    *((unsigned int *)t119) = (t126 & 255U);
    t127 = *((unsigned int *)t120);
    *((unsigned int *)t120) = (t127 & 255U);
    xsi_vlogtype_concat(t98, 8, 8, 1U, t119, 8);
    t128 = ((char*)((ng9)));
    xsi_vlogtype_concat(t97, 776, 776, 2U, t128, 768, t98, 8);
    goto LAB30;

LAB31:    t136 = (t0 + 1208U);
    t137 = *((char **)t136);
    memset(t135, 0, 8);
    t136 = (t135 + 4);
    t138 = (t137 + 4);
    t139 = *((unsigned int *)t137);
    t140 = (t139 >> 0);
    *((unsigned int *)t135) = t140;
    t141 = *((unsigned int *)t138);
    t142 = (t141 >> 0);
    *((unsigned int *)t136) = t142;
    t143 = *((unsigned int *)t135);
    *((unsigned int *)t135) = (t143 & 3U);
    t144 = *((unsigned int *)t136);
    *((unsigned int *)t136) = (t144 & 3U);
    t145 = ((char*)((ng3)));
    memset(t146, 0, 8);
    t147 = (t135 + 4);
    t148 = (t145 + 4);
    t149 = *((unsigned int *)t135);
    t150 = *((unsigned int *)t145);
    t151 = (t149 ^ t150);
    t152 = *((unsigned int *)t147);
    t153 = *((unsigned int *)t148);
    t154 = (t152 ^ t153);
    t155 = (t151 | t154);
    t156 = *((unsigned int *)t147);
    t157 = *((unsigned int *)t148);
    t158 = (t156 | t157);
    t159 = (~(t158));
    t160 = (t155 & t159);
    if (t160 != 0)
        goto LAB41;

LAB38:    if (t158 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t146) = 1;

LAB41:    memset(t134, 0, 8);
    t162 = (t146 + 4);
    t163 = *((unsigned int *)t162);
    t164 = (~(t163));
    t165 = *((unsigned int *)t146);
    t166 = (t165 & t164);
    t167 = (t166 & 1U);
    if (t167 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t162) != 0)
        goto LAB44;

LAB45:    t169 = (t134 + 4);
    t170 = *((unsigned int *)t134);
    t171 = *((unsigned int *)t169);
    t172 = (t170 || t171);
    if (t172 > 0)
        goto LAB46;

LAB47:    t205 = *((unsigned int *)t134);
    t206 = (~(t205));
    t207 = *((unsigned int *)t169);
    t208 = (t206 || t207);
    if (t208 > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t169) > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t134) > 0)
        goto LAB52;

LAB53:    memcpy(t133, t209, 200);

LAB54:    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t57, 776, t97, 776, t133, 776);
    goto LAB37;

LAB35:    memcpy(t57, t97, 200);
    goto LAB37;

LAB40:    t161 = (t146 + 4);
    *((unsigned int *)t146) = 1;
    *((unsigned int *)t161) = 1;
    goto LAB41;

LAB42:    *((unsigned int *)t134) = 1;
    goto LAB45;

LAB44:    t168 = (t134 + 4);
    *((unsigned int *)t134) = 1;
    *((unsigned int *)t168) = 1;
    goto LAB45;

LAB46:    t175 = (t0 + 2728);
    t176 = (t175 + 56U);
    t177 = *((char **)t176);
    t179 = (t0 + 2728);
    t180 = (t179 + 72U);
    t181 = *((char **)t180);
    t182 = (t0 + 2728);
    t183 = (t182 + 64U);
    t184 = *((char **)t183);
    t186 = (t0 + 1208U);
    t187 = *((char **)t186);
    memset(t185, 0, 8);
    t186 = (t185 + 4);
    t188 = (t187 + 4);
    t189 = *((unsigned int *)t187);
    t190 = (t189 >> 2);
    *((unsigned int *)t185) = t190;
    t191 = *((unsigned int *)t188);
    t192 = (t191 >> 2);
    *((unsigned int *)t186) = t192;
    t193 = *((unsigned int *)t185);
    *((unsigned int *)t185) = (t193 & 16777215U);
    t194 = *((unsigned int *)t186);
    *((unsigned int *)t186) = (t194 & 16777215U);
    xsi_vlog_generic_get_array_select_value(t178, 32, t177, t181, t184, 2, 1, t185, 24, 2);
    memset(t195, 0, 8);
    t196 = (t195 + 4);
    t197 = (t178 + 4);
    t198 = *((unsigned int *)t178);
    t199 = (t198 >> 8);
    *((unsigned int *)t195) = t199;
    t200 = *((unsigned int *)t197);
    t201 = (t200 >> 8);
    *((unsigned int *)t196) = t201;
    t202 = *((unsigned int *)t195);
    *((unsigned int *)t195) = (t202 & 255U);
    t203 = *((unsigned int *)t196);
    *((unsigned int *)t196) = (t203 & 255U);
    xsi_vlogtype_concat(t174, 8, 8, 1U, t195, 8);
    t204 = ((char*)((ng9)));
    xsi_vlogtype_concat(t173, 776, 776, 2U, t204, 768, t174, 8);
    goto LAB47;

LAB48:    t212 = (t0 + 1208U);
    t213 = *((char **)t212);
    memset(t211, 0, 8);
    t212 = (t211 + 4);
    t214 = (t213 + 4);
    t215 = *((unsigned int *)t213);
    t216 = (t215 >> 0);
    *((unsigned int *)t211) = t216;
    t217 = *((unsigned int *)t214);
    t218 = (t217 >> 0);
    *((unsigned int *)t212) = t218;
    t219 = *((unsigned int *)t211);
    *((unsigned int *)t211) = (t219 & 3U);
    t220 = *((unsigned int *)t212);
    *((unsigned int *)t212) = (t220 & 3U);
    t221 = ((char*)((ng10)));
    memset(t222, 0, 8);
    t223 = (t211 + 4);
    t224 = (t221 + 4);
    t225 = *((unsigned int *)t211);
    t226 = *((unsigned int *)t221);
    t227 = (t225 ^ t226);
    t228 = *((unsigned int *)t223);
    t229 = *((unsigned int *)t224);
    t230 = (t228 ^ t229);
    t231 = (t227 | t230);
    t232 = *((unsigned int *)t223);
    t233 = *((unsigned int *)t224);
    t234 = (t232 | t233);
    t235 = (~(t234));
    t236 = (t231 & t235);
    if (t236 != 0)
        goto LAB58;

LAB55:    if (t234 != 0)
        goto LAB57;

LAB56:    *((unsigned int *)t222) = 1;

LAB58:    memset(t210, 0, 8);
    t238 = (t222 + 4);
    t239 = *((unsigned int *)t238);
    t240 = (~(t239));
    t241 = *((unsigned int *)t222);
    t242 = (t241 & t240);
    t243 = (t242 & 1U);
    if (t243 != 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t238) != 0)
        goto LAB61;

LAB62:    t245 = (t210 + 4);
    t246 = *((unsigned int *)t210);
    t247 = *((unsigned int *)t245);
    t248 = (t246 || t247);
    if (t248 > 0)
        goto LAB63;

LAB64:    t281 = *((unsigned int *)t210);
    t282 = (~(t281));
    t283 = *((unsigned int *)t245);
    t284 = (t282 || t283);
    if (t284 > 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t245) > 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t210) > 0)
        goto LAB69;

LAB70:    memcpy(t209, t285, 200);

LAB71:    goto LAB49;

LAB50:    xsi_vlog_unsigned_bit_combine(t133, 776, t173, 776, t209, 776);
    goto LAB54;

LAB52:    memcpy(t133, t173, 200);
    goto LAB54;

LAB57:    t237 = (t222 + 4);
    *((unsigned int *)t222) = 1;
    *((unsigned int *)t237) = 1;
    goto LAB58;

LAB59:    *((unsigned int *)t210) = 1;
    goto LAB62;

LAB61:    t244 = (t210 + 4);
    *((unsigned int *)t210) = 1;
    *((unsigned int *)t244) = 1;
    goto LAB62;

LAB63:    t251 = (t0 + 2728);
    t252 = (t251 + 56U);
    t253 = *((char **)t252);
    t255 = (t0 + 2728);
    t256 = (t255 + 72U);
    t257 = *((char **)t256);
    t258 = (t0 + 2728);
    t259 = (t258 + 64U);
    t260 = *((char **)t259);
    t262 = (t0 + 1208U);
    t263 = *((char **)t262);
    memset(t261, 0, 8);
    t262 = (t261 + 4);
    t264 = (t263 + 4);
    t265 = *((unsigned int *)t263);
    t266 = (t265 >> 2);
    *((unsigned int *)t261) = t266;
    t267 = *((unsigned int *)t264);
    t268 = (t267 >> 2);
    *((unsigned int *)t262) = t268;
    t269 = *((unsigned int *)t261);
    *((unsigned int *)t261) = (t269 & 16777215U);
    t270 = *((unsigned int *)t262);
    *((unsigned int *)t262) = (t270 & 16777215U);
    xsi_vlog_generic_get_array_select_value(t254, 32, t253, t257, t260, 2, 1, t261, 24, 2);
    memset(t271, 0, 8);
    t272 = (t271 + 4);
    t273 = (t254 + 4);
    t274 = *((unsigned int *)t254);
    t275 = (t274 >> 16);
    *((unsigned int *)t271) = t275;
    t276 = *((unsigned int *)t273);
    t277 = (t276 >> 16);
    *((unsigned int *)t272) = t277;
    t278 = *((unsigned int *)t271);
    *((unsigned int *)t271) = (t278 & 255U);
    t279 = *((unsigned int *)t272);
    *((unsigned int *)t272) = (t279 & 255U);
    xsi_vlogtype_concat(t250, 8, 8, 1U, t271, 8);
    t280 = ((char*)((ng9)));
    xsi_vlogtype_concat(t249, 776, 776, 2U, t280, 768, t250, 8);
    goto LAB64;

LAB65:    t287 = (t0 + 2728);
    t288 = (t287 + 56U);
    t289 = *((char **)t288);
    t291 = (t0 + 2728);
    t292 = (t291 + 72U);
    t293 = *((char **)t292);
    t294 = (t0 + 2728);
    t295 = (t294 + 64U);
    t296 = *((char **)t295);
    t298 = (t0 + 1208U);
    t299 = *((char **)t298);
    memset(t297, 0, 8);
    t298 = (t297 + 4);
    t300 = (t299 + 4);
    t301 = *((unsigned int *)t299);
    t302 = (t301 >> 2);
    *((unsigned int *)t297) = t302;
    t303 = *((unsigned int *)t300);
    t304 = (t303 >> 2);
    *((unsigned int *)t298) = t304;
    t305 = *((unsigned int *)t297);
    *((unsigned int *)t297) = (t305 & 16777215U);
    t306 = *((unsigned int *)t298);
    *((unsigned int *)t298) = (t306 & 16777215U);
    xsi_vlog_generic_get_array_select_value(t290, 32, t289, t293, t296, 2, 1, t297, 24, 2);
    memset(t307, 0, 8);
    t308 = (t307 + 4);
    t309 = (t290 + 4);
    t310 = *((unsigned int *)t290);
    t311 = (t310 >> 24);
    *((unsigned int *)t307) = t311;
    t312 = *((unsigned int *)t309);
    t313 = (t312 >> 24);
    *((unsigned int *)t308) = t313;
    t314 = *((unsigned int *)t307);
    *((unsigned int *)t307) = (t314 & 255U);
    t315 = *((unsigned int *)t308);
    *((unsigned int *)t308) = (t315 & 255U);
    xsi_vlogtype_concat(t286, 8, 8, 1U, t307, 8);
    t316 = ((char*)((ng9)));
    xsi_vlogtype_concat(t285, 776, 776, 2U, t316, 768, t286, 8);
    goto LAB66;

LAB67:    xsi_vlog_unsigned_bit_combine(t209, 776, t249, 776, t285, 776);
    goto LAB71;

LAB69:    memcpy(t209, t249, 200);
    goto LAB71;

}


extern void work_m_00000000004121000500_2924402094_init()
{
	static char *pe[] = {(void *)Initial_35_0,(void *)Always_41_1,(void *)Cont_83_2};
	xsi_register_didat("work_m_00000000004121000500_2924402094", "isim/mips_tb_isim_beh.exe.sim/work/m_00000000004121000500_2924402094.didat");
	xsi_register_executes(pe);
}
