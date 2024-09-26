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
static int ng0[] = {0, 0};
static int ng1[] = {4096, 0};
static int ng2[] = {1, 0};
static const char *ng3 = "%d@%h: *%h <= %h";
static unsigned int ng4[] = {0U, 0U};
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {3U, 0U};
static int ng8[] = {2, 0};



static void Initial_17_0(char *t0)
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

LAB0:
LAB2:    t1 = ((char*)((ng0)));
    t2 = (t0 + 2568);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 2568);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng1)));
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
LAB4:
LAB6:    t12 = ((char*)((ng0)));
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

LAB8:    t1 = (t0 + 2568);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng2)));
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

static void Always_23_1(char *t0)
{
    char t13[8];
    char t15[8];
    char t16[8];
    char t38[16];
    char t39[8];
    char t42[8];
    char t43[8];
    char t44[8];
    char t52[8];
    char t62[8];
    char t63[8];
    char t70[8];
    char t87[8];
    char t88[8];
    char t89[8];
    char t96[8];
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
    unsigned int t40;
    unsigned int t41;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    unsigned int t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    int t86;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    char *t97;
    char *t98;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    unsigned int t103;
    char *t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;

LAB0:    t1 = (t0 + 3896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 4464);
    *((int *)t2) = 1;
    t3 = (t0 + 3928);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB16:    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB17;

LAB18:
LAB19:
LAB8:    goto LAB2;

LAB6:
LAB9:    t11 = ((char*)((ng0)));
    t12 = (t0 + 2568);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);

LAB10:    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
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

LAB11:
LAB13:    t12 = ((char*)((ng0)));
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

LAB15:    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
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

LAB17:
LAB20:    t4 = (t0 + 2008U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t27 = *((unsigned int *)t4);
    t30 = (~(t27));
    t33 = *((unsigned int *)t5);
    t34 = (t33 & t30);
    t37 = (t34 != 0);
    if (t37 > 0)
        goto LAB21;

LAB22:
LAB47:    t2 = xsi_vlog_time(t38, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = (t0 + 1688U);
    t5 = *((char **)t3);
    t3 = (t0 + 1848U);
    t11 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng3, 5, t0, (char)118, t38, 64, (char)118, t4, 32, (char)118, t5, 32, (char)118, t11, 32);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 2728);
    t4 = (t0 + 2728);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 2728);
    t14 = (t12 + 64U);
    t17 = *((char **)t14);
    t18 = (t0 + 1688U);
    t19 = *((char **)t18);
    memset(t39, 0, 8);
    t18 = (t39 + 4);
    t20 = (t19 + 4);
    t6 = *((unsigned int *)t19);
    t7 = (t6 >> 2);
    *((unsigned int *)t39) = t7;
    t8 = *((unsigned int *)t20);
    t9 = (t8 >> 2);
    *((unsigned int *)t18) = t9;
    t10 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t10 & 16777215U);
    t27 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t27 & 16777215U);
    xsi_vlog_generic_convert_array_indices(t15, t16, t11, t17, 2, 1, t39, 24, 2);
    t21 = (t15 + 4);
    t30 = *((unsigned int *)t21);
    t28 = (!(t30));
    t22 = (t16 + 4);
    t33 = *((unsigned int *)t22);
    t31 = (!(t33));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB48;

LAB49:
LAB23:    goto LAB19;

LAB21:
LAB24:    t11 = xsi_vlog_time(t38, 1000.0000000000000, 1000.0000000000000);
    t12 = (t0 + 1368U);
    t14 = *((char **)t12);
    t12 = (t0 + 1688U);
    t17 = *((char **)t12);
    t12 = (t0 + 1848U);
    t18 = *((char **)t12);
    xsi_vlogfile_write(1, 0, 0, ng3, 5, t0, (char)118, t38, 64, (char)118, t14, 32, (char)118, t17, 32, (char)118, t18, 32);
    t2 = (t0 + 1688U);
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
    *((unsigned int *)t13) = (t10 & 3U);
    t27 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t27 & 3U);

LAB25:    t5 = ((char*)((ng4)));
    t28 = xsi_vlog_unsigned_case_compare(t13, 2, t5, 2);
    if (t28 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng5)));
    t28 = xsi_vlog_unsigned_case_compare(t13, 2, t2, 2);
    if (t28 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng6)));
    t28 = xsi_vlog_unsigned_case_compare(t13, 2, t2, 2);
    if (t28 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng7)));
    t28 = xsi_vlog_unsigned_case_compare(t13, 2, t2, 2);
    if (t28 == 1)
        goto LAB32;

LAB33:
LAB35:
LAB34:    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 2728);
    t4 = (t0 + 2728);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 2728);
    t14 = (t12 + 64U);
    t17 = *((char **)t14);
    t18 = (t0 + 1688U);
    t19 = *((char **)t18);
    memset(t39, 0, 8);
    t18 = (t39 + 4);
    t20 = (t19 + 4);
    t6 = *((unsigned int *)t19);
    t7 = (t6 >> 2);
    *((unsigned int *)t39) = t7;
    t8 = *((unsigned int *)t20);
    t9 = (t8 >> 2);
    *((unsigned int *)t18) = t9;
    t10 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t10 & 16777215U);
    t27 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t27 & 16777215U);
    xsi_vlog_generic_convert_array_indices(t15, t16, t11, t17, 2, 1, t39, 24, 2);
    t21 = (t15 + 4);
    t30 = *((unsigned int *)t21);
    t28 = (!(t30));
    t22 = (t16 + 4);
    t33 = *((unsigned int *)t22);
    t31 = (!(t33));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB45;

LAB46:
LAB36:    goto LAB23;

