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
static int ng1[] = {0, 0, 0, 0};
static int ng2[] = {5, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {0U, 0U};
static int ng5[] = {2, 0};
static int ng6[] = {10, 0};
static int ng7[] = {3, 0};
static int ng8[] = {4, 0};



static void Always_21_0(char *t0)
{
    char t14[16];
    char t15[16];
    char t17[16];
    char t18[8];
    char t21[8];
    char t22[8];
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
    int t13;
    char *t16;
    unsigned int t19;
    char *t20;
    char *t23;
    char *t24;
    char *t25;

LAB0:    t1 = (t0 + 4288U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 5352);
    *((int *)t2) = 1;
    t3 = (t0 + 4320);
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

LAB7:    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t11 = ((char*)((ng0)));
    memset(t18, 0, 8);
    xsi_vlog_signed_greater(t18, 32, t4, 32, t11, 32);
    t12 = (t18 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (~(t6));
    t8 = *((unsigned int *)t18);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB34;

LAB35:
LAB36:
LAB12:
LAB8:    goto LAB2;

LAB6:
LAB9:    t11 = ((char*)((ng0)));
    t12 = (t0 + 3368);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    goto LAB8;

LAB10:
LAB13:    t4 = (t0 + 1528U);
    t5 = *((char **)t4);

LAB14:    t4 = ((char*)((ng0)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 32);
    if (t13 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 32);
    if (t13 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 32);
    if (t13 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng7)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 32);
    if (t13 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng8)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 32);
    if (t13 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 32);
    if (t13 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB12;

LAB15:
LAB28:    t11 = (t0 + 1848U);
    t12 = *((char **)t11);
    xsi_vlogtype_sign_extend(t14, 64, t12, 32);
    t11 = (t0 + 2008U);
    t16 = *((char **)t11);
    xsi_vlogtype_sign_extend(t15, 64, t16, 32);
    xsi_vlog_signed_multiply(t17, 64, t14, 64, t15, 64);
    t11 = (t0 + 2888);
    xsi_vlogvar_assign_value(t11, t17, 0, 0, 64);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t18, 0, 8);
    t11 = (t18 + 4);
    t12 = (t4 + 8);
    t16 = (t4 + 12);
    t6 = *((unsigned int *)t12);
    t7 = (t6 >> 0);
    *((unsigned int *)t18) = t7;
    t8 = *((unsigned int *)t16);
    t9 = (t8 >> 0);
    *((unsigned int *)t11) = t9;
    t10 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t10 & 4294967295U);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t19 & 4294967295U);
    t20 = (t0 + 3048);
    xsi_vlogvar_assign_value(t20, t18, 0, 0, 32);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t18, 0, 8);
    t11 = (t18 + 4);
    t12 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t18) = t7;
    t8 = *((unsigned int *)t12);
    t9 = (t8 >> 0);
    *((unsigned int *)t11) = t9;
    t10 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t10 & 4294967295U);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t19 & 4294967295U);
    t16 = (t0 + 3208);
    xsi_vlogvar_assign_value(t16, t18, 0, 0, 32);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB27;

LAB17:
LAB29:    t3 = (t0 + 1848U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng4)));
    xsi_vlogtype_concat(t14, 64, 33, 2U, t3, 1, t4, 32);
    t11 = (t0 + 2008U);
    t12 = *((char **)t11);
    t11 = ((char*)((ng4)));
    xsi_vlogtype_concat(t15, 64, 33, 2U, t11, 1, t12, 32);
    xsi_vlog_unsigned_multiply(t17, 64, t14, 64, t15, 64);
    t16 = (t0 + 2888);
    xsi_vlogvar_assign_value(t16, t17, 0, 0, 64);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t18, 0, 8);
    t11 = (t18 + 4);
    t12 = (t4 + 8);
    t16 = (t4 + 12);
    t6 = *((unsigned int *)t12);
    t7 = (t6 >> 0);
    *((unsigned int *)t18) = t7;
    t8 = *((unsigned int *)t16);
    t9 = (t8 >> 0);
    *((unsigned int *)t11) = t9;
    t10 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t10 & 4294967295U);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t19 & 4294967295U);
    t20 = (t0 + 3048);
    xsi_vlogvar_assign_value(t20, t18, 0, 0, 32);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t18, 0, 8);
    t11 = (t18 + 4);
    t12 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t18) = t7;
    t8 = *((unsigned int *)t12);
    t9 = (t8 >> 0);
    *((unsigned int *)t11) = t9;
    t10 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t10 & 4294967295U);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t19 & 4294967295U);
    t16 = (t0 + 3208);
    xsi_vlogvar_assign_value(t16, t18, 0, 0, 32);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB27;

