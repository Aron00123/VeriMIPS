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
static const char *ng0 = "C:/Users/Aron_/Desktop/lessons/SecondYear1/CO/Verilog_Project/P7_L0_weak_2023/DM.v";
static unsigned int ng1[] = {3U, 0U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {2U, 0U};
static int ng4[] = {16, 0};
static unsigned int ng5[] = {1U, 0U};
static int ng6[] = {24, 0};
static unsigned int ng7[] = {6U, 0U};
static unsigned int ng8[] = {15U, 0U};
static unsigned int ng9[] = {5U, 0U};
static unsigned int ng10[] = {12U, 0U};
static unsigned int ng11[] = {4U, 0U};
static unsigned int ng12[] = {8U, 0U};



static void Always_19_0(char *t0)
{
    char t9[8];
    char t16[8];
    char t17[8];
    char t26[8];
    char t30[8];
    char t39[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t27;
    char *t28;
    char *t29;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;

LAB0:    t1 = (t0 + 4128U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(19, ng0);
    t2 = (t0 + 5440);
    *((int *)t2) = 1;
    t3 = (t0 + 4160);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(19, ng0);

LAB5:    xsi_set_current_line(20, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t4, 10);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 10);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 10);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 10);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 10);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 10);
    if (t6 == 1)
        goto LAB17;

LAB18:
LAB20:
LAB19:    xsi_set_current_line(87, ng0);

LAB74:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 2728);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 2888);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB21:    goto LAB2;

LAB7:    xsi_set_current_line(21, ng0);

LAB22:    xsi_set_current_line(22, ng0);
    t7 = (t0 + 1368U);
    t8 = *((char **)t7);
    t7 = (t0 + 2728);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 32);
    xsi_set_current_line(23, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(24, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    goto LAB21;

LAB9:    xsi_set_current_line(26, ng0);

LAB23:    xsi_set_current_line(27, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    xsi_set_current_line(28, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t9 + 4);
    t4 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 0);
    *((unsigned int *)t9) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 0);
    *((unsigned int *)t2) = t13;
    t14 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t14 & 3U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 3U);

LAB24:    t7 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t9, 2, t7, 2);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t9, 2, t2, 2);
    if (t6 == 1)
        goto LAB27;

LAB28:
LAB30:
LAB29:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);

LAB31:    goto LAB21;

LAB11:    xsi_set_current_line(35, ng0);

LAB32:    xsi_set_current_line(36, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t16, 0, 8);
    t2 = (t16 + 4);
    t4 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 0);
    *((unsigned int *)t16) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 0);
    *((unsigned int *)t2) = t13;
    t14 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t14 & 3U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 3U);

LAB33:    t7 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t16, 2, t7, 2);
    if (t6 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t16, 2, t2, 2);
    if (t6 == 1)
        goto LAB36;

LAB37:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t16, 2, t2, 2);
    if (t6 == 1)
        goto LAB38;

LAB39:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t16, 2, t2, 2);
    if (t6 == 1)
        goto LAB40;

LAB41:
LAB43:
LAB42:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);

LAB44:    goto LAB21;

LAB13:    xsi_set_current_line(46, ng0);

LAB45:    xsi_set_current_line(47, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 2888);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB21;

LAB15:    xsi_set_current_line(51, ng0);

LAB46:    xsi_set_current_line(52, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t17, 0, 8);
    t2 = (t17 + 4);
    t4 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 1);
    t12 = (t11 & 1);
    *((unsigned int *)t17) = t12;
    t13 = *((unsigned int *)t4);
    t14 = (t13 >> 1);
    t15 = (t14 & 1);
    *((unsigned int *)t2) = t15;

LAB47:    t7 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t17, 1, t7, 1);
    if (t6 == 1)
        goto LAB48;

LAB49:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t17, 1, t2, 1);
    if (t6 == 1)
        goto LAB50;

LAB51:
LAB53:
LAB52:    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB54:    goto LAB21;

LAB17:    xsi_set_current_line(65, ng0);

LAB57:    xsi_set_current_line(66, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t26, 0, 8);
    t2 = (t26 + 4);
    t4 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 0);
    *((unsigned int *)t26) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 0);
    *((unsigned int *)t2) = t13;
    t14 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t14 & 3U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 3U);

LAB58:    t7 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t26, 2, t7, 2);
    if (t6 == 1)
        goto LAB59;

