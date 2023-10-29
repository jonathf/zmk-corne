/*
      ╭────┬────┬────┬────╮  ╭────┬────┬────┬────╮
 0    1    2    3    4    5  6    7    8    9   10   11
                                   INS  DEL
12   13   14   15   16   17 18   19   20   21   22   23
       LALT ESC  TAB              ENTER BKSP RALT
24   25   26   27   28   29 30   31   32   33   34   35
      ╰────┴────┴────┴────╯  ╰────┴────┴────┴────╯
               36   37   38 39   40   41
*/
#include "helper.h"

ZMK_COMBO(_Q_COMBO, &kp Q, 1 2, 0)
ZMK_COMBO(_EXCL_COMBO, &kp __EXCL, 1 2, 1)
ZMK_COMBO(_PIPE_COMBO, &kp __PIPE, 1 2, 2)
ZMK_COMBO(_Z_COMBO, &kp Z, 24 25, 0)
ZMK_COMBO(_PRCNT_COMBO, &kp __PRCNT, 1 2, 1)
ZMK_COMBO(_EURO_COMBO, &kp __EURO, 1 2, 2)

ZMK_COMBO(_BKSP_COMBO, &kp BKSP, 20 21, 0)
ZMK_COMBO(_DEL_COMBO, &kp DEL, 8 9, 0)
ZMK_COMBO(_ENTER_COMBO, &kp ENTER, 19 20, 0)
ZMK_COMBO(_ESC_COMBO, &kp ESC, 14 15, 0)
ZMK_COMBO(_INS_COMBO, &kp INS, 7 8, 0)
ZMK_COMBO(_TAB_COMBO, &kp TAB, 15 16, 0)
