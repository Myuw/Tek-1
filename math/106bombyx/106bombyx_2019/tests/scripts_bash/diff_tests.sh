##
## EPITECH PROJECT, 2020
## functional_test
## File description:
## 106bombyx
##

#!/bin/sh

################################################################################
#                                DIFF TESTS                                    #
################################################################################

echo -e "\\$DEFAULT [i]\\$LIGHT_MAGENTA RUNNING DIFF:\n\\$RESET_ALL"

echo -e "\\$LIGHT_YELLOW [!] Diff tests [!]\n\\$RESET_ALL"

###########
#test help#
###########

echo -e "\\$LIGHT_BLUE Diff help and help_solved\\$RESET_ALL"
diff tests/help tests/solved/help_solved

if (($? == 0))
then
    echo -e "\\$LIGHT_GREEN Test passed\n\\$RESET_ALL"
    ((pass++))
    ((nbr_tests++))
else
    echo -e "\\$BLINK \\$LIGHT_RED /!\ Test failed /!\ \n\\$RESET_ALL"
    ((fail++))
    ((nbr_tests++))
fi

rm tests/help

##########################
#normal test logistic map#
##########################

echo -e "\\$LIGHT_BLUE Diff test_n°1 and test_n°1_solved\\$RESET_ALL"
diff tests/test_n°1 tests/solved/test_n°1_solved

if (($? == 0))
then
    echo -e "\\$LIGHT_GREEN Test passed\n\\$RESET_ALL"
    ((pass++))
    ((nbr_tests++))
else
    echo -e "\\$BLINK \\$LIGHT_RED /!\ Test failed /!\ \n\\$RESET_ALL"
    ((fail++))
    ((nbr_tests++))
fi

rm tests/test_n°1

echo -e "\\$LIGHT_BLUE Diff test_n°2 and test_n°2_solved\\$RESET_ALL"
diff tests/test_n°2 tests/solved/test_n°2_solved

if (($? == 0))
then
    echo -e "\\$LIGHT_GREEN Test passed\n\\$RESET_ALL"
    ((pass++))
    ((nbr_tests++))
else
    echo -e "\\$BLINK \\$LIGHT_RED /!\ Test failed /!\ \n\\$RESET_ALL"
    ((fail++))
    ((nbr_tests++))
fi

rm tests/test_n°2

echo -e "\\$LIGHT_BLUE Diff test_n°3 and test_n°3_solved\\$RESET_ALL"
diff tests/test_n°3 tests/solved/test_n°3_solved

if (($? == 0))
then
    echo -e "\\$LIGHT_GREEN Test passed\n\\$RESET_ALL"
    ((pass++))
    ((nbr_tests++))
else
    echo -e "\\$BLINK \\$LIGHT_RED /!\ Test failed /!\ \n\\$RESET_ALL"
    ((fail++))
    ((nbr_tests++))
fi

rm tests/test_n°3

echo -e "\\$LIGHT_BLUE Diff test_n°4 and test_n°4_solved\\$RESET_ALL"
diff tests/test_n°4 tests/solved/test_n°4_solved

if (($? == 0))
then
    echo -e "\\$LIGHT_GREEN Test passed\n\\$RESET_ALL"
    ((pass++))
    ((nbr_tests++))
else
    echo -e "\\$BLINK \\$LIGHT_RED /!\ Test failed /!\ \n\\$RESET_ALL"
    ((fail++))
    ((nbr_tests++))
fi

rm tests/test_n°4

echo -e "\\$LIGHT_BLUE Diff test_n°5 and test_n°5_solved\\$RESET_ALL"
diff tests/test_n°5 tests/solved/test_n°5_solved

if (($? == 0))
then
    echo -e "\\$LIGHT_GREEN Test passed\n\\$RESET_ALL"
    ((pass++))
    ((nbr_tests++))
