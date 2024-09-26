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
static const char *ng0 = "C:/Users/Aron_/Desktop/lessons/SecondYear1/CO/Verilog_Project/P7_L0_weak_2023/MUDI.v";
static int ng1[] = {0, 0};
static int ng2[] = {0, 0, 0, 0};
static int ng3[] = {1, 0};
static int ng4[] = {5, 0};
static unsigned int ng5[] = {0U, 0U};
static int ng6[] = {2, 0};
static int ng7[] = {10, 0};
static int ng8[] = {3, 0};
static int ng9[] = {4, 0};



static void Always_22_0(char *t0)
{
    char t13[8];
    char t24[8];
    char t27[16];
    char t28[16];
    char t29[16];
    char t30[8];
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
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t25;
    int t26;

LAB0:    t1 = (t0 + 4448U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(22, ng0);
    t2 = (t0 + 5512);
    *((int *)t2) = 1;
    t3 = (t0 + 4480);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(22, ng0);

LAB5:    xsi_set_current_line(23, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t11 = ((char*)((ng1)));
    memset(t13, 0, 8);
    xsi_vlog_signed_greater(t13, 32, t4, 32, t11, 32);
    t12 = (t13 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB42;

LAB43:
LAB44:
LAB20:
LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(23, ng0);

LAB9:    xsi_set_current_line(24, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3528);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);
    xsi_set_current_line(25, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(26, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(27, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    goto LAB8;

LAB10:    xsi_set_current_line(28, ng0);

LAB13:    xsi_set_current_line(29, ng0);
    t4 = (t0 + 3528);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_signed_greater(t13, 32, t11, 32, t12, 32);
    t14 = (t13 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t13);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB14;

LAB15:
LAB16:    goto LAB12;

LAB14:    xsi_set_current_line(29, ng0);

LAB17:    xsi_set_current_line(30, ng0);
    t20 = (t0 + 3528);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng3)));
    memset(t24, 0, 8);
    xsi_vlog_signed_minus(t24, 32, t22, 32, t23, 32);
    t25 = (t0 + 3528);
    xsi_vlogvar_assign_value(t25, t24, 0, 0, 32);
    goto LAB16;

LAB18:    xsi_set_current_line(33, ng0);

LAB21:    xsi_set_current_line(34, ng0);
    t4 = (t0 + 1688U);
    t5 = *((char **)t4);

LAB22:    t4 = ((char*)((ng1)));
    t26 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 32);
    if (t26 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng3)));
    t26 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 32);
    if (t26 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng6)));
    t26 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 32);
    if (t26 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng8)));
    t26 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 32);
    if (t26 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng9)));
    t26 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 32);
    if (t26 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng4)));
    t26 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 32);
    if (t26 == 1)
        goto LAB33;

LAB34:
LAB35:    goto LAB20;

LAB23:    xsi_set_current_line(35, ng0);

LAB36:    xsi_set_current_line(36, ng0);
    t11 = (t0 + 2008U);
    t12 = *((char **)t11);
    xsi_vlogtype_sign_extend(t27, 64, t12, 32);
    t11 = (t0 + 2168U);
    t14 = *((char **)t11);
    xsi_vlogtype_sign_extend(t28, 64, t14, 32);
    xsi_vlog_signed_multiply(t29, 64, t27, 64, t28, 64);
    t11 = (t0 + 3048);
    xsi_vlogvar_assign_value(t11, t29, 0, 0, 64);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t11 = (t13 + 4);
    t12 = (t4 + 8);
    t14 = (t4 + 12);
    t6 = *((unsigned int *)t12);
    t7 = (t6 >> 0);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t14);
    t9 = (t8 >> 0);
    *((unsigned int *)t11) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 4294967295U);
    t15 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t15 & 4294967295U);
    t20 = (t0 + 3208);
    xsi_vlogvar_assign_value(t20, t13, 0, 0, 32);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t11 = (t13 + 4);
    t12 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t12);
    t9 = (t8 >> 0);
    *((unsigned int *)t11) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 4294967295U);
    t15 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t15 & 4294967295U);
    t14 = (t0 + 3368);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 32);
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB35;

LAB25:    xsi_set_current_line(41, ng0);

LAB37:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 2008U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng5)));
    xsi_vlogtype_concat(t27, 64, 33, 2U, t3, 1, t4, 32);
    t11 = (t0 + 2168U);
    t12 = *((char **)t11);
    t11 = ((char*)((ng5)));
    xsi_vlogtype_concat(t28, 64, 33, 2U, t11, 1, t12, 32);
    xsi_vlog_unsigned_multiply(t29, 64, t27, 64, t28, 64);
    t14 = (t0 + 3048);
    xsi_vlogvar_assign_value(t14, t29, 0, 0, 64);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t11 = (t13 + 4);
    t12 = (t4 + 8);
    t14 = (t4 + 12);
    t6 = *((unsigned int *)t12);
    t7 = (t6 >> 0);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t14);
    t9 = (t8 >> 0);
    *((unsigned int *)t11) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 4294967295U);
    t15 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t15 & 4294967295U);
    t20 = (t0 + 3208);
    xsi_vlogvar_assign_value(t20, t13, 0, 0, 32);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t11 = (t13 + 4);
    t12 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t12);
    t9 = (t8 >> 0);
    *((unsigned int *)t11) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 4294967295U);
    t15 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t15 & 4294967295U);
    t14 = (t0 + 3368);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 32);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB35;

