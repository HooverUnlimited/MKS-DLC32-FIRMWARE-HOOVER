#include "init.h"
#include "MKS_LVGL.h"

void mks_task_init(void) {   
    mks_grbl_parg_init();
    ts35_beep_init();
    bsp_led_init();
    tft_TS35_init();
    test_cfg_find_init();
    disp_task_init();
}