else
    echo -e "\\$BLINK \\$LIGHT_RED /!\ Test failed /!\ \n\\$RESET_ALL"
    ((fail++))
    ((nbr_tests++))
fi

rm tests/test_n°5

echo -e "\\$LIGHT_BLUE Diff test_n°6 and test_n°6_solved\\$RESET_ALL"
diff tests/test_n°6 tests/solved/test_n°6_solved

if (($? == 0))
then
    echo -e "\\$LIGHT_GREEN Test passed\n\\$RESET_ALL"
    ((pass++))
    ((nbr_tests++))
else
    echo -e "\\$BLINK \\$LIGHT_RED /!\ Test failed /!\ \n\\$RESET_ALL"
    ((fail++))
    ((nbr_tests++))
fi

rm tests/test_n°6

echo -e "\\$LIGHT_BLUE Diff test_n°7 and test_n°7_solved\\$RESET_ALL"
diff tests/test_n°7 tests/solved/test_n°7_solved

if (($? == 0))
then
    echo -e "\\$LIGHT_GREEN Test passed\n\\$RESET_ALL"
    ((pass++))
    ((nbr_tests++))
else
    echo -e "\\$BLINK \\$LIGHT_RED /!\ Test failed /!\ \n\\$RESET_ALL"
    ((fail++))
    ((nbr_tests++))
fi

rm tests/test_n°7

echo -e "\\$LIGHT_BLUE Diff test_n°8 and test_n°8_solved\\$RESET_ALL"
diff tests/test_n°8 tests/solved/test_n°8_solved

if (($? == 0))
then
    echo -e "\\$LIGHT_GREEN Test passed\n\\$RESET_ALL"
    ((pass++))
    ((nbr_tests++))
else
    echo -e "\\$BLINK \\$LIGHT_RED /!\ Test failed /!\ \n\\$RESET_ALL"
    ((fail++))
    ((nbr_tests++))
fi

rm tests/test_n°8

echo -e "\\$LIGHT_BLUE Diff test_n°9 and test_n°9_solved\\$RESET_ALL"
diff tests/test_n°9 tests/solved/test_n°9_solved

if (($? == 0))
then
    echo -e "\\$LIGHT_GREEN Test passed\n\\$RESET_ALL"
    ((pass++))
    ((nbr_tests++))
else
    echo -e "\\$BLINK \\$LIGHT_RED /!\ Test failed /!\ \n\\$RESET_ALL"
    ((fail++))
    ((nbr_tests++))
fi

rm tests/test_n°9

echo -e "\\$LIGHT_BLUE Diff test_n°10 and test_n°10_solved\\$RESET_ALL"
diff tests/test_n°10 tests/solved/test_n°10_solved

if (($? == 0))
then
    echo -e "\\$LIGHT_GREEN Test passed\n\\$RESET_ALL"
    ((pass++))
    ((nbr_tests++))
else
    echo -e "\\$BLINK \\$LIGHT_RED /!\ Test failed /!\ \n\\$RESET_ALL"
    ((fail++))
    ((nbr_tests++))
fi

rm tests/test_n°10

echo -e "\\$LIGHT_BLUE Diff test_n°11 and test_n°11_solved\\$RESET_ALL"
diff tests/test_n°11 tests/solved/test_n°11_solved

if (($? == 0))
then
    echo -e "\\$LIGHT_GREEN Test passed\n\\$RESET_ALL"
    ((pass++))
    ((nbr_tests++))
else
    echo -e "\\$BLINK \\$LIGHT_RED /!\ Test failed /!\ \n\\$RESET_ALL"
    ((fail++))
    ((nbr_tests++))
fi

rm tests/test_n°11

echo -e "\\$LIGHT_BLUE Diff test_n°12 and test_n°12_solved\\$RESET_ALL"
diff tests/test_n°12 tests/solved/test_n°12_solved

if (($? == 0))
then
    echo -e "\\$LIGHT_GREEN Test passed\n\\$RESET_ALL"
    ((pass++))
    ((nbr_tests++))
