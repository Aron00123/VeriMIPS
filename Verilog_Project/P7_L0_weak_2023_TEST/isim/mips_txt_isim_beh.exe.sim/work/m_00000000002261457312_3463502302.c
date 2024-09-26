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
static const char *ng0 = "C:/Users/Aron_/Desktop/lessons/SecondYear1/CO/Verilog_Project/P7_L0_weak_2023_TEST/ReadBE.v";
static unsigned int ng1[] = {3U, 0U};
static unsigned int ng2[] = {2U, 0U};
static int ng3[] = {1, 0};
static int ng4[] = {0, 0};
static int ng5[] = {16, 0};
static unsigned int ng6[] = {1U, 0U};
static int ng7[] = {24, 0};
static int ng8[] = {2, 0};
static int ng9[] = {3, 0};
static unsigned int ng10[] = {0U, 0U};
static unsigned int ng11[] = {12288U, 0U};



static void Cont_10_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(10, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3512);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 3416);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Always_12_1(char *t0)
{
    char t9[8];
    char t10[8];
    char t11[8];
    char t14[8];
    char t41[8];
    char t42[8];
    char t52[8];
    char t56[8];
    char t68[8];
    char t69[8];
    char t79[8];
    char t83[8];
    char t112[8];
    char t113[8];
    char t123[8];
    char t127[8];
    char t139[8];
    char t140[8];
    char t141[8];
    char t152[8];
    char t179[8];
    char t180[8];
    char t190[8];
    char t194[8];
    char t206[8];
    char t207[8];
    char t208[8];
    char t219[8];
    char t246[8];
    char t247[8];
    char t257[8];
    char t261[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
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
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t53;
    char *t54;
    char *t55;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t70;
    char *t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t80;
    char *t81;
    char *t82;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t114;
    char *t115;
    char *t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    char *t124;
    char *t125;
    char *t126;
    char *t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    char *t142;
    char *t143;
    char *t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    char *t151;
    char *t153;
    char *t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    char *t167;
    char *t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    char *t174;
    char *t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    char *t181;
    char *t182;
    char *t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    char *t191;
    char *t192;
    char *t193;
    char *t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    unsigned int t203;
    unsigned int t204;
    unsigned int t205;
    char *t209;
    char *t210;
    char *t211;
    unsigned int t212;
    unsigned int t213;
    unsigned int t214;
    unsigned int t215;
    unsigned int t216;
    unsigned int t217;
    char *t218;
    char *t220;
    char *t221;
    unsigned int t222;
    unsigned int t223;
    unsigned int t224;
    unsigned int t225;
    unsigned int t226;
    unsigned int t227;
    unsigned int t228;
    unsigned int t229;
    unsigned int t230;
    unsigned int t231;
    unsigned int t232;
    unsigned int t233;
    char *t234;
    char *t235;
    unsigned int t236;
    unsigned int t237;
    unsigned int t238;
    unsigned int t239;
    unsigned int t240;
    char *t241;
    char *t242;
    unsigned int t243;
    unsigned int t244;
    unsigned int t245;
    char *t248;
    char *t249;
    char *t250;
    unsigned int t251;
    unsigned int t252;
    unsigned int t253;
    unsigned int t254;
    unsigned int t255;
    unsigned int t256;
    char *t258;
    char *t259;
    char *t260;
    char *t262;
    unsigned int t263;
    unsigned int t264;
    unsigned int t265;
    unsigned int t266;
    unsigned int t267;
    unsigned int t268;
    unsigned int t269;
    unsigned int t270;
    unsigned int t271;
    unsigned int t272;
    char *t273;
    char *t274;

LAB0:    t1 = (t0 + 3096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(12, ng0);
    t2 = (t0 + 3432);
    *((int *)t2) = 1;
    t3 = (t0 + 3128);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(12, ng0);

LAB5:    xsi_set_current_line(13, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t4, 10);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 10);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 10);
    if (t6 == 1)
        goto LAB11;

LAB12:
LAB14:
LAB13:    xsi_set_current_line(26, ng0);

LAB104:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng11)));
    memset(t9, 0, 8);
    t4 = (t3 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB106;

LAB105:    t7 = (t2 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB106;

LAB109:    if (*((unsigned int *)t3) < *((unsigned int *)t2))
        goto LAB107;

LAB108:    t12 = (t9 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (~(t17));
    t19 = *((unsigned int *)t9);
    t20 = (t19 & t18);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB110;

LAB111:    xsi_set_current_line(30, ng0);

LAB114:    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB112:
LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(14, ng0);

LAB16:    xsi_set_current_line(15, ng0);
    t7 = (t0 + 1048U);
    t8 = *((char **)t7);
    t7 = (t0 + 1928);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 32);
    goto LAB15;

LAB9:    xsi_set_current_line(17, ng0);

LAB17:    xsi_set_current_line(18, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1168U);
    t7 = (t3 + 72U);
    t8 = *((char **)t7);
    t12 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t11, 32, t4, t8, 2, t12, 32, 1);
    t13 = ((char*)((ng4)));
    memset(t14, 0, 8);
    t15 = (t11 + 4);
    t16 = (t13 + 4);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t13);
    t19 = (t17 ^ t18);
    t20 = *((unsigned int *)t15);
    t21 = *((unsigned int *)t16);
    t22 = (t20 ^ t21);
    t23 = (t19 | t22);
    t24 = *((unsigned int *)t15);
    t25 = *((unsigned int *)t16);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB21;