LAB26:    t11 = (t0 + 1848U);
    t12 = *((char **)t11);
    memset(t39, 0, 8);
    t11 = (t39 + 4);
    t14 = (t12 + 4);
    t30 = *((unsigned int *)t12);
    t33 = (t30 >> 0);
    *((unsigned int *)t39) = t33;
    t34 = *((unsigned int *)t14);
    t37 = (t34 >> 0);
    *((unsigned int *)t11) = t37;
    t40 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t40 & 255U);
    t41 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t41 & 255U);
    xsi_vlogtype_concat(t16, 8, 8, 1U, t39, 8);
    t17 = (t0 + 2728);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t0 + 2728);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t23 = (t0 + 2728);
    t24 = (t23 + 64U);
    t25 = *((char **)t24);
    t26 = (t0 + 1688U);
    t29 = *((char **)t26);
    memset(t44, 0, 8);
    t26 = (t44 + 4);
    t45 = (t29 + 4);
    t46 = *((unsigned int *)t29);
    t47 = (t46 >> 2);
    *((unsigned int *)t44) = t47;
    t48 = *((unsigned int *)t45);
    t49 = (t48 >> 2);
    *((unsigned int *)t26) = t49;
    t50 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t50 & 16777215U);
    t51 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t51 & 16777215U);
    xsi_vlog_generic_get_array_select_value(t43, 32, t19, t22, t25, 2, 1, t44, 24, 2);
    memset(t52, 0, 8);
    t53 = (t52 + 4);
    t54 = (t43 + 4);
    t55 = *((unsigned int *)t43);
    t56 = (t55 >> 8);
    *((unsigned int *)t52) = t56;
    t57 = *((unsigned int *)t54);
    t58 = (t57 >> 8);
    *((unsigned int *)t53) = t58;
    t59 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t59 & 16777215U);
    t60 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t60 & 16777215U);
    xsi_vlogtype_concat(t42, 24, 24, 1U, t52, 24);
    xsi_vlogtype_concat(t15, 32, 32, 2U, t42, 24, t16, 8);
    t61 = (t0 + 2728);
    t64 = (t0 + 2728);
    t65 = (t64 + 72U);
    t66 = *((char **)t65);
    t67 = (t0 + 2728);
    t68 = (t67 + 64U);
    t69 = *((char **)t68);
    t71 = (t0 + 1688U);
    t72 = *((char **)t71);
    memset(t70, 0, 8);
    t71 = (t70 + 4);
    t73 = (t72 + 4);
    t74 = *((unsigned int *)t72);
    t75 = (t74 >> 2);
    *((unsigned int *)t70) = t75;
    t76 = *((unsigned int *)t73);
    t77 = (t76 >> 2);
    *((unsigned int *)t71) = t77;
    t78 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t78 & 16777215U);
    t79 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t79 & 16777215U);
    xsi_vlog_generic_convert_array_indices(t62, t63, t66, t69, 2, 1, t70, 24, 2);
    t80 = (t62 + 4);
    t81 = *((unsigned int *)t80);
    t31 = (!(t81));
    t82 = (t63 + 4);
    t83 = *((unsigned int *)t82);
    t32 = (!(t83));
    t35 = (t31 && t32);
    if (t35 == 1)
        goto LAB37;

LAB38:    goto LAB36;

LAB28:    t3 = (t0 + 2728);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t11 = (t0 + 2728);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t17 = (t0 + 2728);
    t18 = (t17 + 64U);
    t19 = *((char **)t18);
    t20 = (t0 + 1688U);
    t21 = *((char **)t20);
    memset(t42, 0, 8);
    t20 = (t42 + 4);
    t22 = (t21 + 4);
    t6 = *((unsigned int *)t21);
    t7 = (t6 >> 2);
    *((unsigned int *)t42) = t7;
    t8 = *((unsigned int *)t22);
    t9 = (t8 >> 2);
    *((unsigned int *)t20) = t9;
    t10 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t10 & 16777215U);
    t27 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t27 & 16777215U);
    xsi_vlog_generic_get_array_select_value(t39, 32, t5, t14, t19, 2, 1, t42, 24, 2);
    memset(t43, 0, 8);
    t23 = (t43 + 4);
    t24 = (t39 + 4);
    t30 = *((unsigned int *)t39);
    t33 = (t30 >> 0);
    *((unsigned int *)t43) = t33;
    t34 = *((unsigned int *)t24);
    t37 = (t34 >> 0);
    *((unsigned int *)t23) = t37;
    t40 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t40 & 255U);
    t41 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t41 & 255U);
    xsi_vlogtype_concat(t16, 8, 8, 1U, t43, 8);
    t25 = (t0 + 1848U);
    t26 = *((char **)t25);
    memset(t52, 0, 8);
    t25 = (t52 + 4);
    t29 = (t26 + 4);
    t46 = *((unsigned int *)t26);
    t47 = (t46 >> 8);
    *((unsigned int *)t52) = t47;
    t48 = *((unsigned int *)t29);
    t49 = (t48 >> 8);
    *((unsigned int *)t25) = t49;
    t50 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t50 & 255U);
    t51 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t51 & 255U);
    xsi_vlogtype_concat(t44, 8, 8, 1U, t52, 8);
    t45 = (t0 + 2728);
    t53 = (t45 + 56U);
    t54 = *((char **)t53);
    t61 = (t0 + 2728);
    t64 = (t61 + 72U);
    t65 = *((char **)t64);
    t66 = (t0 + 2728);
    t67 = (t66 + 64U);
    t68 = *((char **)t67);
    t69 = (t0 + 1688U);
    t71 = *((char **)t69);
    memset(t70, 0, 8);
    t69 = (t70 + 4);
    t72 = (t71 + 4);
    t55 = *((unsigned int *)t71);
    t56 = (t55 >> 2);
    *((unsigned int *)t70) = t56;
    t57 = *((unsigned int *)t72);
    t58 = (t57 >> 2);
    *((unsigned int *)t69) = t58;
    t59 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t59 & 16777215U);
    t60 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t60 & 16777215U);
    xsi_vlog_generic_get_array_select_value(t63, 32, t54, t65, t68, 2, 1, t70, 24, 2);
    memset(t87, 0, 8);
    t73 = (t87 + 4);
    t80 = (t63 + 4);
    t74 = *((unsigned int *)t63);
    t75 = (t74 >> 16);
    *((unsigned int *)t87) = t75;
    t76 = *((unsigned int *)t80);
    t77 = (t76 >> 16);
    *((unsigned int *)t73) = t77;
    t78 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t78 & 65535U);
    t79 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t79 & 65535U);
    xsi_vlogtype_concat(t62, 16, 16, 1U, t87, 16);
    xsi_vlogtype_concat(t15, 32, 32, 3U, t62, 16, t44, 8, t16, 8);
    t82 = (t0 + 2728);
    t90 = (t0 + 2728);
    t91 = (t90 + 72U);
    t92 = *((char **)t91);
    t93 = (t0 + 2728);
    t94 = (t93 + 64U);
    t95 = *((char **)t94);
    t97 = (t0 + 1688U);
    t98 = *((char **)t97);
    memset(t96, 0, 8);
    t97 = (t96 + 4);
    t99 = (t98 + 4);
    t81 = *((unsigned int *)t98);
    t83 = (t81 >> 2);
    *((unsigned int *)t96) = t83;
    t84 = *((unsigned int *)t99);
    t85 = (t84 >> 2);
    *((unsigned int *)t97) = t85;
    t100 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t100 & 16777215U);
    t101 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t101 & 16777215U);
    xsi_vlog_generic_convert_array_indices(t88, t89, t92, t95, 2, 1, t96, 24, 2);
    t102 = (t88 + 4);
    t103 = *((unsigned int *)t102);
    t31 = (!(t103));
    t104 = (t89 + 4);
    t105 = *((unsigned int *)t104);
    t32 = (!(t105));
    t35 = (t31 && t32);
    if (t35 == 1)
        goto LAB39;

