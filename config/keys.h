#include "helper.h"

#define shift_morph(name, bind0, bind1) \
  ZMK_BEHAVIOR(name, mod_morph, \
    bindings = <&tt bind1 bind0>, <&kp bind1>; \
    mods = <(MOD_LSFT|MOD_RSFT)>; \
  )
#define autoshift_raw(bind) shift_morph(_ ## bind, bind, LS(bind))
#define autoshift_altered(bind) shift_morph(bind, _ ## bind, LS(_ ## bind))

autoshift_raw(A)
autoshift_raw(B)
autoshift_raw(C)
autoshift_raw(D)
autoshift_raw(E)
autoshift_raw(F)
autoshift_raw(G)
autoshift_raw(H)
autoshift_raw(I)
autoshift_raw(J)
autoshift_raw(K)
autoshift_raw(L)
autoshift_raw(M)
autoshift_raw(N)
autoshift_raw(O)
autoshift_raw(P)
autoshift_raw(Q)
autoshift_raw(R)
autoshift_raw(S)
autoshift_raw(T)
autoshift_raw(U)
autoshift_raw(V)
autoshift_raw(W)
autoshift_raw(X)
autoshift_raw(Y)
autoshift_raw(Z)

autoshift_altered(_AE)
autoshift_altered(_OE)
autoshift_altered(_AA)

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

shift_morph(_SLASH, __FSLH, __BSLH)
shift_morph(_DOT, DOT, __COLON)
shift_morph(_COMMA, COMMA, __SEMI)
shift_morph(_BKSP, BKSP, DEL)

shift_morph(_EXCL, __EXCL, __PIPE)
shift_morph(_AT, __AT, __PARA)
shift_morph(_LBRC, __LBRC, __LDANG)
shift_morph(_RBRC, __RBRC, __RDANG)
shift_morph(_EQUAL, __EQUAL, __QMARK)
shift_morph(_STAR, __STAR, __HASH)
shift_morph(_DQT, __DQT, __SQT)
shift_morph(_LPAR, __LPAR, __LT)
shift_morph(_RPAR, __RPAR, __GT)
shift_morph(_DOLLAR, __DOLLAR, __AMPS)
shift_morph(_PRCNT, __PRCNT, __EURO)
shift_morph(_CARET, __CARET, __TILDE)
shift_morph(_LBKT, __LBKT, __GRAVE)
shift_morph(_RBKT, __RBKT, __ACUTE)

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
