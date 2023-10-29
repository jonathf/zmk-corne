#include "helper.h"

#define shift_hold_morph(name, bind0, bind1, bind2) \
  ZMK_BEHAVIOR(name, mod_morph, \
    bindings = <&tt bind1 bind0>, <&kp bind2>; \
    mods = <(MOD_LSFT|MOD_RSFT)>; \
  )
#define shift_morph(name, bind0, bind1) shift_hold_morph(name, bind0, bind1, bind1)
#define autoshift_raw(bind) shift_hold_morph(_ ## bind, bind, LS(bind), LS(bind))
#define autoshift_altered(bind) shift_hold_morph(bind, _ ## bind, LS(_ ## bind), LS(_ ## bind))
#define unicode(name, k1, k2, k3, k4) \
  ZMK_BEHAVIOR(name, macro, \
    wait-ms = <30>; \
    tap-ms = <5>; \
    bindings = <&macro_press &kp LALT>, \
               <&kp k1>, <&kp k2>, <&kp k3>, <&kp k4> \
               <&macro_release &kp LALT> ; \
  )

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

unicode(__AE1, N0, N0, E, N6)
unicode(__AE2, N0, N0, C, N6)
shift_morph(__AE, __AE1, __AE2)
#define _AE &__AE

unicode(__OE1, N0, N0, F, N8)
unicode(__OE2, N0, N0, D, N8)
shift_morph(__OE, __OE1, __OE2)
#define _OE &__OE

unicode(__AA1, N0, N0, E, N5)
unicode(__AA2, N0, N0, C, N5)
shift_morph(__AA, __AA1, __AA2)
#define _AA &__AA

#define _HOME &kp HOME
#define _PG_DN &kp PG_DN
#define _PG_UP &kp PG_UP
#define _END &kp END
#define _LEFT &kp LEFT
#define _DOWN &kp DOWN
#define _UP &kp UP
#define _RIGHT &kp RIGHT

shift_morph(__N1, N1, F1)
shift_morph(__N2, N2, F2)
shift_morph(__N3, N3, F3)
shift_morph(__N4, N4, F4)
shift_morph(__N5, N5, F5)
shift_morph(__N6, N6, F6)
shift_morph(__N7, N7, F7)
shift_morph(__N8, N8, F8)
shift_morph(__N9, N9, F9)
shift_morph(__N0, N0, F10)
#define _N1 &__N1
#define _N2 &__N2
#define _N3 &__N3
#define _N4 &__N4
#define _N5 &__N5
#define _N6 &__N6
#define _N7 &__N7
#define _N8 &__N8
#define _N9 &__N9
#define _N0 &__N0

shift_morph(_PLUS_F12, __PLUS, F12)
shift_morph(_MINUS_F11, __MINUS, F11)
#define _PLUS &_PLUS_F12
#define _MINUS &_MINUS_F11

shift_hold_morph(_FSLH_BSLH, __FSLH, RALT, __BSLH)
shift_hold_morph(_DOT_COLON, DOT, LALT, __COLON)
shift_hold_morph(_COMMA_SEMI, COMMA, LCTRL, __SEMI)
#define _SLASH &_FSLH_BSLH
#define _DOT &_DOT_COLON
#define _COMMA &_COMMA_SEMI

#define _BKSP &kp BKSP
#define _INS &kp RIGHT

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

unicode(__PARA, N0, N0, A, N7)
#define _PARA &__PARA

unicode(__LDANG, N0, N0, A, B)
#define _LDANG &__LDANG

unicode(__LDANG, N0, N0, B, B)
#define _RDANG &__RDANG

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

#define _PSCRN &kp PSCRN

#define _LGUI &kp LGUI
#define _LSHIFT &kp LSHIFT
#define _LCTRL &kp LCTRL
#define _LALT &kp LALT
#define _RALT &kp RALT
