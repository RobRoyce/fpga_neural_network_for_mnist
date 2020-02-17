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
    work_m_01289916662112059394_1069848932_init();
    work_m_12132409496505808984_3598138731_init();
    work_m_00462477912442254038_3529680719_init();
    work_m_12669580429232885167_2460879992_init();
    work_m_14217601515781819668_3385037871_init();
    work_m_11535290149256318700_0089360580_init();
    work_m_13727906943070677088_2908904151_init();
    work_m_16678256360141278759_3530043587_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_16678256360141278759_3530043587");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
