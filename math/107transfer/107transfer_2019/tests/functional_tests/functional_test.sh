##
## EPITECH PROJECT, 2020
## functional_test
## File description:
## project_name:
##

#!/bin/sh

##install figlet before
figlet -c ##project_name

################################################################################
#                         BASH FORMATING AND COLORS                            #
################################################################################

source tests/scripts_bash/functional_tests/bash_formating_and_colors.sh

################################################################################
#                         VARIABLE INITIALISATION                              #
################################################################################

pass=0
fail=0
nbr_tests=0
test_nbr=0

################################################################################
#                               CREATE TESTS                                   #
################################################################################

source tests/functional_tests/scripts_bash/create_tests.sh

################################################################################
#                              RUNNING TESTS                                   #
################################################################################

source tests/functional_tests/scripts_bash/diff_tests.sh

################################################################################
#                      NUMBER OF TESTS PASSED OR FAILED                        #
################################################################################

echo -e "\\$DEFAULT [i]\\$LIGHT_MAGENTA TOTAL:\\$RESET_ALL"
echo -e "\\$LIGHT_BLUE Tested: $nbr_tests\\$LIGHT_GREEN Passing: $pass\\$LIGHT_RED Failling: $fail\n\\$RESET_ALL"
