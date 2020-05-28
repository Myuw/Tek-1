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

##############
#normal tests#
##############

echo -e "\\$LIGHT_CYAN Create test_n°1\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./lem_in < anthill > tests/functional_tests/test_n°1

echo -e "\\$LIGHT_CYAN Create test_n°2\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./lem_in < input > tests/functional_tests/test_n°2

echo -e "\\$LIGHT_CYAN Create test_n°3\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./lem_in < first_line_failed > tests/functional_tests/test_n°3

echo -e "\\$LIGHT_CYAN Create test_n°4\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./lem_in < first_line_failed > tests/functional_tests/test_n°4

echo -e "\\$LIGHT_CYAN Create test_n°5\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./lem_in < first_line_failed > tests/functional_tests/test_n°5

echo -e "\\$LIGHT_CYAN Create test_n°6\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./lem_in < first_line_failed > tests/functional_tests/test_n°6

echo -e "\\$LIGHT_CYAN Create test_n°7\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./lem_in < first_line_failed > tests/functional_tests/test_n°7

echo -e "\\$LIGHT_CYAN Create test_n°8\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./lem_in < first_line_failed > tests/functional_tests/test_n°8

echo -e "\\$LIGHT_CYAN Create test_n°9\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./lem_in < first_line_failed > tests/functional_tests/test_n°9

echo -e "\\$LIGHT_CYAN Create test_n°10\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./lem_in < first_line_failed > tests/functional_tests/test_n°10

echo -e "\\$LIGHT_YELLOW Create test\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"