LAB60:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t26, 2, t2, 2);
    if (t6 == 1)
        goto LAB61;

LAB62:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t26, 2, t2, 2);
    if (t6 == 1)
        goto LAB63;

LAB64:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t26, 2, t2, 2);
    if (t6 == 1)
        goto LAB65;

LAB66:
LAB68:
LAB67:    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB69:    goto LAB21;

LAB25:    xsi_set_current_line(30, ng0);
    t8 = (t0 + 1688U);
    t18 = *((char **)t8);
    memset(t17, 0, 8);
    t8 = (t17 + 4);
    t19 = (t18 + 4);
    t20 = *((unsigned int *)t18);
    t21 = (t20 >> 0);
    *((unsigned int *)t17) = t21;
    t22 = *((unsigned int *)t19);
    t23 = (t22 >> 0);
    *((unsigned int *)t8) = t23;
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t24 & 65535U);
    t25 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t25 & 65535U);
    t27 = ((char*)((ng4)));
    t28 = (t0 + 1688U);
    t29 = *((char **)t28);
    memset(t30, 0, 8);
    t28 = (t30 + 4);
    t31 = (t29 + 4);
    t32 = *((unsigned int *)t29);
    t33 = (t32 >> 15);
    t34 = (t33 & 1);
    *((unsigned int *)t30) = t34;
    t35 = *((unsigned int *)t31);
    t36 = (t35 >> 15);
    t37 = (t36 & 1);
    *((unsigned int *)t28) = t37;
    xsi_vlog_mul_concat(t26, 16, 1, t27, 1U, t30, 1);
    xsi_vlogtype_concat(t16, 32, 32, 2U, t26, 16, t17, 16);
    t38 = (t0 + 3048);
    xsi_vlogvar_assign_value(t38, t16, 0, 0, 32);
    goto LAB31;

LAB27:    xsi_set_current_line(31, ng0);
    t3 = (t0 + 1688U);
    t4 = *((char **)t3);
    memset(t17, 0, 8);
    t3 = (t17 + 4);
    t7 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 16);
    *((unsigned int *)t17) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 16);
    *((unsigned int *)t3) = t13;
    t14 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t14 & 65535U);
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 65535U);
    t8 = ((char*)((ng4)));
    t18 = (t0 + 1688U);
    t19 = *((char **)t18);
    memset(t30, 0, 8);
    t18 = (t30 + 4);
    t27 = (t19 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (t20 >> 31);
    t22 = (t21 & 1);
    *((unsigned int *)t30) = t22;
    t23 = *((unsigned int *)t27);
    t24 = (t23 >> 31);
    t25 = (t24 & 1);
    *((unsigned int *)t18) = t25;
    xsi_vlog_mul_concat(t26, 16, 1, t8, 1U, t30, 1);
    xsi_vlogtype_concat(t16, 32, 32, 2U, t26, 16, t17, 16);
    t28 = (t0 + 3048);
    xsi_vlogvar_assign_value(t28, t16, 0, 0, 32);
    goto LAB31;

LAB34:    xsi_set_current_line(39, ng0);
    t8 = (t0 + 1688U);
    t18 = *((char **)t8);
    memset(t26, 0, 8);
    t8 = (t26 + 4);
    t19 = (t18 + 4);
    t20 = *((unsigned int *)t18);
    t21 = (t20 >> 0);
    *((unsigned int *)t26) = t21;
    t22 = *((unsigned int *)t19);
    t23 = (t22 >> 0);
    *((unsigned int *)t8) = t23;
    t24 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t24 & 255U);
    t25 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t25 & 255U);
    t27 = ((char*)((ng6)));
    t28 = (t0 + 1688U);
    t29 = *((char **)t28);
    memset(t39, 0, 8);
    t28 = (t39 + 4);
    t31 = (t29 + 4);
    t32 = *((unsigned int *)t29);
    t33 = (t32 >> 7);
    t34 = (t33 & 1);
    *((unsigned int *)t39) = t34;
    t35 = *((unsigned int *)t31);
    t36 = (t35 >> 7);
    t37 = (t36 & 1);
    *((unsigned int *)t28) = t37;
    xsi_vlog_mul_concat(t30, 24, 1, t27, 1U, t39, 1);
    xsi_vlogtype_concat(t17, 32, 32, 2U, t30, 24, t26, 8);
    t38 = (t0 + 3048);
    xsi_vlogvar_assign_value(t38, t17, 0, 0, 32);
    goto LAB44;

