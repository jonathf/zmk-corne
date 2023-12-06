#define _0_2ROOT &to 4
#define _1_2ROOT &to 0

#define _0_2NUM &sl 5
#define _1_2NUM &sl 1

#define _0_2NAV &sl 6
#define _1_2NAV &sl 2

#define _2FUNC &sl 3

ZMK_BEHAVIOR(__0_capsword, caps_word,
    continue-list = <UNDER MINUS BKSP DEL>;
)
ZMK_BEHAVIOR(_0_capsword, macro,
    bindings = <&to 4>, <&__0_capsword>;
)
#define _0_CAPS &_0_capsword

ZMK_BEHAVIOR(__1_capsword, caps_word,
    continue-list = <FSLH LS(FSLH) BKSP DEL>;
)
ZMK_BEHAVIOR(_1_capsword, macro,
    bindings = <&to 0>, <&__1_capsword>;
)
#define _1_CAPS &_1_capsword

#define _SPACE &kp SPACE
