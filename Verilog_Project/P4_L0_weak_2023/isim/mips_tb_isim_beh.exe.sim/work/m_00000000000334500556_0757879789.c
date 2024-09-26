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
static const char *ng0 = "C:/Users/Aron_/Desktop/lessons/SecondYear1/CO/Verilog_Project/P4_L0_weak_2023/NPC.v";
static int ng1[] = {4, 0};
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {0U, 0U};
static int ng5[] = {14, 0};
static int ng6[] = {2, 0};
static int ng7[] = {3, 0};



static void Cont_33_0(char *t0)
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

LAB0:    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4256);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 4144);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_34_1(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 3576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t3, 32, t2, 32);
    t5 = (t0 + 4320);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 4160);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Always_36_2(char *t0)
{
    char t9[8];
    char t11[8];
    char t12[8];
    char t13[8];
    char t21[8];
    char t25[8];
    char t33[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t10;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t34;

LAB0:    t1 = (t0 + 3824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 4176);
    *((int *)t2) = 1;
    t3 = (t0 + 3856);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(36, ng0);

LAB5:    xsi_set_current_line(37, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 32);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 32);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 32);
    if (t6 == 1)
        goto LAB13;

LAB14:
LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(38, ng0);
    t7 = (t0 + 1048U);
    t8 = *((char **)t7);
    t7 = ((char*)((ng1)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t8, 32, t7, 32);
    t10 = (t0 + 2408);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 32);
    goto LAB15;

LAB9:    xsi_set_current_line(39, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t4, 32, t3, 32);
    t7 = ((char*)((ng4)));
    t8 = (t0 + 1688U);
    t10 = *((char **)t8);
    memset(t13, 0, 8);
    t8 = (t13 + 4);
    t14 = (t10 + 4);
    t15 = *((unsigned int *)t10);
    t16 = (t15 >> 0);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t14);
    t18 = (t17 >> 0);
    *((unsigned int *)t8) = t18;
    t19 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t19 & 65535U);
    t20 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t20 & 65535U);
    xsi_vlogtype_concat(t12, 16, 16, 1U, t13, 16);
    t22 = ((char*)((ng5)));
    t23 = (t0 + 1688U);
    t24 = *((char **)t23);
    memset(t25, 0, 8);
    t23 = (t25 + 4);
    t26 = (t24 + 4);
    t27 = *((unsigned int *)t24);
    t28 = (t27 >> 15);
    t29 = (t28 & 1);
    *((unsigned int *)t25) = t29;
    t30 = *((unsigned int *)t26);
    t31 = (t30 >> 15);
    t32 = (t31 & 1);
    *((unsigned int *)t23) = t32;
    xsi_vlog_mul_concat(t21, 14, 1, t22, 1U, t25, 1);
    xsi_vlogtype_concat(t11, 32, 32, 3U, t21, 14, t12, 16, t7, 2);
    memset(t33, 0, 8);
    xsi_vlog_unsigned_add(t33, 32, t9, 32, t11, 32);
    t34 = (t0 + 2408);
    xsi_vlogvar_assign_value(t34, t33, 0, 0, 32);
    goto LAB15;

LAB11:    xsi_set_current_line(40, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1688U);
    t7 = *((char **)t4);
    memset(t12, 0, 8);
    t4 = (t12 + 4);
    t8 = (t7 + 4);
    t15 = *((unsigned int *)t7);
    t16 = (t15 >> 0);
    *((unsigned int *)t12) = t16;
    t17 = *((unsigned int *)t8);
    t18 = (t17 >> 0);
    *((unsigned int *)t4) = t18;
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t19 & 67108863U);
    t20 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t20 & 67108863U);
    xsi_vlogtype_concat(t11, 26, 26, 1U, t12, 26);
    t10 = (t0 + 1048U);
    t14 = *((char **)t10);
    memset(t21, 0, 8);
    t10 = (t21 + 4);
    t22 = (t14 + 4);
    t27 = *((unsigned int *)t14);
    t28 = (t27 >> 28);
    *((unsigned int *)t21) = t28;
    t29 = *((unsigned int *)t22);
    t30 = (t29 >> 28);
    *((unsigned int *)t10) = t30;
    t31 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t31 & 15U);
    t32 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t32 & 15U);
    xsi_vlogtype_concat(t13, 4, 4, 1U, t21, 4);
    xsi_vlogtype_concat(t9, 32, 32, 3U, t13, 4, t11, 26, t3, 2);
    t23 = (t0 + 2408);
    xsi_vlogvar_assign_value(t23, t9, 0, 0, 32);
    goto LAB15;

LAB13:    xsi_set_current_line(41, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    goto LAB15;

}


extern void work_m_00000000000334500556_0757879789_init()
{
	static char *pe[] = {(void *)Cont_33_0,(void *)Cont_34_1,(void *)Always_36_2};
	xsi_register_didat("work_m_00000000000334500556_0757879789", "isim/mips_tb_isim_beh.exe.sim/work/m_00000000000334500556_0757879789.didat");
	xsi_register_executes(pe);
}