LAB36:    xsi_set_current_line(40, ng0);
    t3 = (t0 + 1688U);
    t4 = *((char **)t3);
    memset(t26, 0, 8);
    t3 = (t26 + 4);
    t7 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 8);
    *((unsigned int *)t26) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 8);
    *((unsigned int *)t3) = t13;
    t14 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t14 & 255U);
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 255U);
    t8 = ((char*)((ng6)));
    t18 = (t0 + 1688U);
    t19 = *((char **)t18);
    memset(t39, 0, 8);
    t18 = (t39 + 4);
    t27 = (t19 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (t20 >> 15);
    t22 = (t21 & 1);
    *((unsigned int *)t39) = t22;
    t23 = *((unsigned int *)t27);
    t24 = (t23 >> 15);
    t25 = (t24 & 1);
    *((unsigned int *)t18) = t25;
    xsi_vlog_mul_concat(t30, 24, 1, t8, 1U, t39, 1);
    xsi_vlogtype_concat(t17, 32, 32, 2U, t30, 24, t26, 8);
    t28 = (t0 + 3048);
    xsi_vlogvar_assign_value(t28, t17, 0, 0, 32);
    goto LAB44;

LAB38:    xsi_set_current_line(41, ng0);
    t3 = (t0 + 1688U);
    t4 = *((char **)t3);
    memset(t26, 0, 8);
    t3 = (t26 + 4);
    t7 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 16);
    *((unsigned int *)t26) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 16);
    *((unsigned int *)t3) = t13;
    t14 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t14 & 255U);
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 255U);
    t8 = ((char*)((ng6)));
    t18 = (t0 + 1688U);
    t19 = *((char **)t18);
    memset(t39, 0, 8);
    t18 = (t39 + 4);
    t27 = (t19 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (t20 >> 23);
    t22 = (t21 & 1);
    *((unsigned int *)t39) = t22;
    t23 = *((unsigned int *)t27);
    t24 = (t23 >> 23);
    t25 = (t24 & 1);
    *((unsigned int *)t18) = t25;
    xsi_vlog_mul_concat(t30, 24, 1, t8, 1U, t39, 1);
    xsi_vlogtype_concat(t17, 32, 32, 2U, t30, 24, t26, 8);
    t28 = (t0 + 3048);
    xsi_vlogvar_assign_value(t28, t17, 0, 0, 32);
    goto LAB44;

LAB40:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 1688U);
    t4 = *((char **)t3);
    memset(t26, 0, 8);
    t3 = (t26 + 4);
    t7 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 24);
    *((unsigned int *)t26) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 24);
    *((unsigned int *)t3) = t13;
    t14 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t14 & 255U);
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 255U);
    t8 = ((char*)((ng6)));
    t18 = (t0 + 1688U);
    t19 = *((char **)t18);
    memset(t39, 0, 8);
    t18 = (t39 + 4);
    t27 = (t19 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (t20 >> 31);
    t22 = (t21 & 1);
    *((unsigned int *)t39) = t22;
    t23 = *((unsigned int *)t27);
    t24 = (t23 >> 31);
    t25 = (t24 & 1);
    *((unsigned int *)t18) = t25;
    xsi_vlog_mul_concat(t30, 24, 1, t8, 1U, t39, 1);
    xsi_vlogtype_concat(t17, 32, 32, 2U, t30, 24, t26, 8);
    t28 = (t0 + 3048);
    xsi_vlogvar_assign_value(t28, t17, 0, 0, 32);
    goto LAB44;

LAB48:    xsi_set_current_line(54, ng0);

LAB55:    xsi_set_current_line(55, ng0);
    t8 = ((char*)((ng1)));
    t18 = (t0 + 3208);
    xsi_vlogvar_assign_value(t18, t8, 0, 0, 4);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    memset(t30, 0, 8);
    t2 = (t30 + 4);
    t4 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 0);
    *((unsigned int *)t30) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 0);
    *((unsigned int *)t2) = t13;
    t14 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t14 & 65535U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 65535U);
    t7 = ((char*)((ng2)));
    xsi_vlogtype_concat(t26, 32, 32, 2U, t7, 16, t30, 16);
    t8 = (t0 + 2888);
    xsi_vlogvar_assign_value(t8, t26, 0, 0, 32);
    goto LAB54;

