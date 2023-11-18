// HOST_OS: 0 iso, 1 macos

#define _Q &kp Q
#define _W &kp W
#define _E &kp E
#define _R &kp R
#define _T &kp T
#define _Y &kp Y
#define _U &kp U
#define _I &kp I
#define _O &kp O
#define _P &kp P

#define _A &kp A
#define _S &kp S
#define _D &kp D
#define _F &kp F
#define _G &kp G
#define _H &kp H
#define _J &kp J
#define _K &kp K
#define _L &kp L
#define _BKSP &kp BKSP

#define _Z &tt RALT Z
#define _X &tt LALT X
#define _C &tt LCTRL C
#define _V &tt LSHIFT V
#define _B &tt LGUI B
#define _N &tt LGUI N
#define _M &tt LSHIFT M

ZMK_MOD_PAIR(__0_COMMA, COMMA, LCTRL, SEMI)
#define _0_COMMA &__0_COMMA
ZMK_MOD_PAIR(__1_COMMA, COMMA, LCTRL, LS(COMMA))
#define _1_COMMA &__1_COMMA

ZMK_MOD_PAIR(__0_DOT, DOT, LALT, COLON)
#define _0_DOT &__0_DOT
ZMK_MOD_PAIR(__1_DOT, DOT, LALT, LS(DOT))
#define _1_DOT &__1_DOT

ZMK_UNICODE_PAIR(__0_FSLH, N0, N0, N2, F, N0, N0, N5, C)
#define _0_FSLH &__0_FSLH
ZMK_MOD_PAIR(__1_FSLH, LS(N7), RALT, LS(LA(N7)))
#define _1_FSLH &__1_FSLH
