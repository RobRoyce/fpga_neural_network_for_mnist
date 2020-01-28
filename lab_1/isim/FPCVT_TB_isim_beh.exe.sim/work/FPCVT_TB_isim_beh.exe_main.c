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
    work_m_09593794739395990207_3601692075_init();
    work_m_16152995704526720863_4012348614_init();
    work_m_08482162627538148485_0776226572_init();
    work_m_13929540149802000661_3865691683_init();
    work_m_15979885696688118473_0644182429_init();
    work_m_11294160546404913934_1154953813_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_11294160546404913934_1154953813");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
