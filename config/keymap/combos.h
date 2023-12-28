
#define combo_q(layer, key) ZMK_COMBO(_Q_ ## layer, key, UL4 UL3, layer)
combo_q(0, _Q)
combo_q(1, _1_EXCL)
combo_q(2, _1_PIPE)
combo_q(4, _Q)
combo_q(5, _0_EXCL)
combo_q(6, _1_PIPE)

/* ZMK_COMBO(_COMBO_AE_0, _1_AE,    2  3, 0 1 2) */
/* ZMK_COMBO(_COMBO_AE_3, _0_AE,    2  3, 4 5 6) */

#define combo_aa(layer, key) ZMK_COMBO(_AA_ ## layer, key, UL2 UL3, layer)
combo_aa(0, _1_AA)
combo_aa(3, _0_AA)

#define combo_z(layer, key) ZMK_COMBO(_Z_ ## layer, key, LL3 LL4, layer)
combo_z(0, _Z)
combo_z(1, _1_PRCNT)
combo_z(4, _Z)
combo_z(5, _4_PRCNT)

#define combo_b(layer, key) ZMK_COMBO(_B_ ## layer, key, LL2 LL3, layer)
combo_b(0, _B)
combo_b(1, _1_UNDER)
combo_b(4, _B)
combo_b(5, _0_UNDER)

#define combo_n(layer, key) ZMK_COMBO(_N_ ## layer, key, LR2 LR3, layer)
combo_n(0, _N)
combo_n(1, _N0)
combo_n(4, _N)
combo_n(5, _N0)

#define combo_ae(layer, key) ZMK_COMBO(_AE_ ## layer, key, LR3 LR4, layer)
combo_ae(0, _1_AE)
combo_ae(4, _0_AE)

ZMK_COMBO(_BKSP,  &kp BKSP,   MR3 MR4, 0 4)
ZMK_COMBO(_DEL,   &kp DEL,    UR3 UR4, 0 4)
ZMK_COMBO(_ENTER, &kp ENTER,  MR2 MR3, 0 4)
ZMK_COMBO(_ESC,   &kp ESC,    ML3 ML4, 0 4)
ZMK_COMBO(_INS,   &kp INS,    UR2 UR3, 0 4)
ZMK_COMBO(_TAB,   &kp TAB,    ML2 ML3, 0 4)

ZMK_COMBO(_LANG_NO, &to 4, TR1 TR2, 0)
ZMK_COMBO(_LANG_EN, &to 0, TR1 TR2, 4)
