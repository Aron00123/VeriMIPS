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
static const char *ng0 = "C:/Users/Aron_/Desktop/lessons/SecondYear1/CO/Verilog_Project/P7_L0_weak_2023_TEST/getByteEn.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {6U, 0U};
static unsigned int ng3[] = {15U, 0U};
static unsigned int ng4[] = {5U, 0U};
static int ng5[] = {1, 0};
static unsigned int ng6[] = {12U, 0U};
static unsigned int ng7[] = {3U, 0U};
static unsigned int ng8[] = {4U, 0U};
static int ng9[] = {3, 0};
static unsigned int ng10[] = {8U, 0U};
static int ng11[] = {2, 0};
static unsigned int ng12[] = {2U, 0U};
static unsigned int ng13[] = {1U, 0U};



static void Cont_11_0(char *t0)
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
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(11, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3512);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 15U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 3);
    t18 = (t0 + 3416);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_14_1(char *t0)
{
    char t6[8];
    char t31[8];
    char t32[8];
    char t33[8];
    char t54[8];
    char t55[8];
    char t56[8];
    char t63[8];
    char t95[8];
    char t96[8];
    char t97[8];
    char t108[8];
    char t140[8];
    char t141[8];
    char t142[8];
    char t153[8];
    char *t1;
    char *t2;
    char *t3;
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
    int t30;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t64;
    char *t65;
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
    unsigned int t76;
    unsigned int t77;
    char *t78;
    char *t79;
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
    char *t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t98;
    char *t99;
    char *t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t107;
    char *t109;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    char *t123;
    char *t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    char *t130;
    char *t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    char *t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    char *t143;
    char *t144;
    char *t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    char *t152;
    char *t154;
    char *t155;
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
    unsigned int t167;
    char *t168;
    char *t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    char *t175;
    char *t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    char *t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    char *t185;
    char *t186;

LAB0:    t1 = (t0 + 3096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(14, ng0);
    t2 = (t0 + 3432);
    *((int *)t2) = 1;
    t3 = (t0 + 3128);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(14, ng0);

LAB5:    xsi_set_current_line(15, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
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
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(18, ng0);

LAB14:    xsi_set_current_line(19, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);

LAB15:    t2 = ((char*)((ng2)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 10, t2, 10);
    if (t30 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng4)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 10, t2, 10);
    if (t30 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng8)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 10, t2, 10);
    if (t30 == 1)
        goto LAB20;

LAB21:
LAB22:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(15, ng0);

LAB13:    xsi_set_current_line(16, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 1928);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 4);
    goto LAB12;

LAB16:    xsi_set_current_line(20, ng0);

LAB23:    xsi_set_current_line(21, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 1928);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    goto LAB22;

LAB18:    xsi_set_current_line(23, ng0);

LAB24:    xsi_set_current_line(24, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1008U);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t21 = ((char*)((ng5)));
    xsi_vlog_generic_get_index_select_value(t32, 32, t5, t8, 2, t21, 32, 1);
    t22 = ((char*)((ng5)));
    memset(t33, 0, 8);
    t28 = (t32 + 4);
    t29 = (t22 + 4);
    t9 = *((unsigned int *)t32);
    t10 = *((unsigned int *)t22);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t28);
    t13 = *((unsigned int *)t29);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t28);
    t17 = *((unsigned int *)t29);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB28;

LAB25:    if (t18 != 0)
        goto LAB27;

LAB26:    *((unsigned int *)t33) = 1;

LAB28:    memset(t31, 0, 8);
    t35 = (t33 + 4);
    t23 = *((unsigned int *)t35);
    t24 = (~(t23));
    t25 = *((unsigned int *)t33);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t35) != 0)
        goto LAB31;

LAB32:    t37 = (t31 + 4);
    t38 = *((unsigned int *)t31);
    t39 = *((unsigned int *)t37);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB33;

LAB34:    t42 = *((unsigned int *)t31);
    t43 = (~(t42));
    t44 = *((unsigned int *)t37);
    t45 = (t43 || t44);
    if (t45 > 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t37) > 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t31) > 0)
        goto LAB39;

LAB40:    memcpy(t6, t46, 8);

LAB41:    t47 = (t0 + 1928);
    xsi_vlogvar_assign_value(t47, t6, 0, 0, 4);
    goto LAB22;

