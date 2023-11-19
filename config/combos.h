/*
       ╭────┬────┬────┬────╮  ╭────┬────┬────┬────╮
  0    1    2    3    4    5  6    7    8    9   10   11
              Q                     INS  DEL
 12   13   14   15   16   17 18   19   20   21   22   23
             ESC  TAB              ENTER BKSP
 24   25   26   27   28   29 30   31   32   33   34   35
              Z
       ╰────┴────┴────┴────╯  ╰────┴────┴────┴────╯
                30   31   32 33   34   35
*/
ZMK_COMBO(C_1_Q,     &kp Q,       2  3, 0)
ZMK_COMBO(C_1_EXCL,  &kp LS(N1),  2  3, 1)
ZMK_COMBO(C_1_PIPE,  &kp LA(N7),  2  3, 2)
ZMK_COMBO(C_0_Q,     &kp Q,       2  3, 4)
ZMK_COMBO(C_0_EXCL,  &kp EXCL,    2  3, 5)
ZMK_COMBO(C_0_PIPE,  &kp PIPE,    2  3, 6)

ZMK_COMBO(C_1_Z,      &kp Z,       26 27, 0)
ZMK_COMBO(C_1_PRCNT,  &kp LS(N5),  26 27, 1)
ZMK_COMBO(C_0_Z,      &kp Z,       26 27, 4)
ZMK_COMBO(C_0_PRCNT,  &kp PRCNT,   26 27, 5)

ZMK_COMBO(_9_BKSP,  &kp BKSP,   20 21, 0 4)
ZMK_COMBO(_9_DEL,   &kp DEL,     8  9, 0 4)
ZMK_COMBO(_9_ENTER, &kp ENTER,  19 20, 0 4)
ZMK_COMBO(_9_ESC,   &kp ESC,    14 15, 0 4)
ZMK_COMBO(_9_INS,   &kp INS,     7  8, 0 4)
ZMK_COMBO(_9_TAB,   &kp TAB,    15 16, 0 4)