else
    echo -e "\\$BLINK \\$LIGHT_RED /!\ Test failed /!\ \n\\$RESET_ALL"
    ((fail++))
    ((nbr_tests++))
fi

rm tests/test_n°12

echo -e "\\$LIGHT_BLUE Diff test_n°13 and test_n°13_solved\\$RESET_ALL"
diff tests/test_n°13 tests/solved/test_n°13_solved

if (($? == 0))
then
    echo -e "\\$LIGHT_GREEN Test passed\n\\$RESET_ALL"
    ((pass++))
    ((nbr_tests++))
else
    echo -e "\\$BLINK \\$LIGHT_RED /!\ Test failed /!\ \n\\$RESET_ALL"
    ((fail++))
    ((nbr_tests++))
fi

rm tests/test_n°13

echo -e "\\$LIGHT_BLUE Diff test_n°14 and test_n°14_solved\\$RESET_ALL"
diff tests/test_n°14 tests/solved/test_n°14_solved

if (($? == 0))
then
    echo -e "\\$LIGHT_GREEN Test passed\n\\$RESET_ALL"
    ((pass++))
    ((nbr_tests++))
else
    echo -e "\\$BLINK \\$LIGHT_RED /!\ Test failed /!\ \n\\$RESET_ALL"
    ((fail++))
    ((nbr_tests++))
fi

rm tests/test_n°14

echo -e "\\$LIGHT_BLUE Diff test_n°15 and test_n°15_solved\\$RESET_ALL"
diff tests/test_n°15 tests/solved/test_n°15_solved

if (($? == 0))
then
    echo -e "\\$LIGHT_GREEN Test passed\n\\$RESET_ALL"
    ((pass++))
    ((nbr_tests++))
else
    echo -e "\\$BLINK \\$LIGHT_RED /!\ Test failed /!\ \n\\$RESET_ALL"
    ((fail++))
    ((nbr_tests++))
fi

rm tests/test_n°15

echo -e "\\$LIGHT_BLUE Diff test_n°16 and test_n°16_solved\\$RESET_ALL"
diff tests/test_n°16 tests/solved/test_n°16_solved

if (($? == 0))
then
    echo -e "\\$LIGHT_GREEN Test passed\n\\$RESET_ALL"
    ((pass++))
    ((nbr_tests++))
else
    echo -e "\\$BLINK \\$LIGHT_RED /!\ Test failed /!\ \n\\$RESET_ALL"
    ((fail++))
    ((nbr_tests++))
fi

rm tests/test_n°16

echo -e "\\$LIGHT_BLUE Diff test_n°17 and test_n°17_solved\\$RESET_ALL"
diff tests/test_n°17 tests/solved/test_n°17_solved

if (($? == 0))
then
    echo -e "\\$LIGHT_GREEN Test passed\n\\$RESET_ALL"
    ((pass++))
    ((nbr_tests++))
else
    echo -e "\\$BLINK \\$LIGHT_RED /!\ Test failed /!\ \n\\$RESET_ALL"
    ((fail++))
    ((nbr_tests++))
fi

rm tests/test_n°17

echo -e "\\$LIGHT_BLUE Diff test_n°18 and test_n°18_solved\\$RESET_ALL"
diff tests/test_n°18 tests/solved/test_n°18_solved

if (($? == 0))
then
    echo -e "\\$LIGHT_GREEN Test passed\n\\$RESET_ALL"
    ((pass++))
    ((nbr_tests++))
else
    echo -e "\\$BLINK \\$LIGHT_RED /!\ Test failed /!\ \n\\$RESET_ALL"
    ((fail++))
    ((nbr_tests++))
fi

rm tests/test_n°18

echo -e "\\$LIGHT_BLUE Diff test_n°19 and test_n°19_solved\\$RESET_ALL"
diff tests/test_n°19 tests/solved/test_n°19_solved