LAB18:    if (t26 != 0)
        goto LAB20;

LAB19:    *((unsigned int *)t14) = 1;

LAB21:    memset(t10, 0, 8);
    t30 = (t14 + 4);
    t31 = *((unsigned int *)t30);
    t32 = (~(t31));
    t33 = *((unsigned int *)t14);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t30) != 0)
        goto LAB24;

LAB25:    t37 = (t10 + 4);
    t38 = *((unsigned int *)t10);
    t39 = *((unsigned int *)t37);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB26;

LAB27:    t64 = *((unsigned int *)t10);
    t65 = (~(t64));
    t66 = *((unsigned int *)t37);
    t67 = (t65 || t66);
    if (t67 > 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t37) > 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t10) > 0)
        goto LAB32;

LAB33:    memcpy(t9, t68, 8);

LAB34:    t91 = (t0 + 1928);
    xsi_vlogvar_assign_value(t91, t9, 0, 0, 32);
    goto LAB15;

LAB11:    xsi_set_current_line(20, ng0);

LAB35:    xsi_set_current_line(21, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t3 = (t11 + 4);
    t7 = (t4 + 4);
    t17 = *((unsigned int *)t4);
    t18 = (t17 >> 0);
    *((unsigned int *)t11) = t18;
    t19 = *((unsigned int *)t7);
    t20 = (t19 >> 0);
    *((unsigned int *)t3) = t20;
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t21 & 3U);
    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 3U);
    t8 = ((char*)((ng4)));
    memset(t14, 0, 8);
    t12 = (t11 + 4);
    t13 = (t8 + 4);
    t23 = *((unsigned int *)t11);
    t24 = *((unsigned int *)t8);
    t25 = (t23 ^ t24);
    t26 = *((unsigned int *)t12);
    t27 = *((unsigned int *)t13);
    t28 = (t26 ^ t27);
    t31 = (t25 | t28);
    t32 = *((unsigned int *)t12);
    t33 = *((unsigned int *)t13);
    t34 = (t32 | t33);
    t35 = (~(t34));
    t38 = (t31 & t35);
    if (t38 != 0)
        goto LAB39;

LAB36:    if (t34 != 0)
        goto LAB38;

LAB37:    *((unsigned int *)t14) = 1;

LAB39:    memset(t10, 0, 8);
    t16 = (t14 + 4);
    t39 = *((unsigned int *)t16);
    t40 = (~(t39));
    t46 = *((unsigned int *)t14);
    t47 = (t46 & t40);
    t48 = (t47 & 1U);
    if (t48 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t16) != 0)
        goto LAB42;

