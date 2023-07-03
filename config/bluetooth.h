#include "helper.h"

ZMK_BEHAVIOR(_bt_clear_0, macro,
  bindings = <&to 0>, <&bt BT_SEL 0>, <&bt BT_CLR>;
)
ZMK_BEHAVIOR(_BT0, hold_tap,
  bindings = "tap-preferred";
  tapping-term-ms=<500>;
  quick-tap-ms=<400>;
  global-quick-tap;
  hold-trigger-on-release;
  bindings = <&bt BT_SEL 0>, <&_bt_clear_0>;
)
