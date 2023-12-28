/*
LAYOUT == 0
      ╭────┬────┬────┬────╮  ╭────┬────┬────┬────╮
      0    1    2    3    4  5    6    7    8    9
     10   11   12   13   14 15   16   17   18   19
          20   21   22   23 24   25   26   27
      ╰────┴────┴────┴────╯  ╰────┴────┴────┴────╯
                    28   29 30   31
LAYOUT == 1
      ╭────┬────┬────┬────╮  ╭────┬────┬────┬────╮
      0    1    2    3    4  5    6    7    8    9
     10   11   12   13   14 15   16   17   18   19
     20   21   22   23   24 25   26   27   28   29
      ╰────┴────┴────┴────╯  ╰────┴────┴────┴────╯
               30   31   __ __   34   35
LAYOUT == 2
      ╭────┬────┬────┬────╮  ╭────┬────┬────┬────╮
__    1    2    3    4    5  6    7    8    9   10   __
__   13   14   15   16   17 18   19   20   21   22   __
__   25   26   27   28   29 30   31   32   33   34   __
      ╰────┴────┴────┴────╯  ╰────┴────┴────┴────╯
               __   37   38 39   40   __
*/
#pragma once

#define _INC_1 2
#define _INC_2 3
#define _INC_3 4
#define _INC_4 5
#define _INC_5 6
#define _INC_6 7
#define _INC_7 8
#define _INC_8 9
#define _INC_9 10
#define _INC_10 11
#define _INC_11 12
#define _INC_12 13
#define _INC_13 14
#define _INC_14 15
#define _INC_15 16
#define _INC_16 17
#define _INC_17 18
#define _INC_18 19
#define _INC_19 20
#define _INC_20 21
#define _INC_21 22
#define _INC_22 23
#define _INC_23 24
#define _INC_24 25
#define _INC_25 26
#define _INC_26 27
#define _INC_27 28
#define _INC_28 29
#define _INC_29 30
#define _INC_30 31
#define _INC_31 32
#define _INC_32 33
#define _INC_33 34
#define _INC_34 35
#define _INC_35 36
#define _INC_36 37
#define _INC_37 38
#define _INC_38 39
#define _INC_39 40

#define _ADD(x, y) _ADD_ ## y(x)
#define _ADD_0(x) x
#define _ADD_1(x) _INC(x)
#define _ADD_2(x) _ADD_1(_INC(x))
#define _ADD_3(x) _ADD_2(_INC(x))
#define _ADD_4(x) _ADD_3(_INC(x))
#define _ADD_5(x) _ADD_4(_INC(x))
#define _ADD_6(x) _ADD_5(_INC(x))
#define _ADD_7(x) _ADD_6(_INC(x))
#define _ADD_8(x) _ADD_7(_INC(x))
#define _ADD_9(x) _ADD_8(_INC(x))


#if LAYOUT == 0
  #define _SHIFT1 0
  #define _SHIFT2 0
  #define _SHIFT3 0
  #define _SHIFT4 0
  #define _SHIFT5 0
#elif LAYOUT == 1
  #define _SHIFT1 0
  #define _SHIFT2 0
  #define _SHIFT3 1
  #define _SHIFT4 2
  #define _SHIFT5 4
#else
  #define _SHIFT1 1
  #define _SHIFT2 3
  #define _SHIFT3 6
  #define _SHIFT4 9
  #define _SHIFT5 9
#endif

#define _UL5 _ADD(0, _SHIFT1)
#define _UL4 _ADD(1, _SHIFT1)
#define _UL3 _ADD(2, _SHIFT1)
#define _UL2 _ADD(3, _SHIFT1)
#define _UL1 _ADD(4, _SHIFT1)
#define _UR1 _ADD(5, _SHIFT1)
#define _UR2 _ADD(6, _SHIFT1)
#define _UR3 _ADD(7, _SHIFT1)
#define _UR4 _ADD(8, _SHIFT1)
#define _UR5 _ADD(9, _SHIFT1)

#define _ML5 _ADD(10, _SHIFT2)
#define _ML4 _ADD(11, _SHIFT2)
#define _ML3 _ADD(12, _SHIFT2)
#define _ML2 _ADD(13, _SHIFT2)
#define _ML1 _ADD(14, _SHIFT2)
#define _MR1 _ADD(15, _SHIFT2)
#define _MR2 _ADD(16, _SHIFT2)
#define _MR3 _ADD(17, _SHIFT2)
#define _MR4 _ADD(18, _SHIFT2)
#define _MR5 _ADD(19, _SHIFT2)

#define _LL5 _ADD(19, _SHIFT3)
#define _LL4 _ADD(20, _SHIFT3)
#define _LL3 _ADD(21, _SHIFT3)
#define _LL2 _ADD(22, _SHIFT3)
#define _LL1 _ADD(23, _SHIFT3)
#define _LR1 _ADD(24, _SHIFT3)
#define _LR2 _ADD(25, _SHIFT3)
#define _LR3 _ADD(26, _SHIFT3)
#define _LR4 _ADD(27, _SHIFT3)
#define _LR5 _ADD(28, _SHIFT3)

#define _TL2 _ADD(28, _SHIFT4)
#define _TL1 _ADD(29, _SHIFT4)

#define _TR1 _ADD(30, _SHIFT5)
#define _TR2 _ADD(31, _SHIFT5)