LAB43:    t30 = (t10 + 4);
    t49 = *((unsigned int *)t10);
    t50 = *((unsigned int *)t30);
    t51 = (t49 || t50);
    if (t51 > 0)
        goto LAB44;

LAB45:    t75 = *((unsigned int *)t10);
    t76 = (~(t75));
    t77 = *((unsigned int *)t30);
    t78 = (t76 || t77);
    if (t78 > 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t30) > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t10) > 0)
        goto LAB50;

LAB51:    memcpy(t9, t68, 8);

LAB52:    t274 = (t0 + 1928);
    xsi_vlogvar_assign_value(t274, t9, 0, 0, 32);
    goto LAB15;

LAB20:    t29 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB21;

LAB22:    *((unsigned int *)t10) = 1;
    goto LAB25;

LAB24:    t36 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB25;

LAB26:    t43 = (t0 + 1048U);
    t44 = *((char **)t43);
    memset(t42, 0, 8);
    t43 = (t42 + 4);
    t45 = (t44 + 4);
    t46 = *((unsigned int *)t44);
    t47 = (t46 >> 0);
    *((unsigned int *)t42) = t47;
    t48 = *((unsigned int *)t45);
    t49 = (t48 >> 0);
    *((unsigned int *)t43) = t49;
    t50 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t50 & 65535U);
    t51 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t51 & 65535U);
    t53 = ((char*)((ng5)));
    t54 = (t0 + 1048U);
    t55 = *((char **)t54);
    memset(t56, 0, 8);
    t54 = (t56 + 4);
    t57 = (t55 + 4);
    t58 = *((unsigned int *)t55);
    t59 = (t58 >> 15);
    t60 = (t59 & 1);
    *((unsigned int *)t56) = t60;
    t61 = *((unsigned int *)t57);
    t62 = (t61 >> 15);
    t63 = (t62 & 1);
    *((unsigned int *)t54) = t63;
    xsi_vlog_mul_concat(t52, 16, 1, t53, 1U, t56, 1);
    xsi_vlogtype_concat(t41, 32, 32, 2U, t52, 16, t42, 16);
    goto LAB27;

LAB28:    t70 = (t0 + 1048U);
    t71 = *((char **)t70);
    memset(t69, 0, 8);
    t70 = (t69 + 4);
    t72 = (t71 + 4);
    t73 = *((unsigned int *)t71);
    t74 = (t73 >> 16);
    *((unsigned int *)t69) = t74;
    t75 = *((unsigned int *)t72);
    t76 = (t75 >> 16);
    *((unsigned int *)t70) = t76;
    t77 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t77 & 65535U);
    t78 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t78 & 65535U);
    t80 = ((char*)((ng5)));
    t81 = (t0 + 1048U);
    t82 = *((char **)t81);
    memset(t83, 0, 8);
    t81 = (t83 + 4);
    t84 = (t82 + 4);
    t85 = *((unsigned int *)t82);
    t86 = (t85 >> 31);
    t87 = (t86 & 1);
    *((unsigned int *)t83) = t87;
    t88 = *((unsigned int *)t84);
    t89 = (t88 >> 31);
    t90 = (t89 & 1);
    *((unsigned int *)t81) = t90;
    xsi_vlog_mul_concat(t79, 16, 1, t80, 1U, t83, 1);
    xsi_vlogtype_concat(t68, 32, 32, 2U, t79, 16, t69, 16);
    goto LAB29;

LAB30:    xsi_vlog_unsigned_bit_combine(t9, 32, t41, 32, t68, 32);
    goto LAB34;

LAB32:    memcpy(t9, t41, 8);
    goto LAB34;

LAB38:    t15 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB39;

LAB40:    *((unsigned int *)t10) = 1;
    goto LAB43;

LAB42:    t29 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB43;