LAB19:
LAB30:    t3 = (t0 + 1848U);
    t4 = *((char **)t3);
    t3 = (t0 + 2008U);
    t11 = *((char **)t3);
    memset(t22, 0, 8);
    xsi_vlog_signed_mod(t22, 32, t4, 32, t11, 32);
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t22, 0, 0, 32);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 2008U);
    t4 = *((char **)t2);
    memset(t22, 0, 8);
    xsi_vlog_signed_divide(t22, 32, t3, 32, t4, 32);
    t2 = (t0 + 3208);
    xsi_vlogvar_assign_value(t2, t22, 0, 0, 32);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB27;

LAB21:
LAB31:    t3 = (t0 + 1848U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng4)));
    xsi_vlogtype_concat(t14, 33, 33, 2U, t3, 1, t4, 32);
    t11 = (t0 + 2008U);
    t12 = *((char **)t11);
    t11 = ((char*)((ng4)));
    xsi_vlogtype_concat(t15, 33, 33, 2U, t11, 1, t12, 32);
    xsi_vlog_unsigned_mod(t17, 33, t14, 33, t15, 33);
    t16 = (t0 + 3048);
    xsi_vlogvar_assign_value(t16, t17, 0, 0, 32);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    xsi_vlogtype_concat(t14, 33, 33, 2U, t2, 1, t3, 32);
    t4 = (t0 + 2008U);
    t11 = *((char **)t4);
    t4 = ((char*)((ng4)));
    xsi_vlogtype_concat(t15, 33, 33, 2U, t4, 1, t11, 32);
    xsi_vlog_unsigned_divide(t17, 33, t14, 33, t15, 33);
    t12 = (t0 + 3208);
    xsi_vlogvar_assign_value(t12, t17, 0, 0, 32);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB27;

LAB23:
LAB32:    t3 = (t0 + 1848U);
    t4 = *((char **)t3);
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    goto LAB27;

LAB25:
LAB33:    t3 = (t0 + 1848U);
    t4 = *((char **)t3);
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    goto LAB27;

LAB34:
LAB37:    t16 = (t0 + 3368);
    t20 = (t16 + 56U);
    t23 = *((char **)t20);
    t24 = ((char*)((ng3)));
    memset(t21, 0, 8);
    xsi_vlog_signed_minus(t21, 32, t23, 32, t24, 32);
    t25 = (t0 + 3368);
    xsi_vlogvar_assign_value(t25, t21, 0, 0, 32);
    goto LAB36;

}

static void Cont_63_1(char *t0)
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

LAB0:    t1 = (t0 + 4536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3368);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng0)));
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

LAB16:    t26 = (t0 + 5480);
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
    t39 = (t0 + 5368);
    *((int *)t39) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t15 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB7;

LAB8:    t20 = ((char*)((ng0)));
    goto LAB9;

LAB10:    t25 = ((char*)((ng3)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t20, 32, t25, 32);
    goto LAB16;

LAB14:    memcpy(t3, t20, 8);
    goto LAB16;

}

static void Cont_64_2(char *t0)
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

LAB0:    t1 = (t0 + 4784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5544);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 5384);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_65_3(char *t0)
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

LAB0:    t1 = (t0 + 5032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5608);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 5400);
    *((int *)t10) = 1;

LAB1:    return;
}


extern void work_m_00000000002684376116_0394168537_init()
{
	static char *pe[] = {(void *)Always_21_0,(void *)Cont_63_1,(void *)Cont_64_2,(void *)Cont_65_3};
	xsi_register_didat("work_m_00000000002684376116_0394168537", "isim/mips.exe.sim/work/m_00000000002684376116_0394168537.didat");
	xsi_register_executes(pe);
}
