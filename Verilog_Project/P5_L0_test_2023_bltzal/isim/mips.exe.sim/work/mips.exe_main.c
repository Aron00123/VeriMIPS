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
    work_m_00000000003755297651_3224323566_init();
    work_m_00000000003714481706_0757879789_init();
    work_m_00000000001112552154_4235459488_init();
    work_m_00000000003031970364_4144471541_init();
    work_m_00000000002036927490_1785967555_init();
    work_m_00000000002949782013_1621229167_init();
    work_m_00000000001051297516_1579609468_init();
    work_m_00000000001316741401_3239301648_init();
    work_m_00000000000040161840_0886308060_init();
    work_m_00000000003957545351_4049836497_init();
    work_m_00000000001704882353_2924402094_init();
    work_m_00000000002490373835_3677558514_init();
    work_m_00000000000669213795_2713864411_init();
    work_m_00000000003315271364_3877310806_init();
    work_m_00000000002047498008_2126922064_init();


    xsi_register_tops("work_m_00000000002047498008_2126922064");


    return xsi_run_simulation(argc, argv);

}