LAB44:    t36 = (t0 + 1048U);
    t37 = *((char **)t36);
    memset(t42, 0, 8);
    t36 = (t42 + 4);
    t43 = (t37 + 4);
    t58 = *((unsigned int *)t37);
    t59 = (t58 >> 0);
    *((unsigned int *)t42) = t59;
    t60 = *((unsigned int *)t43);
    t61 = (t60 >> 0);
    *((unsigned int *)t36) = t61;
    t62 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t62 & 255U);
    t63 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t63 & 255U);
    t44 = ((char*)((ng7)));
    t45 = (t0 + 1048U);
    t53 = *((char **)t45);
    memset(t56, 0, 8);
    t45 = (t56 + 4);
    t54 = (t53 + 4);
    t64 = *((unsigned int *)t53);
    t65 = (t64 >> 7);
    t66 = (t65 & 1);
    *((unsigned int *)t56) = t66;
    t67 = *((unsigned int *)t54);
    t73 = (t67 >> 7);
    t74 = (t73 & 1);
    *((unsigned int *)t45) = t74;
    xsi_vlog_mul_concat(t52, 24, 1, t44, 1U, t56, 1);
    xsi_vlogtype_concat(t41, 32, 32, 2U, t52, 24, t42, 8);
    goto LAB45;

LAB46:    t55 = (t0 + 1208U);
    t57 = *((char **)t55);
    memset(t79, 0, 8);
    t55 = (t79 + 4);
    t70 = (t57 + 4);
    t85 = *((unsigned int *)t57);
    t86 = (t85 >> 0);
    *((unsigned int *)t79) = t86;
    t87 = *((unsigned int *)t70);
    t88 = (t87 >> 0);
    *((unsigned int *)t55) = t88;
    t89 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t89 & 3U);
    t90 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t90 & 3U);
    t71 = ((char*)((ng3)));
    memset(t83, 0, 8);
    t72 = (t79 + 4);
    t80 = (t71 + 4);
    t92 = *((unsigned int *)t79);
    t93 = *((unsigned int *)t71);
    t94 = (t92 ^ t93);
    t95 = *((unsigned int *)t72);
    t96 = *((unsigned int *)t80);
    t97 = (t95 ^ t96);
    t98 = (t94 | t97);
    t99 = *((unsigned int *)t72);
    t100 = *((unsigned int *)t80);
    t101 = (t99 | t100);
    t102 = (~(t101));
    t103 = (t98 & t102);
    if (t103 != 0)
        goto LAB56;

LAB53:    if (t101 != 0)
        goto LAB55;

LAB54:    *((unsigned int *)t83) = 1;

LAB56:    memset(t69, 0, 8);
    t82 = (t83 + 4);
    t104 = *((unsigned int *)t82);
    t105 = (~(t104));
    t106 = *((unsigned int *)t83);
    t107 = (t106 & t105);
    t108 = (t107 & 1U);
    if (t108 != 0)
        goto LAB57;

LAB58:    if (*((unsigned int *)t82) != 0)
        goto LAB59;

LAB60:    t91 = (t69 + 4);
    t109 = *((unsigned int *)t69);
    t110 = *((unsigned int *)t91);
    t111 = (t109 || t110);
    if (t111 > 0)
        goto LAB61;

LAB62:    t135 = *((unsigned int *)t69);
    t136 = (~(t135));
    t137 = *((unsigned int *)t91);
    t138 = (t136 || t137);
    if (t138 > 0)
        goto LAB63;

LAB64:    if (*((unsigned int *)t91) > 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t69) > 0)
        goto LAB67;

LAB68:    memcpy(t68, t139, 8);

LAB69:    goto LAB47;

LAB48:    xsi_vlog_unsigned_bit_combine(t9, 32, t41, 32, t68, 32);
    goto LAB52;

LAB50:    memcpy(t9, t41, 8);
    goto LAB52;

LAB55:    t81 = (t83 + 4);
    *((unsigned int *)t83) = 1;
    *((unsigned int *)t81) = 1;
    goto LAB56;

LAB57:    *((unsigned int *)t69) = 1;
    goto LAB60;

