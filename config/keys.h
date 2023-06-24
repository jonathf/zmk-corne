#include "helper.h"

#define key1(name, bind) \
  ZMK_BEHAVIOR(name, mod_morph, \
    bindings = <&kp bind1>; \
    mods = <(MOD_LSFT|MOD_RSFT)>; \
  )

#define key2(name, bind0, bind1) \
  ZMK_BEHAVIOR(name, mod_morph, \
    bindings = <&tt bind1 bind0>, <&kp bind1>; \
    mods = <(MOD_LSFT|MOD_RSFT)>; \
  )

#define skey(name, bind) key2(name, bind, LS(bind))
#define kkey(bind) skey(_ ## bind, bind)

#define bluetooth(n) \
  ZMK_BEHAVIOR(_bt_clr_ ## n, macro \
      bindings = <&to 0>, <&bt BT_SEL n>, <&bt BT_CLR>; \
  ) \
  ZMK_BEHAVIOR(_BT ## n, hold_tap, \
      bindings = "tap-preferred"; \
      tapping-term-ms=<500>; \
      quick-tap-ms=<400>; \
      global-quick-tap; \
      hold-trigger-on-release; \
      bindings = <&bt BT_SEL n>, <&_bt_clr_ ## n>; \
  )

bluetooth(0)
bluetooth(1)
bluetooth(2)
bluetooth(3)
bluetooth(4)

kkey(A)
kkey(B)
kkey(C)
kkey(D)
kkey(E)
kkey(F)
kkey(G)
kkey(H)
kkey(I)
kkey(J)
kkey(K)
kkey(L)
kkey(M)
kkey(N)
kkey(P)
kkey(Q)
kkey(R)
kkey(S)
kkey(T)
kkey(U)
kkey(V)
kkey(W)
kkey(X)
kkey(Y)
kkey(Z)

skey(_AE, __AE)
skey(_OO, __OO)
skey(_AA, __AA)

skey(_HOME, HOME)
skey(_PG_DN, PG_DN)
skey(_PG_UP, PG_UP)
skey(_END, END)
skey(_LEFT, LEFT)
skey(_DOWN, DOWN)
skey(_UP, UP)
skey(_RIGHT, RIGHT)

key2(_1, N1, F1)
key2(_2, N2, F2)
key2(_3, N3, F3)
key2(_4, N4, F4)
key2(_5, N5, F5)
key2(_6, N6, F6)
key2(_7, N7, F7)
key2(_8, N8, F8)
key2(_9, N9, F9)
key2(_0, N0, F10)

key2(_PLUS, __PLUS, F12)
key2(_MINUS, __MINUS, F11)

key2(_SLASH, __FSLH, __BSLH)
key2(_DOT, DOT, __COLON)
key2(_COMMA, COMMA, __SEMI)
key2(_BKSP, BKSP, DEL)

key2(_EXCL, __EXCL, __PIPE)
key2(_AT, __AT, __PARA)
key2(_LBRC, __LBRC, __LDANG)
key2(_RBRC, __RBRC, __RDANG)
key2(_EQUAL, __EQUAL, __QMARK)
key2(_STAR, __STAR, __HASH)
key2(_DQT, __DQT, __SQT)
key2(_LPAR, __LPAR, __LT)
key2(_RPAR, __RPAR, __GT)
key2(_DOLLAR, __DOLLAR, __AMPS)
key2(_PRCNT, __PRCNT, __EURO)
key2(_CARET, __CARET, __TILDE)
key2(_LBKT, __LBKT, __GRAVE)
key2(_RBKT, __RBKT, __ACUTE)

key1(_UNDER, __UNDER)

key1(_PIPE, __PIPE)
key1(_PARA, __PARA)
key1(_LDANG, __LDANG)
key1(_RDANG, __RDANG)
key1(_QMARK, __QMARK)
key1(_HASH, __HASH)
key1(_SQT, __SQT)
key1(_LT, __LT)
key1(_GT, __GT)
key1(_AMPS, __AMPS)
key1(_EURO, __EURO)
key1(_TILDE, __TILDE)
key1(_GRAVE, __GRAVE)
key1(_ACUTE, __ACUTE)
key1(_PIPE, __PIPE)