LAB40:    goto LAB36;

LAB30:    t3 = (t0 + 2728);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t11 = (t0 + 2728);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t17 = (t0 + 2728);
    t18 = (t17 + 64U);
    t19 = *((char **)t18);
    t20 = (t0 + 1688U);
    t21 = *((char **)t20);
    memset(t42, 0, 8);
    t20 = (t42 + 4);
    t22 = (t21 + 4);
    t6 = *((unsigned int *)t21);
    t7 = (t6 >> 2);
    *((unsigned int *)t42) = t7;
    t8 = *((unsigned int *)t22);
    t9 = (t8 >> 2);
    *((unsigned int *)t20) = t9;
    t10 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t10 & 16777215U);
    t27 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t27 & 16777215U);
    xsi_vlog_generic_get_array_select_value(t39, 32, t5, t14, t19, 2, 1, t42, 24, 2);
    memset(t43, 0, 8);
    t23 = (t43 + 4);
    t24 = (t39 + 4);
    t30 = *((unsigned int *)t39);
    t33 = (t30 >> 0);
    *((unsigned int *)t43) = t33;
    t34 = *((unsigned int *)t24);
    t37 = (t34 >> 0);
    *((unsigned int *)t23) = t37;
    t40 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t40 & 65535U);
    t41 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t41 & 65535U);
    xsi_vlogtype_concat(t16, 16, 16, 1U, t43, 16);
    t25 = (t0 + 1848U);
    t26 = *((char **)t25);
    memset(t52, 0, 8);
    t25 = (t52 + 4);
    t29 = (t26 + 4);
    t46 = *((unsigned int *)t26);
    t47 = (t46 >> 16);
    *((unsigned int *)t52) = t47;
    t48 = *((unsigned int *)t29);
    t49 = (t48 >> 16);
    *((unsigned int *)t25) = t49;
    t50 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t50 & 255U);
    t51 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t51 & 255U);
    xsi_vlogtype_concat(t44, 8, 8, 1U, t52, 8);
    t45 = (t0 + 2728);
    t53 = (t45 + 56U);
    t54 = *((char **)t53);
    t61 = (t0 + 2728);
    t64 = (t61 + 72U);
    t65 = *((char **)t64);
    t66 = (t0 + 2728);
    t67 = (t66 + 64U);
    t68 = *((char **)t67);
    t69 = (t0 + 1688U);
    t71 = *((char **)t69);
    memset(t70, 0, 8);
    t69 = (t70 + 4);
    t72 = (t71 + 4);
    t55 = *((unsigned int *)t71);
    t56 = (t55 >> 2);
    *((unsigned int *)t70) = t56;
    t57 = *((unsigned int *)t72);
    t58 = (t57 >> 2);
    *((unsigned int *)t69) = t58;
    t59 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t59 & 16777215U);
    t60 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t60 & 16777215U);
    xsi_vlog_generic_get_array_select_value(t63, 32, t54, t65, t68, 2, 1, t70, 24, 2);
    memset(t87, 0, 8);
    t73 = (t87 + 4);
    t80 = (t63 + 4);
    t74 = *((unsigned int *)t63);
    t75 = (t74 >> 24);
    *((unsigned int *)t87) = t75;
    t76 = *((unsigned int *)t80);
    t77 = (t76 >> 24);
    *((unsigned int *)t73) = t77;
    t78 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t78 & 255U);
    t79 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t79 & 255U);
    xsi_vlogtype_concat(t62, 8, 8, 1U, t87, 8);
    xsi_vlogtype_concat(t15, 32, 32, 3U, t62, 8, t44, 8, t16, 16);
    t82 = (t0 + 2728);
    t90 = (t0 + 2728);
    t91 = (t90 + 72U);
    t92 = *((char **)t91);
    t93 = (t0 + 2728);
    t94 = (t93 + 64U);
    t95 = *((char **)t94);
    t97 = (t0 + 1688U);
    t98 = *((char **)t97);
    memset(t96, 0, 8);
    t97 = (t96 + 4);
    t99 = (t98 + 4);
    t81 = *((unsigned int *)t98);
    t83 = (t81 >> 2);
    *((unsigned int *)t96) = t83;
    t84 = *((unsigned int *)t99);
    t85 = (t84 >> 2);
    *((unsigned int *)t97) = t85;
    t100 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t100 & 16777215U);
    t101 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t101 & 16777215U);
    xsi_vlog_generic_convert_array_indices(t88, t89, t92, t95, 2, 1, t96, 24, 2);
    t102 = (t88 + 4);
    t103 = *((unsigned int *)t102);
    t31 = (!(t103));
    t104 = (t89 + 4);
    t105 = *((unsigned int *)t104);
    t32 = (!(t105));
    t35 = (t31 && t32);
    if (t35 == 1)
        goto LAB41;