LAB20:    xsi_set_current_line(26, ng0);

LAB42:    xsi_set_current_line(27, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    memset(t32, 0, 8);
    t4 = (t32 + 4);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    *((unsigned int *)t32) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t4) = t12;
    t13 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t13 & 3U);
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 3U);
    t8 = ((char*)((ng9)));
    memset(t33, 0, 8);
    t21 = (t32 + 4);
    t22 = (t8 + 4);
    t15 = *((unsigned int *)t32);
    t16 = *((unsigned int *)t8);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t21);
    t19 = *((unsigned int *)t22);
    t20 = (t18 ^ t19);
    t23 = (t17 | t20);
    t24 = *((unsigned int *)t21);
    t25 = *((unsigned int *)t22);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t38 = (t23 & t27);
    if (t38 != 0)
        goto LAB46;

LAB43:    if (t26 != 0)
        goto LAB45;

LAB44:    *((unsigned int *)t33) = 1;

LAB46:    memset(t31, 0, 8);
    t29 = (t33 + 4);
    t39 = *((unsigned int *)t29);
    t40 = (~(t39));
    t42 = *((unsigned int *)t33);
    t43 = (t42 & t40);
    t44 = (t43 & 1U);
    if (t44 != 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t29) != 0)
        goto LAB49;

LAB50:    t35 = (t31 + 4);
    t45 = *((unsigned int *)t31);
    t48 = *((unsigned int *)t35);
    t49 = (t45 || t48);
    if (t49 > 0)
        goto LAB51;

LAB52:    t50 = *((unsigned int *)t31);
    t51 = (~(t50));
    t52 = *((unsigned int *)t35);
    t53 = (t51 || t52);
    if (t53 > 0)
        goto LAB53;

LAB54:    if (*((unsigned int *)t35) > 0)
        goto LAB55;

LAB56:    if (*((unsigned int *)t31) > 0)
        goto LAB57;

LAB58:    memcpy(t6, t54, 8);

LAB59:    t186 = (t0 + 1928);
    xsi_vlogvar_assign_value(t186, t6, 0, 0, 4);
    goto LAB22;

LAB27:    t34 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB28;

LAB29:    *((unsigned int *)t31) = 1;
    goto LAB32;

LAB31:    t36 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB32;

LAB33:    t41 = ((char*)((ng6)));
    goto LAB34;

LAB35:    t46 = ((char*)((ng7)));
    goto LAB36;

LAB37:    xsi_vlog_unsigned_bit_combine(t6, 4, t41, 4, t46, 4);
    goto LAB41;

LAB39:    memcpy(t6, t41, 8);
    goto LAB41;

LAB45:    t28 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB46;

LAB47:    *((unsigned int *)t31) = 1;
    goto LAB50;

LAB49:    t34 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB50;

LAB51:    t36 = ((char*)((ng10)));
    goto LAB52;

LAB53:    t37 = (t0 + 1048U);
    t41 = *((char **)t37);
    memset(t56, 0, 8);
    t37 = (t56 + 4);
    t46 = (t41 + 4);
    t57 = *((unsigned int *)t41);
    t58 = (t57 >> 0);
    *((unsigned int *)t56) = t58;
    t59 = *((unsigned int *)t46);
    t60 = (t59 >> 0);
    *((unsigned int *)t37) = t60;
    t61 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t61 & 3U);
    t62 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t62 & 3U);
    t47 = ((char*)((ng11)));
    memset(t63, 0, 8);
    t64 = (t56 + 4);
    t65 = (t47 + 4);
    t66 = *((unsigned int *)t56);
    t67 = *((unsigned int *)t47);
    t68 = (t66 ^ t67);
    t69 = *((unsigned int *)t64);
    t70 = *((unsigned int *)t65);
    t71 = (t69 ^ t70);
    t72 = (t68 | t71);
    t73 = *((unsigned int *)t64);
    t74 = *((unsigned int *)t65);
    t75 = (t73 | t74);
    t76 = (~(t75));
    t77 = (t72 & t76);
    if (t77 != 0)
        goto LAB63;

LAB60:    if (t75 != 0)
        goto LAB62;

LAB61:    *((unsigned int *)t63) = 1;

