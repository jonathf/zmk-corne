// HOST_OS: 0 iso, 2 macos unicode

#define _0_EXCL &kp EXCL
#define _1_EXCL &kp LS(N1)
#define _0_AT &kp AT
#define _1_AT &kp BSLH
#define _0_LBRC &kp LBRC
#define _1_LBRC &kp LA(LS(N8))
#define _0_RBRC &kp RBRC
#define _1_RBRC &kp LA(LS(N9))
#define _0_EQUAL &kp EQUAL
#define _1_EQUAL &kp LS(N0)

ZMK_PAIR(__0_PLUS, PLUS, F12)
#define _0_PLUS &__0_PLUS
ZMK_PAIR(__1_PLUS, MINUS, F12)
#define _1_PLUS &__1_PLUS

ZMK_PAIR(__N7, N7, F7)
#define _N7 &__N7

ZMK_PAIR(__N8, N8, F8)
#define _N8 &__N8

ZMK_PAIR(__N9, N9, F9)
#define _N9 &__N9

#define _1_AA &kp LBRC
ZMK_UNICODE_PAIR(__2_AA, N0, N0, E, N5, N0, N0, C, N5)
#define _2_AA &__2_AA

#define _0_STAR &kp STAR
#define _1_STAR &kp LS(BSLH)
#define _0_DQT &kp DQT
#define _1_DQT &kp LS(N2)
#define _0_LPAR &kp LPAR
#define _1_LPAR &kp LS(N8)
#define _0_RPAR &kp RPAR
#define _1_RPAR &kp LS(N9)
#define _0_DOLLAR &kp DOLLAR
#define _1_DOLLAR &kp LS(N4)

ZMK_PAIR(__0_MINUS, MINUS, F11)
#define _0_MINUS &__0_MINUS
ZMK_PAIR(__1_MINUS, FSLH, F11)
#define _1_MINUS &__1_MINUS

ZMK_PAIR(__N4, N4, F4)
#define _N4 &__N4
ZMK_PAIR(__N5, N5, F5)
#define _N5 &__N5
ZMK_PAIR(__N6, N6, F6)
#define _N6 &__N6

#define _1_OE &kp SEMI
ZMK_UNICODE_PAIR(__2_OE, N0, N0, F, N8, N0, N0, D, N8)
#define _2_OE &__2_OE

#define _0_PRCNT &tt RALT PRCNT
#define _1_PRCNT &tt RALT LS(N5)
#define _0_CARET &tt LALT CARET
#define _1_CARET &tt LALT LS(RBRC)
#define _0_LBKT &tt LCTRL LBKT
#define _1_LBKT &tt LCTRL LA(N8)
#define _0_RBKT &tt LSHIFT RBKT
#define _1_RBKT &tt LSHIFT LA(N9)
#define _0_UNDER &tt LGUI UNDER
#define _1_UNDER &tt LGUI LS(FSLH)

ZMK_PAIR(__N0, N0, F10)
#define _N0 &__N0
ZMK_PAIR(__N1, N1, F1)
#define _N1 &__N1
ZMK_PAIR(__N2, N2, F2)
#define _N2 &__N2
ZMK_PAIR(__N3, N3, F3)
#define _N3 &__N3

#define _1_AE &kp SQT
ZMK_UNICODE_PAIR(__2_AE, N0, N0, E, N6, N0, N0, C, N6)
#define _2_AE &__2_AE