LAB59:    t84 = (t69 + 4);
    *((unsigned int *)t69) = 1;
    *((unsigned int *)t84) = 1;
    goto LAB60;

LAB61:    t114 = (t0 + 1048U);
    t115 = *((char **)t114);
    memset(t113, 0, 8);
    t114 = (t113 + 4);
    t116 = (t115 + 4);
    t117 = *((unsigned int *)t115);
    t118 = (t117 >> 8);
    *((unsigned int *)t113) = t118;
    t119 = *((unsigned int *)t116);
    t120 = (t119 >> 8);
    *((unsigned int *)t114) = t120;
    t121 = *((unsigned int *)t113);
    *((unsigned int *)t113) = (t121 & 255U);
    t122 = *((unsigned int *)t114);
    *((unsigned int *)t114) = (t122 & 255U);
    t124 = ((char*)((ng7)));
    t125 = (t0 + 1048U);
    t126 = *((char **)t125);
    memset(t127, 0, 8);
    t125 = (t127 + 4);
    t128 = (t126 + 4);
    t129 = *((unsigned int *)t126);
    t130 = (t129 >> 15);
    t131 = (t130 & 1);
    *((unsigned int *)t127) = t131;
    t132 = *((unsigned int *)t128);
    t133 = (t132 >> 15);
    t134 = (t133 & 1);
    *((unsigned int *)t125) = t134;
    xsi_vlog_mul_concat(t123, 24, 1, t124, 1U, t127, 1);
    xsi_vlogtype_concat(t112, 32, 32, 2U, t123, 24, t113, 8);
    goto LAB62;

LAB63:    t142 = (t0 + 1208U);
    t143 = *((char **)t142);
    memset(t141, 0, 8);
    t142 = (t141 + 4);
    t144 = (t143 + 4);
    t145 = *((unsigned int *)t143);
    t146 = (t145 >> 0);
    *((unsigned int *)t141) = t146;
    t147 = *((unsigned int *)t144);
    t148 = (t147 >> 0);
    *((unsigned int *)t142) = t148;
    t149 = *((unsigned int *)t141);
    *((unsigned int *)t141) = (t149 & 3U);
    t150 = *((unsigned int *)t142);
    *((unsigned int *)t142) = (t150 & 3U);
    t151 = ((char*)((ng8)));
    memset(t152, 0, 8);
    t153 = (t141 + 4);
    t154 = (t151 + 4);
    t155 = *((unsigned int *)t141);
    t156 = *((unsigned int *)t151);
    t157 = (t155 ^ t156);
    t158 = *((unsigned int *)t153);
    t159 = *((unsigned int *)t154);
    t160 = (t158 ^ t159);
    t161 = (t157 | t160);
    t162 = *((unsigned int *)t153);
    t163 = *((unsigned int *)t154);
    t164 = (t162 | t163);
    t165 = (~(t164));
    t166 = (t161 & t165);
    if (t166 != 0)
        goto LAB73;

LAB70:    if (t164 != 0)
        goto LAB72;

LAB71:    *((unsigned int *)t152) = 1;

LAB73:    memset(t140, 0, 8);
    t168 = (t152 + 4);
    t169 = *((unsigned int *)t168);
    t170 = (~(t169));
    t171 = *((unsigned int *)t152);
    t172 = (t171 & t170);
    t173 = (t172 & 1U);
    if (t173 != 0)
        goto LAB74;

LAB75:    if (*((unsigned int *)t168) != 0)
        goto LAB76;

LAB77:    t175 = (t140 + 4);
    t176 = *((unsigned int *)t140);
    t177 = *((unsigned int *)t175);
    t178 = (t176 || t177);
    if (t178 > 0)
        goto LAB78;

LAB79:    t202 = *((unsigned int *)t140);
    t203 = (~(t202));
    t204 = *((unsigned int *)t175);
    t205 = (t203 || t204);
    if (t205 > 0)
        goto LAB80;

LAB81:    if (*((unsigned int *)t175) > 0)
        goto LAB82;

