#include "helper.h"

#define shift_hold_morph(name, bind0, bind1, bind2) \
  ZMK_BEHAVIOR(name, mod_morph, \
    bindings = <&tt bind1 bind0>, <&kp bind2>; \
    mods = <(MOD_LSFT|MOD_RSFT)>; \
  )
#define shift_morph(name, bind0, bind1) shift_hold_morph(name, bind0, bind1, bind1)
#define autoshift_raw(bind) shift_hold_morph(_ ## bind, bind, LS(bind), LS(bind))
#define autoshift_altered(bind) shift_hold_morph(bind, _ ## bind, LS(_ ## bind), LS(_ ## bind))

#define _A &kp A
#define _B &tt LGUI B
#define _C &tt LCTRL C
#define _D &kp D
#define _E &kp E
#define _F &kp F
#define _G &kp G
#define _H &kp H
#define _I &kp I
#define _J &kp J
#define _K &kp K
#define _L &kp L
#define _M &tt LSHIFT M
#define _N &tt LGUI N
#define _O &kp O
#define _P &kp P
#define _Q &kp Q
#define _R &kp R
#define _S &kp S
#define _T &kp T
#define _U &kp U
#define _V &tt LSHIFT V
#define _W &kp W
#define _X &tt LALT X
#define _Y &kp Y
#define _Z &tt RALT Z

#define _AE &kp __AE
#define _OE &kp __OE
#define _AA &kp __AA

autoshift_raw(HOME)
autoshift_raw(PG_DN)
autoshift_raw(PG_UP)
autoshift_raw(END)
autoshift_raw(LEFT)
autoshift_raw(DOWN)
autoshift_raw(UP)
autoshift_raw(RIGHT)
autoshift_raw(INS)

shift_morph(_N1, N1, F1)
shift_morph(_N2, N2, F2)
shift_morph(_N3, N3, F3)
shift_morph(_N4, N4, F4)
shift_morph(_N5, N5, F5)
shift_morph(_N6, N6, F6)
shift_morph(_N7, N7, F7)
shift_morph(_N8, N8, F8)
shift_morph(_N9, N9, F9)
shift_morph(_N0, N0, F10)

shift_morph(_PLUS, __PLUS, F12)
shift_morph(_MINUS, __MINUS, F11)

shift_hold_morph(_SLASH, __FSLH, RALT, __BSLH)
shift_hold_morph(_DOT, DOT, LALT, __COLON)
shift_hold_morph(_COMMA, COMMA, LCTRL, __SEMI)

#define _BKSP &kp BKSP
#define _EXCL &kp __EXCL
#define _AT &kp __AT
#define _LBRC &kp __LBRC
#define _RBRC &kp __RBRC
#define _EQUAL &kp __EQUAL
#define _STAR &kp __STAR
#define _DQT &kp __DQT
#define _LPAR &kp __LPAR
#define _RPAR &kp __RPAR
#define _DOLLAR &kp __DOLLAR
#define _PRCNT &kp __PRCNT
#define _CARET &kp __CARET
#define _LBKT &kp __LBKT
#define _RBKT &kp __RBKT

#define _UNDER &kp __UNDER
#define _PIPE &kp __PIPE
#define _PARA &kp __PARA
#define _LDANG &kp __LDANG
#define _RDANG &kp __RDANG
#define _QMARK &kp __QMARK
#define _HASH &kp __HASH
#define _SQT &kp __SQT
#define _LT &kp __LT
#define _GT &kp __GT
#define _AMPS &kp __AMPS
#define _EURO &kp __EURO
#define _TILDE &kp __TILDE
#define _GRAVE &kp __GRAVE
#define _ACUTE &kp __ACUTE
#define _PIPE &kp __PIPE

#define _PSCRN &kp PSCRN