LAB63:    memset(t55, 0, 8);
    t79 = (t63 + 4);
    t80 = *((unsigned int *)t79);
    t81 = (~(t80));
    t82 = *((unsigned int *)t63);
    t83 = (t82 & t81);
    t84 = (t83 & 1U);
    if (t84 != 0)
        goto LAB64;

LAB65:    if (*((unsigned int *)t79) != 0)
        goto LAB66;

LAB67:    t86 = (t55 + 4);
    t87 = *((unsigned int *)t55);
    t88 = *((unsigned int *)t86);
    t89 = (t87 || t88);
    if (t89 > 0)
        goto LAB68;

LAB69:    t91 = *((unsigned int *)t55);
    t92 = (~(t91));
    t93 = *((unsigned int *)t86);
    t94 = (t92 || t93);
    if (t94 > 0)
        goto LAB70;

LAB71:    if (*((unsigned int *)t86) > 0)
        goto LAB72;

LAB73:    if (*((unsigned int *)t55) > 0)
        goto LAB74;

LAB75:    memcpy(t54, t95, 8);

LAB76:    goto LAB54;

LAB55:    xsi_vlog_unsigned_bit_combine(t6, 32, t36, 32, t54, 32);
    goto LAB59;

LAB57:    memcpy(t6, t36, 8);
    goto LAB59;

LAB62:    t78 = (t63 + 4);
    *((unsigned int *)t63) = 1;
    *((unsigned int *)t78) = 1;
    goto LAB63;

LAB64:    *((unsigned int *)t55) = 1;
    goto LAB67;

LAB66:    t85 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t85) = 1;
    goto LAB67;

LAB68:    t90 = ((char*)((ng8)));
    goto LAB69;

LAB70:    t98 = (t0 + 1048U);
    t99 = *((char **)t98);
    memset(t97, 0, 8);
    t98 = (t97 + 4);
    t100 = (t99 + 4);
    t101 = *((unsigned int *)t99);
    t102 = (t101 >> 0);
    *((unsigned int *)t97) = t102;
    t103 = *((unsigned int *)t100);
    t104 = (t103 >> 0);
    *((unsigned int *)t98) = t104;
    t105 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t105 & 3U);
    t106 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t106 & 3U);
    t107 = ((char*)((ng5)));
    memset(t108, 0, 8);
    t109 = (t97 + 4);
    t110 = (t107 + 4);
    t111 = *((unsigned int *)t97);
    t112 = *((unsigned int *)t107);
    t113 = (t111 ^ t112);
    t114 = *((unsigned int *)t109);
    t115 = *((unsigned int *)t110);
    t116 = (t114 ^ t115);
    t117 = (t113 | t116);
    t118 = *((unsigned int *)t109);
    t119 = *((unsigned int *)t110);
    t120 = (t118 | t119);
    t121 = (~(t120));
    t122 = (t117 & t121);
    if (t122 != 0)
        goto LAB80;

LAB77:    if (t120 != 0)
        goto LAB79;

LAB78:    *((unsigned int *)t108) = 1;

LAB80:    memset(t96, 0, 8);
    t124 = (t108 + 4);
    t125 = *((unsigned int *)t124);
    t126 = (~(t125));
    t127 = *((unsigned int *)t108);
    t128 = (t127 & t126);
    t129 = (t128 & 1U);
    if (t129 != 0)
        goto LAB81;

LAB82:    if (*((unsigned int *)t124) != 0)
        goto LAB83;

LAB84:    t131 = (t96 + 4);
    t132 = *((unsigned int *)t96);
    t133 = *((unsigned int *)t131);
    t134 = (t132 || t133);
    if (t134 > 0)
        goto LAB85;

LAB86:    t136 = *((unsigned int *)t96);
    t137 = (~(t136));
    t138 = *((unsigned int *)t131);
    t139 = (t137 || t138);
    if (t139 > 0)
        goto LAB87;

LAB88:    if (*((unsigned int *)t131) > 0)
        goto LAB89;

LAB90:    if (*((unsigned int *)t96) > 0)
        goto LAB91;

LAB92:    memcpy(t95, t140, 8);

LAB93:    goto LAB71;

LAB72:    xsi_vlog_unsigned_bit_combine(t54, 32, t90, 32, t95, 32);
    goto LAB76;

LAB74:    memcpy(t54, t90, 8);
    goto LAB76;

LAB79:    t123 = (t108 + 4);
    *((unsigned int *)t108) = 1;
    *((unsigned int *)t123) = 1;
    goto LAB80;

