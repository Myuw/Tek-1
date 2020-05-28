##
## EPITECH PROJECT, 2020
## create_tests
## File description:
## project_name:
##

#!/bin/sh

################################################################################
#                               CREATE TESTS                                   #
################################################################################

echo -e "\\$DEFAULT\n [i]\\$LIGHT_MAGENTA CREATE TESTS:\n\\$RESET_ALL"

###########
#test help#
###########

./110borwein -h > tests/functional_tests/output/help

##############
#normal tests#
##############

echo -e "\\$LIGHT_CYAN Create test n°1\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./110borwein 0 > tests/functional_tests/output/test_n°1

echo -e "\\$LIGHT_CYAN Create test n°2\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./110borwein 1 > tests/functional_tests/output/test_n°2

echo -e "\\$LIGHT_CYAN Create test n°3\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./110borwein 2 > tests/functional_tests/output/test_n°3

echo -e "\\$LIGHT_CYAN Create test n°4\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./110borwein 3 > tests/functional_tests/output/test_n°4

echo -e "\\$LIGHT_CYAN Create test n°5\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./110borwein 4 > tests/functional_tests/output/test_n°5

echo -e "\\$LIGHT_CYAN Create test n°6\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./110borwein 5 > tests/functional_tests/output/test_n°6

echo -e "\\$LIGHT_CYAN Create test n°7\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./110borwein 6 > tests/functional_tests/output/test_n°7

echo -e "\\$LIGHT_CYAN Create test n°8\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./110borwein 7 > tests/functional_tests/output/test_n°8

echo -e "\\$LIGHT_CYAN Create test n°9\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./110borwein 8 > tests/functional_tests/output/test_n°9

echo -e "\\$LIGHT_CYAN Create test n°10\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./110borwein 9 > tests/functional_tests/output/test_n°10

echo -e "\\$LIGHT_YELLOW Create test\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"