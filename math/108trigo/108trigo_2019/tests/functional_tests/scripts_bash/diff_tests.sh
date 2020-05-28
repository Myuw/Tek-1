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

echo -e "\\$LIGHT_YELLOW [!] Diff tests\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"

###########
#test help#
###########

diff tests/functional_tests/help tests/functional_tests/expected/help_expected

if (($? == 0))
then
    ((pass++))
    ((nbr_tests++))
else
    echo -e "\\$BLINK \\$LIGHT_RED /!\ Test failed /!\ \n\\$RESET_ALL"
    ((fail++))
    ((nbr_tests++))
fi

rm tests/functional_tests/help

#############
#normal test#
#############

##exemple
#diff tests/test_n°1 tests/solved/test_n°1_solved

# if (($? == 0))
# then
#     echo -e "\\$LIGHT_GREEN Test passed\n\\$RESET_ALL"
#     ((pass++))
#     ((nbr_tests++))
#     ((test_nbr++))
# else
#     echo -e "\\$BLINK \\$LIGHT_RED /!\ Test n°$test_nbr failed /!\ \n\\$RESET_ALL"
#     ((fail++))
#     ((nbr_tests++))
#     ((tests_nbr++))
# fi