if (($? == 0))
then
    echo -e "\\$LIGHT_GREEN Test passed\n\\$RESET_ALL"
    ((pass++))
    ((nbr_tests++))
else
    echo -e "\\$BLINK \\$LIGHT_RED /!\ Test failed /!\ \n\\$RESET_ALL"
    ((fail++))
    ((nbr_tests++))
fi

rm tests/test_n°19

echo -e "\\$LIGHT_BLUE Diff test_n°20 and test_n°20_solved\\$RESET_ALL"
diff tests/test_n°20 tests/solved/test_n°20_solved

if (($? == 0))
then
    echo -e "\\$LIGHT_GREEN Test passed\n\\$RESET_ALL"
    ((pass++))
    ((nbr_tests++))
else
    echo -e "\\$BLINK \\$LIGHT_RED /!\ Test failed /!\ \n\\$RESET_ALL"
    ((fail++))
    ((nbr_tests++))
fi

rm tests/test_n°20

##########################
#float tests logistic map#
##########################

echo -e "\\$LIGHT_BLUE Diff test_n°21 and test_n°21_solved\\$RESET_ALL"
diff tests/test_n°21 tests/solved/test_n°21_solved

if (($? == 0))
then
    echo -e "\\$LIGHT_GREEN Test passed\n\\$RESET_ALL"
    ((pass++))
    ((nbr_tests++))
else
    echo -e "\\$BLINK \\$LIGHT_RED /!\ Test failed /!\ \n\\$RESET_ALL"
    ((fail++))
    ((nbr_tests++))
fi

rm tests/test_n°21

echo -e "\\$LIGHT_BLUE Diff test_n°22 and test_n°22_solved\\$RESET_ALL"
diff tests/test_n°22 tests/solved/test_n°22_solved

if (($? == 0))
then
    echo -e "\\$LIGHT_GREEN Test passed\n\\$RESET_ALL"
    ((pass++))
    ((nbr_tests++))
else
    echo -e "\\$BLINK \\$LIGHT_RED /!\ Test failed /!\ \n\\$RESET_ALL"
    ((fail++))
    ((nbr_tests++))
fi

rm tests/test_n°22

echo -e "\\$LIGHT_BLUE Diff test_n°23 and test_n°23_solved\\$RESET_ALL"
diff tests/test_n°23 tests/solved/test_n°23_solved

if (($? == 0))
then
    echo -e "\\$LIGHT_GREEN Test passed\n\\$RESET_ALL"
    ((pass++))
    ((nbr_tests++))
else
    echo -e "\\$BLINK \\$LIGHT_RED /!\ Test failed /!\ \n\\$RESET_ALL"
    ((fail++))
    ((nbr_tests++))
fi

rm tests/test_n°23

echo -e "\\$LIGHT_BLUE Diff test_n°24 and test_n°24_solved\\$RESET_ALL"
diff tests/test_n°24 tests/solved/test_n°24_solved

if (($? == 0))
then
    echo -e "\\$LIGHT_GREEN Test passed\n\\$RESET_ALL"
    ((pass++))
    ((nbr_tests++))
else
    echo -e "\\$BLINK \\$LIGHT_RED /!\ Test failed /!\ \n\\$RESET_ALL"
    ((fail++))
    ((nbr_tests++))
fi

rm tests/test_n°24

echo -e "\\$LIGHT_BLUE Diff test_n°25 and test_n°25_solved\\$RESET_ALL"
diff tests/test_n°25 tests/solved/test_n°25_solved

if (($? == 0))
then
    echo -e "\\$LIGHT_GREEN Test passed\n\\$RESET_ALL"
    ((pass++))
    ((nbr_tests++))
else
    echo -e "\\$BLINK \\$LIGHT_RED /!\ Test failed /!\ \n\\$RESET_ALL"
    ((fail++))
    ((nbr_tests++))
fi

rm tests/test_n°25