LAB27:    xsi_set_current_line(47, ng0);

LAB38:    xsi_set_current_line(48, ng0);
    t3 = (t0 + 2008U);
    t4 = *((char **)t3);
    t3 = (t0 + 2168U);
    t11 = *((char **)t3);
    memset(t30, 0, 8);
    xsi_vlog_signed_mod(t30, 32, t4, 32, t11, 32);
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t30, 0, 0, 32);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 2168U);
    t4 = *((char **)t2);
    memset(t30, 0, 8);
    xsi_vlog_signed_divide(t30, 32, t3, 32, t4, 32);
    t2 = (t0 + 3368);
    xsi_vlogvar_assign_value(t2, t30, 0, 0, 32);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB35;

LAB29:    xsi_set_current_line(52, ng0);

LAB39:    xsi_set_current_line(53, ng0);
    t3 = (t0 + 2008U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng5)));
    xsi_vlogtype_concat(t27, 33, 33, 2U, t3, 1, t4, 32);
    t11 = (t0 + 2168U);
    t12 = *((char **)t11);
    t11 = ((char*)((ng5)));
    xsi_vlogtype_concat(t28, 33, 33, 2U, t11, 1, t12, 32);
    xsi_vlog_unsigned_mod(t29, 33, t27, 33, t28, 33);
    t14 = (t0 + 3208);
    xsi_vlogvar_assign_value(t14, t29, 0, 0, 32);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    xsi_vlogtype_concat(t27, 33, 33, 2U, t2, 1, t3, 32);
    t4 = (t0 + 2168U);
    t11 = *((char **)t4);
    t4 = ((char*)((ng5)));
    xsi_vlogtype_concat(t28, 33, 33, 2U, t4, 1, t11, 32);
    xsi_vlog_unsigned_divide(t29, 33, t27, 33, t28, 33);
    t12 = (t0 + 3368);
    xsi_vlogvar_assign_value(t12, t29, 0, 0, 32);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB35;

LAB31:    xsi_set_current_line(57, ng0);

LAB40:    xsi_set_current_line(58, ng0);
    t3 = (t0 + 2008U);
    t4 = *((char **)t3);
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    goto LAB35;

LAB33:    xsi_set_current_line(60, ng0);

LAB41:    xsi_set_current_line(61, ng0);
    t3 = (t0 + 2008U);
    t4 = *((char **)t3);
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    goto LAB35;

LAB42:    xsi_set_current_line(64, ng0);

LAB45:    xsi_set_current_line(65, ng0);
    t14 = (t0 + 3528);
    t20 = (t14 + 56U);
    t21 = *((char **)t20);
    t22 = ((char*)((ng3)));
    memset(t24, 0, 8);
    xsi_vlog_signed_minus(t24, 32, t21, 32, t22, 32);
    t23 = (t0 + 3528);
    xsi_vlogvar_assign_value(t23, t24, 0, 0, 32);
    goto LAB44;

}

static void Cont_69_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t8[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
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
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;

LAB0:    t1 = (t0 + 4696U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 3528);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_signed_equal(t8, 32, t6, 32, t7, 32);
    memset(t4, 0, 8);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t9) != 0)
        goto LAB6;

LAB7:    t16 = (t4 + 4);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t16);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB8;

LAB9:    t21 = *((unsigned int *)t4);
    t22 = (~(t21));
    t23 = *((unsigned int *)t16);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t16) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t25, 8);

LAB16:    t26 = (t0 + 5640);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memset(t30, 0, 8);
    t31 = 1U;
    t32 = t31;
    t33 = (t3 + 4);
    t34 = *((unsigned int *)t3);
    t31 = (t31 & t34);
    t35 = *((unsigned int *)t33);
    t32 = (t32 & t35);
    t36 = (t30 + 4);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t37 | t31);
    t38 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t38 | t32);
    xsi_driver_vfirst_trans(t26, 0, 0);
    t39 = (t0 + 5528);
    *((int *)t39) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t15 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB7;

LAB8:    t20 = ((char*)((ng1)));
    goto LAB9;

LAB10:    t25 = ((char*)((ng3)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t20, 32, t25, 32);
    goto LAB16;

LAB14:    memcpy(t3, t20, 8);
    goto LAB16;

}

static void Cont_70_2(char *t0)
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

LAB0:    t1 = (t0 + 4944U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5704);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 5544);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_71_3(char *t0)
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

LAB0:    t1 = (t0 + 5192U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5768);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 5560);
    *((int *)t10) = 1;

LAB1:    return;
}


extern void work_m_00000000002140506413_0394168537_init()
{
	static char *pe[] = {(void *)Always_22_0,(void *)Cont_69_1,(void *)Cont_70_2,(void *)Cont_71_3};
	xsi_register_didat("work_m_00000000002140506413_0394168537", "isim/mips_txt_isim_beh.exe.sim/work/m_00000000002140506413_0394168537.didat");
	xsi_register_executes(pe);
}