LAB83:    if (*((unsigned int *)t140) > 0)
        goto LAB84;

LAB85:    memcpy(t139, t206, 8);

LAB86:    goto LAB64;

LAB65:    xsi_vlog_unsigned_bit_combine(t68, 32, t112, 32, t139, 32);
    goto LAB69;

LAB67:    memcpy(t68, t112, 8);
    goto LAB69;

LAB72:    t167 = (t152 + 4);
    *((unsigned int *)t152) = 1;
    *((unsigned int *)t167) = 1;
    goto LAB73;

LAB74:    *((unsigned int *)t140) = 1;
    goto LAB77;

LAB76:    t174 = (t140 + 4);
    *((unsigned int *)t140) = 1;
    *((unsigned int *)t174) = 1;
    goto LAB77;

LAB78:    t181 = (t0 + 1048U);
    t182 = *((char **)t181);
    memset(t180, 0, 8);
    t181 = (t180 + 4);
    t183 = (t182 + 4);
    t184 = *((unsigned int *)t182);
    t185 = (t184 >> 16);
    *((unsigned int *)t180) = t185;
    t186 = *((unsigned int *)t183);
    t187 = (t186 >> 16);
    *((unsigned int *)t181) = t187;
    t188 = *((unsigned int *)t180);
    *((unsigned int *)t180) = (t188 & 255U);
    t189 = *((unsigned int *)t181);
    *((unsigned int *)t181) = (t189 & 255U);
    t191 = ((char*)((ng7)));
    t192 = (t0 + 1048U);
    t193 = *((char **)t192);
    memset(t194, 0, 8);
    t192 = (t194 + 4);
    t195 = (t193 + 4);
    t196 = *((unsigned int *)t193);
    t197 = (t196 >> 23);
    t198 = (t197 & 1);
    *((unsigned int *)t194) = t198;
    t199 = *((unsigned int *)t195);
    t200 = (t199 >> 23);
    t201 = (t200 & 1);
    *((unsigned int *)t192) = t201;
    xsi_vlog_mul_concat(t190, 24, 1, t191, 1U, t194, 1);
    xsi_vlogtype_concat(t179, 32, 32, 2U, t190, 24, t180, 8);
    goto LAB79;

LAB80:    t209 = (t0 + 1208U);
    t210 = *((char **)t209);
    memset(t208, 0, 8);
    t209 = (t208 + 4);
    t211 = (t210 + 4);
    t212 = *((unsigned int *)t210);
    t213 = (t212 >> 0);
    *((unsigned int *)t208) = t213;
    t214 = *((unsigned int *)t211);
    t215 = (t214 >> 0);
    *((unsigned int *)t209) = t215;
    t216 = *((unsigned int *)t208);
    *((unsigned int *)t208) = (t216 & 3U);
    t217 = *((unsigned int *)t209);
    *((unsigned int *)t209) = (t217 & 3U);
    t218 = ((char*)((ng9)));
    memset(t219, 0, 8);
    t220 = (t208 + 4);
    t221 = (t218 + 4);
    t222 = *((unsigned int *)t208);
    t223 = *((unsigned int *)t218);
    t224 = (t222 ^ t223);
    t225 = *((unsigned int *)t220);
    t226 = *((unsigned int *)t221);
    t227 = (t225 ^ t226);
    t228 = (t224 | t227);
    t229 = *((unsigned int *)t220);
    t230 = *((unsigned int *)t221);
    t231 = (t229 | t230);
    t232 = (~(t231));
    t233 = (t228 & t232);
    if (t233 != 0)
        goto LAB90;

LAB87:    if (t231 != 0)
        goto LAB89;

LAB88:    *((unsigned int *)t219) = 1;

LAB90:    memset(t207, 0, 8);
    t235 = (t219 + 4);
    t236 = *((unsigned int *)t235);
    t237 = (~(t236));
    t238 = *((unsigned int *)t219);
    t239 = (t238 & t237);
    t240 = (t239 & 1U);
    if (t240 != 0)
        goto LAB91;

