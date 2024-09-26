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
    work_m_00000000001965006821_3224323566_init();
    work_m_00000000003288417912_0757879789_init();
    work_m_00000000001629532103_4235459488_init();
    work_m_00000000002584527209_4144471541_init();
    work_m_00000000002036927490_1785967555_init();
    work_m_00000000002949782013_1621229167_init();
    work_m_00000000001051297516_1579609468_init();
    work_m_00000000001939678620_3239301648_init();
    work_m_00000000002560576246_0886308060_init();
    work_m_00000000002140506413_0394168537_init();
    work_m_00000000002524403740_4049836497_init();
    work_m_00000000001265752418_1751606033_init();
    work_m_00000000004121965214_3975733304_init();
    work_m_00000000003960283232_2924402094_init();
    work_m_00000000000291680333_3677558514_init();
    work_m_00000000001203052059_2713864411_init();
    work_m_00000000002662368474_3508565487_init();
    work_m_00000000002221948346_4263217831_init();
    work_m_00000000000056312757_0053799672_init();
    work_m_00000000000585152183_3877310806_init();
    work_m_00000000000723919746_1131260308_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000723919746_1131260308");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
