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
    unisims_ver_m_00000000002399568039_2282143210_init();
    unisims_ver_m_00000000000740258969_3897995058_init();
    unisims_ver_m_00000000000740258969_1625843133_init();
    unisims_ver_m_00000000003131622635_0225263307_init();
    unisims_ver_m_00000000002922998384_2455702719_init();
    unisims_ver_m_00000000004146189403_2706696787_init();
    work_m_00000000003882840486_3162731800_init();
    work_m_00000000002867145124_0972932656_init();
    work_m_00000000002439099398_3495144754_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002439099398_3495144754");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
