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
static const char *ng0 = "C:/Users/Aron_/Desktop/lessons/SecondYear1/CO/Verilog_Project/P7_L0_weak_2023/CMP.v";
static unsigned int ng1[] = {25U, 0U};
static int ng2[] = {1, 0};
static int ng3[] = {0, 0};
static unsigned int ng4[] = {26U, 0U};



static void Cont_12_0(char *t0)
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

LAB2:    xsi_set_current_line(12, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3512);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
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
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 3416);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_14_1(char *t0)
{
    char t7[8];
    char t8[8];
    char t12[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;

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

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t4, 10);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 10);
    if (t6 == 1)
        goto LAB9;

LAB10:
LAB12:
LAB11:    xsi_set_current_line(22, ng0);

LAB50:    xsi_set_current_line(23, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB13:    goto LAB2;

LAB7:    xsi_set_current_line(16, ng0);

LAB14:    xsi_set_current_line(17, ng0);
    t9 = (t0 + 1048U);
    t10 = *((char **)t9);
    t9 = (t0 + 1208U);
    t11 = *((char **)t9);
    memset(t12, 0, 8);
    t9 = (t10 + 4);
    t13 = (t11 + 4);
    t14 = *((unsigned int *)t10);
    t15 = *((unsigned int *)t11);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t9);
    t18 = *((unsigned int *)t13);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t9);
    t22 = *((unsigned int *)t13);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB18;

LAB15:    if (t23 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t12) = 1;

LAB18:    memset(t8, 0, 8);
    t27 = (t12 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t12);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t27) != 0)
        goto LAB21;

LAB22:    t34 = (t8 + 4);
    t35 = *((unsigned int *)t8);
    t36 = *((unsigned int *)t34);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB23;

LAB24:    t39 = *((unsigned int *)t8);
    t40 = (~(t39));
    t41 = *((unsigned int *)t34);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t34) > 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t8) > 0)
        goto LAB29;

LAB30:    memcpy(t7, t43, 8);

LAB31:    t44 = (t0 + 1928);
    xsi_vlogvar_assign_value(t44, t7, 0, 0, 1);
    goto LAB13;

LAB9:    xsi_set_current_line(19, ng0);

LAB32:    xsi_set_current_line(20, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t9 = *((char **)t3);
    memset(t12, 0, 8);
    t3 = (t4 + 4);
    t10 = (t9 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t9);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t3);
    t18 = *((unsigned int *)t10);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t3);
    t22 = *((unsigned int *)t10);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB34;

LAB33:    if (t23 != 0)
        goto LAB35;

LAB36:    memset(t8, 0, 8);
    t13 = (t12 + 4);
    t28 = *((unsigned int *)t13);
    t29 = (~(t28));
    t30 = *((unsigned int *)t12);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t13) != 0)
        goto LAB39;

LAB40:    t27 = (t8 + 4);
    t35 = *((unsigned int *)t8);
    t36 = *((unsigned int *)t27);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB41;

LAB42:    t39 = *((unsigned int *)t8);
    t40 = (~(t39));
    t41 = *((unsigned int *)t27);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t27) > 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t8) > 0)
        goto LAB47;

LAB48:    memcpy(t7, t34, 8);

LAB49:    t38 = (t0 + 1928);
    xsi_vlogvar_assign_value(t38, t7, 0, 0, 1);
    goto LAB13;

LAB17:    t26 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB18;

LAB19:    *((unsigned int *)t8) = 1;
    goto LAB22;

LAB21:    t33 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB22;

LAB23:    t38 = ((char*)((ng2)));
    goto LAB24;

LAB25:    t43 = ((char*)((ng3)));
    goto LAB26;

LAB27:    xsi_vlog_unsigned_bit_combine(t7, 32, t38, 32, t43, 32);
    goto LAB31;

LAB29:    memcpy(t7, t38, 8);
    goto LAB31;

LAB34:    *((unsigned int *)t12) = 1;
    goto LAB36;

LAB35:    t11 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB36;

LAB37:    *((unsigned int *)t8) = 1;
    goto LAB40;

LAB39:    t26 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB40;

LAB41:    t33 = ((char*)((ng2)));
    goto LAB42;

LAB43:    t34 = ((char*)((ng3)));
    goto LAB44;

LAB45:    xsi_vlog_unsigned_bit_combine(t7, 32, t33, 32, t34, 32);
    goto LAB49;

LAB47:    memcpy(t7, t33, 8);
    goto LAB49;

}


extern void work_m_00000000001051297516_1579609468_init()
{
	static char *pe[] = {(void *)Cont_12_0,(void *)Always_14_1};
	xsi_register_didat("work_m_00000000001051297516_1579609468", "isim/mips_txt_isim_beh.exe.sim/work/m_00000000001051297516_1579609468.didat");
	xsi_register_executes(pe);
}