LAB42:    goto LAB36;

LAB32:    t3 = (t0 + 2728);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t11 = (t0 + 2728);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t17 = (t0 + 2728);
    t18 = (t17 + 64U);
    t19 = *((char **)t18);
    t20 = (t0 + 1688U);
    t21 = *((char **)t20);
    memset(t42, 0, 8);
    t20 = (t42 + 4);
    t22 = (t21 + 4);
    t6 = *((unsigned int *)t21);
    t7 = (t6 >> 2);
    *((unsigned int *)t42) = t7;
    t8 = *((unsigned int *)t22);
    t9 = (t8 >> 2);
    *((unsigned int *)t20) = t9;
    t10 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t10 & 16777215U);
    t27 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t27 & 16777215U);
    xsi_vlog_generic_get_array_select_value(t39, 32, t5, t14, t19, 2, 1, t42, 24, 2);
    memset(t43, 0, 8);
    t23 = (t43 + 4);
    t24 = (t39 + 4);
    t30 = *((unsigned int *)t39);
    t33 = (t30 >> 0);
    *((unsigned int *)t43) = t33;
    t34 = *((unsigned int *)t24);
    t37 = (t34 >> 0);
    *((unsigned int *)t23) = t37;
    t40 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t40 & 16777215U);
    t41 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t41 & 16777215U);
    xsi_vlogtype_concat(t16, 24, 24, 1U, t43, 24);
    t25 = (t0 + 1848U);
    t26 = *((char **)t25);
    memset(t52, 0, 8);
    t25 = (t52 + 4);
    t29 = (t26 + 4);
    t46 = *((unsigned int *)t26);
    t47 = (t46 >> 24);
    *((unsigned int *)t52) = t47;
    t48 = *((unsigned int *)t29);
    t49 = (t48 >> 24);
    *((unsigned int *)t25) = t49;
    t50 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t50 & 255U);
    t51 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t51 & 255U);
    xsi_vlogtype_concat(t44, 8, 8, 1U, t52, 8);
    xsi_vlogtype_concat(t15, 32, 32, 2U, t44, 8, t16, 24);
    t45 = (t0 + 2728);
    t53 = (t0 + 2728);
    t54 = (t53 + 72U);
    t61 = *((char **)t54);
    t64 = (t0 + 2728);
    t65 = (t64 + 64U);
    t66 = *((char **)t65);
    t67 = (t0 + 1688U);
    t68 = *((char **)t67);
    memset(t70, 0, 8);
    t67 = (t70 + 4);
    t69 = (t68 + 4);
    t55 = *((unsigned int *)t68);
    t56 = (t55 >> 2);
    *((unsigned int *)t70) = t56;
    t57 = *((unsigned int *)t69);
    t58 = (t57 >> 2);
    *((unsigned int *)t67) = t58;
    t59 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t59 & 16777215U);
    t60 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t60 & 16777215U);
    xsi_vlog_generic_convert_array_indices(t62, t63, t61, t66, 2, 1, t70, 24, 2);
    t71 = (t62 + 4);
    t74 = *((unsigned int *)t71);
    t31 = (!(t74));
    t72 = (t63 + 4);
    t75 = *((unsigned int *)t72);
    t32 = (!(t75));
    t35 = (t31 && t32);
    if (t35 == 1)
        goto LAB43;

LAB44:    goto LAB36;

LAB37:    t84 = *((unsigned int *)t62);
    t85 = *((unsigned int *)t63);
    t36 = (t84 - t85);
    t86 = (t36 + 1);
    xsi_vlogvar_wait_assign_value(t61, t15, 0, *((unsigned int *)t63), t86, 0LL);
    goto LAB38;

LAB39:    t106 = *((unsigned int *)t88);
    t107 = *((unsigned int *)t89);
    t36 = (t106 - t107);
    t86 = (t36 + 1);
    xsi_vlogvar_wait_assign_value(t82, t15, 0, *((unsigned int *)t89), t86, 0LL);
    goto LAB40;

LAB41:    t106 = *((unsigned int *)t88);
    t107 = *((unsigned int *)t89);
    t36 = (t106 - t107);
    t86 = (t36 + 1);
    xsi_vlogvar_wait_assign_value(t82, t15, 0, *((unsigned int *)t89), t86, 0LL);
    goto LAB42;