LAB50:    xsi_set_current_line(58, ng0);

LAB56:    xsi_set_current_line(59, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 3208);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    memset(t30, 0, 8);
    t3 = (t30 + 4);
    t7 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 0);
    *((unsigned int *)t30) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 0);
    *((unsigned int *)t3) = t13;
    t14 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t14 & 65535U);
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 65535U);
    xsi_vlogtype_concat(t26, 32, 32, 2U, t30, 16, t2, 16);
    t8 = (t0 + 2888);
    xsi_vlogvar_assign_value(t8, t26, 0, 0, 32);
    goto LAB54;

LAB59:    xsi_set_current_line(68, ng0);

LAB70:    xsi_set_current_line(69, ng0);
    t8 = ((char*)((ng5)));
    t18 = (t0 + 3208);
    xsi_vlogvar_assign_value(t18, t8, 0, 0, 4);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    memset(t39, 0, 8);
    t2 = (t39 + 4);
    t4 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 0);
    *((unsigned int *)t39) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 0);
    *((unsigned int *)t2) = t13;
    t14 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t14 & 255U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 255U);
    t7 = ((char*)((ng2)));
    xsi_vlogtype_concat(t30, 32, 32, 2U, t7, 24, t39, 8);
    t8 = (t0 + 2888);
    xsi_vlogvar_assign_value(t8, t30, 0, 0, 32);
    goto LAB69;

LAB61:    xsi_set_current_line(72, ng0);

LAB71:    xsi_set_current_line(73, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 3208);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    memset(t39, 0, 8);
    t3 = (t39 + 4);
    t7 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 0);
    *((unsigned int *)t39) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 0);
    *((unsigned int *)t3) = t13;
    t14 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t14 & 255U);
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 255U);
    t8 = ((char*)((ng2)));
    xsi_vlogtype_concat(t30, 32, 32, 3U, t8, 16, t39, 8, t2, 8);
    t18 = (t0 + 2888);
    xsi_vlogvar_assign_value(t18, t30, 0, 0, 32);
    goto LAB69;

LAB63:    xsi_set_current_line(76, ng0);

LAB72:    xsi_set_current_line(77, ng0);
    t3 = ((char*)((ng11)));
    t4 = (t0 + 3208);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    memset(t39, 0, 8);
    t3 = (t39 + 4);
    t7 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 0);
    *((unsigned int *)t39) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 0);
    *((unsigned int *)t3) = t13;
    t14 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t14 & 255U);
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 255U);
    t8 = ((char*)((ng2)));
    xsi_vlogtype_concat(t30, 32, 32, 3U, t8, 8, t39, 8, t2, 16);
    t18 = (t0 + 2888);
    xsi_vlogvar_assign_value(t18, t30, 0, 0, 32);
    goto LAB69;

LAB65:    xsi_set_current_line(80, ng0);

LAB73:    xsi_set_current_line(81, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 3208);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    memset(t39, 0, 8);
    t3 = (t39 + 4);
    t7 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 0);
    *((unsigned int *)t39) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 0);
    *((unsigned int *)t3) = t13;
    t14 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t14 & 255U);
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 255U);
    xsi_vlogtype_concat(t30, 32, 32, 2U, t39, 8, t2, 24);
    t8 = (t0 + 2888);
    xsi_vlogvar_assign_value(t8, t30, 0, 0, 32);
    goto LAB69;

}

static void Cont_96_1(char *t0)
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

LAB0:    t1 = (t0 + 4376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5584);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 5456);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_97_2(char *t0)
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

LAB0:    t1 = (t0 + 4624U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5648);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 5472);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_98_3(char *t0)
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

LAB0:    t1 = (t0 + 4872U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5712);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 5488);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_99_4(char *t0)
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

LAB0:    t1 = (t0 + 5120U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5776);
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
    t18 = (t0 + 5504);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000003960283232_2924402094_init()
{
	static char *pe[] = {(void *)Always_19_0,(void *)Cont_96_1,(void *)Cont_97_2,(void *)Cont_98_3,(void *)Cont_99_4};
	xsi_register_didat("work_m_00000000003960283232_2924402094", "isim/mips_txt_isim_beh.exe.sim/work/m_00000000003960283232_2924402094.didat");
	xsi_register_executes(pe);
}
