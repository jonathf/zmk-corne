/*
       ╭────┬────┬────┬────╮  ╭────┬────┬────┬────╮
  0    1    2    3    4    5  6    7    8    9   10   11
              Q    Å                INS  DEL
 12   13   14   15   16   17 18   19   20   21   22   23
             ESC  TAB              ENTER BKSP
 24   25   26   27   28   29 30   31   32   33   34   35
              Z    B                 N    Æ
       ╰────┴────┴────┴────╯  ╰────┴────┴────┴────╯
                36   37   38 39   40   41
*/
ZMK_COMBO(_COMBO_Q_0, _Q,        2  3, 0)
ZMK_COMBO(_COMBO_Q_1, _1_EXCL,   2  3, 1)
ZMK_COMBO(_COMBO_Q_2, _1_PIPE,   2  3, 2)
ZMK_COMBO(_COMBO_Q_3, _Q,        2  3, 4)
ZMK_COMBO(_COMBO_Q_4, _0_EXCL,   2  3, 5)
ZMK_COMBO(_COMBO_Q_5, _0_PIPE,   2  3, 6)
/* ZMK_COMBO(_COMBO_AE_0, _1_AE,    2  3, 0 1 2) */
/* ZMK_COMBO(_COMBO_AE_3, _0_AE,    2  3, 4 5 6) */

ZMK_COMBO(_COMBO_AA_0, _1_AA,    3  4, 0 1 2)
ZMK_COMBO(_COMBO_AA_3, _0_AA,    3  4, 4 5 6)

ZMK_COMBO(_COMBO_Z_0, _Z,       26 27, 0)
ZMK_COMBO(_COMBO_Z_1, _1_PRCNT, 26 27, 1)
ZMK_COMBO(_COMBO_Z_3, _Z,       26 27, 4)
ZMK_COMBO(_COMBO_Z_4, _0_PRCNT, 26 27, 5)

ZMK_COMBO(_COMBO_B_0, _B,       27 28, 0)
ZMK_COMBO(_COMBO_B_1, _1_UNDER, 27 28, 1)
ZMK_COMBO(_COMBO_B_3, _B,       27 28, 4)
ZMK_COMBO(_COMBO_B_4, _0_UNDER, 27 28, 5)

ZMK_COMBO(_COMBO_N_0, _N,       31 32, 0)
ZMK_COMBO(_COMBO_N_1, _N0,      31 32, 1)
ZMK_COMBO(_COMBO_N_3, _N,       31 32, 4)
ZMK_COMBO(_COMBO_N_4, _N0,      31 32, 5)

ZMK_COMBO(_COMBO_AE_0, _1_AE,   32 33, 0 1 2)
ZMK_COMBO(_COMBO_AE_3, _0_AE,   32 33, 4 5 6)

ZMK_COMBO(_COMBO_BKSP,  &kp BKSP,   20 21, 0 4)
ZMK_COMBO(_COMBO_DEL,   &kp DEL,     8  9, 0 4)
ZMK_COMBO(_COMBO_ENTER, &kp ENTER,  19 20, 0 4)
ZMK_COMBO(_COMBO_ESC,   &kp ESC,    14 15, 0 4)
ZMK_COMBO(_COMBO_INS,   &kp INS,     7  8, 0 4)
ZMK_COMBO(_COMBO_TAB,   &kp TAB,    15 16, 0 4)

ZMK_COMBO(_COMBO_LANG_NO, &to 4, 39 40, 0)
ZMK_COMBO(_COMBO_LANG_EN, &to 0, 39 40, 4)