LAB43:    t76 = *((unsigned int *)t62);
    t77 = *((unsigned int *)t63);
    t36 = (t76 - t77);
    t86 = (t36 + 1);
    xsi_vlogvar_wait_assign_value(t45, t15, 0, *((unsigned int *)t63), t86, 0LL);
    goto LAB44;

LAB45:    t34 = *((unsigned int *)t15);
    t37 = *((unsigned int *)t16);
    t35 = (t34 - t37);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t16), t36, 0LL);
    goto LAB46;

LAB48:    t34 = *((unsigned int *)t15);
    t37 = *((unsigned int *)t16);
    t35 = (t34 - t37);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t16), t36, 0LL);
    goto LAB49;

}

static void Cont_63_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[8];
    char t27[8];
    char t34[8];
    char t48[8];
    char t49[8];
    char t50[8];
    char t61[8];
    char t88[8];
    char t89[8];
    char t93[8];
    char t100[8];
    char t110[8];
    char t124[8];
    char t125[8];
    char t126[8];
    char t137[8];
    char t164[8];
    char t165[8];
    char t169[8];
    char t176[8];
    char t186[8];
    char t200[8];
    char t201[8];
    char t202[8];
    char t213[8];
    char t240[8];
    char t241[8];
    char t245[8];
    char t252[8];
    char t262[8];
    char t276[8];
    char t277[8];
    char t281[8];
    char t288[8];
    char t298[8];
    char *t1;
    char *t2;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
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
    char *t24;
    char *t25;
    char *t26;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t90;
    char *t91;
    char *t92;
    char *t94;
    char *t95;
    char *t96;
    char *t97;
    char *t98;
    char *t99;
    char *t101;
    char *t102;
    char *t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    char *t111;
    char *t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    char *t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    char *t127;
    char *t128;
    char *t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    char *t136;
    char *t138;
    char *t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    char *t152;
    char *t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    char *t159;
    char *t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    char *t166;
    char *t167;
    char *t168;
    char *t170;
    char *t171;
    char *t172;
    char *t173;
    char *t174;
    char *t175;
    char *t177;
    char *t178;
    char *t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    char *t187;
    char *t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    char *t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    char *t203;
    char *t204;
    char *t205;
    unsigned int t206;
    unsigned int t207;
    unsigned int t208;
    unsigned int t209;
    unsigned int t210;
    unsigned int t211;
    char *t212;
    char *t214;
    char *t215;
    unsigned int t216;
    unsigned int t217;
    unsigned int t218;
    unsigned int t219;
    unsigned int t220;
    unsigned int t221;
    unsigned int t222;
    unsigned int t223;
    unsigned int t224;
    unsigned int t225;
    unsigned int t226;
    unsigned int t227;
    char *t228;
    char *t229;
    unsigned int t230;
    unsigned int t231;
    unsigned int t232;
    unsigned int t233;
    unsigned int t234;
    char *t235;
    char *t236;
    unsigned int t237;
    unsigned int t238;
    unsigned int t239;
    char *t242;
    char *t243;
    char *t244;
    char *t246;
    char *t247;
    char *t248;
    char *t249;
    char *t250;
    char *t251;
    char *t253;
    char *t254;
    char *t255;
    unsigned int t256;
    unsigned int t257;
    unsigned int t258;
    unsigned int t259;
    unsigned int t260;
    unsigned int t261;
    char *t263;
    char *t264;
    unsigned int t265;
    unsigned int t266;
    unsigned int t267;
    unsigned int t268;
    unsigned int t269;
    unsigned int t270;
    char *t271;
    unsigned int t272;
    unsigned int t273;
    unsigned int t274;
    unsigned int t275;
    char *t278;
    char *t279;
    char *t280;
    char *t282;
    char *t283;
    char *t284;
    char *t285;
    char *t286;
    char *t287;
    char *t289;
    char *t290;
    char *t291;
    unsigned int t292;
    unsigned int t293;
    unsigned int t294;
    unsigned int t295;
    unsigned int t296;
    unsigned int t297;
    char *t299;
    char *t300;
    unsigned int t301;
    unsigned int t302;
    unsigned int t303;
    unsigned int t304;
    unsigned int t305;
    unsigned int t306;
    char *t307;
    char *t308;
    char *t309;
    char *t310;
    char *t311;
    char *t312;
    char *t313;

LAB0:    t1 = (t0 + 4144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2008U);
    t6 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t6 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t2) == 0)
        goto LAB4;

LAB6:    t12 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t12) = 1;

LAB7:    memset(t4, 0, 8);
    t13 = (t5 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t5);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t13) != 0)
        goto LAB10;

LAB11:    t20 = (t4 + 4);
    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t20);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB12;

LAB13:    t44 = *((unsigned int *)t4);
    t45 = (~(t44));
    t46 = *((unsigned int *)t20);
    t47 = (t45 || t46);
    if (t47 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t20) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t48, 8);

LAB20:    t308 = (t0 + 4560);
    t309 = (t308 + 56U);
    t310 = *((char **)t309);
    t311 = (t310 + 56U);
    t312 = *((char **)t311);
    memcpy(t312, t3, 8);
    xsi_driver_vfirst_trans(t308, 0, 31);
    t313 = (t0 + 4480);
    *((int *)t313) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t5) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB11;

LAB12:    t24 = (t0 + 2728);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t28 = (t0 + 2728);
    t29 = (t28 + 72U);
    t30 = *((char **)t29);
    t31 = (t0 + 2728);
    t32 = (t31 + 64U);
    t33 = *((char **)t32);
    t35 = (t0 + 1688U);
    t36 = *((char **)t35);
    memset(t34, 0, 8);
    t35 = (t34 + 4);
    t37 = (t36 + 4);
    t38 = *((unsigned int *)t36);
    t39 = (t38 >> 2);
    *((unsigned int *)t34) = t39;
    t40 = *((unsigned int *)t37);
    t41 = (t40 >> 2);
    *((unsigned int *)t35) = t41;
    t42 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t42 & 16777215U);
    t43 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t43 & 16777215U);
    xsi_vlog_generic_get_array_select_value(t27, 32, t26, t30, t33, 2, 1, t34, 24, 2);
    goto LAB13;

