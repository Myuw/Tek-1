##
## EPITECH PROJECT, 2020
## functional_test
## File description:
## 106bombyx
##

#!/bin/sh

figlet -c 106bombyx

################################################################################
#                         BASH FORMATING AND COLORS                            #
################################################################################

source tests/scripts_bash/bash_formating_and_colors.sh

################################################################################
#                         VARIABLE INITIALISATION                              #
################################################################################

pass=0
fail=0
nbr_tests=0

################################################################################
#                               CREATE TESTS                                   #
################################################################################

source tests/scripts_bash/create_tests.sh

################################################################################
#                               RUNNING TESTS                                  #
################################################################################

source tests/scripts_bash/diff_tests.sh

################################################################################
#                        NBR OF TESTS PASSED OR FAILED                         #
################################################################################

echo -e "\\$DEFAULT [i]\\$LIGHT_MAGENTA TOTAL:\\$RESET_ALL"
echo -e "\\$LIGHT_BLUE Tested: $nbr_tests\\$LIGHT_GREEN Passing: $pass\\$LIGHT_RED Failling: $fail\n\\$RESET_ALL"