LAB92:    if (*((unsigned int *)t235) != 0)
        goto LAB93;

LAB94:    t242 = (t207 + 4);
    t243 = *((unsigned int *)t207);
    t244 = *((unsigned int *)t242);
    t245 = (t243 || t244);
    if (t245 > 0)
        goto LAB95;

LAB96:    t269 = *((unsigned int *)t207);
    t270 = (~(t269));
    t271 = *((unsigned int *)t242);
    t272 = (t270 || t271);
    if (t272 > 0)
        goto LAB97;

LAB98:    if (*((unsigned int *)t242) > 0)
        goto LAB99;

LAB100:    if (*((unsigned int *)t207) > 0)
        goto LAB101;

LAB102:    memcpy(t206, t273, 8);

LAB103:    goto LAB81;

LAB82:    xsi_vlog_unsigned_bit_combine(t139, 32, t179, 32, t206, 32);
    goto LAB86;

LAB84:    memcpy(t139, t179, 8);
    goto LAB86;

LAB89:    t234 = (t219 + 4);
    *((unsigned int *)t219) = 1;
    *((unsigned int *)t234) = 1;
    goto LAB90;

LAB91:    *((unsigned int *)t207) = 1;
    goto LAB94;

LAB93:    t241 = (t207 + 4);
    *((unsigned int *)t207) = 1;
    *((unsigned int *)t241) = 1;
    goto LAB94;

LAB95:    t248 = (t0 + 1048U);
    t249 = *((char **)t248);
    memset(t247, 0, 8);
    t248 = (t247 + 4);
    t250 = (t249 + 4);
    t251 = *((unsigned int *)t249);
    t252 = (t251 >> 24);
    *((unsigned int *)t247) = t252;
    t253 = *((unsigned int *)t250);
    t254 = (t253 >> 24);
    *((unsigned int *)t248) = t254;
    t255 = *((unsigned int *)t247);
    *((unsigned int *)t247) = (t255 & 255U);
    t256 = *((unsigned int *)t248);
    *((unsigned int *)t248) = (t256 & 255U);
    t258 = ((char*)((ng7)));
    t259 = (t0 + 1048U);
    t260 = *((char **)t259);
    memset(t261, 0, 8);
    t259 = (t261 + 4);
    t262 = (t260 + 4);
    t263 = *((unsigned int *)t260);
    t264 = (t263 >> 31);
    t265 = (t264 & 1);
    *((unsigned int *)t261) = t265;
    t266 = *((unsigned int *)t262);
    t267 = (t266 >> 31);
    t268 = (t267 & 1);
    *((unsigned int *)t259) = t268;
    xsi_vlog_mul_concat(t257, 24, 1, t258, 1U, t261, 1);
    xsi_vlogtype_concat(t246, 32, 32, 2U, t257, 24, t247, 8);
    goto LAB96;

LAB97:    t273 = ((char*)((ng10)));
    goto LAB98;

LAB99:    xsi_vlog_unsigned_bit_combine(t206, 32, t246, 32, t273, 32);
    goto LAB103;

LAB101:    memcpy(t206, t246, 8);
    goto LAB103;

LAB106:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB108;

LAB107:    *((unsigned int *)t9) = 1;
    goto LAB108;

LAB110:    xsi_set_current_line(27, ng0);

LAB113:    xsi_set_current_line(28, ng0);
    t13 = (t0 + 1048U);
    t15 = *((char **)t13);
    t13 = (t0 + 1928);
    xsi_vlogvar_assign_value(t13, t15, 0, 0, 32);
    goto LAB112;

}


extern void work_m_00000000002261457312_3463502302_init()
{
	static char *pe[] = {(void *)Cont_10_0,(void *)Always_12_1};
	xsi_register_didat("work_m_00000000002261457312_3463502302", "isim/mips_txt_isim_beh.exe.sim/work/m_00000000002261457312_3463502302.didat");
	xsi_register_executes(pe);
}