echo -e "\\$LIGHT_BLUE Diff test_n°26 and test_n°26_solved\\$RESET_ALL"
diff tests/test_n°26 tests/solved/test_n°26_solved

if (($? == 0))
then
    echo -e "\\$LIGHT_GREEN Test passed\n\\$RESET_ALL"
    ((pass++))
    ((nbr_tests++))
else
    echo -e "\\$BLINK \\$LIGHT_RED /!\ Test failed /!\ \n\\$RESET_ALL"
    ((fail++))
    ((nbr_tests++))
fi

rm tests/test_n°26

echo -e "\\$LIGHT_BLUE Diff test_n°27 and test_n°27_solved\\$RESET_ALL"
diff tests/test_n°27 tests/solved/test_n°27_solved

if (($? == 0))
then
    echo -e "\\$LIGHT_GREEN Test passed\n\\$RESET_ALL"
    ((pass++))
    ((nbr_tests++))
else
    echo -e "\\$BLINK \\$LIGHT_RED /!\ Test failed /!\ \n\\$RESET_ALL"
    ((fail++))
    ((nbr_tests++))
fi

rm tests/test_n°27

echo -e "\\$LIGHT_BLUE Diff test_n°28 and test_n°28_solved\\$RESET_ALL"
diff tests/test_n°28 tests/solved/test_n°28_solved

if (($? == 0))
then
    echo -e "\\$LIGHT_GREEN Test passed\n\\$RESET_ALL"
    ((pass++))
    ((nbr_tests++))
else
    echo -e "\\$BLINK \\$LIGHT_RED /!\ Test failed /!\ \n\\$RESET_ALL"
    ((fail++))
    ((nbr_tests++))
fi

rm tests/test_n°28

echo -e "\\$LIGHT_BLUE Diff test_n°29 and test_n°29_solved\\$RESET_ALL"
diff tests/test_n°29 tests/solved/test_n°29_solved

if (($? == 0))
then
    echo -e "\\$LIGHT_GREEN Test passed\n\\$RESET_ALL"
    ((pass++))
    ((nbr_tests++))
else
    echo -e "\\$BLINK \\$LIGHT_RED /!\ Test failed /!\ \n\\$RESET_ALL"
    ((fail++))
    ((nbr_tests++))
fi

rm tests/test_n°29

echo -e "\\$LIGHT_BLUE Diff test_n°30 and test_n°30_solved\\$RESET_ALL"
diff tests/test_n°30 tests/solved/test_n°30_solved

if (($? == 0))
then
    echo -e "\\$LIGHT_GREEN Test passed\n\\$RESET_ALL"
    ((pass++))
    ((nbr_tests++))
else
    echo -e "\\$BLINK \\$LIGHT_RED /!\ Test failed /!\ \n\\$RESET_ALL"
    ((fail++))
    ((nbr_tests++))
fi

rm tests/test_n°30

echo -e "\\$LIGHT_BLUE Diff test_n°31 and test_n°31_solved\\$RESET_ALL"
diff tests/test_n°31 tests/solved/test_n°31_solved

if (($? == 0))
then
    echo -e "\\$LIGHT_GREEN Test passed\n\\$RESET_ALL"
    ((pass++))
    ((nbr_tests++))
else
    echo -e "\\$BLINK \\$LIGHT_RED /!\ Test failed /!\ \n\\$RESET_ALL"
    ((fail++))
    ((nbr_tests++))
fi

rm tests/test_n°31

echo -e "\\$LIGHT_BLUE Diff test_n°32 and test_n°32_solved\\$RESET_ALL"
diff tests/test_n°32 tests/solved/test_n°32_solved

if (($? == 0))
then
    echo -e "\\$LIGHT_GREEN Test passed\n\\$RESET_ALL"
    ((pass++))
    ((nbr_tests++))
