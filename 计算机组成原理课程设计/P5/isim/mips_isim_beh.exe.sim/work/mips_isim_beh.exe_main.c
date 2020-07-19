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
    work_m_00000000000199194120_0546212651_init();
    work_m_00000000001804181036_3274805733_init();
    work_m_00000000000995226199_1547046708_init();
    work_m_00000000003977908921_2940304436_init();
    work_m_00000000004146008260_0204903951_init();
    work_m_00000000001533705423_3461085701_init();
    work_m_00000000000645621025_3298408361_init();
    work_m_00000000001275790363_0829751681_init();
    work_m_00000000003503561632_1989334135_init();
    work_m_00000000004285535949_2769159462_init();
    work_m_00000000003650680848_2781484775_init();
    work_m_00000000002395303097_1832732721_init();
    work_m_00000000003793439180_2587490486_init();
    work_m_00000000001263886872_2515093870_init();
    work_m_00000000003634324542_2924402094_init();
    work_m_00000000003429280084_2587735380_init();
    work_m_00000000004005470893_0412730756_init();
    work_m_00000000000276429822_3877310806_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000276429822_3877310806");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
