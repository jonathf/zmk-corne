#include "helper.h"

#define _bt_clear(n) \
  ZMK_BEHAVIOR(_bt_clear_ ## n, macro \
      bindings = <&to 0>, <&bt BT_SEL n>, <&bt BT_CLR>; \
  )

_bt_clear(0)
_bt_clear(1)
_bt_clear(2)
_bt_clear(3)
_bt_clear(4)

#define _bt_key(n) \
  ZMK_BEHAVIOR(_BT ## n, hold_tap, \
      bindings = "tap-preferred"; \
      tapping-term-ms=<500>; \
      quick-tap-ms=<400>; \
      global-quick-tap; \
      hold-trigger-on-release; \
      bindings = <&bt BT_SEL n>, <&_bt_clear_ ## n>; \
  )

_bt_key(0)
_bt_key(1)
_bt_key(2)
_bt_key(3)
_bt_key(4)