LAB14:    t51 = (t0 + 1688U);
    t52 = *((char **)t51);
    memset(t50, 0, 8);
    t51 = (t50 + 4);
    t53 = (t52 + 4);
    t54 = *((unsigned int *)t52);
    t55 = (t54 >> 0);
    *((unsigned int *)t50) = t55;
    t56 = *((unsigned int *)t53);
    t57 = (t56 >> 0);
    *((unsigned int *)t51) = t57;
    t58 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t58 & 3U);
    t59 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t59 & 3U);
    t60 = ((char*)((ng0)));
    memset(t61, 0, 8);
    t62 = (t50 + 4);
    t63 = (t60 + 4);
    t64 = *((unsigned int *)t50);
    t65 = *((unsigned int *)t60);
    t66 = (t64 ^ t65);
    t67 = *((unsigned int *)t62);
    t68 = *((unsigned int *)t63);
    t69 = (t67 ^ t68);
    t70 = (t66 | t69);
    t71 = *((unsigned int *)t62);
    t72 = *((unsigned int *)t63);
    t73 = (t71 | t72);
    t74 = (~(t73));
    t75 = (t70 & t74);
    if (t75 != 0)
        goto LAB24;

LAB21:    if (t73 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t61) = 1;

LAB24:    memset(t49, 0, 8);
    t77 = (t61 + 4);
    t78 = *((unsigned int *)t77);
    t79 = (~(t78));
    t80 = *((unsigned int *)t61);
    t81 = (t80 & t79);
    t82 = (t81 & 1U);
    if (t82 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t77) != 0)
        goto LAB27;

LAB28:    t84 = (t49 + 4);
    t85 = *((unsigned int *)t49);
    t86 = *((unsigned int *)t84);
    t87 = (t85 || t86);
    if (t87 > 0)
        goto LAB29;

LAB30:    t120 = *((unsigned int *)t49);
    t121 = (~(t120));
    t122 = *((unsigned int *)t84);
    t123 = (t121 || t122);
    if (t123 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t84) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t49) > 0)
        goto LAB35;

LAB36:    memcpy(t48, t124, 8);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t27, 32, t48, 32);
    goto LAB20;

LAB18:    memcpy(t3, t27, 8);
    goto LAB20;

LAB23:    t76 = (t61 + 4);
    *((unsigned int *)t61) = 1;
    *((unsigned int *)t76) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t49) = 1;
    goto LAB28;

LAB27:    t83 = (t49 + 4);
    *((unsigned int *)t49) = 1;
    *((unsigned int *)t83) = 1;
    goto LAB28;

LAB29:    t90 = (t0 + 2728);
    t91 = (t90 + 56U);
    t92 = *((char **)t91);
    t94 = (t0 + 2728);
    t95 = (t94 + 72U);
    t96 = *((char **)t95);
    t97 = (t0 + 2728);
    t98 = (t97 + 64U);
    t99 = *((char **)t98);
    t101 = (t0 + 1688U);
    t102 = *((char **)t101);
    memset(t100, 0, 8);
    t101 = (t100 + 4);
    t103 = (t102 + 4);
    t104 = *((unsigned int *)t102);
    t105 = (t104 >> 2);
    *((unsigned int *)t100) = t105;
    t106 = *((unsigned int *)t103);
    t107 = (t106 >> 2);
    *((unsigned int *)t101) = t107;
    t108 = *((unsigned int *)t100);
    *((unsigned int *)t100) = (t108 & 16777215U);
    t109 = *((unsigned int *)t101);
    *((unsigned int *)t101) = (t109 & 16777215U);
    xsi_vlog_generic_get_array_select_value(t93, 32, t92, t96, t99, 2, 1, t100, 24, 2);
    memset(t110, 0, 8);
    t111 = (t110 + 4);
    t112 = (t93 + 4);
    t113 = *((unsigned int *)t93);
    t114 = (t113 >> 0);
    *((unsigned int *)t110) = t114;
    t115 = *((unsigned int *)t112);
    t116 = (t115 >> 0);
    *((unsigned int *)t111) = t116;
    t117 = *((unsigned int *)t110);
    *((unsigned int *)t110) = (t117 & 255U);
    t118 = *((unsigned int *)t111);
    *((unsigned int *)t111) = (t118 & 255U);
    xsi_vlogtype_concat(t89, 8, 8, 1U, t110, 8);
    t119 = ((char*)((ng4)));
    xsi_vlogtype_concat(t88, 32, 32, 2U, t119, 24, t89, 8);
    goto LAB30;

LAB31:    t127 = (t0 + 1688U);
    t128 = *((char **)t127);
    memset(t126, 0, 8);
    t127 = (t126 + 4);
    t129 = (t128 + 4);
    t130 = *((unsigned int *)t128);
    t131 = (t130 >> 0);
    *((unsigned int *)t126) = t131;
    t132 = *((unsigned int *)t129);
    t133 = (t132 >> 0);
    *((unsigned int *)t127) = t133;
    t134 = *((unsigned int *)t126);
    *((unsigned int *)t126) = (t134 & 3U);
    t135 = *((unsigned int *)t127);
    *((unsigned int *)t127) = (t135 & 3U);
    t136 = ((char*)((ng2)));
    memset(t137, 0, 8);
    t138 = (t126 + 4);
    t139 = (t136 + 4);
    t140 = *((unsigned int *)t126);
    t141 = *((unsigned int *)t136);
    t142 = (t140 ^ t141);
    t143 = *((unsigned int *)t138);
    t144 = *((unsigned int *)t139);
    t145 = (t143 ^ t144);
    t146 = (t142 | t145);
    t147 = *((unsigned int *)t138);
    t148 = *((unsigned int *)t139);
    t149 = (t147 | t148);
    t150 = (~(t149));
    t151 = (t146 & t150);
    if (t151 != 0)
        goto LAB41;

