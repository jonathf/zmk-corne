#include <behaviors.dtsi>
#include <dt-bindings/zmk/keys.h>
#include <dt-bindings/zmk/bt.h>
#include <dt-bindings/zmk/ext_power.h>

#include "no_nb.h"

#define HOM_L 0
#define NUM_L 1
#define NAV_L 2
#define LOC_L 3

#define left_half 5 6 7 8 9 15 16 17 18 19 25 26 27 28 29 30 31 32 33
#define right_half 0 1 2 3 4 10 11 12 13 14 20 21 22 23 24 30 31 32 33

#define _m_space &lht LGUI SPACE
#define _m_enter &lht LGUI ENTER

#define top(q, w, e, r, t, y, u, i, o, p) \
  &kp q   &kp w         &kp e         &kp r         &kp t \
  &kp y   &kp u         &kp i         &kp o         &kp p
#define mid(a, s, d, f, g, h, j, k, l, del) \
  &kp a   &lht RALT s   &lht LALT d   &lht LCTRL f  &kp g \
  &kp h   &rht LCTRL j  &rht LALT k   &rht RALT l   &kp del
#define bot(z, x, c, v, b, n, m, com, dot, slh) \
  &kp z   &kp x         &kp c         &kp v         &kp b \
  &kp n   &kp m         &kp com       &kp dot       &kp slh
