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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000000892068067_0757879789_init();
    work_m_00000000004076669790_3224323566_init();
    work_m_00000000003726229140_1385824202_init();
    work_m_00000000003166665835_3037777339_init();
    work_m_00000000003710502589_1785967555_init();
    work_m_00000000002419951022_1843333949_init();
    work_m_00000000002021064250_1621229167_init();
    work_m_00000000003409229684_2972039092_init();
    work_m_00000000003104903681_3363942390_init();
    work_m_00000000001184413064_1878644346_init();
    work_m_00000000003495655446_3262371811_init();
    work_m_00000000000697601209_2425255936_init();
    work_m_00000000000317260923_0886308060_init();
    work_m_00000000000514368337_1602854331_init();
    work_m_00000000003416582300_2486179119_init();
    work_m_00000000003417290233_2874306033_init();
    work_m_00000000002681961935_3975733304_init();
    work_m_00000000003758436014_2678453977_init();
    work_m_00000000002261457312_3463502302_init();
    work_m_00000000003496421247_0798679063_init();
    work_m_00000000004129394637_1977160344_init();
    work_m_00000000000707036274_1191733567_init();
    work_m_00000000003737901168_3508565487_init();
    work_m_00000000001441394894_0156190743_init();
    work_m_00000000000056312757_0053799672_init();
    work_m_00000000000585152183_3877310806_init();
    work_m_00000000001585863293_1131260308_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001585863293_1131260308");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