else
    echo -e "\\$BLINK \\$LIGHT_RED /!\ Test failed /!\ \n\\$RESET_ALL"
    ((fail++))
    ((nbr_tests++))
fi

rm tests/test_n°32

echo -e "\\$LIGHT_BLUE Diff test_n°33 and test_n°33_solved\\$RESET_ALL"
diff tests/test_n°33 tests/solved/test_n°33_solved

if (($? == 0))
then
    echo -e "\\$LIGHT_GREEN Test passed\n\\$RESET_ALL"
    ((pass++))
    ((nbr_tests++))
else
    echo -e "\\$BLINK \\$LIGHT_RED /!\ Test failed /!\ \n\\$RESET_ALL"
    ((fail++))
    ((nbr_tests++))
fi

rm tests/test_n°33

echo -e "\\$LIGHT_BLUE Diff test_n°34 and test_n°34_solved\\$RESET_ALL"
diff tests/test_n°34 tests/solved/test_n°34_solved

if (($? == 0))
then
    echo -e "\\$LIGHT_GREEN Test passed\n\\$RESET_ALL"
    ((pass++))
    ((nbr_tests++))
else
    echo -e "\\$BLINK \\$LIGHT_RED /!\ Test failed /!\ \n\\$RESET_ALL"
    ((fail++))
    ((nbr_tests++))
fi

rm tests/test_n°34

echo -e "\\$LIGHT_BLUE Diff test_n°35 and test_n°35_solved\\$RESET_ALL"
diff tests/test_n°35 tests/solved/test_n°35_solved

if (($? == 0))
then
    echo -e "\\$LIGHT_GREEN Test passed\n\\$RESET_ALL"
    ((pass++))
    ((nbr_tests++))
else
    echo -e "\\$BLINK \\$LIGHT_RED /!\ Test failed /!\ \n\\$RESET_ALL"
    ((fail++))
    ((nbr_tests++))
fi

rm tests/test_n°35

echo -e "\\$LIGHT_BLUE Diff test_n°36 and test_n°36_solved\\$RESET_ALL"
diff tests/test_n°36 tests/solved/test_n°36_solved

if (($? == 0))
then
    echo -e "\\$LIGHT_GREEN Test passed\n\\$RESET_ALL"
    ((pass++))
    ((nbr_tests++))
else
    echo -e "\\$BLINK \\$LIGHT_RED /!\ Test failed /!\ \n\\$RESET_ALL"
    ((fail++))
    ((nbr_tests++))
fi

rm tests/test_n°36

echo -e "\\$LIGHT_BLUE Diff test_n°37 and test_n°37_solved\\$RESET_ALL"
diff tests/test_n°37 tests/solved/test_n°37_solved

if (($? == 0))
then
    echo -e "\\$LIGHT_GREEN Test passed\n\\$RESET_ALL"
    ((pass++))
    ((nbr_tests++))
else
    echo -e "\\$BLINK \\$LIGHT_RED /!\ Test failed /!\ \n\\$RESET_ALL"
    ((fail++))
    ((nbr_tests++))
fi

rm tests/test_n°37

echo -e "\\$LIGHT_BLUE Diff test_n°38 and test_n°38_solved\\$RESET_ALL"
diff tests/test_n°38 tests/solved/test_n°38_solved

if (($? == 0))
then
    echo -e "\\$LIGHT_GREEN Test passed\n\\$RESET_ALL"
    ((pass++))
    ((nbr_tests++))
else
    echo -e "\\$BLINK \\$LIGHT_RED /!\ Test failed /!\ \n\\$RESET_ALL"
    ((fail++))
    ((nbr_tests++))
fi

rm tests/test_n°38

echo -e "\\$LIGHT_BLUE Diff test_n°39 and test_n°39_solved\\$RESET_ALL"
diff tests/test_n°39 tests/solved/test_n°39_solved

if (($? == 0))
then
    echo -e "\\$LIGHT_GREEN Test passed\n\\$RESET_ALL"
    ((pass++))
    ((nbr_tests++))
