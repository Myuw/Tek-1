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

echo -e "\\$LIGHT_YELLOW Diff tests\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"

###########
#test help#
###########

# diff tests/help tests/expected/help_expected

# if (($? == 0))
# then
#     ((pass++))
#     ((nbr_tests++))
# else
#     echo -e "\\$BLINK \\$LIGHT_RED /!\ Test help failed /!\ \n\\$RESET_ALL"
#     ((fail++))
#     ((nbr_tests++))
# fi

# rm tests/functional_tests/help

#############
#normal test#
#############

##exemple
#diff tests/test_n°1 tests/expected/test_n°1_expected

# if (($? == 0))
# then
#     ((pass++))
#     ((nbr_tests++))
# else
#     echo -e "\\$BLINK \\$LIGHT_RED /!\ Test n°$nbr_tests failed /!\ \n\\$RESET_ALL"
#     ((fail++))
#     ((nbr_tests++))
# fi

# rm tests/functional_tests/test_n°1