LAB38:    if (t149 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t137) = 1;

LAB41:    memset(t125, 0, 8);
    t153 = (t137 + 4);
    t154 = *((unsigned int *)t153);
    t155 = (~(t154));
    t156 = *((unsigned int *)t137);
    t157 = (t156 & t155);
    t158 = (t157 & 1U);
    if (t158 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t153) != 0)
        goto LAB44;

LAB45:    t160 = (t125 + 4);
    t161 = *((unsigned int *)t125);
    t162 = *((unsigned int *)t160);
    t163 = (t161 || t162);
    if (t163 > 0)
        goto LAB46;

LAB47:    t196 = *((unsigned int *)t125);
    t197 = (~(t196));
    t198 = *((unsigned int *)t160);
    t199 = (t197 || t198);
    if (t199 > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t160) > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t125) > 0)
        goto LAB52;

LAB53:    memcpy(t124, t200, 8);

LAB54:    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t48, 32, t88, 32, t124, 32);
    goto LAB37;

LAB35:    memcpy(t48, t88, 8);
    goto LAB37;

LAB40:    t152 = (t137 + 4);
    *((unsigned int *)t137) = 1;
    *((unsigned int *)t152) = 1;
    goto LAB41;

LAB42:    *((unsigned int *)t125) = 1;
    goto LAB45;

LAB44:    t159 = (t125 + 4);
    *((unsigned int *)t125) = 1;
    *((unsigned int *)t159) = 1;
    goto LAB45;

LAB46:    t166 = (t0 + 2728);
    t167 = (t166 + 56U);
    t168 = *((char **)t167);
    t170 = (t0 + 2728);
    t171 = (t170 + 72U);
    t172 = *((char **)t171);
    t173 = (t0 + 2728);
    t174 = (t173 + 64U);
    t175 = *((char **)t174);
    t177 = (t0 + 1688U);
    t178 = *((char **)t177);
    memset(t176, 0, 8);
    t177 = (t176 + 4);
    t179 = (t178 + 4);
    t180 = *((unsigned int *)t178);
    t181 = (t180 >> 2);
    *((unsigned int *)t176) = t181;
    t182 = *((unsigned int *)t179);
    t183 = (t182 >> 2);
    *((unsigned int *)t177) = t183;
    t184 = *((unsigned int *)t176);
    *((unsigned int *)t176) = (t184 & 16777215U);
    t185 = *((unsigned int *)t177);
    *((unsigned int *)t177) = (t185 & 16777215U);
    xsi_vlog_generic_get_array_select_value(t169, 32, t168, t172, t175, 2, 1, t176, 24, 2);
    memset(t186, 0, 8);
    t187 = (t186 + 4);
    t188 = (t169 + 4);
    t189 = *((unsigned int *)t169);
    t190 = (t189 >> 8);
    *((unsigned int *)t186) = t190;
    t191 = *((unsigned int *)t188);
    t192 = (t191 >> 8);
    *((unsigned int *)t187) = t192;
    t193 = *((unsigned int *)t186);
    *((unsigned int *)t186) = (t193 & 255U);
    t194 = *((unsigned int *)t187);
    *((unsigned int *)t187) = (t194 & 255U);
    xsi_vlogtype_concat(t165, 8, 8, 1U, t186, 8);
    t195 = ((char*)((ng4)));
    xsi_vlogtype_concat(t164, 32, 32, 2U, t195, 24, t165, 8);
    goto LAB47;

LAB48:    t203 = (t0 + 1688U);
    t204 = *((char **)t203);
    memset(t202, 0, 8);
    t203 = (t202 + 4);
    t205 = (t204 + 4);
    t206 = *((unsigned int *)t204);
    t207 = (t206 >> 0);
    *((unsigned int *)t202) = t207;
    t208 = *((unsigned int *)t205);
    t209 = (t208 >> 0);
    *((unsigned int *)t203) = t209;
    t210 = *((unsigned int *)t202);
    *((unsigned int *)t202) = (t210 & 3U);
    t211 = *((unsigned int *)t203);
    *((unsigned int *)t203) = (t211 & 3U);
    t212 = ((char*)((ng8)));
    memset(t213, 0, 8);
    t214 = (t202 + 4);
    t215 = (t212 + 4);
    t216 = *((unsigned int *)t202);
    t217 = *((unsigned int *)t212);
    t218 = (t216 ^ t217);
    t219 = *((unsigned int *)t214);
    t220 = *((unsigned int *)t215);
    t221 = (t219 ^ t220);
    t222 = (t218 | t221);
    t223 = *((unsigned int *)t214);
    t224 = *((unsigned int *)t215);
    t225 = (t223 | t224);
    t226 = (~(t225));
    t227 = (t222 & t226);
    if (t227 != 0)
        goto LAB58;

LAB55:    if (t225 != 0)
        goto LAB57;

LAB56:    *((unsigned int *)t213) = 1;

LAB58:    memset(t201, 0, 8);
    t229 = (t213 + 4);
    t230 = *((unsigned int *)t229);
    t231 = (~(t230));
    t232 = *((unsigned int *)t213);
    t233 = (t232 & t231);
    t234 = (t233 & 1U);
    if (t234 != 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t229) != 0)
        goto LAB61;

