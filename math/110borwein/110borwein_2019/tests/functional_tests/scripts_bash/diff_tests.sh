##
## EPITECH PROJECT, 2020
## diff_tests
## File description:
## project_name:
##

#!/bin/sh

################################################################################
#                                DIFF TESTS                                    #
################################################################################

echo -e "\\$DEFAULT [i]\\$LIGHT_MAGENTA RUNNING DIFF:\n\\$RESET_ALL"

###########
#test help#
###########

diff tests/functional_tests/output/help tests/functional_tests/expected/help_expected

if (($? == 0))
then
    ((pass++))
    ((total++))
else
    ((fail++))
    ((total++))
    echo -e "\\$BLINK \\$LIGHT_RED /!\ Test help failed /!\ \n\\$RESET_ALL"
fi

rm tests/functional_tests/output/help

#############
#normal test#
#############

echo -e "\\$LIGHT_CYAN Verifing output test n°1\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
diff tests/functional_tests/output/test_n°1 tests/functional_tests/expected/test_n°1_expected

if (($? == 0))
then
    ((pass++))
    ((total++))
else
    echo -e "\\$BLINK \\$LIGHT_RED /!\ Test n°$total failed /!\ \n\\$RESET_ALL"
    ((fail++))
    ((total++))
fi

rm tests/functional_tests/output/test_n°1

echo -e "\\$LIGHT_CYAN Verifing output test n°2\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
diff tests/functional_tests/output/test_n°2 tests/functional_tests/expected/test_n°2_expected

if (($? == 0))
then
    ((pass++))
    ((total++))
else
    echo -e "\\$BLINK \\$LIGHT_RED /!\ Test n°$total failed /!\ \n\\$RESET_ALL"
    ((fail++))
    ((total++))
fi

rm tests/functional_tests/output/test_n°2

echo -e "\\$LIGHT_CYAN Verifing output test n°3\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
diff tests/functional_tests/output/test_n°3 tests/functional_tests/expected/test_n°3_expected

if (($? == 0))
then
    ((pass++))
    ((total++))
else
    echo -e "\\$BLINK \\$LIGHT_RED /!\ Test n°$total failed /!\ \n\\$RESET_ALL"
    ((fail++))
    ((total++))
fi

rm tests/functional_tests/output/test_n°3

echo -e "\\$LIGHT_CYAN Verifing output test n°4\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
diff tests/functional_tests/output/test_n°4 tests/functional_tests/expected/test_n°4_expected

if (($? == 0))
then
    ((pass++))
    ((total++))
else
    echo -e "\\$BLINK \\$LIGHT_RED /!\ Test n°$total failed /!\ \n\\$RESET_ALL"
    ((fail++))
    ((total++))
fi

rm tests/functional_tests/output/test_n°4

echo -e "\\$LIGHT_CYAN Verifing output test n°5\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
diff tests/functional_tests/output/test_n°5 tests/functional_tests/expected/test_n°5_expected

if (($? == 0))
then
    ((pass++))
    ((total++))
else
    echo -e "\\$BLINK \\$LIGHT_RED /!\ Test n°$total failed /!\ \n\\$RESET_ALL"
    ((fail++))
    ((total++))
fi

rm tests/functional_tests/output/test_n°5

echo -e "\\$LIGHT_CYAN Verifing output test n°6\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
diff tests/functional_tests/output/test_n°6 tests/functional_tests/expected/test_n°6_expected

if (($? == 0))
then
    ((pass++))
    ((total++))
else
    echo -e "\\$BLINK \\$LIGHT_RED /!\ Test n°$total failed /!\ \n\\$RESET_ALL"
    ((fail++))
    ((total++))
fi

rm tests/functional_tests/output/test_n°6

echo -e "\\$LIGHT_CYAN Verifing output test n°7\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
diff tests/functional_tests/output/test_n°7 tests/functional_tests/expected/test_n°7_expected

if (($? == 0))
then
    ((pass++))
    ((total++))
else
    echo -e "\\$BLINK \\$LIGHT_RED /!\ Test n°$total failed /!\ \n\\$RESET_ALL"
    ((fail++))
    ((total++))
fi

rm tests/functional_tests/output/test_n°7

echo -e "\\$LIGHT_CYAN Verifing output test n°8\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
diff tests/functional_tests/output/test_n°8 tests/functional_tests/expected/test_n°8_expected

if (($? == 0))
then
    ((pass++))
    ((total++))
else
    echo -e "\\$BLINK \\$LIGHT_RED /!\ Test n°$total failed /!\ \n\\$RESET_ALL"
    ((fail++))
    ((total++))
fi

rm tests/functional_tests/output/test_n°8

echo -e "\\$LIGHT_CYAN Verifing output test n°9\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
diff tests/functional_tests/output/test_n°9 tests/functional_tests/expected/test_n°9_expected

if (($? == 0))
then
    ((pass++))
    ((total++))
else
    echo -e "\\$BLINK \\$LIGHT_RED /!\ Test n°$total failed /!\ \n\\$RESET_ALL"
    ((fail++))
    ((total++))
fi

rm tests/functional_tests/output/test_n°9

echo -e "\\$LIGHT_CYAN Verifing output test n°10\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
diff tests/functional_tests/output/test_n°10 tests/functional_tests/expected/test_n°10_expected

if (($? == 0))
then
    ((pass++))
    ((total++))
else
    echo -e "\\$BLINK \\$LIGHT_RED /!\ Test n°$total failed /!\ \n\\$RESET_ALL"
    ((fail++))
    ((total++))
fi

rm tests/functional_tests/output/test_n°10

echo -e "\\$LIGHT_YELLOW Diff tests\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"