else
    echo -e "\\$BLINK \\$LIGHT_RED /!\ Test failed /!\ \n\\$RESET_ALL"
    ((fail++))
    ((nbr_tests++))
fi

rm tests/test_n°39

echo -e "\\$LIGHT_BLUE Diff test_n°40 and test_n°40_solved\\$RESET_ALL"
diff tests/test_n°40 tests/solved/test_n°40_solved

if (($? == 0))
then
    echo -e "\\$LIGHT_GREEN Test passed\n\\$RESET_ALL"
    ((pass++))
    ((nbr_tests++))
else
    echo -e "\\$BLINK \\$LIGHT_RED /!\ Test failed /!\ \n\\$RESET_ALL"
    ((fail++))
    ((nbr_tests++))
fi

rm tests/test_n°40

################################
#Diff tests bifurcation diagram#
################################

echo -e "\\$LIGHT_BLUE Diff test_n°41 and test_n°41_solved\\$RESET_ALL"
diff tests/test_n°41 tests/solved/test_n°41_solved

if (($? == 0))
then
    echo -e "\\$LIGHT_GREEN Test passed\n\\$RESET_ALL"
    ((pass++))
    ((nbr_tests++))
else
    echo -e "\\$BLINK \\$LIGHT_RED /!\ Test failed /!\ \n\\$RESET_ALL"
    ((fail++))
    ((nbr_tests++))
fi

rm tests/test_n°41

echo -e "\\$LIGHT_BLUE Diff test_n°42 and test_n°42_solved\\$RESET_ALL"
diff tests/test_n°42 tests/solved/test_n°42_solved

if (($? == 0))
then
    echo -e "\\$LIGHT_GREEN Test passed\n\\$RESET_ALL"
    ((pass++))
    ((nbr_tests++))
else
    echo -e "\\$BLINK \\$LIGHT_RED /!\ Test failed /!\ \n\\$RESET_ALL"
    ((fail++))
    ((nbr_tests++))
fi

rm tests/test_n°42

echo -e "\\$LIGHT_BLUE Diff test_n°43 and test_n°43_solved\\$RESET_ALL"
diff tests/test_n°43 tests/solved/test_n°43_solved

if (($? == 0))
then
    echo -e "\\$LIGHT_GREEN Test passed\n\\$RESET_ALL"
    ((pass++))
    ((nbr_tests++))
else
    echo -e "\\$BLINK \\$LIGHT_RED /!\ Test failed /!\ \n\\$RESET_ALL"
    ((fail++))
    ((nbr_tests++))
fi

rm tests/test_n°43

echo -e "\\$LIGHT_BLUE Diff test_n°44 and test_n°44_solved\\$RESET_ALL"
diff tests/test_n°44 tests/solved/test_n°44_solved

if (($? == 0))
then
    echo -e "\\$LIGHT_GREEN Test passed\n\\$RESET_ALL"
    ((pass++))
    ((nbr_tests++))
else
    echo -e "\\$BLINK \\$LIGHT_RED /!\ Test failed /!\ \n\\$RESET_ALL"
    ((fail++))
    ((nbr_tests++))
fi

rm tests/test_n°44

echo -e "\\$LIGHT_BLUE Diff test_n°45 and test_n°45_solved\\$RESET_ALL"
diff tests/test_n°45 tests/solved/test_n°45_solved

if (($? == 0))
then
    echo -e "\\$LIGHT_GREEN Test passed\n\\$RESET_ALL"
    ((pass++))
    ((nbr_tests++))
else
    echo -e "\\$BLINK \\$LIGHT_RED /!\ Test failed /!\ \n\\$RESET_ALL"
    ((fail++))
    ((nbr_tests++))
fi

rm tests/test_n°45

echo -e "\\$LIGHT_BLUE Diff test_n°46 and test_n°46_solved\\$RESET_ALL"
diff tests/test_n°46 tests/solved/test_n°46_solved