LAB62:    t236 = (t201 + 4);
    t237 = *((unsigned int *)t201);
    t238 = *((unsigned int *)t236);
    t239 = (t237 || t238);
    if (t239 > 0)
        goto LAB63;

LAB64:    t272 = *((unsigned int *)t201);
    t273 = (~(t272));
    t274 = *((unsigned int *)t236);
    t275 = (t273 || t274);
    if (t275 > 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t236) > 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t201) > 0)
        goto LAB69;

LAB70:    memcpy(t200, t276, 8);

LAB71:    goto LAB49;

LAB50:    xsi_vlog_unsigned_bit_combine(t124, 32, t164, 32, t200, 32);
    goto LAB54;

LAB52:    memcpy(t124, t164, 8);
    goto LAB54;

LAB57:    t228 = (t213 + 4);
    *((unsigned int *)t213) = 1;
    *((unsigned int *)t228) = 1;
    goto LAB58;

LAB59:    *((unsigned int *)t201) = 1;
    goto LAB62;

LAB61:    t235 = (t201 + 4);
    *((unsigned int *)t201) = 1;
    *((unsigned int *)t235) = 1;
    goto LAB62;

LAB63:    t242 = (t0 + 2728);
    t243 = (t242 + 56U);
    t244 = *((char **)t243);
    t246 = (t0 + 2728);
    t247 = (t246 + 72U);
    t248 = *((char **)t247);
    t249 = (t0 + 2728);
    t250 = (t249 + 64U);
    t251 = *((char **)t250);
    t253 = (t0 + 1688U);
    t254 = *((char **)t253);
    memset(t252, 0, 8);
    t253 = (t252 + 4);
    t255 = (t254 + 4);
    t256 = *((unsigned int *)t254);
    t257 = (t256 >> 2);
    *((unsigned int *)t252) = t257;
    t258 = *((unsigned int *)t255);
    t259 = (t258 >> 2);
    *((unsigned int *)t253) = t259;
    t260 = *((unsigned int *)t252);
    *((unsigned int *)t252) = (t260 & 16777215U);
    t261 = *((unsigned int *)t253);
    *((unsigned int *)t253) = (t261 & 16777215U);
    xsi_vlog_generic_get_array_select_value(t245, 32, t244, t248, t251, 2, 1, t252, 24, 2);
    memset(t262, 0, 8);
    t263 = (t262 + 4);
    t264 = (t245 + 4);
    t265 = *((unsigned int *)t245);
    t266 = (t265 >> 16);
    *((unsigned int *)t262) = t266;
    t267 = *((unsigned int *)t264);
    t268 = (t267 >> 16);
    *((unsigned int *)t263) = t268;
    t269 = *((unsigned int *)t262);
    *((unsigned int *)t262) = (t269 & 255U);
    t270 = *((unsigned int *)t263);
    *((unsigned int *)t263) = (t270 & 255U);
    xsi_vlogtype_concat(t241, 8, 8, 1U, t262, 8);
    t271 = ((char*)((ng4)));
    xsi_vlogtype_concat(t240, 32, 32, 2U, t271, 24, t241, 8);
    goto LAB64;

LAB65:    t278 = (t0 + 2728);
    t279 = (t278 + 56U);
    t280 = *((char **)t279);
    t282 = (t0 + 2728);
    t283 = (t282 + 72U);
    t284 = *((char **)t283);
    t285 = (t0 + 2728);
    t286 = (t285 + 64U);
    t287 = *((char **)t286);
    t289 = (t0 + 1688U);
    t290 = *((char **)t289);
    memset(t288, 0, 8);
    t289 = (t288 + 4);
    t291 = (t290 + 4);
    t292 = *((unsigned int *)t290);
    t293 = (t292 >> 2);
    *((unsigned int *)t288) = t293;
    t294 = *((unsigned int *)t291);
    t295 = (t294 >> 2);
    *((unsigned int *)t289) = t295;
    t296 = *((unsigned int *)t288);
    *((unsigned int *)t288) = (t296 & 16777215U);
    t297 = *((unsigned int *)t289);
    *((unsigned int *)t289) = (t297 & 16777215U);
    xsi_vlog_generic_get_array_select_value(t281, 32, t280, t284, t287, 2, 1, t288, 24, 2);
    memset(t298, 0, 8);
    t299 = (t298 + 4);
    t300 = (t281 + 4);
    t301 = *((unsigned int *)t281);
    t302 = (t301 >> 24);
    *((unsigned int *)t298) = t302;
    t303 = *((unsigned int *)t300);
    t304 = (t303 >> 24);
    *((unsigned int *)t299) = t304;
    t305 = *((unsigned int *)t298);
    *((unsigned int *)t298) = (t305 & 255U);
    t306 = *((unsigned int *)t299);
    *((unsigned int *)t299) = (t306 & 255U);
    xsi_vlogtype_concat(t277, 8, 8, 1U, t298, 8);
    t307 = ((char*)((ng4)));
    xsi_vlogtype_concat(t276, 32, 32, 2U, t307, 24, t277, 8);
    goto LAB66;

LAB67:    xsi_vlog_unsigned_bit_combine(t200, 32, t240, 32, t276, 32);
    goto LAB71;

LAB69:    memcpy(t200, t240, 8);
    goto LAB71;

}


extern void work_m_00000000001704882353_2924402094_init()
{
	static char *pe[] = {(void *)Initial_17_0,(void *)Always_23_1,(void *)Cont_63_2};
	xsi_register_didat("work_m_00000000001704882353_2924402094", "isim/mips.exe.sim/work/m_00000000001704882353_2924402094.didat");
	xsi_register_executes(pe);
}