LAB81:    *((unsigned int *)t96) = 1;
    goto LAB84;

LAB83:    t130 = (t96 + 4);
    *((unsigned int *)t96) = 1;
    *((unsigned int *)t130) = 1;
    goto LAB84;

LAB85:    t135 = ((char*)((ng12)));
    goto LAB86;

LAB87:    t143 = (t0 + 1048U);
    t144 = *((char **)t143);
    memset(t142, 0, 8);
    t143 = (t142 + 4);
    t145 = (t144 + 4);
    t146 = *((unsigned int *)t144);
    t147 = (t146 >> 0);
    *((unsigned int *)t142) = t147;
    t148 = *((unsigned int *)t145);
    t149 = (t148 >> 0);
    *((unsigned int *)t143) = t149;
    t150 = *((unsigned int *)t142);
    *((unsigned int *)t142) = (t150 & 3U);
    t151 = *((unsigned int *)t143);
    *((unsigned int *)t143) = (t151 & 3U);
    t152 = ((char*)((ng1)));
    memset(t153, 0, 8);
    t154 = (t142 + 4);
    t155 = (t152 + 4);
    t156 = *((unsigned int *)t142);
    t157 = *((unsigned int *)t152);
    t158 = (t156 ^ t157);
    t159 = *((unsigned int *)t154);
    t160 = *((unsigned int *)t155);
    t161 = (t159 ^ t160);
    t162 = (t158 | t161);
    t163 = *((unsigned int *)t154);
    t164 = *((unsigned int *)t155);
    t165 = (t163 | t164);
    t166 = (~(t165));
    t167 = (t162 & t166);
    if (t167 != 0)
        goto LAB97;

LAB94:    if (t165 != 0)
        goto LAB96;

LAB95:    *((unsigned int *)t153) = 1;

LAB97:    memset(t141, 0, 8);
    t169 = (t153 + 4);
    t170 = *((unsigned int *)t169);
    t171 = (~(t170));
    t172 = *((unsigned int *)t153);
    t173 = (t172 & t171);
    t174 = (t173 & 1U);
    if (t174 != 0)
        goto LAB98;

LAB99:    if (*((unsigned int *)t169) != 0)
        goto LAB100;

LAB101:    t176 = (t141 + 4);
    t177 = *((unsigned int *)t141);
    t178 = *((unsigned int *)t176);
    t179 = (t177 || t178);
    if (t179 > 0)
        goto LAB102;

LAB103:    t181 = *((unsigned int *)t141);
    t182 = (~(t181));
    t183 = *((unsigned int *)t176);
    t184 = (t182 || t183);
    if (t184 > 0)
        goto LAB104;

LAB105:    if (*((unsigned int *)t176) > 0)
        goto LAB106;

LAB107:    if (*((unsigned int *)t141) > 0)
        goto LAB108;

LAB109:    memcpy(t140, t185, 8);

LAB110:    goto LAB88;

LAB89:    xsi_vlog_unsigned_bit_combine(t95, 32, t135, 32, t140, 32);
    goto LAB93;

LAB91:    memcpy(t95, t135, 8);
    goto LAB93;

LAB96:    t168 = (t153 + 4);
    *((unsigned int *)t153) = 1;
    *((unsigned int *)t168) = 1;
    goto LAB97;

LAB98:    *((unsigned int *)t141) = 1;
    goto LAB101;

LAB100:    t175 = (t141 + 4);
    *((unsigned int *)t141) = 1;
    *((unsigned int *)t175) = 1;
    goto LAB101;

LAB102:    t180 = ((char*)((ng13)));
    goto LAB103;

LAB104:    t185 = ((char*)((ng1)));
    goto LAB105;

LAB106:    xsi_vlog_unsigned_bit_combine(t140, 32, t180, 32, t185, 32);
    goto LAB110;

LAB108:    memcpy(t140, t180, 8);
    goto LAB110;

}


extern void work_m_00000000003496421247_0798679063_init()
{
	static char *pe[] = {(void *)Cont_11_0,(void *)Always_14_1};
	xsi_register_didat("work_m_00000000003496421247_0798679063", "isim/mips_txt_isim_beh.exe.sim/work/m_00000000003496421247_0798679063.didat");
	xsi_register_executes(pe);
}
