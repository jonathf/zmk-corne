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

#define _0_PLUS &kp PLUS
#define _1_PLUS &kp MINUS
#define _N7 &kp N7
#define _N8 &kp N8
#define _N9 &kp N9

#define _1_AA &kp LBKT
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

#define _0_MINUS &kp MINUS
#define _1_MINUS &kp FSLH

#define _N4 &kp N4
#define _N5 &kp N5
#define _N6 &kp N6

#define _1_OE &kp SEMI
ZMK_UNICODE_PAIR(__2_OE, N0, N0, F, N8, N0, N0, D, N8)
#define _2_OE &__2_OE

#define _0_PRCNT &tt RALT PRCNT
#define _1_PRCNT &tt RALT LS(N5)

ZMK_BEHAVIOR(_caret, macro,
    bindings = <&kp LS(RBRC)>, <&kp SPACE>;
)
ZMK_BEHAVIOR(_caret_ht, hold_tap,
    flavor="tap-preferred";
    tapping-term-ms=<200>;
    quick-tap-ms=<100>;
    global-quick-tap;
    hold-trigger-on-release;
    bindings = <&kp>, <&_caret>;
)
#define _0_CARET &tt LALT CARET
// #define _1_CARET &tt LALT LS(RBRC)
#define _1_CARET &_caret_ht LS(RBRC) 0

#define _0_LBKT &tt LCTRL LBKT
#define _1_LBKT &tt LCTRL LA(N8)
#define _0_RBKT &tt LSHIFT RBKT
#define _1_RBKT &tt LSHIFT LA(N9)
#define _0_UNDER &tt LGUI UNDER
#define _1_UNDER &tt LGUI LS(FSLH)

#define _N0 &kp N0
#define _N1 &kp N1
#define _N2 &kp N2
#define _N3 &kp N3

#define _1_AE &kp SQT
ZMK_UNICODE_PAIR(__2_AE, N0, N0, E, N6, N0, N0, C, N6)
#define _2_AE &__2_AE