if (($? == 0))
then
    echo -e "\\$LIGHT_GREEN Test passed\n\\$RESET_ALL"
    ((pass++))
    ((nbr_tests++))
else
    echo -e "\\$BLINK \\$LIGHT_RED /!\ Test failed /!\ \n\\$RESET_ALL"
    ((fail++))
    ((nbr_tests++))
fi

rm tests/test_n°46

echo -e "\\$LIGHT_BLUE Diff test_n°47 and test_n°47_solved\\$RESET_ALL"
diff tests/test_n°47 tests/solved/test_n°47_solved

if (($? == 0))
then
    echo -e "\\$LIGHT_GREEN Test passed\n\\$RESET_ALL"
    ((pass++))
    ((nbr_tests++))
else
    echo -e "\\$BLINK \\$LIGHT_RED /!\ Test failed /!\ \n\\$RESET_ALL"
    ((fail++))
    ((nbr_tests++))
fi

rm tests/test_n°47

echo -e "\\$LIGHT_BLUE Diff test_n°48 and test_n°48_solved\\$RESET_ALL"
diff tests/test_n°48 tests/solved/test_n°48_solved

if (($? == 0))
then
    echo -e "\\$LIGHT_GREEN Test passed\n\\$RESET_ALL"
    ((pass++))
    ((nbr_tests++))
else
    echo -e "\\$BLINK \\$LIGHT_RED /!\ Test failed /!\ \n\\$RESET_ALL"
    ((fail++))
    ((nbr_tests++))
fi

rm tests/test_n°48

echo -e "\\$LIGHT_BLUE Diff test_n°49 and test_n°49_solved\\$RESET_ALL"
diff tests/test_n°49 tests/solved/test_n°49_solved

if (($? == 0))
then
    echo -e "\\$LIGHT_GREEN Test passed\n\\$RESET_ALL"
    ((pass++))
    ((nbr_tests++))
else
    echo -e "\\$BLINK \\$LIGHT_RED /!\ Test failed /!\ \n\\$RESET_ALL"
    ((fail++))
    ((nbr_tests++))
fi

rm tests/test_n°49

echo -e "\\$LIGHT_BLUE Diff test_n°50 and test_n°50_solved\\$RESET_ALL"
diff tests/test_n°50 tests/solved/test_n°50_solved

if (($? == 0))
then
    echo -e "\\$LIGHT_GREEN Test passed\n\\$RESET_ALL"
    ((pass++))
    ((nbr_tests++))
else
    echo -e "\\$BLINK \\$LIGHT_RED /!\ Test failed /!\ \n\\$RESET_ALL"
    ((fail++))
    ((nbr_tests++))
fi

rm tests/test_n°50

echo -e "\\$LIGHT_BLUE Diff test_n°51 and test_n°51_solved\\$RESET_ALL"
diff tests/test_n°51 tests/solved/test_n°51_solved

if (($? == 0))
then
    echo -e "\\$LIGHT_GREEN Test passed\n\\$RESET_ALL"
    ((pass++))
    ((nbr_tests++))
else
    echo -e "\\$BLINK \\$LIGHT_RED /!\ Test failed /!\ \n\\$RESET_ALL"
    ((fail++))
    ((nbr_tests++))
fi

rm tests/test_n°51

echo -e "\\$LIGHT_BLUE Diff test_n°52 and test_n°52_solved\\$RESET_ALL"
diff tests/test_n°52 tests/solved/test_n°52_solved

if (($? == 0))
then
    echo -e "\\$LIGHT_GREEN Test passed\n\\$RESET_ALL"
    ((pass++))
    ((nbr_tests++))
else
    echo -e "\\$BLINK \\$LIGHT_RED /!\ Test failed /!\ \n\\$RESET_ALL"
    ((fail++))
    ((nbr_tests++))
fi

rm tests/test_n°52