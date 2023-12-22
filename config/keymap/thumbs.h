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
#define _0_CAPS &__0_capsword

ZMK_BEHAVIOR(__1_capsword, caps_word,
    continue-list = <FSLH LS(FSLH) BKSP DEL>;
)
#define _1_CAPS &__1_capsword

#define _SPACE &hold_tap LS(LC(LGUI)) SPACE
