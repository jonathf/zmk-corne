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
#define INC_1 2
#define INC_2 3
#define INC_3 4
#define INC_4 5
#define INC_5 6
#define INC_6 7
#define INC_7 8
#define INC_8 9
#define INC_9 10
#define INC_10 11
#define INC_11 12
#define INC_12 13
#define INC_13 14
#define INC_14 15
#define INC_15 16
#define INC_16 17
#define INC_17 18
#define INC_18 19
#define INC_19 20
#define INC_20 21
#define INC_21 22
#define INC_22 23
#define INC_23 24
#define INC_24 25
#define INC_25 26
#define INC_26 27
#define INC_27 28
#define INC_28 29
#define INC_29 30
#define INC_30 31
#define INC_31 32
#define INC_32 33
#define INC_33 34
#define INC_34 35
#define INC_35 36
#define INC_36 37
#define INC_37 38
#define INC_38 39
#define INC_39 40

#define ADD(x, y) ADD_ ## y(x)
#define ADD_0(x) x
#define ADD_1(x) INC(x)
#define ADD_2(x) ADD_1(INC(x))
#define ADD_3(x) ADD_2(INC(x))
#define ADD_4(x) ADD_3(INC(x))
#define ADD_5(x) ADD_4(INC(x))
#define ADD_6(x) ADD_5(INC(x))
#define ADD_7(x) ADD_6(INC(x))
#define ADD_8(x) ADD_7(INC(x))
#define ADD_9(x) ADD_8(INC(x))


#if LAYOUT == 0
  #define SHIFT1 0
  #define SHIFT2 0
  #define SHIFT3 0
  #define SHIFT4 0
  #define SHIFT5 0
#if LAYOUT == 1
  #define SHIFT1 0
  #define SHIFT2 0
  #define SHIFT3 1
  #define SHIFT4 2
  #define SHIFT5 4
#else
  #define SHIFT1 1
  #define SHIFT2 3
  #define SHIFT3 6
  #define SHIFT4 9
  #define SHIFT5 9
#endif

#define UL5 ADD(0, SHIFT1)
#define UL4 ADD(1, SHIFT1)
#define UL3 ADD(2, SHIFT1)
#define UL2 ADD(3, SHIFT1)
#define UL1 ADD(4, SHIFT1)
#define UR1 ADD(5, SHIFT1)
#define UR2 ADD(6, SHIFT1)
#define UR3 ADD(7, SHIFT1)
#define UR4 ADD(8, SHIFT1)
#define UR5 ADD(9, SHIFT1)

#define ML5 ADD(10, SHIFT2)
#define ML4 ADD(11, SHIFT2)
#define ML3 ADD(12, SHIFT2)
#define ML2 ADD(13, SHIFT2)
#define ML1 ADD(14, SHIFT2)
#define MR1 ADD(15, SHIFT2)
#define MR2 ADD(16, SHIFT2)
#define MR3 ADD(17, SHIFT2)
#define MR4 ADD(18, SHIFT2)
#define MR5 ADD(19, SHIFT2)

#define LL5 ADD(19, SHIFT3)
#define LL4 ADD(20, SHIFT3)
#define LL3 ADD(21, SHIFT3)
#define LL2 ADD(22, SHIFT3)
#define LL1 ADD(23, SHIFT3)
#define LR1 ADD(24, SHIFT3)
#define LR2 ADD(25, SHIFT3)
#define LR3 ADD(26, SHIFT3)
#define LR4 ADD(27, SHIFT3)
#define LR5 ADD(28, SHIFT3)

#define TL2 ADD(28, SHIFT4)
#define TL1 ADD(29, SHIFT4)

#define TR1 ADD(30, SHIFT5)
#define TR2 ADD(31, SHIFT5)
